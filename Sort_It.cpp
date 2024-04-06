#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char sec;
    int id;
    int math_mark;
    int eng_marks;
};
bool cmp(Student a, Student b)
{
    int sum_mark1 = a.math_mark + a.eng_marks;
    int sum_mark2 = b.math_mark + b.eng_marks;
    if (sum_mark1 == sum_mark2)
    {
        return a.id < b.id;
    }
    else
    {
        return sum_mark1 > sum_mark2;
    }
}
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].sec >> a[i].id >> a[i].math_mark >> a[i].eng_marks;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].sec << " " << a[i].id
             << " " << a[i].math_mark << " " << a[i].eng_marks << endl;
    }
    return 0;
}