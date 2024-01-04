#include <iostream>
using namespace std;
#include <vector>
#include <stdio.h>
#include <string.h>
#define BUFFER_SIZE 5

typedef struct stu_info
{
    int age;
    char sex;
    char name[BUFFER_SIZE];
} stu_info;

int main()
{
#if 0
    vector<int> myvec;
    /* 插入数据 */
    myvec.push_back(5);
    /* 查看数组的大小 */
    int len = myvec.size();
    /* 查看数组的容量 */
    int capacity = myvec.capacity();

    printf("len %d\n", len);
    printf("capacity %d\n", capacity);

    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        myvec.push_back(idx);
    }

    len = myvec.size();
    /* 查看数组的容量 */
    capacity = myvec.capacity();

    printf("len %d\n", len);
    printf("capacity %d\n", capacity);

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

    vector<stu_info> myvec;
    myvec.push_back(stu1);
    myvec.push_back(stu2);
    myvec.push_back(stu3);

    int len = myvec.size();
    /* 查看数组的容量 */
    int capacity = myvec.capacity();

    printf("len %d\n", len);
    printf("capacity %d\n", capacity);

    stu_info tempinfo;
    memset(&tempinfo, 0, sizeof(tempinfo));
    for (int idx = 0; idx < len; idx++)
    {
        tempinfo = myvec.at(idx);
        printf("age %d\n,sex %c\n, name %s\n", tempinfo.age, tempinfo.sex, tempinfo.name);
    }

    return 0;
}