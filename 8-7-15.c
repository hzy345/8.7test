#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int month;
    printf("请输入月数:\n");
    scanf("%d",&month);

    int total[100000][2];
    total[1][0]=2;
    total[1][1]=0;
    total[2][0]=2;
    total[2][1]=0;
    total[3][0]=2;
    total[3][1]=2;

    for(int i=4;i<=month;i++){
        total[i][0]=total[i-1][0]+total[i-3][1];
        total[i][1]=total[i-1][1]+total[i-1][0];
    }
    printf("第%d个月的兔子总数为:%d\n",month,total[month][0]+total[month][1]);
    system("pause");
    return 0;

}