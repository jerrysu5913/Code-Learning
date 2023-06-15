#include <stdio.h>

int main(){
    int g;
    scanf("%d",&g);
    for(int i=0;i<g;i++){
        int y,m,d;
        scanf("%d-%d-%d",&y,&m,&d);
        d += 2;
        switch(m){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:{
                if(d>31) {
                    d-=31;
                    m++;
                }
                break;
            }
            case 4:
            case 6:
            case 9:
            case 11:{
                if(d>30){
                    d-=30;
                    m++;
                }
                break;
            }
            case 2:{
                if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0){
                    if(d>29){
                        d-=29;
                        m++;
                    }
                }
                else{
                    if(d>28){
                        d-=28;
                        m++;
                    }
                }
                break;
            }
            case 12:{
                if(d>31){
                    d-=31;
                    m=1;
                    y++;
                }
            }
            break;
        }
        if(i!=0) printf("\n");
        printf("%04d-%02d-%02d",y,m,d);
    }
    return 0;
}
