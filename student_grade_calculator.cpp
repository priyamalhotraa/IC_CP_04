#include<iostream>
using namespace std;

int main(){
    int students;
    int subjects=5;

    cout<<"\nEnter no. of students: ";
    cin>>students;
    cout<<"\n";
    for(int i=1;i<=students;i++){
        int marks[subjects];
        int total=0;
        float percentage;
        char grade;
        bool pass=true;
        cout<<"Enter marks for student "<<i<<": "<<endl;
        for(int j=0;j<subjects;j++){
            cout<<"Subject "<<j+1<<": ";
            cin>>marks[j];
            
            total=total+marks[j];

            if(marks[j]<33){
                pass=false;
            }
        }
            percentage=(float)total/subjects;

            if(percentage>=90){
                grade='A';
            }
            else if(percentage>=75){
                grade='B';
            }
            else if(percentage>=60){
                grade='C';
            }
            else if(percentage>=40){
                grade='D';
            }
            else{
                grade='F';
            }

            cout<<"\nRESULT\n";
            cout<<"Total Marks: "<<total<<" out of 500"<<endl;
            cout<<"Percentage: "<<percentage<<"%"<<endl;
            cout<<"Grade: "<<grade<<endl;
            if(pass==true){
                cout<<"Status: Pass\n";
            }
            else{
                cout<<"Status: Fail\n1";
    }
    cout<<"\n";
}
    return 0;
}