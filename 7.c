//
// Created by zsy on 2020/10/10.
//

#include <stdio.h>
int MAX(int x,int y)
{
    if (x > y)
        return x;
    else
        return y;
}
int main()
{
    //字符串的结束标志'\0'——其ASSIC码之等于0
    //0——48
    //‘EOF’——文件结束标志end of file  -1
    int num1 = 0;
    int num2 = 20;
    int max = 0;
    max = MAX(num1,num2);
    printf("%d\n",max);

    //操作符
    //'~'按位取反（二进制）
    //原码，反码，补码
    //负数在储存时，是二进制的补码
    //打印、使用的是原码
    //原码符号位不变其他位取反得到反码
    //反码加一得到补码
    //第一位是符号位，1是负号
    int a = ~num1;//-1
    printf("%d\n",a);
    a = 10;
    int b = a++;//后置++，先使用，再++
    int c = ++a;
    printf("a=%d\nb=%d\nc=%d",a,b,c);

    //真——非0
    //假——0
    //&&逻辑与
    //||  逻辑或
    //条件操作符：exp1?exp2:exp3
    //若1位真，2执行，否则3执行
    //逗号表达式
    //[]下标
    return 0;
}
