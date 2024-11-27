#include<iostream>
using namespace std;
struct StudentGrading 
{
    char name[10];  
	int sapid;
	int address;
	char department[10];
	int marks1;
	int marks2;   
};

int main()
 {
    StudentGrading s1;
    
    int marks1,marks2;
    cout << "enter student details:\n";
    
    cout << "enter name:"<<endl;
    cin.getline(s1.name,10);  

    cout << "enter sap id:"<<endl;
    cin >> s1.sapid;

    cout << "enter address:"<<endl;
    cin>>s1.address;  

    cout << "enter department:"<<endl;
    cin.getline(s1.department,10);  

    cout << "enter marks for subject 1:"<<endl;
    cin >> s1.marks1;

    cout << "enter marks for subject 2:"<<endl;
    cin >> s1.marks2;
    cin.ignore(); 
    int maxmarks = (s1.marks1 > s1.marks2) ? s1.marks1 : s1.marks2;
   
    cout << "\nstudent information:\n";
    cout << "name: " << s1.name ;
    cout << "sap id: " << s1.sapid;
    cout << "address: " << s1.address ;
    cout << "department: " << s1.department ;
    cout << "marks in subject 1: " << s1.marks1 ;
    cout << "marks in subject 2: " << s1.marks2 ;
    cout<<"maximum marks:"<<maxmarks<<endl;
    return 0;
}
