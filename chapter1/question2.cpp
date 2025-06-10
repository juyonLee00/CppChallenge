#include<iostream>
#include<numeric>

using namespace std;

int get_gcd(int input1, int input2)
{
    return gcd(input1, input2);
}

int main()
{
    int input1, input2;
    cin >> input1 >> input2;
    
    int ans = get_gcd(input1, input2);
    cout << ans << '\n';
}

