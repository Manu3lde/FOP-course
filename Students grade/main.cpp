#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int studentCount;

    cout << "Enter the number of students: ";
    cin >> studentCount;

    string studentNames[studentCount];
    int studentIDs[studentCount];
    int mathScores[studentCount];
    int fopScores[studentCount];
    int probScores[studentCount];
    int totalScores[studentCount];
    double average[studentCount];
    bool status[studentCount];

    for (int i = 0; i < studentCount; i++) {
        cout << "Enter details for student " << i + 1 << ":\n";
        cout << "Student ID: ";
        cin >> studentIDs[i];
        cin.ignore();
        cout << "Student Name: ";
        getline(cin, studentNames[i]);
        score:
        cout << "Math Score out of 100: ";
        cin >> mathScores[i];
        cout << "FOP Score out of  100: ";
        cin >> fopScores[i];
        cout << "Probability Score out of 100: ";
        cin >> probScores[i];
        if(((mathScores[i] < 0) && (mathScores[i] > 100)) || ((fopScores[i] < 0) && (fopScores[i] > 100)) || ((probScores[i] < 0) && (probScores[i] > 100))){
            cout<<"****************Score Saved!****************"<<endl;
        }
        else{
            cout<<"****************Invalid Score Entered****************"<<endl;
            cout<<"****************Please Enter the a valid Score*******"<<endl;
            goto: score;
        }
    }
    for(int i = 0; i < studentCount; i++){
        totalScores[i] = mathScores[i] + fopScores[i] + probScores[i];
        average[i] = totalScores[i]/studentCount;
        if(average[i] <  50){
            status[i] = false;}
        else{status[i]= true;}

    }

    cout << "\nStudent Details Table:\n";
    cout << left << setw(15) << "ID" << setw(15) << "Student Name" <<setw(15)<<"Average"<<setw(15) <<"Total Mark" <<setw(15) << "\t Status"<<endl;
    cout << string(70, '-') << endl;

    for (int i = 0; i < studentCount; i++) {
        cout << left << setw(15) << studentIDs[i] << setw(25) << studentNames[i]<<setw(15)<<average[i]<<setw(15) << totalScores[i]<<setw(15);
        if (status[i] = true){
            cout<<"Passed"<<setw(15);
        }
        else{
            cout<<"Failed"<<setw(15);
        }
        cout<<endl;

    }
    //using bubble sort to find the Maximum
    //cout<<"The maximum score is "<<average[]
    return 0;
}
