#include <iostream>
#include <string>
using namespace std;

/*
���� ���忡�� 'a'�� ������ ���ϼ���.
    "The Jin state was formed in sourthern korea by the 3rd century"
*/

int main() {
    string sentence {"The Jin state was formed in sourthern korea by the 3rd century"};\
    
    char find{'a'};
    int count{0};

    for (size_t i = 0; i < sentence.size(); i++) { 
        //or sentencel.length() -> O(N) : null�� �������� �ʴ� ���� ���ڿ��� ����, int Ÿ��, string Ŭ�������� �ִ� �޼ҵ�.
        //in constrast, .size() -> O(1), ��ȯ ���� size_t Ÿ��, ǥ�� ���̺귯������ �����Ǵ� ��ټ��� �����̳� Ŭ������ ���� ����.)
        if (sentence[i] == find) {
            ++count;
        } else {
            continue;
        }
    }

    cout << "The number of " << find << " is " << count << "." << endl;

    return 0;
}