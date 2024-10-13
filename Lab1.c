#include <stdio.h>
#define MAXNUM 5
void mile2Km(float a[]){
    for(int i=0; i<MAXNUM;i++){
        a[i]=a[i]*1.6093;
        printf("%f kilometers \n",a[i]);
    }
}
int main(void){
    float a[MAXNUM];
    for(int i=0;i<MAXNUM;i++){
        scanf("%f",&a[i]);

    }
    mile2Km(a);
    return 0;
}
//저장을 float으로 하면 되자나 빠가야 
//하나하나 값 바꾸고 하나하나 출력할꺼면 한번에 하면 되잔항 