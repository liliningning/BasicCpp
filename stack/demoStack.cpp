#include <iostream>
using namespace std;
#include <stack>
#include <stdio.h>
#include <string.h>

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
    stack<int> mystack;

    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        mystack.push(idx);
    }
    int len = mystack.size();
    printf("len %d\n", len);

    int topVal = 0;
    while (!mystack.empty())
    {
        topVal = mystack.top();
        mystack.pop();
        printf("topVal %d\n", topVal);
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

    stack<stu_info *> mystack;
    mystack.push(&stu1);
    mystack.push(&stu2);
    mystack.push(&stu3);

    stu_info *topVal = NULL;
    while (!mystack.empty())
    {
        topVal = mystack.top();
        mystack.pop();
        printf("topVal->age %d\n topVal->name %s\n topVal->sex %c\n", topVal->age, topVal->name, topVal->sex);
    }

    return 0;
}
