#include <iostream>

using namespace std;

struct employee
{
    int employeeId;
    char letter;
    float salary;
};

typedef struct className
{
    int classId;
    int classNumber;
} cl;

union gender
{
    char male;
    char female;
    char other;
};

int main()
{
    struct employee emmanuel;
    emmanuel.employeeId = 1;
    emmanuel.salary = 12;
    emmanuel.letter = 'x';

    cout << "the value of employeeId " << emmanuel.employeeId << endl;
    cout << "the value of salary " << emmanuel.salary << endl;
    cout << "the value of letter " << emmanuel.letter << endl;

    cl Saleem;
    Saleem.classId = 1;
    Saleem.classNumber = 111;

    cout << "the value on classId " << Saleem.classId << endl;
    cout << "the value on classNumber " << Saleem.classNumber << endl;

    union gender yourGender;
    yourGender.male = 'm';
    yourGender.female = 'f';
    yourGender.other = 'o';

    cout << "the value of male " << yourGender.male << endl;
    cout << "the value of female " << yourGender.female << endl;
    cout << "the value of other " << yourGender.other << endl;

    enum yourGenderEnum
    {
        MALE,
        FEMALE,
        OTHER
    };
    cout << "the valur of MALE :  " << MALE << endl;
    cout << "the valur of FEMALE :  " << FEMALE << endl;
    cout << "the valur of OTHER :  " << OTHER << endl;

    cout << "structuresUnionsEnums";
    return 0;
}