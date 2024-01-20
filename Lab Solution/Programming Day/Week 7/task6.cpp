#include <iostream>
using namespace std;

void calculatePatients(int day);

int main()
{
    int day;

    cout << "Enter the days : ";
    cin >> day;

    calculatePatients(day);
}

void calculatePatients(int day)
{
    int total_patients = 0;
    int patient;
    int doctor = 7;
    int treat = 0;
    int untreat = 0;
    int count = 1;

    cout << "Enter the number of patients : ";
    for (int x = 1; x <= day; x++)
    {
        cin >> patient;

        if (patient < doctor)
        {
            doctor = patient;
        }
        if ((count % 3 != 0) || (count % 3 == 0 && untreat < treat))
        {
            total_patients = patient - doctor;
            untreat = untreat + total_patients;
            treat = treat + doctor;
        }

        else if (count % 3 == 0 && untreat > treat)
        {
            doctor = doctor + 1;
            total_patients = patient - doctor;
            untreat = untreat + total_patients;
            treat = treat + doctor;
        }

        count++;
    }
    cout << "Treated Patients: " << treat << endl;
    cout << "Untreated Patients: " << untreat << endl;
}