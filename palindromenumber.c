bool isPalindrome(int x) {
    int i = 0, numLast = 0, j = 1;
    int num[99];
    int original = x;

    while(x > 0) {
        numLast = x % 10;
        num[i] = numLast;
        printf("%d", num[i]);
        x = x - numLast;
        x = x / 10;
        i++;
    }

    int k;
    long y = 0 ;
    
    for(k = 0; k < i; k++) {
        y = y * 10 + num[k];
    }
    
    
    if(y == original) {
        return true;
        
    } 
    
    if(y != original) {
        return false;
    }
    printf("%d %d\n", y, original);

    return 0;
}
