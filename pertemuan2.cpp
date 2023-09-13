#include <iostream>
#include <string>

using namespace std;

const int MAX = 100;

typedef struct
{
    string name;
    string nrp;
    int age;
    bool gender;
} mahasiswa;


int main()
{
    mahasiswa mhs[MAX];
    int count = 0;
    int input;

    if (count < MAX) {
    mhs[count].name = "arka";
    mhs[count].nrp = "1234567800";
    mhs[count].age = 20;
    mhs[count].gender = 1;  
    count++;

    mhs[count].name = "akra";
    mhs[count].nrp = "67890";
    mhs[count].age = 22;
    mhs[count].gender = 0; 
    count++;

    mhs[count].name = "areuka";
    mhs[count].nrp = "54321";
    mhs[count].age = 21;
    mhs[count].gender = 1;  
    count++;

    mhs[count].name = "step";
    mhs[count].nrp = "696969";
    mhs[count].age = 5;
    mhs[count].gender = 0;  
    count++;

    mhs[count].name = "cel";
    mhs[count].nrp = "911420";
    mhs[count].age = 24;
    mhs[count].gender = 1;  
    count++;
}

    while (true)
    {
        cout << "Menu:" << endl;
        cout << "1. Show students data" << endl;
        cout << "2. Add students data" << endl;
        cout << "3. Delete students data" << endl;
        cout << "4. Change students data" << endl;
        cout << "5. Exit" << endl;
        cout << "Choose menu (1-5): " << endl;
        cin >> input;

        if (input == 1)
        {
            cout << "Students data:" << endl <<endl;
            for (int i = 0; i < count; i++)
            {
                cout << "Student " << i + 1 << ":" << endl;
                cout << "Name: " << mhs[i].name << endl;
                cout << "ID: " << mhs[i].nrp << endl;
                cout << "Age: " << mhs[i].age << endl;
                cout << "Gender: " << (mhs[i].gender ? "Male" : "Female") << endl << endl;
            }
        }
        else if (input == 2)
        {
            if (count < 10)
            {
                cout << "Input student data:" << endl;
                cout << "Name: ";
                cin >> mhs[count].name;
                cout << "ID: ";
                cin >> mhs[count].nrp;
                cout << "Age: ";
                cin >> mhs[count].age;
                cout << "Gender (0 = Female, 1 = Male): ";
                cin >> mhs[count].gender;

                count++;
                cout << "Data has been added." << endl << endl;
            }
            else
            {
                cout << "Sorry, array is full." << endl << endl;
            }
        }
        else if (input == 3)
        {
            if (count > 0)
            {
                int del;
                cout << "Enter the student index that will be deleted (0-" << count - 1 << "): ";
                cin >> del;

                if (del >= 0 && del < count)
                {
                    for (int i = del; i < count - 1; i++)
                    {
                        mhs[i] = mhs[i + 1];
                    }
                    count--;
                    cout << "Student's data has been deleted." << endl << endl;
                }
                else
                {
                    cout << "Index not valid." << endl << endl;
                }
            }
            else
            {
                cout << "Error." << endl << endl;
            }
        }
        else if (input == 4)
        {
            if (count > 0)
            {
                int edit;
                cout << "Enter the student index that will be edited (0-" << count - 1 << "): ";
                cin >> edit;

                if (edit >= 0 && edit < count)
                {
                    cout << "Input new data:" << endl;
                    cout << "Name: ";
                    cin >> mhs[edit].name;
                    cout << "ID: ";
                    cin >> mhs[edit].nrp;
                    cout << "Age: ";
                    cin >> mhs[edit].age;
                    cout << "Gender (0 = Female, 1 = Male): ";
                    cin >> mhs[edit].gender;

                    cout << "Student's data has been edited." << endl << endl;
                }
                else
                {
                    cout << "Index not valid" << endl << endl;
                }
            }
            else
            {
                cout << "Error." << endl << endl;
            }
        }
        else if (input == 5)
        {
            cout << "Exiting program..." << endl << endl;
            break;
        }
        else
        {
            cout << "Invalid menu." << endl << endl;
        }
    }

    return 0;
}