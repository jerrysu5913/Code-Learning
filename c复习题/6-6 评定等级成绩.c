int calScore(struct Student *stu){
    int pass,sum;
    double ave;
    sum=stu->C+stu->English+stu->math;
    if(stu->C>=60&&stu->English>=60&&stu->math>=60){
        if(stu->C>=90&&sum>270) {
            stu->grade=5;
            pass=1;
        }
        else if(sum>240){
            stu->grade=4;
            pass=1;
        }
        else if(sum>210){
            stu->grade=3;
            pass=1;
        }
        else if(sum>180){
            stu->grade=2;
            pass=1;
        }
        else{
            stu->grade=1;
            pass=0;
        }
    }
    else {
        stu->grade=1;
        pass=0;
    }
    return pass;
}
