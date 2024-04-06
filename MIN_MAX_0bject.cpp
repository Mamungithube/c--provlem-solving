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
    student mn;
    mn.number = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i].number > mn.number)
        {
            mn = a[i];
        }
    }
    cout << mn.name << " " << mn.roll 
    << " " << mn.number << endl;

    return 0;
}