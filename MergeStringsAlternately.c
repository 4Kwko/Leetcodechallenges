char * mergeAlternately(char * word1, char * word2){

    int wordSize1 = strlen(word1);
    int wordSize2 = strlen(word2);
    int totalSize = wordSize1 + wordSize2;
    char *result = malloc(totalSize + 1);
    int smallest;
    if(wordSize1 < wordSize2) {
        smallest = wordSize1;
    } else if(wordSize2 < wordSize1) {
        smallest = wordSize2;
    } else if (wordSize1 == wordSize2) {
        smallest = wordSize1;
    }
    int i = 0, j;
        for(j = 0; j < smallest; j++) {
            result[i] = word1[j]; // 1 -> 1; 3 -> 2; 5 -> 3 ; 7 -> 4
            i++;
            result[i] = word2[j]; // 2 -> 1; 4 -> 2; 6 -> 3; 8 -> 4
            i++;
        } //i = 3, j = 2;

    int k = smallest;
    if(smallest == wordSize1 && wordSize1 != wordSize2) {
        while(k < totalSize - smallest) {
            result[k+smallest] = word2[k];
            k++;
        } 
    }    
    if(smallest == wordSize2 && wordSize2 != wordSize1) {
        while(k < totalSize - smallest) {
            result[k+smallest] = word1[k];
            k++;
        } 
    } 

    result[totalSize] = '\0';
    return result;
}
