void WriteLetter(FILE *f, int n){
    for(int i=0;i<n;i++){
        fputc('A'+i,f);
    }
}
