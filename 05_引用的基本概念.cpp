#include <iostream>
int main(int argc, char const *argv[])
{
    /**
     * 1.引用没有定义,是一种关系型声明,声明它和原有某一变量的关系,故而类型与原类型保持一致,且不分配内存,与被引用的变量有相同的地址
     * 2.声明的时候必须初始化,一经声明,不可变更
     * 3.可对引用再次引用,多次引用的结果是某一变量拒了有个别名
     * 4.&符号前有数据类型是,是引用,其他皆为取地址
     **/
    int a = 10;
    //int & 使用引用数据类型,re是a的别名
    int &re = a; //引用一定要初始化
    re = 50;
    std::cout << "a = " << a << std::endl;
    system("pause");
    return 0;
}
