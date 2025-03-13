# pragma once
#include <iostream>
using namespace std;

class Candidate {
private:
    
    string ID, Ten, NgaySinh;
    float Toan, Van, Anh;
public:
    Candidate();
    ~Candidate();
    void Nhap();
    void Xuat() const;
    bool over15();
};
