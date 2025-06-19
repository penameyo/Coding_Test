#include <iostream>
using namespace std;

int main()
{
    int X,N;
    int A[10000];

    cin >> N >> X;

    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
        
        if(X > A[i])
        cout << A[i] << ' ';
    }

    return 0;
}