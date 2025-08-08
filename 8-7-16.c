#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    int id;
    char name[20];
    char sex;
    int age;
}people;


int main(){
    people p[5];
    p[0].id=202501;
    p[0].age=18;
    p[0].sex='F';
    strcpy(p[0].name,"张三");

    p[1].id=202502;
    p[1].age=21;
    p[1].sex='M';
    strcpy(p[1].name,"李四");

    p[2].id=202503;
    p[2].age=19;
    p[2].sex='M';
    strcpy(p[2].name,"王五");

    p[3].id=202504;
    p[3].age=22;
    p[3].sex='F';
    strcpy(p[3].name,"赵六");

    p[4].id=202505;
    p[4].age=21;
    p[4].sex='M';
    strcpy(p[4].name,"钱七");

    printf("请输入学号:\n");
    int m;
    scanf("%d",&m);

    for (int i=0;i<5;i++){
        if(m == p[i].id){
            printf("姓名:%s\n",p[i].name);
            printf("年龄:%d\n",p[i].age);
            printf("性别:%c\n",p[i].sex);
            }   

    }
    

    system("pause");



    return 0;
}