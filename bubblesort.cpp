#include<iostream>
using namespace std;

int main()
{
    int i;
    // we have 10 elements which we have to sort
    int a[10];
    cout << "Enter the elements which you want to sort: ";
    for(i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    int j;

    for(j = 0; j < 9; j++)
    {
        for(i = 0; i < 9 - j; i++)
        {
            if(a[i] > a[i + 1])
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    
    cout << "Sorted elements: ";
    for(i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}
