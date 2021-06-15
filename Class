#include <iostream>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;

class Student{
public:
  string first_name, last_name;
  int age, standard;
  void set_age(int x){
      age = x;
  }
  void set_standard(int x){
      standard = x;
  }
  void set_first_name(string s){
      first_name = s;
  }
  void set_last_name(string s){
      last_name = s;
  }
  int get_standard(){
      return standard;
  }
  int get_age(){
      return age;
  }
  string get_last_name(){
      return last_name;
  }
  string get_first_name(){
      return first_name;
  }
  string to_stringg(){
      int sta = get_standard();
      int ag = get_age();
      string fst = get_last_name();
      string lst = get_first_name();
      string ans = to_string(ag) + ',' + lst + ',' + fst + ',' + to_string(sta);
      return ans;
  }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_stringg();
    
    return 0;
}
