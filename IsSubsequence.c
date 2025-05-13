bool isSubsequence(char *s, char *t) {
    int sizes = strlen(s);
    int sizet = strlen(t);

    if (sizes == 0) return true;

    int i = 0;
    int j = 0;

    while (i < sizet && j < sizes) {
        if (t[i] == s[j]) {
            j++;
        }
        i++;
    }

    return j == sizes;
}
