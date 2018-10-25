#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
void getuserdata();
void display();
void exit();
void ac();

void getuserdata()
{
    ofstream fileob;
    fileob.open("first.txt",ios :: in | ios :: out | ios :: app);
    if(fileob.is_open())
    {
        string name;
        int id;
        system("cls");
        while(1){
        cout << "Enter name : " << endl;
        cin >> name;
        fileob << name <<" ";
        cout << "Enter ID : " << endl;
        cin >> id;
        fileob << id <<endl;
        char ch;
         cout << "Do u want to add data of more students (y/n)" <<endl;
        cin >> ch;
        if(ch=='y')
        {
            system("cls");
        }
        else
        {
            if( ch == 'n')
            {
                  system("cls");
                  ac();
                  system("cls");
            }
            else
            {
                system("cls");

                cout << "Invalid Input" << endl;
                break;
            }
        }
        }
    }
      else
    {
        cout << "Not able to open the file " << endl;
    }
        }
void display()
{
    fstream fileob;
    fileob.open("first.txt");
    if(fileob.is_open())
    {
        string na;
        int ids;
        char m;
        system("cls");
        cout<<"Name " << " " << " ID "<<endl;
        while(fileob.good()){
        if(fileob >> na  >> ids)
        cout << na << " "<<ids <<endl;

        }
         cout<<endl;
        cout<<"PRESS y to go to main menu"<<endl;
        cin>>m;
        if(m=='y')
        {
            system("cls");
            ac();
        }
        else
        {
            system("cls");
            cout<<"Invalid Input "<<endl;
        }
    }
}
void  exit()
{
    system("exit");
}
void ac()
{
    int x;
    cout << endl << endl << endl;
    cout << "\t\t\t\t\t\t" << "1: GET USER INPUT " << endl;//write to the file
    cout << "\t\t\t\t\t\t" << "2: DISPLAY " << endl;//read from the file
    cout << "\t\t\t\t\t\t" << "3: Exit" << endl << endl;
    cout << "\t\t\t\t\t\t" << "ENTER CHOICE :" << endl;
    cin >> x;
    switch(x)
    {
    case 1:
        getuserdata();
        break;
    case 2:
        display();
        break;
    case 3:
        exit();
        break;
    default:
        system("cls");
            cout<<"Invalid Input "<<endl;
            break;
    }
}
int main()
{
ac();
}

