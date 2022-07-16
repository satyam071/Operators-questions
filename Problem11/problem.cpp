#include <iostream>
using namespace std;

int main()
{
    int TotalStudents = 45;
    int scholars = (80/ 100.0) * TotalStudents;
    int boysScholars = 17;
    int girlScholars = scholars - boysScholars;
    cout << "Total number of girls getting grade 'A' are" << girlScholars;
    return 0;
}