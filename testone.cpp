#include <iostream>
using namespace std;

// 第一版新增的函数：求和
int add(int a, int b) {
    return a + b;
}
int avg(int a,int b){
    return a+b/2
}

int main(){
    cout << "The sum is: " << add(5, 10) << endl; // 输出 5 和 10 的和
    cout << "第二个平均数为" << avg(5,10)  << endl;//输出5和10的平均数
    return 0;
}