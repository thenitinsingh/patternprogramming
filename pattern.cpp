/*
outer loop-->row
inner loop-->column
*/

#include <iostream>
using namespace std;
int main()
{
    /*
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5

    */
    /*int i, j, n;
    cout << "Enter value of n:";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << j<<" ";
            j++;
                }
        cout << "\n";
        i++;
    }*/
    /*
    1 2 3
    4 5 6
    7 8 9

    */
    /*int i, j, n;
    cout << "Enter value of n:";
    cin >> n;
    i = 1;
    int count = 1;
    while (i <= n)
    {
        j = 1;

        while (j <= n)
        {
            cout << count<<" ";
            count++;
            j++;
        }
        cout << "\n";
        i++;
    }*/

    /*
    *
    * *
    * * *
    * * * *
    * * * * *

    */
    /*int i, j, n;
    cout << "Enter value of n:";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;

        while (j <= i)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }*/

    /*
    1
    2 2
    3 3 3
    4 4 4 4

    */

    /*int i, j, n;
    cout << "Enter value of n:";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;

        while (j <= i)
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }*/

    /*
    1
    2 3
    4 5 6
    7 8 9 10

    */

    /*int i, j, n;
    cout << "Enter value of n:";
    cin >> n;
    i = 1;
    int count = 1;
    while (i <= n)
    {
        j = 1;

        while (j <= i)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }*/

    /*
    1
    2 3
    3 4 5
    4 5 6 7


    */
    /*int i, j, n;
    cout << "Enter value of n:";
    cin >> n;
    i = 0;
    while (i <= n)
    {
        j = 1;
        int value = i;
        while (j <= i)
        {
            cout << value << " ";
            value++;
            cout << i + j;
            j++;
        }
        cout << endl;
        i++;
    }*/

    /*
    1
    2 1
    3 2 1
    4 3 2 1

    */
    /*int i, j, n;
    cout << "Enter value of n:";
    cin >> n;
    i = 0;
    while (i <= n)
    {
        j = 1;
        int count = i;
        while (j <= i)
        {
            /*while (count != 0)
            {
                cout << count << " ";
                count--;
            }
            // or
            cout << i - j + 1 << " ";

            j++;
        }
        cout << endl;
        i++;
    }*/

    /*
    A A A
    B B B
    C C C

    */
    /*int i, j, n;
    cout << "Enter value of n:";
    cin >> n;
    i = 0;
    while (i < n)
    {
        j = 0;
        while (j < n)
        {
            char ch = 'A' + i;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }*/
    /*
    A B C
    A B C
    A B C

    */
    /*int i, j, n;
    cout << "Enter value of n:";
    cin >> n;
    i = 0;
    while (i < n)
    {
        j = 0;
        while (j < n)
        {
            char ch = 'A' + j;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }*/

    /*
    A B C
    D E F
    G H I

    */

    /*int i, j, n;
    cout << "Enter value of n:";
    cin >> n;
    i = 0;
    char count = 'A';
    while (i < n)
    {
        j = 0;
        while (j < n)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }*/

    /*
    A B C
    B C D
    C D E

    */

    /*int i, j, n;
    cout << "Enter value of n:";
    cin >> n;
    i = 0;
    while (i < n)
    {
        char value = 'A' + i;
        j = 0;
        while (j < n)
        {
            cout << value << " ";
            value++;
            j++;
        }
        cout << endl;
        i++;
    }*/

    /*
    A
    B B
    C C C

    */
    /*int i, j, n;
    cout << "Enter value of n:";
    cin >> n;
    i = 1;
    int k = 0;
    while (i <= n)
    {
        j = 1;

        while (j <= i)
        {
            char ch = 'A' + k;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        k++;
        i++;
    }*/

    /*
    A
    B C
    D E F
    */
    /*int i, j, n;
    cout << "Enter value of n:";
    cin >> n;
    i = 1;
    int k = 0;
    while (i <= n)
    {
        j = 1;

        while (j <= i)
        {
            char ch = 'A' + k;
            k++;
            cout << ch << " ";
            j++;
        }
        cout << endl;

        i++;
    }*/

    /*
    D
    C D
    B C D
    A B C D

    */
    /*int i, j, n;
    cout << "Enter value of n:";
    cin >> n;
    i = 1;

    while (i <= n)
    {
        int k = i;
        j = 1;

        while (j <= i)
        {
            char ch = 'A' + n - k;
            k--;
            cout << ch << " ";
            j++;
        }
        cout << endl;

        i++;
    }*/

    /*
    A
    B C
    C D E

    */
    /*int i, j, n;
    cout << "Enter value of n:";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        char value = 'A' + i - 1;
        j = 1;
        while (j <= i)
        {
            cout << value << " ";
            value++;
            j++;
        }
        cout << endl;
        i++;
    }*/
    /*
        *
       * *
     * * *
    * * * *

    */
    /*int i, j, n;
    cout << "Enter value of n:";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        int spc = n - i;
        while (spc)
        {
            cout << " ";
            spc--;
        }
        j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }*/

    /*
    * * * *
    * * *
    * *
    *

    */
    /*int i, j, n;
    cout << "Enter value of n:";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n - i + 1)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }*/

    /*
    ****
    ***
    **
    *
    */

    /*int i, j, n;
    cout << "Enter value of n:";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        int spc = i - 1;
        while (spc)
        {
            cout << " ";
            spc--;
        }
        j = 1;
        while (j <= n - i + 1)
        {
            cout << "*";
            j++;
        }

        cout << endl;
        i++;
    }*/

    /*
    1 1 1 1
      2 2 2
        3 3
           4
    */
    /*int i, j, n;
    cout << "Enter value of n:";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        int spc = i - 1;
        while (spc)
        {
            cout << " ";
            spc--;
        }
        j = 1;
        while (j <= n - i + 1)
        {
            cout << i;
            j++;
        }

        cout << endl;
        i++;
    }*/

    /*
         1
       2 2
     3 3 3
    4 4 4 4
    */
    /*int i, j, n;
    cout << "Enter value of n:";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n - i + 1)
        {
            cout << " ";
            j++;
        }
        int spc = i;
        while (spc)
        {
            cout << i;
            spc--;
        }

        cout << endl;
        i++;
    }*/

    /*
    1234
     234
      34
       4
    */
    /*int i, j, n;
    cout << "Enter value of n:";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        int spc = i - 1;
        while (spc)
        {
            cout << " ";
            spc--;
        }
        j = i;
        while (j <= n)
        {
            cout << j;
            j++;
        }

        cout << endl;
        i++;
    }*/

    /*
    1234
     567
      89
       10
    */
    /*int i, j, n, k;
    cout << "Enter value of n:";
    cin >> n;
    i = 1;
    k = 1;
    while (i <= n)
    {
        int spc = i - 1;
        while (spc)
        {
            cout << " ";
            spc--;
        }
        j = i;
        while (j <= n)
        {
            cout << k;
            k++;
            j++;
        }

        cout << endl;
        i++;
    }*/

    /*
        1
       23
      456
    78910
    */
    /*int i, j, n, k;
    cout << "Enter value of n:";
    cin >> n;
    i = 1;
    k = 1;
    while (i <= n)
    {
        int spc = n - i + 1;
        while (spc)
        {
            cout << " ";
            spc--;
        }
        j = 1;
        while (j <= i)
        {
            cout << k;
            k++;
            j++;
        }

        cout << endl;
        i++;
    }*/

    /*
       1
      121
     12321
    1234321
    */
    /*int i, j, n;
    cout << "Enter value of n:";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        int spc = n - i + 1;
        while (spc)
        {
            cout << " ";
            spc--;
        }
        j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }
        int start = i - 1;
        while (start)
        {
            cout << start;
            start--;
        }

        cout << endl;
        i++;
    }*/

    // DABAANG PATTERN xD;

    /*
    1234554321
    1234**4321
    123****321
    12******21
    1********1

    */
    int i, j, n;
    cout << "Enter the value of n:";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n - i + 1)
        {
            cout << j;
            j++;
        }
        int star = i - 1;
        while (star)
        {
            cout << "**";
            star--;
        }
        int k = n - i + 1;
        while (k)
        {
            cout << k;
            k--;
        }

        cout << endl;
        i++;
    }
}