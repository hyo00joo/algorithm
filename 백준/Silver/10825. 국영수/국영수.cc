// baekjoon 10825

// You must write a problem number like the one above to run the test cases.
// Modifying the source code file or the src/input.txt file will restart the process.

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
    int kor;
    int eng;
    int math;
    string name;
};

bool compare( Student& a, Student& b)
{

    if (a.kor != b.kor) {
        return a.kor > b.kor;
    }
    if (a.eng != b.eng) {
        return a.eng < b.eng;
    }
    if (a.math != b.math) {
        return a.math > b.math;
    }
    return a.name < b.name;
    
}
int main()
{
    cin.tie(0)->tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;
    vector<Student> stu(n);

    for (int i = 0; i < n; ++i) {
        cin >> stu[i].name >> stu[i].kor >> stu[i].eng >> stu[i].math ;
    }

    sort(stu.begin(), stu.end(), compare);

    for( auto& a : stu) {
        cout << a.name << "\n";
    }
}
