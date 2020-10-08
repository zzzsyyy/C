#include <stdio.h>//包含库文件standard-input-output标准输入输出
//int 是整型，返回整型值
//void 也可以，过时
int main()//主函数-程序的入口--有且仅有一个
{
    int age = 20;
    char ch = 'A';
    printf("hello world!\n");//printf-print function
    printf("%c\n",ch);//打印字符格式数据
    printf("%d\n",age);//%d-打印整型十进制
    printf("%d\n", sizeof(char));//1
    printf("%d\n", sizeof(int ));//2
    printf("%d\n", sizeof(long));//8/4
    printf("%d\n", sizeof(float));//4
    printf("%d\n", sizeof(double));//8
    return 0;//返回0
}
/*
char       //字符数据类型  %c
short      //短整型
int        //整型         %d
long       //长整型
long long  //更长整型
float      //单精度浮点数  %f
double     //双精度浮点数
 *//*
 %d-打印整型
 %c-打印字符
 %f-打印浮点数
 %lf-双精度浮点数
 %p-打印地址
 %x-打印十六进制
 *//*
 bit - 比特位
 byte- 字节-八个比特位
 kb  - 千字节
 Mb Gb Tb Pb */
