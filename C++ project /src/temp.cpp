#include "temp.h"   // 自己寫的要用“” , 其中的函數可以被其他檔案引用
#include <iostream> // 官方標頭檔

int e = 100;

void myprint() // void: Function return nothing, （參數）
{
    std::cout << "e= " << e << std::endl; // 實作：保留函數裡面做的內容
}
