#include <iostream>
using namespace std;

class Counter{
    private:
        int count;

    public:
        void reset(){
            count=0;
        }

    void increaseBy(int x);

    int getCount();
};

void Counter::increaseBy(int x){
    count+=x;
}

int Counter::getCount(){
    return count;
}

int main(){
    Counter c;

    c.reset();
    c.increaseBy(5);
    c.increaseBy(3);

    cout<< c.getCount() << endl;
}