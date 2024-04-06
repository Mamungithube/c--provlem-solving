#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll;
    int number;
};
bool cmr(student a , student b)
{
    if(a.number > b.number) return true;
    else return false;
}
int main()
{
    int n;
    cin >> n;
    student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].number;
    }
    sort(a,a+n,cmr);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].number << endl;
    }
    return 0;
}
// std::string S;
//     std::getline(std::cin, S);

//     // Input the word to count
//     std::string X;
//     std::cin >> X;

//     // Count the occurrences of the word X in the sentence
//     int count = 0;
//     string word;
    

//     // Output the result
//     std::cout << count << std::endl;