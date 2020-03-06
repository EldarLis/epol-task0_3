#include <iostream>
#include <string>
using namespace std;

int nok(int a, int b)
{
    int max = b;
    for(int i = max; i > 0; i++){

        if((i % a == 0) && (i % b == 0)){
            return i;
        }
    }
}

int multiples(int a, int b, int n)
{
    int mult = 0;
    int counter = 1;

    do
    {
        if(a*counter <= n)
            mult++;
        if(b*counter <= n)
            mult++;
        if(nok(a,b)*counter <= n)
            mult--;
        counter++;
    }
    while(counter <= n);

    return mult;
}


int main()
{
    int a, b, n, m;

    cout << "Input a, b and n: ";
    cin >> a >> b >> n;

    m = multiples(a, b, n);
    cout << "Number of multiples: " << m << endl;

    return 0;
}


