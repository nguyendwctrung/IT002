#include "Candidate.h"
#include <iostream>
#include <string>

using namespace std;

Candidate::Candidate() {
    this->ID = "";
    this->Ten = "";
    this->NgaySinh = "";
    this->Toan = 0;
    this->Van = 0;
    this->Anh = 0;
}

Candidate::~Candidate() {}

void Candidate::Nhap() {
    cout << "Nhap ma so: ";
    while (cin.peek() == '\n') cin.ignore();
    getline(cin, this->ID);
    cout << "Nhap ho ten: ";
    getline(cin, this->Ten);
    cout << "Nhap ngay sinh: ";
    getline(cin, this->NgaySinh);
    cout << "Nhap diem toan: ";
    cin >> this->Toan;
    cout << "Nhap diem van: ";
    cin >> this->Van;
    cout << "Nhap diem anh: ";
    cin >> this->Anh;
}

bool Candidate::over15() {
    if ((this->Toan + this->Van + this->Anh) > 15) {
        return true;
    }
}

void Candidate::Xuat() const {
    cout << "Ho va ten: " << this->Ten << endl;
    cout << "MSSV: " << this->ID << endl;
    cout << "Ngay sinh: " << this->NgaySinh << endl;
    cout << "Diem toan: " << this->Toan << endl;
    cout << "Diem van: " << this->Van << endl;
    cout << "Diem anh: " << this->Anh << endl;
}