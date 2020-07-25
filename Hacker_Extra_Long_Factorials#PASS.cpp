
// url : https://www.hackerrank.com/challenges/extra-long-factorials/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the extraLongFactorials function below.
void extraLongFactorials(int n) {

    long long   lFactorials = 1;

    for (size_t i = 1; i <= n; i++)
    {
        /* code */
        lFactorials *= i;
    }
    
    ofstream fout(getenv("OUTPUT_PATH"));
    fout << lFactorials << "\n";

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    extraLongFactorials(n);

    return 0;
}

//! BigInteger 를 요구하는문제 -> 문자열로 관리해주어야한다. 일단 패스!