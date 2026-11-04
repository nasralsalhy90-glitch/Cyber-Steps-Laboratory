#include <iostream>
#include <string>
using namespace std;

int main() {
    // CyberStepsAcademy - Cyber Steps Laboratory
    // Challenge #01 Starter Code

    cout << "==========================================" << endl;
    cout << "   WELCOME TO CYBER STEPS LAB SYSTEM     " << endl;
    cout << "==========================================" << endl;
bool isEmergence=false;//إعطاء قيمة بدائية للمتغير تمثل الحالة الاعتيادية الطبيعية
string Username;
string cyberField;
int age;
string password;

/*
عندما يريد المبرمج جعل النظام في حالة طوارئ
 يقوم بإزالة التعليق من السطر التالي لتتغير قيمة المتغير المنطقي..
 حينها يختل الشرط ويتوقف البرنامج وتظهر رسالة الطوارئ 
 */
 
//isEmergence=true;

if (isEmergence){

cout<<"The system is in an emergency\n";
}
else{
cout<<" Enter your UserName: "<<endl;
cin>>Username;

cout << " Enter your CyberField:  "<<endl;
cin>>cyberField;

cout << " Enter your Age:  "<<endl;
cin>>age;

//التحقق من العمر
if (age<18){
     cout<<"Your Age is less than 18..."<<endl;
     
} 

else {

cout << " Enter your Password:  "<<endl;
cin>>password;

cout<<"________________________________________________\n";

//التحقق من كلمة المرور...
if (password=="admin123"){
    cout<<"Welcome as an administrator to CyberStepsAcademy!"<<endl;
}
else if (password=="user123"){
  cout<<"Welcome as a standard user to CyberStepsAcademy!"<<endl;
}
else {
    cout<<"Wrong password... "<<endl;
    return 0;
}
cout<<"________________________________________________\n";

cout<<"UserName: "<<Username<<endl;
cout<<"CyberField: "<<cyberField<<endl;
cout<<"Your Age: "<<age<<endl;
}
 

}



return 0;
}