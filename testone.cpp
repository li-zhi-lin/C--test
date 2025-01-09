#include <iostream>
using namespace std;

// 第一版新增的函数：求和
int add(int a, int b) {
    return a + b;
}
int main(){
    cout << "The sum is: " << add(5, 10) << endl; // 输出 5 和 10 的和
    return 0;
}