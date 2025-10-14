#include <iostream>
using namespace std;

struct student {
    int roll;
    string name;
    char gender;
    float marks;
    
    void display(){
        cout << name << " deatail: " << endl;
        cout << roll << " - " << name << " - " << gender <<" - "<< marks;
    }
    
};

struct marks{
    int roll;
    string name;
    float bangla, english, maths; 
    
    void display_marks(){
        cout << "roll: "<<roll << " Name : "<< name << " B = " << bangla << " E= " << english << " M= " << maths;
    }

    float total_marks(){
        float tt = bangla + english + maths;
        cout << "total marks of "<<name <<" of " << roll <<" : "<< tt;
    }
};

// float total_marks(const vector<student> &s){
//     for (  )
// }

int main()
{
    cout<<"Structure calling :" <<endl << "give roll - name - bangla - english- maths: "<< endl;
    struct student s[10];
    struct marks m[10];

    // for( int i = 0; i< 3 ; i++){
    //     cin >> s[i].roll >> s[i].name >> s[i].gender >> s[i].marks;
    // }
    
    // cout << endl ; 
    
    // for( int i = 0; i< 3 ; i++){
    //     s[i].display();
    //     cout << endl;
    // }
    
    for( int i = 0; i< 3 ; i++){
        cin >> m[i].roll >> m[i].name >> m[i].bangla >> m[i].english >> m[i].maths;
    }
    
    for( int i=0; i<3; i++){
        m[i].display_marks();
        cout << endl;
    }

    cout << endl;

    for( int i=0; i<3; i++){
        m[i].total_marks();
        cout << endl;
    }
    
    return 0;
}

