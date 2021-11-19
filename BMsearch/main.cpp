#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdio>



void getDistance(int *outputTable, char *inputWord, int wordSize){
    for(int i = 0; i < 256; i++){
        outputTable[i] = wordSize;
    }
    int x = 0;
    for (int i = 0; i < wordSize; i++){
        outputTable[inputWord[i]] = wordSize - i - 1;
    }
    outputTable[inputWord[wordSize-1]] = wordSize;
}


int main(){

    char word[20], str[100];

    printf("Enter string:\n");
    gets(str);
    printf("Enter word: \n");
    gets(word);

    int strSize = strlen(str);
    int wordSize = strlen(word);
    int tabLetters[256];

    getDistance(tabLetters, word, wordSize);

    bool isWordInStr = false;




    for (int i = 0, j = 0; i <= strSize - wordSize && j >= 0; i += tabLetters[str[i+j]]) {
        for (j = wordSize - 1; j >= 0 && word[j] == str[i + j]; j--);
        if (j < 0) isWordInStr = true;
    }



    if (isWordInStr) {
        printf("\nWord in the string!");
    }
    else{
        printf("\nNo word in the string");
    }
    return 0;
}