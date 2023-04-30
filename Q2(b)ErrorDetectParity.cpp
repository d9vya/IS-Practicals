# include<bits/stdc++.h>
# define bool int
using namespace std;

// Function to get parity of number n. It returns 1
// if n has odd parity, and returns 0 if n has even
// parity
bool getParity(unsigned int n)
{
    bool parity = 0;
    while (n)
    {
        parity = !parity;
        n     = n & (n - 1);
    }
    return parity;
}

/* Driver program to test getParity() */
int main()
{
    unsigned int n ;
    cout<<"enter the bits: ";
    cin>>n;
    cout<<"Parity is "<<n<<" = "<<(getParity(n)? "odd": "even");

    getchar();
    return 0;
}
