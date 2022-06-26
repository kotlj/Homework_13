
#include <iostream>

using namespace std;

int main()
{
    system("cls");
    int num = 0;
    int choise = 0;
    string stop;
    cout << "\nChoose task:\n1 - is multiply\n2 - is prime number\n3 - is same digits in number?\n4 - descending order of digits in number\n5 - gues number\n0 - exit\n";
    cin >> choise;
    cout << "\nEnter number\n";
    cin >> num;
    cout << "\n\n";
    if (choise == 1)
    {
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                cout << " " << i;
            }
        }
    }
    else if (choise == 2)
    {
        for (int i = 2; num % i != 0; i++)
        {
            if (i == num - 1)
            {
                cout << "its a prime number";
            }
        }
    }
    else if (choise == 3)
    {
        for (int i = 1; num / (i * 10) > 0; i *= 10)
        {
            for (int j = 1; num / (j * 10) > 0; j *= 10)
            {
                if (num / i % 10 == num / j % 10)
                {
                    cout << "have same digits\m";
                    choise = 1;
                    break;
                }
            }
            if (choise == 1)
            {
                break;
            }
        }
    }
    else if (choise == 4)
    {
        for (int i = 1; num / (i * 10) > 0; i *= 10)
        {
            if (num / i % 10 >= num / (i * 10) % 10)
            {
                cout << "";
            }
            else
            {
                cout << "have descending or chaotic order";
                break;
            }
        }
    }
    else if (choise == 5)
    {
        cout << "now computer will try to gues your number\n";
        int attempts = 1;
        int right = 1;
        int gues = 0;
        int max = 1000;
        int min = 0;
        int itter = 0;
        for (attempts; right != 0; attempts++)
        {
            for (itter = min; itter <= max; itter++)
            {
                gues += itter;
            }
            gues  /= itter;
            cout << gues << "\n\nyour number is:\n1 - less then computer\n2 - more then computer\n0 - same with computer\n";
            cin >> right;
            if (right == 1)
            {
                max = gues;
            }
            else if (right == 2)
            {
                min = gues;
                max += gues * 0.2;
            }
        }
        cout << "attempts: " << attempts;
    }
    else if (choise == 0)
    {
        exit(1);
    }
    cout << "\nEnter any symbol and prees enter\n";
    cin >> stop;
    main();
}