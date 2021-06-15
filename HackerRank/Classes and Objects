#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student{
  public:
    int m1,m2,m3,m4,m5,sum;
    void input(){
        int a,b,c,d,e;cin>>a>>b>>c>>d>>e;
        m1 = a, m2 = b, m3 = c, m4 = d, m5 = e;        
    }
    int calculateTotalScore(){
        sum = m1+m2+m3+m4+m5;
        return sum;
    }
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
