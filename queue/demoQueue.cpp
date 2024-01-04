#include <iostream>
using namespace std;
#include <queue>
#include <string.h>
#include <stdio.h>

#define BUFFER_SIZE 10

typedef struct stu_info
{
    int age;
    char sex;
    char name[BUFFER_SIZE];
} stu_info;

int main()
{
#if 0
    queue<int> myqueue;
    for (int idx = 1; idx < BUFFER_SIZE; idx++)
    {
        myqueue.push(idx);
    }
    int frontVal = 0;
    int len = myqueue.size();
    printf("len %d\n", len);
    while (!myqueue.empty())
    {
        frontVal = myqueue.front();
        printf("frontVal %d\n", frontVal);
        myqueue.pop();

    }

#endif

    stu_info stu1, stu2, stu3;

    memset(&stu1, 0, sizeof(stu1));
    memset(&stu2, 0, sizeof(stu2));
    memset(&stu3, 0, sizeof(stu3));

    stu1.age = 10;
    stu1.sex = 'm';
    strncpy(stu1.name, "zhangsan", sizeof(stu1.name) - 1);

    stu2.age = 20;
    stu2.sex = 'm';
    strncpy(stu2.name, "lisi", sizeof(stu2.name) - 1);

    stu3.age = 18;
    stu3.sex = 'm';
    strncpy(stu3.name, "wanwu", sizeof(stu3.name) - 1);

    queue<stu_info> myqueue;
    myqueue.push(stu1);
    myqueue.push(stu2);
    myqueue.push(stu3);


    stu_info topVal;
    memset(&topVal, 0, sizeof(topVal));

    while (!myqueue.empty())
    {
       topVal = myqueue.front();
       myqueue.pop();
       printf("topVal.age %d\n topVal.name %s\n topVal.sex %c\n", topVal.age, topVal.name, topVal.sex);

    }
    

    return 0;
}