# 基于STM32的俄罗斯方块游戏

编译器版本：Arm Compiler V5.06 update 7 (build 960) 

（官网下载：https://developer.arm.com/downloads/view/ACOMP5?sortBy=availableBy）

视频演示：https://www.bilibili.com/video/BV1kHu1zMEuX/

Details:
1. 单片机型号：STM32F103C8T6
   
2. 显示屏型号：0.96寸OLED，SSD1306
   
3. IO连接关系
   
   OLED SCL  ----  PB12

   OLED SDA  ----  PB13

   left      ----  PA0   
   
   right     ----  PA1

   down      ----  PA2

   f         ----  PA3  (功能按键，开始游戏或者旋转)



