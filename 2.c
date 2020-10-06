#include <stdio.h>

int num = 10;//全局变量-代码块之外
int main()
{
    int num = 20;//局部变量-代码块之内
    //优先使用局部变量
    //建议不要重名
    //局部是指在大括号内使用，之外不能使用
    int num1 = 0;
    int num2 = 0;
    printf("%d\n",num);
    scanf("%d%d",&num1,&num2);//输入函数
    //&-取地址符号
    int sum = num1 + num2;
    printf("sum=%d\n",sum);
    extern int num3;
    printf("%d",num3);
    return 0;
}

void test()
{
    int num3 = 20;

}
//全局变量如果在某一函数之后声明的，它的作用范围不在此函数中。
//如果我们需要在此函数中调用它们，就必须使用 extern 来对变量作“外部变量声明”，以扩展全局变量的作用域
/*
 *变量分类
 * 全局变量
 * 局部变量
 *能否同时存在？--
 */

/*
 * 变量的作用域（scope）-限定名字可用性的代码范围
 * 全局变量：整个工程
 * 局部变量：代
 */
