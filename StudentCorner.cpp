#include<iostream>
using namespace std;

class Student_Register
{
    string stu_name_register;
    string stu_password_register;
public:
    void get_data_for_register(void);
    void details_check_for_creation(void);
};

void Student_Register :: get_data_for_register(void)
{
    cout<<"\nStudent Registry";
    cout<<"\nEnter your Name: ";
    cin>>stu_name_register;
    cout<<"\nEnter a Password: ";
    cin>>stu_password_register;
    void details_check_for_creation();
}
void Student_Register::details_check_for_creation()
{
    //connect it with database to check if there is a user with same name or not.
}

class Student_Login
{
    string stu_name_login;
    string stu_password_login;
public:
    void get_data_for_login(void);
    void details_check_for_login(void);
};
void Student_Login::get_data_for_login(void)
{
    cout<<"Student Login";
    cout<<"\nEnter your name: ";
    cin>>stu_name_login;
    cout<<"\nEnter your Password: ";
    cin>>stu_password_login;
}
void Student_Login::details_check_for_login(void)
{
    //connect db
}
int main()
{
    int choice;
    cout<<"Select option: "<<endl;
    cout<<"1: Register"<<endl;
    cout<<"2: Login"<<endl;
    cin>>choice;
    if(choice == 1){
        Student_Register r1;
        r1.get_data_for_register();
    }
    else if(choice == 2){
        Student_Login l1;
        l1.get_data_for_login();
    }
    return 0;
}

