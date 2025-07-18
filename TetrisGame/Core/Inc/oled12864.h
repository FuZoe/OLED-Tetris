#ifndef __OLED_H
#define __OLED_H

#include "main.h"
#define OLED_MODE 0
#define SIZE 8
#define XLevelL		0x00
#define XLevelH		0x10
#define Max_Column	128
#define Max_Row		64
#define	Brightness	0xFF
#define X_WIDTH 	128
#define Y_WIDTH 	64

#define u8 unsigned char
#define u32 unsigned int
//-----------------OLED IIC端口定义----------------

#define OLED_SCLK_Clr() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, GPIO_PIN_RESET) //SCL
#define OLED_SCLK_Set() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, GPIO_PIN_SET) 

#define OLED_SDIN_Clr() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, GPIO_PIN_RESET) //SDA
#define OLED_SDIN_Set() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, GPIO_PIN_SET) 


#define OLED_CMD  0	//写命令
#define OLED_DATA 1	//写数据

void IIC_Start();
void IIC_Stop();
void IIC_WaitAck();
void IIC_WriteByte(unsigned char IIC_Byte);
void OLED_data_start();


//OLED控制用函数
void OLED_WR_Byte(unsigned dat,unsigned cmd);
void OLED_DisplayOn(void);
void OLED_DisplayOff(void);
void OLED_Init(void);
void OLED_Clear(void);
void OLED_DrawPoint(u8 x,u8 y,u8 t);
void OLED_Fill(u8 x1,u8 y1,u8 x2,u8 y2,u8 dot);
void OLED_ShowChar(u8 x,u8 y,u8 chr,u8 Char_Size);
void OLED_ShowNum(u8 x,u8 y,u32 num,u8 len,u8 size);
void OLED_ShowString(u8 x,u8 y, u8 *p,u8 Char_Size);
void OLED_SetPos(unsigned char x, unsigned char y);

void OLED_DrawBMP(unsigned char x0, unsigned char y0,unsigned char x1, unsigned char y1,unsigned char BMP[]);
void Delay_50ms(unsigned int Del_50ms);
void Delay_1ms(unsigned int Del_1ms);
void OLED_FillPicture(unsigned char fill_Data);
void Picture();
void IIC_Start();
void IIC_Stop();
void IIC_WriteCommand(unsigned char IIC_Command);
void IIC_WriteData(unsigned char IIC_Data);
void IIC_WriteByte(unsigned char IIC_Byte);

void IIC_WaitAck();

// 快速绘制图像
void OLED_DrawBMPFast(unsigned char BMP[]);


// 绘制封面
//void OLED_DrawCover();
#endif




