#include<iostream>

using namespace std;

struct hocsinh {
    string name;
    int age;
    int score;
};
int main() 
{
    int n;
    cin >> n;
    hocsinh *student = new hocsinh[1000];
    for (int i = 0; i < n; i++) {
        cin >> student[i].name >> student[i].age >> student[i].score;
    }
    hocsinh s = student[0];
    for (int i = 0; i < n; i++) {
        if (student[i].score > s.score) {
            s = student[i];
        }
    }

    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Score: " << s.score;
    delete[] student;
    return 0;
}