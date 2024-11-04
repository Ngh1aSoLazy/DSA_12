#include<iostream>

using namespace std;

/*Ví dụ, hãy xem xét mảng { 0, 0, 1, 0, 1, 1, 1, 0, 1, 1 }. 
Chúng ta cần thay thế chỉ số 7 để có được chuỗi liên tục có độ dài 6 chứa tất cả các số 1.*/

// alo alo

int main()
{
    int n;
    cin >> n;
    int* a = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    return 0;
}