
#include <stdio.h>
#include "lexer.h"
int main(int argc, char *argv[]) {
    int choice=100;
    char *sourceFile=argv[1];
    while(1){
        printf("Please Select Your Choice \n");
        printf("0. For Exit \n");
        printf("1. For removal Of Comments \n");
        printf("2. For printing the token list generated by the lexer \n");
        printf("3. For parsing and printing the parse tree \n");
        printf("4. For printing the total time taken \n");
        printf("option : \n");
        scanf("%d", &choice);
        //0. Exit
        if(choice==0) break;
        //1. Remove Comments
        else if(choice==1){
            FILE *testcaseFile=fopen(sourceFile,"r");
            FILE *cleanFile=fopen("no_comment_File.txt","w+");
            removeComments(testcaseFile,cleanFile);
            fclose(testcaseFile);
            fclose(cleanFile);
        }
        //2. Tokens generated by lexer
        else if(choice==2){
            FILE *fptr1 = fopen(sourceFile, "r"); 
            printTokens(fptr1); 
            fclose(fptr1);
        }
        else if(choice==3){
            
        }
        else if(choice==4){
            
        }
        
    }
    return 0;
}