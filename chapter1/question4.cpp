#include<iostream>
#include<vector>
#define MAX 9999999

bool prime_arr[MAX];

using namespace std;

bool is_prime(int n)
{
    if(n <= 3)
        return n > 1;
    
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    
    for(int i = n - 1; i > 0; i--)
    {
        if(is_prime(i))
        {
            cout << i;
            return 0;
        }
    }
    
}

/*
 소수 계산하는 방법
 - 에라토스테네스의 체.
 1, 2, 3 케이스 따로 빼고 n보다 작은 수라고 했으므로 n-1부터 범위 설정.
 
 bool prime_arr[MAX];

 using namespace std;

 void make_prime_arr(int n)
 {
     for(int i = 2; i < n; i++)
     {
         if(prime_arr[i])
             continue;
         
         for(int j = i * i; j < n; j += i)
         {
             if(prime_arr[j])
                 continue;
             if(j % i == 0)
                 prime_arr[j] = true;
         }
     }
 }

 int find_prime_num(int n)
 {
     int ans = 0;
     
     switch(n)
     {
         case 1 :
             return 0;
         case 2 :
             return 2;
         case 3:
             return 3;
         default:
             break;
     }
     
     make_prime_arr(n);
     
     for(int i = n-1; i > 1; i--)
     {
         if(prime_arr[i])
             continue;
         else
         {
             ans = i;
             break;
         }
     }
     return ans;
 }
 
 하지만 처음부터 해당 방법을 사용하는 것보다 소수 판정 함수를 사용해 n-1부터 판정하는 것이 더 효율적.
 
 1, 2, 3의 경우에서 3보다 같거나 작을 경우 1을 제외한 나머지 경우는 소수.
 */
