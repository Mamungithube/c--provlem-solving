#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll;
    int number;
};
int main()
{
    int n;
    cin >> n;
    student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].number;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].number < a[j].number)
            {
                swap(a[i], a[j]);
            }
            else if (a[i].number == a[j].number)
            {
                if (a[i].roll > a[j].roll)
                    swap(a[i], a[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].number << endl;
    }
    return 0;
}