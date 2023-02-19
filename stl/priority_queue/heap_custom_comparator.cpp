#include <queue>
#include <iostream>

using namespace std;
class Student {
    public:
        int marks;
        Student(int m) {
            marks=m;
        }
};

class CompareStudent {
    public: 
        bool operator()(const Student s1, const Student s2) {
            return s1.marks > s2.marks;   //min heap 
                                          //Since last marks will be the lowest, 
                                          //as the heap stores the highest priority element at last.
        }
};

int main() {
    priority_queue<Student, vector<Student>, CompareStudent> pq;

    Student s1(20);
    Student s2(40);
    Student s3(10);

    pq.push(s1);
    pq.push(s2);
    pq.push(s3);

    while (!pq.empty()) {
        cout<<pq.top().marks<<" ";
        cout<<endl;
        pq.pop();
    }



    return 0;
}