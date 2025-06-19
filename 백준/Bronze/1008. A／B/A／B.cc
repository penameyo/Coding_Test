#include <iostream>

using namespace std;

int main()
{
    double A, B;
    cin >> A >> B;

    // cout은 최대 6자리까지 출력
    // 소수점 9자리까지
    cout.precision(9);
    cout << fixed;
    cout << A / B;

    return 0;
}