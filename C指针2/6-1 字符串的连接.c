char *str_cat( char *s, char *t ){
    char *p = s;
    while(*p != '\0'){
        p++;
    }
    while(*t != '\0'){
        *p = *t;
        p++;
        t++;
    }
    *p = '\0';
    return s;
}