int MaxDayMonth(int year, int month){
    int m;
    if(year<=0) m=0;
    else if(IsLeapYear(year)==0){
        switch(month){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:{
                m=31;
                break;
            }
            case 4:
            case 6:
            case 9:
            case 11:{
                m=30;
                break;
            }
            case 2:{
                m=28;
                break;
            }
            default:{
                m=0;
                break;
            }
        }
    }
    else if(IsLeapYear(year)!=0){
        switch(month){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:{
                m=31;
                break;
            }
            case 4:
            case 6:
            case 9:
            case 11:{
                m=30;
                break;
            }
            case 2:{
                m=29;
                break;
            }
            default:{
                m=0;
                break;
            }
        }
    }
    return m;
}
