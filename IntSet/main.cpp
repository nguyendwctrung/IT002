#include "IntSet.h"

int main()
{
    int* values = new int[2];
    values[0] = 1;
    values[1] = 1;
    IntSet s1, s2(values, 2), s3; //n?u 2 ph?n t? gi?ng nhau thì ch? l?u tr? 1 l?n trong t?p h?p
    cin >> s2;//nh?p l?i toàn b? giá tr? c?a s2
    s3 = s1 + s2; //h?p s1 và s2, union
    s3 = s1 - s2; //phép bù, diff
    cout << s1 << s2[0];
    cout << (s1 == s2);
    delete[] values;
    return 0;
}