#include <stdio.h>

int main() {
    int x, y ; //กำหนดตัวแปร x และ y

    printf("input x : "); //แสดงผลให้กรอกข้อมูล x
    scanf("%d," ,&x);   //เก็บค่าตัวแปร x

    printf("input y : ");  //แสดงผลให้กรอกข้อมูล y
    scanf("%d," ,&y);   //เก็บค่าตัวแปร y

    if (x > y) {        //สร้างเงื่อนไข ถ้า x > y
        printf("x > y");    //ถ้าตรงเงื่อนไขพิมพ์ x > y 
    } 
    else if (x < y) {   //สร้างเงื่อนไข ถ้า x < y
        printf("x < y");    //ถ้าตรงเงื่อนไขพิมพ์ x < y
    } 
    else if (x = y) {   //สร้างเงื่อนไข ถ้า x = y
        printf("x = y");    //ถ้าตรงเงื่อนไขพิมพ์ x = y
    }
    return 0;
}