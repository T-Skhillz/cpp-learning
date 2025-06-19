#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec1;
    int nums1 = 0;
    cout << "Input a series of numbers (type a non-number to stop):  ";
    while(cin >> nums1){
        vec1.push_back(nums1);
    }
    int doub = 0;
    cout << "Their doubles are: ";
    for(size_t it = vec1.begin(); it != vec1.end(); ++it){

        doub = 2 * (*it)
        cout << doub << " ";
    }

    return 0;
}
