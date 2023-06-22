void TimeSet(MYTIME *time, int hour, int minute, int second){
    if(IsValidTime(hour, minute, second)==0) printf("不正确的参数!\n");
    else{
        time->hour=hour;
        time->minute=minute;
        time->second=second;
    }
}
