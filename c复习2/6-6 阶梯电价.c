double ECost( double x){
    if(x<=50) return x*0.55;
    if(x<=70) return 27.5+(x-50)*0.6;
    else return 39.5+(x-70)*0.65;
}
