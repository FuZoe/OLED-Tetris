基于STM32的俄罗斯方块游戏

1. 单片机型号：STM32F103C8T6
2. 显示屏型号：0.96寸OLED，SSD1306
3. IO连接关系
OLED SCL  ----  PB12
OLED SDA  ----  PB13
left      ----  PA0   
right     ----  PA1
down      ----  PA2
f         ----  PA3  (功能按键，开始游戏或者旋转)
