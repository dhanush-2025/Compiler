#ifndef lexerDef_h
#define lexerDef_h
#define DOLLAR 57
#define BLOCK_SIZE 16384
#define BUFFER_SIZE 1024

typedef union Value {
    int i;
    float f;
 } Value;

typedef struct TokenInfo {
    int linenum;
    char* lexeme;
    int tokenId;
} TokenInfo;

typedef struct TwinBuffer{
    char buff1[BUFFER_SIZE];
    char buff2[BUFFER_SIZE];
}TwinBuffer;

typedef struct Symbol_Table_Record {
    TokenInfo* tk_info;
    struct Symbol_Table_Record* nextRecord;
} Symbol_Table_Record;
#endif
