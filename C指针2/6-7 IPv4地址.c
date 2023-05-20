#include <stdio.h>

void setByte(unsigned int* ip, int idx, unsigned char v);

void outputIPv4(unsigned int ip){
    unsigned char* p = (unsigned char*)&ip;
    printf("%d.%d.%d.%d",p[0],p[1],p[2],p[3]);
}

int main()
{
    unsigned int ip = 0;

    setByte(&ip,0,192);
    setByte(&ip,1,168);
    setByte(&ip,2,0);
    setByte(&ip,3,1);

    outputIPv4(ip);
    return 0;
}
/* 请在这里填写答案 */
void setByte(unsigned int* ip, int idx, unsigned char v){
    unsigned char* p = (unsigned char*)ip;
    p[idx] = v;
}