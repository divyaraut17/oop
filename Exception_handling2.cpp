#include<iostream>
#include<stdexcept> 
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5},index;
    cout<<"enter index:";
    cin >> index;

    try {
        if (index <0 || index>4) {
            throw out_of_range("invalid index!");
        }
            cout<<"element at"<<index<<"is"<<a[index];
        }
    catch(const out_of_range &str) {
        cout << "Exception: " << str.what() << endl;
    }


    return 0;
}
