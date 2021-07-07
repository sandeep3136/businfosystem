#include <iostream>
#include <cstdlib>
#include<stdlib.h>
using namespace std;
int flag=0, v_c=0, b_c=0;
class bus_info {

    int roll;
    string name;
    string village;
    int bus_num;
public:
    void add_record();
    void show_all();
    void search_by_village(string);
    void search_by_roll(int);
    void search_by_bus(int);
    void count_from_village(string);
    void count_of_bus(int);

};

int main()
{
    system("COLOR 3F");

    int op,r=0;
    int n;


    for(int i=0;i<=210;i++) {
        cout<<"*";
    }
    for(int i =0;i<=210;i++) {
        cout << char(254);
    }

    cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << char(175) << " COLLEGE BUS INFO SYSTEM " << char(174) << "\t\t\t\t\t\t\t\t\t\t\t" << endl;
     for(int i =0;i<=210;i++) {
        cout << char(254);
    }

    cout <<"\t\tHOME" << endl;
    cout << "\t\t\t" << "1. Add Records" << endl;
    cout << "\t\t\t" << "2. Show all records" << endl;
    cout << "\t\t\t" << "3. Search by village" << endl;
    cout << "\t\t\t" << "4. Search by roll" << endl;
    cout << "\t\t\t" << "5. Search by bus" << endl;
    cout << "\t\t\t" << "6. Count of Students from village" << endl;
    cout << "\t\t\t" << "7. Count of Students in a bus" << endl;
    cout << "\t\t\t" << "8. EXIT" << endl;
    for(int i=0;i<=210;i++) {
        cout<<"*";
    }
    cout << "ENTER YOUR SELECTION:";
    cin >> op;
    if(op == 1) {
        cout << "Enter number of records you wish to add:";
        cin >> n;
    }
    bus_info b[n];

    while(op != 8) {
    if(op == 1) {

        for(int i=0;i<n;i++) {
            b[i].add_record();
        }
    } else if(op == 2) {
        cout << "**********RECORD DETAILS**********" << endl;
        cout << "Roll\tName\t\tFrom-Village\t\tBus Number" << endl;
        for(int i=0;i<n;i++) {
            b[i].show_all();
        }
    } else if(op == 3) {
            flag =0;
            string vill;
            cout << "Enter village:";
            cin >> vill;
            cout << "Roll\tName\t\tBus Number" << endl;
        for(int i=0;i<n;i++) {
            b[i].search_by_village(vill);
        }
        if(flag <0) {
            cout << "No student from " << vill <<endl;
        }
    } else if(op == 4) {
        flag =0;
        cout << "Enter roll:";
        cin >> r;
        cout << "Name\t\tFrom-Village\t\tBus Number" << endl;
        for(int i=0;i<n;i++) {
            b[i].search_by_roll(r);
        }
        if(flag < 0) {
            cout << "No student with roll " << r << endl;
        }
    } else if(op == 5) {
        flag =0;
        int b_no;
        cout << "Enter bus number:";
        cin >> b_no;
        cout << "Roll\t\tName\t\tFrom-Village" << endl;
        for(int i=0;i<n;i++) {
            b[i].search_by_bus(b_no);
        }
        if(flag < 0) {
            cout << "No student from bus " << b_no << endl;
        }
    } else if(op == 6) {

        string vlg;
        cout << "Enter village:";
        cin >> vlg;

        for(int i=0;i<n;i++) {
            b[i].count_from_village(vlg);
        }
        cout << "Number of Students from " << vlg << "are : " << v_c << endl;
    } else if(op == 7) {

        int b_num;
        cout << "Enter Bus number";
        cin >> b_num;
        for(int i=0;i<n;i++) {
            b[i].count_of_bus(b_num);
        }
        cout << "Number of students from bus number" << b_num << "=" << b_c << endl;
    } else if(op == 8) {
        exit(0);
    } else {
        cout << "Enter Correct option" << endl;
    }
    cout << "ENTER YOUR SELECTION:";
    cin >> op;

    }
}

void bus_info::add_record() {

        cout << "Enter roll number of the student:";
        cin >> roll;
        cout << "Enter Name of the Student: ";
        cin >> name;
        cout << "Enter From-Village:";
        cin >> village;
        cout << "Enter Bus number:";
        cin >>bus_num;
}

void bus_info::show_all() {

    cout << roll <<"\t" << name <<"\t\t"<<village<<"\t\t\t"<<bus_num <<endl;
}

void bus_info::search_by_village(string vill) {
        if(village == vill) {
            flag = 0;
            cout << roll <<"\t" << name <<"\t\t"<<bus_num <<endl;
        } else {
            flag = -1;
        }
    }

void bus_info::search_by_roll(int r) {
        if(roll == r) {
            cout << name <<"\t\t"<<village <<"\t\t\t" << bus_num <<endl;
        }
        else {
            flag=-1;
        }
    }

void bus_info::search_by_bus(int b_no) {

        if(bus_num == b_no) {
            cout << roll <<"\t\t" <<name <<"\t\t"<<village<<endl;
        }
        else {
            flag = -1;
        }
    }

void bus_info::count_from_village(string vlg) {
        int c=0;
        if(village == vlg) {
            v_c = v_c + 1;
        }


}

void bus_info::count_of_bus(int b_num) {
    int c = 0;
        if(bus_num == b_num) {
            b_c = b_c+1;
        }

}
