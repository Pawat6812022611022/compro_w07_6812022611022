#include <stdio.h>

int main() {

    int level;

    printf("Enter your level(1-4) : ");
    scanf("%d", &level);

    switch (level) {
        case 1: printf("Silvel Member : 5 Percent discont"); break;
        case 2: printf("Gold Member : 10 Percent discont + Reward points"); break;
        case 3: printf("Platinum Member : 15 Percent discont + Reward points + Birthday gift"); break;
        case 4: printf("Diamond Member : 15 Percent discont + Reward points + Birthday gift + VIP events");break;
        default : printf("Invalid membership level");
    }
}

//เปรียบเทียบระหว่าง if-else if และ switch-case 
//สำหรับข้อนี้ การใช้ switch-case จะเหมาะสมกว่า เนื่องจากมีระดับสมาชิกที่ตายตัวที่เป็นตัวเลขแบบจำนวนเต็ม แถมโค้ดยังอ่านง่ายและแก้ไขหรือเพิ่มเงื่อนไขได้ง่ายในอนาคต