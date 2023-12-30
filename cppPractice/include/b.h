
#ifndef _B
#define _B

// #pragma once
//仅仅是一个头文件引用，就发现，对于函数而言，#ifndef防不住multiple definition。但如果头文件里没有definition，只有声明，则不需要#ifdef也没关系。
//而且函数加了#ifndef的报错方式和不加的报错方式是不一样的
//但是class必然会在头文件里声明且定义，而且实验证明，#ifndef可以防住class的multi definition，所以#ifndef对于class是有意义的。
//此外，实验证明，#pragma once的作用和#ifndef相同


// int addlll(int i, int j);

#include <iostream>
using namespace std;

// int addlll(int i, int j){
//     int y = i + j + 100;
//     cout<< "add2" <<endl;
//     return y;
// }
class B{
public:
    B(){}
};

#endif