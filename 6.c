//
// Created by zsy on 2020/10/10.
//

#include <stdio.h>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放十个整数数字的数组
    //下标从0开始
    printf("%d\n",arr[4]);//打印第5个元素
    int i = 0;//全部打印
    while(i<10)
    {
        printf("%d\n",arr[i]);
        i++;
    }
    char arr2[20];//存储字符

    int x = 5%2;//1,取模
    int y = 5/2;//2,取商
    printf("%d\n%d\n",x,y);

    //移位操作符(二进制)
    //<<左移
    //>>右移
    int a = 1;//占4个字节-32比特位
    //00000000000000000000000000000001
    int b = a << 3;//00000000000000000000000000001000
    printf("%d\n%d\n",b,a);

    //位操作（二进制位 ）
    //&-按位与
    //|-按位或
    //^-按位异或
    int r = 3;
    int s = 5;
    int t = r&s;//都为1 才是1
    printf("%d\n",t);
    t = r|s;//都为0 才是0
    printf("%d\n",t);
    t = r^s;//相同则为0，不同才为1
    printf("%d\n",t);

    //赋值操作符 =
    a = a + 10;
    a += 10;

    //单目擦操作符  ！sizeof-+&
    //双目操作符 如a+b 有两个操作数 故+ 是双目操作符
    //三目操作符
    a = !a;//!指的是取非
    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(int));
    printf("%d\n",sizeof a);
    //printf("%d\n",sizeof int);
    printf("%d\n", sizeof(arr));//10*4=40byte
    printf("%d\n", sizeof(arr)/ sizeof(arr[0]));//算出数组的元素个数
    return 0;
}
