#include<iostream>
#define ull unsigned long long
#define ui unsigned int
using namespace std;


ull find_reminder(ui input)
{
    ull sum = 0;
    for(int i = 3; i <= input; ++i)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    ui input;
    cin >> input;
    ull ans = find_reminder(input);
    cout << "ans = " << ans << '\n';
}


/*
input 조건 고려 (정수 / 실수 / 문자 / 문자열 / EOF)

*/
