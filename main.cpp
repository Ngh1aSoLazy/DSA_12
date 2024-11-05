#include<iostream>

using namespace std;

/*Ví dụ, hãy xem xét mảng { 0, 0, 1, 0, 1, 1, 1, 0, 1, 1 }. 
Chúng ta cần thay thế chỉ số 7 để có được chuỗi liên tục có độ dài 6 chứa tất cả các số 1.*/
int FIND_OUT(int arr[], int n)
{
    int count = 0;
    int prev_index = -1;

    int max_count = 0; // Lưu count lớn nhất
    int max_index = 0; // Lưu giá trị index của phần tử '0' mà nếu thay thế nó sẽ tạo ra dãy count MAX

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 1) count++;
        else
        {
            count = i - prev_index; // Trong trường hợp 2 dãy '1' cách nhau bởi 1 số 0
                                    // ta tính luôn cả số 0 vào count để xem nếu thay '0' = '1'
                                    // thì dãy sẽ có độ dài bao nhiêu
            prev_index = i; // Trong trường hợp kpai cách nhau 1 số 0 thì lệnh này có tác
                            // dụng để count chỉ luôn được cộng thêm 1
                            // 1, 0, 1, 1, 1, 0, 1, 1 --> count: 1, 0, 1, 1, 1 = 5 khi chạm đến 
                            // '0' tiếp theo count sẽ được reset về 4 <=> 1, 1, 1, 0 để tiếp tục 
                            // nối và đếm dãy tiếp theo
                            // => So sánh count của các cặp dãy và tìm ra dãy có count MAX
        }
        if(count > max_count)
        {
            max_count = count;
            max_index = prev_index;
        }
    }

    return max_index;
}

int main()
{
    int n;
    cin >> n;
    int* a = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Replace: " << FIND_OUT(a, n);


    return 0;
}