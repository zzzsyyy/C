#include <stdio.h>
#include <string.h>//strlen函数依赖

int main()
{
    //"";//空字符串
    //"zbc";//字符串
    char arr1[] = "zbc";//数组-结尾包含0
    //"abc"--‘a’'b''c''\0'
    //\0--字符串的结束标志-它的值是0，不算入字符长度
    //ASCII码
    //\0--0
    //a--97
    //A--65
    //0--48
    //Aa差32
    char arr2[] = {'a','b','c','\0'};
    printf("%s\n",arr1);//%s-输出字符串
    printf("%s\n",arr2);
    printf("%lu\n",strlen(arr1));//
    printf("%lu\n",strlen(arr2));//%lu-输出32位无符号整数值

    printf("c:\\test\\32\\test.c\n");//\t-水平制表符
    printf("%c\n",'a');
    //\v-垂直制表符
    //\r-回车
    //\'  、”-显示单引号或双引号
    printf("%lu\n",strlen("c:\test\132\test.c"));
    //\132是一个字符-32作为八进制代表的十进制数字，作为ASCII码值对应的字符
    //即1*64+3*8+2*1=90——>代表Z
    printf("%c\n",'\132');//\后没8
    //\xdd-dd表示两个十六进制数字
    //即6*16+1*1=97——>代表a
    printf("%c\n",'\x61');
    return 0;
}

/*
 * 字符串+转义字符+注释
 * 由双引号引起来的一串字符称为字符串字面值，简称字符串
 */
