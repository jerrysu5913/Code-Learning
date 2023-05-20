char *search(char *s, char *t){
    char *p = s;
    char *q = t;
    int i = 0;
    while(*p != '\0'){
        if(*p == *q){
            char *temp = p;
            while(*q != '\0'){
                if(*temp != *q){
                    break;
                }
                temp++;
                q++;
            }
            if(*q == '\0'){
                return p;
            }
            q = t;
        }
        p++;
    }
    return NULL;
}