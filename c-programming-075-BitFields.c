#include <stdio.h>

struct packedStruct {
    unsigned int :3;
    unsigned int f1:1;
    unsigned int f2:1;
    unsigned int f3:1;
    unsigned int type:8;
    unsigned int index:18;
};

int main(void) {
    struct packedStruct packedData;
    packedData.type = 7;
    unsigned int bit = packedData.type;

    unsigned int i = packedData.index / 5+1;
    
    return 0;
}