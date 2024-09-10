#include "main.hpp"

int main()
{
        int begin, end;
        int res;

        do
        {
                cout << "Enter your two inputs\n";
                cin >> begin >> end;
        } while (inputValidate(begin, end));

        res = getListprime(begin, end);
        cout << "The number of prime numbers " << res << endl;
}