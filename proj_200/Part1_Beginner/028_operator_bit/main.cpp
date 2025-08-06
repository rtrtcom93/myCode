#include <iostream>
#include <bitset>

/*== bitset ==
��ǻ�ʹ� 0�� 1�� �̷��� ��ȣ�� ��� ������ ó��.
8��Ʈ = 1����Ʈ => 2�� 8���� => 256���� ǥ��
char Ÿ���� 8��Ʈ(1����Ʈ) ����

6���� ��Ʈ(��) ����
1. A & B : A�� B�� and ����
2. A | B : A�� B�� or ����
3. A ^ B : A�� B�� xor ����
4. ~A : A��Ʈ�� ����
5. A >> n : A ��� ��Ʈ�� n��ŭ ���������� ����Ʈ
6. A << n : A ��� ��Ʈ�� n��ŭ �������� ����Ʈ

bitset�� ���� �� �ڼ��� �ٷ� ����.
*/

using namespace std;

int main(int argc, char** argv) {
    bitset<8> bit1;
    bit1.reset(); // 0000 0000
    bit1 = 127;   // 0111 1111
    
    bitset<8> bit2;
    bit2.reset();
    bit2 = 0x20; //32 -> 0010 0000

    bitset<8> bit3 = bit1 & bit2; // 00100000 & 01111111 = 00100000 32 
    bitset<8> bit4 = bit1 | bit2; // 00100000 | 01111111 = 01111111 127
    bitset<8> bit5 = bit1 ^ bit2; // 00100000 ^ 01111111 = 01011111 64 + 31 = 95
    bitset<8> bit6 = ~bit1;       // ~01111111           = 10000000 128
    bitset<8> bit7 = bit2 << 1;   // 00100000 << 1       = 01000000 64
    bitset<8> bit8 = bit2 >> 1;   // 00100000 >> 1       = 00010000 16
    bitset<8> bit9 = bit1 >> 1;   // 01111111 >> 1       = 00111111 63

    cout << "bit1 & bit2 : " << bit3 << ", " << bit3.to_ulong() << endl;
    cout << "bit1 | bit2 : " << bit4 << ", " << bit4.to_ulong() << endl;
    cout << "bit1 ^ bit2 : " << bit5 << ", " << bit5.to_ulong() << endl;
    cout << "~bit1       : " << bit6 << ", " << bit6.to_ulong() << endl;
    cout << "bit2 << 1   : " << bit7 << ", " << bit7.to_ulong() << endl;
    cout << "bit2 >> 1   : " << bit8 << ", " << bit8.to_ulong() << endl;

    return 0;
}
