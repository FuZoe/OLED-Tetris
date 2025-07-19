**Note**：对比main分支，本分支修改内容如下：

1.修改TetrisGame/Core/Src/oled12864.c的**OLED_Init()**函数

2.为PA07引脚添加一个点亮LED灯的电平


# 基于STM32的俄罗斯方块游戏

1. 单片机型号：STM32F103C8T6
   
2. 显示屏型号：0.96寸OLED，SSD1306
   
3. IO连接关系
   
OLED SCL  ----  PB12

OLED SDA  ----  PB13

left      ----  PA0   

right     ----  PA1

down      ----  PA2

f         ----  PA3  (功能按键，开始游戏或者旋转)
