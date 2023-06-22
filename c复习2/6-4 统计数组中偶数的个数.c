int EvenStatistics(int *p, int n){
    int count=0;
    for(int i=0;i<n;i++,p++){
        if((*p)%2==0) count++;
    }
    return count;
}
