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
    int eng_mark;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].sec >>
        a[i].id >>a[i].math_mark >>a[i].eng_mark ;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].eng_mark < a[j].eng_mark)
            {
                swap(a[i], a[j]);
            }
            if (a[i].eng_mark == a[j].eng_mark)
            {
                if (a[i].math_mark < a[j].math_mark)
                {
                    swap(a[i], a[j]);
                }
            }
            if (a[i].math_mark == a[j].math_mark &&a[i].eng_mark == a[j].eng_mark)
            {
                if (a[i].id > a[j].id)
                {
                    swap(a[i], a[j]);
                }
            }
        }
    }
   for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " "<< a[i].sec << " " <<
        a[i].id << " "<<a[i].math_mark << " "<<a[i].eng_mark << " "<< endl;
    }
    return 0;
}
// bool compareStudents(const Student& s1, const Student& s2) {
//     // Sort by total marks (descending)
//     if (s1.getTotalMarks() != s2.getTotalMarks()) {
//         return s1.getTotalMarks() > s2.getTotalMarks();
//     }
//     // If total marks are the same, sort by student ID (ascending)
//     return s1.getId() < s2.getId();