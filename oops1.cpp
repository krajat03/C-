#include<iostream>
using namespace std;
class sum{
    public:
    int a;
    int b;

    void input(){
        cin >> a >> b;
    }
    void add(){
        cout << a+b;
    }

};
int main()
{
    sum s;
    s.input();
    s.add();


return 0;
}
