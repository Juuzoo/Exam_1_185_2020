
#include <iostream>
using namespace std;

class AgeGradation
{
public: static string GetStatus(int age)
{
    if (age < 0)
        return "unborn";
    else if (age < 8)
        return "pre-school";
    else if (age < 19)
        return "school";
    else if (age < 31)
        return "young adult";
    else if (age < 46)
        return "middle-aged adult";
    else if (age < 91)
        return "old adult";
    else if (age <= 110)
        return "long liver";
    else if (age > 110)
        return "probably dead or very-very old guy";
}
};

int main()
{
    int age;
    cout << "Input age\n";
    cin >> age;
    cout << AgeGradation::GetStatus(age);

}