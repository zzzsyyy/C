#include <stdio.h>

#define MAX 1000//定义的标识符变量

enum sex//enum-枚举关键字
{
    male,//0
    female,//1
    secret//2
};//枚举常量

int main()
{
    int sum = 0;
    int sum1 = 0;
    int sum2 = 0;
    scanf("%d%d",&sum1,&sum2);
    sum =sum1 + sum2;
    printf("sum=%d\n",sum);


    3;//字面常量
    const int num = 4;//const-常属性
    //const修饰的常变量
    printf("%d\n",num);
    //num = 8;//报错
    printf("%d\n",num);
    const int n = 10;//本质变量，具有常属性
    //int arr[n] = {0};//报错
    int arr[MAX] = {0};

    enum sex s = male;
    printf("%d\n",male);
    return 0;
}

/*
 * 常量分类
 * 1.字面常量
 * 2.const修饰的常量
 * 3.#define定义的标识符常量
 * 4.枚举常量
 */#include <stdio.h>

#define MAX 1000//定义的标识符变量

enum sex//enum-枚举关键字
{
    male,//0
    female,//1
    secret//2
};//枚举常量

int main()
{
        int sum = 0;
        int sum1 = 0;
        int sum2 = 0;
        scanf("%d%d",&sum1,&sum2);
        sum =sum1 + sum2;
        printf("sum=%d\n",sum);


        3;//字面常量
        const int num = 4;//const-常属性
        //const修饰的常变量
        printf("%d\n",num);
        //num = 8;//报错
        printf("%d\n",num);
        const int n = 10;//本质变量，具有常属性
        //int arr[n] = {0};//报错
        int arr[MAX] = {0};

        enum sex s = male;
        printf("%d\n",male);
        return 0;
}

/*
 * 常量分类
 * 1.字面常量
 * 2.const修饰的常量
 * 3.#define定义的标识符常量
 * 4.枚举常量
 */
