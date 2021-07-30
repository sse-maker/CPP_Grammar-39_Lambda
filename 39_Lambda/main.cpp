//
//  main.cpp
//  39_Lambda
//
//  Created by 세광 on 2021/07/30.
//

#include <iostream>

using namespace std;

template<typename T>
int arrFnMin(const int arr[], int n, T f) { // f가 함수 포인터일 때도 같은 템플릿을 사용하여 처리 가능 (템플릿의 장점)
    int min = f(arr[0]);
    for (int i = 1; i < n; i++) {
        if(f(arr[i]) < min) {
            min = f(arr[i]);
        }
    }
    return min;
}

int main() {
    int arr[7] = { 3, 1, -4, 1, 5, 9, -2 };
    // 람다식 (익명 함수)
    cout << arrFnMin(arr, 7, [](int n) ->int { return n * n; }) << endl;
    cout << arrFnMin(arr, 7, [](int n) ->int { return n * (n - 15) / 2; }) << endl;
}
