#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc < 2){
        printf("Usage: %s <project Name>\n", argv[0]);
        return 1;
    }

    int option;
    printf("What Programming Language do you want to use?\n1) C\n2) C++\n"); 
    scanf("%d", &option);

    if(option == 1){
    char command[256] = {0};
    char command2[256] = {0};
    char Path[256] = {0};
    char MakefilePath[256] = {0};

    snprintf(command, sizeof(command), "mkdir %s", argv[1]);
    snprintf(Path, sizeof(Path), "%s/main.c", argv[1]);
    snprintf(MakefilePath, sizeof(MakefilePath), "%s/Makefile", argv[1]);
    system(command);
    
    FILE *pCMainFILE = fopen(Path, "w");
    fprintf(pCMainFILE, "#include <stdio.h>\n\nint main(int argc, char *argv[]){\n\n    return 0;\n}");
    fclose(pCMainFILE);
    FILE *pMakefileFILE = fopen(MakefilePath, "w");
    fprintf(pMakefileFILE, "CC = clang\n\nall:\n    $(CC) main.c -o main");
    fclose(pMakefileFILE);
    return 0;
    }
    
    if(option == 2){
    char command[256] = {0};
    char command2[256] = {0};
    char Path[256] = {0};
    char MakefilePath[256] = {0};

    snprintf(command, sizeof(command), "mkdir %s", argv[1]);
    snprintf(Path, sizeof(Path), "%s/main.cc", argv[1]);
    snprintf(MakefilePath, sizeof(MakefilePath), "%s/Makefile", argv[1]);
    system(command);
    
    FILE *pCMainFILE = fopen(Path, "w");
    fprintf(pCMainFILE, "#include <iostream>\n\nint main(int argc, char *argv[]){\n\n    return 0;\n}");
    fclose(pCMainFILE);
    FILE *pMakefileFILE = fopen(MakefilePath, "w");
    fprintf(pMakefileFILE, "CC = clang\n\nall:\n    $(CC) main.cc -o main");
    fclose(pMakefileFILE);
    return 0;
    }

    if(option > 2){
        printf("This is not a Option\n");
        return 1;
    }
}