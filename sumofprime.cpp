#include <iostream>
using namespace std;

bool Prime(int n);
int main()
{
    int n,i;
    bool flag = false;
    cout << "Enter a positive  integer: ";
    cin >> n;
    for(i=2;i<=n/2;++i)
    {
        if (Prime(i))
        {
            if (Prime(n-i))
            {
                cout <<n<<" = "<<i<<" + "<<n-i<< endl;
                flag = true;
            }
        }
    }
    if (!flag)
    cout <<n<<"number entered cannot be expressed as sum of two prime numbers";

    return 0;
}
bool Prime(int n)
{
    int i;
    bool isPrime = true;
    if (n == 0 || n == 1)
    {
        isPrime = false;
    }
    else
    {
        for(i=2;i<=n/2;++i)
        {
            if(n%i==0)
            {
                isPrime=false;
                break;
            }
        }
    }
    return isPrime;
}
