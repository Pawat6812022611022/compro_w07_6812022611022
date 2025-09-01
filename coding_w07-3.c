#include <stdio.h>

int main() { 
    int level;      //กำหนดตัวแปร level
    printf("Enter level(1-4): ");   //แสดงผลให้กรอก level
    scanf("%d", &level);    //เก็บค่าตัวแปร level
    
    switch (level)  {   //ตรวจสอบค่าของตัวแปร level 
        case 1: printf("Beginner\n");     //ถ้าค่าเป็น 1 แสดงผล Beginner Intermediate Advanced 
        case 2: printf("Intermediate\n"); //ถ้าค่าเป็น 2 แสดงผล Intermediate Advanced
        case 3: printf("Advanced\n"); break;    //ถ้าค่าเป็น 3 แสดงผล Advanced 
        case 4: printf("Expert\n"); break;      //ถ้าค่าเป็น 4 แสดงผล Expert
        default : if (level <= 0)  {  //ถ้าไม่ตรงเงื่อนไขด้านบน สร้างเงื่อนไขขึ้นมาใหม่ โดยใช้คำสั่ง if-else ถ้า level <= 0
            printf("The level below 1 is not allowed");     //แสดงผล The level below 1 is not allowed
        } 
        else {        //ถ้าไม่ตรงเงื่อนไข ถือว่าเลขนั้นมากกว่า 4 , level > 4
            printf("The level above 4 is not allowed");     //แสดงผล The level above 4 is not allowed
        }

        
    }

    return 0;

}
        // สำหรับโปรแกรมเดิม ถ้าหาก level = 0,10 โปรแกรมจะแสดงผลว่า Invalid level เนื่องจากไม่เข้าเงื่อนไข
        // สำหรับโปรแกรมเดิม ถ้าหาก level = 1 โปรแกรมจะแสดงผลว่า Beginner Intermediate Advanced //เนื่องจากขาด break โปรแกรมจึง run ไปถึง case ที่มี break
        // สำหรับโปรแกรมเดิม ถ้าหาก level = 2 โปรแกรมจะแสดงผลว่า Intermediate Advanced //เนื่องจากขาด break โปรแกรมจึง run ไปถึง case ที่มี break
        // สำหรับโปรแกรมเดิม ถ้าหาก level = 3 โปรแกรมจะแสดงผลว่า Advanced
        // สำหรับโปรแกรมเดิม ถ้าหาก level = 4 โปรแกรมจะแสดงผลว่า Expert

        //สำหรับโปรแกรมที่อัปเกรดใหม่ ถ้า level = 1,2,3,4 การแสดงผลยังคงเหมือนโปรแกรมเดิม
        //สำหรับโปรแกรมที่อัปเกรดใหม่ ถ้า level = -4,0 จะแสดงผลว่า The level below 1 is not allowed เนื่องจากตรงกับเงื่อนไข level <= 0
        //สำหรับโปรแกรมที่อัปเกรดใหม่ ถ้า level = 100 จะแสดงผลว่า The level above 4 is not allowed 