#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;
#define MAXN 100

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

bool SosanhChuoi(char* A, char* B);
void swap(SinhVien& a, SinhVien& b);
void SapXepGiamTheoMASV(SinhVien A[MAXN], int n);
void Nhap(SinhVien A[MAXN], int& n);
void Xuat(SinhVien A[MAXN], int& n);

int main() {
    SinhVien A[MAXN];
    int n;
    Nhap(A, n);
    SapXepGiamTheoMASV(A, n);
    Xuat(A, n);
    return 0;
}

bool SosanhChuoi(char* s1, char* s2)
{
    for (int i = 0; i < 10; i++)
    {
        if (s1[i] == s2[i])
            continue;
        if (s1[i] < s2[i])
            return true;
        if (s1[i] > s2[i])
            return false;       
    }
}

void swap(SinhVien& a, SinhVien& b)
{
    SinhVien tg = a;
    a = b;
    b = tg;
}

void SapXepGiamTheoMASV(SinhVien A[MAXN], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (SosanhChuoi(A[i].MASV, A[j].MASV))
            {
                swap(A[i], A[j]);
            }
        }
    }
}

void Nhap(SinhVien A[MAXN], int& n)
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cin.getline(A[i].MASV, 10);
        cin.getline(A[i].HoTen, 100);
        cin.getline(A[i].NgaySinh, 12);
        cin >> A[i].GioiTinh;
        cin >> A[i].DiemToan >> A[i].DiemLy >> A[i].DiemHoa;
    }
}

void Xuat(SinhVien A[MAXN], int& n)
{
    for (int i = 0; i < n; i++)
    {
        A[i].DTB = (A[i].DiemToan + A[i].DiemLy + A[i].DiemHoa) / 3;
        cout << A[i].MASV << "\t" << A[i].HoTen << "\t" << A[i].NgaySinh << "\t" << A[i].GioiTinh << "\t" << A[i].DiemToan << "\t" << A[i].DiemLy << "\t" << A[i].DiemHoa << "\t" << setprecision(3) << A[i].DTB << endl;
    }
}