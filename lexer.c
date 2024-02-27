#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "lexerDef.h"

const char *TerminalIDs[] = {
    "TK_ASSIGNOP",
    "TK_COMMENT",
    "TK_FIELDID",
    "TK_ID",
    "TK_NUM",
    "TK_RNUM",
    "TK_FUNID",
    "TK_RUID",
    "TK_WITH",
    "TK_PARAMETERS",
    "TK_END",
    "TK_WHILE",
    "TK_UNION",
    "TK_ENDUNION",
    "TK_DEFINETYPE",
    "TK_AS",
    "TK_TYPE",
    "TK_MAIN",
    "TK_GLOBAL",
    "TK_PARAMETER",
    "TK_LIST",
    "TK_SQL",
    "TK_SQR",
    "TK_INPUT",
    "TK_OUTPUT",
    "TK_INT",
    "TK_REAL",
    "TK_COMMA",
    "TK_SEM",
    "TK_COLON",
    "TK_DOT",
    "TK_ENDWHILE",
    "TK_OP",
    "TK_CL",
    "TK_IF",
    "TK_THEN",
    "TK_ENDIF",
    "TK_READ",
    "TK_WRITE",
    "TK_RETURN",
    "TK_PLUS",
    "TK_MINUS",
    "TK_MUL",
    "TK_DIV",
    "TK_CALL",
    "TK_RECORD",
    "TK_ENDRECORD",
    "TK_ELSE",
    "TK_AND",
    "TK_OR",
    "TK_NOT",
    "TK_LT",
    "TK_LE",
    "TK_EQ",
    "TK_GT",
    "TK_GE",
    "TK_NE",
    "DOLLAR",
    "EPS"};

const char *keywords[28] = {
    "with",
    "parameters",
    "end",
    "while",
    "union",
    "endunion",
    "definetype",
    "as",
    "type",
    "_main",
    "global",
    "parameter",
    "list",
    "input",
    "output",
    "int",
    "real",
    "endwhile",
    "if",
    "then",
    "endif",
    "read",
    "write",
    "return",
    "call",
    "record",
    "endrecord",
    "else"};
int keyword_ids[28] = {8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 23, 24, 25, 26, 31, 34, 35, 36, 37, 38, 39, 44, 45, 46, 47};


TwinBuffer B;

void printToken(FILE* fptr1)
{
    while (1)
    {
        TokenInfo *tk = getNextToken(fptr1);
        printf("%d ", tk->linenum);
        printf("%s ", tk->lexeme);
        if(tk->tokenId == -1) printf("TK_ERROR ");
        else printf("%s \n", TerminalIDs[tk->tokenId]);
        if (tk->tokenId == DOLLAR){
            printf("\n**************\nTokenization has been successful\n\n**************\n");
            break;
        }
    }
}


TokenInfo *createToken(char *lexeme, int linenum, char *val, int tokenId, bool isError)
{
    TokenInfo *newtoken = (TokenInfo *)malloc(sizeof(TokenInfo));
    newtoken->lexeme = (char *)malloc(40 * sizeof(char)); // lexme size is limited here.
    newtoken->tokenId = tokenId;
    newtoken->lexeme = lexeme;
    newtoken->linenum = linenum;
    return newtoken;
}


FILE *getStream(FILE *fp)
{
    


    
}

int dfa_state=0;

TokenInfo *getNextToken(FILE *fp){
    TokenInfo *tk_info = (TokenInfo *)malloc(sizeof(TokenInfo));
    char c;
    while(1){
        switch(dfa_state){
            case 0: 

        }   
    }
    return tk_info;

}



void removeComments(FILE *testcaseFile, FILE *cleanFile){
    while (!feof(testcaseFile))
        {
            char c = fgetc(testcaseFile);
            if (c == '%')
            {
                while (c != '\n')
                {
                    c = fgetc(testcaseFile);
                }
            }
            else
            {
                if (c == '^')
                {
                    printf("\n \n");
                    return;
                }
                fprintf(cleanFile, "%c", c);
                printf("%c", c);
            }
        }
}

