#include <lpc21xx.h>
#define RS (1)
#define EN (1<<1)
#define D0 (1<<15)
#define D1 (1<<16)
#define D2 (1<<17)
#define D3 (1<<18)
#define D4 (1<<20)
#define D5 (1<<21)
#define D6 (1<<22)
#define D7 (1<<23)
	
void lcd_init();
void lcd_cmd(int);
void lcd_data(char);
void lcd_str(const char *);
void delay(int);	
void main(){
	lcd_init();
	lcd_data('t');
	lcd_data('d');
	lcd_str("welcome");
}
void lcd_init()
	{
		IO0DIR=RS|EN|D0|D1|D2|D3|D4|D5|D6|D7;
			lcd_cmd(0x02);
		lcd_cmd(0x28);
		lcd_cmd(0x06);
		lcd_cmd(0x0E);
		lcd_cmd(0x01);
		lcd_cmd(0x80);
	}
	void lcd_cmd(int cmd)	{
		int temp=cmd&0xf0;
		IO0CLR=D4|D5|D6|D7;
		temp=temp>>4;
		IO0SET=(temp<<20);
		IO0CLR= RS;
		IO0SET=EN;
		delay(100);
		IO0CLR=EN;
		temp=cmd&0x0f;
		IO0CLR=D4|D5|D6|D7;
		IO0SET=(temp<<20);
		IO0CLR= RS;
		IO0SET=EN;
		delay(100);
		IO0CLR=EN;
	}
	void lcd_data(char ch){
		int temp=ch&0xf0;
		IO0CLR=D4|D5|D6|D7;
		temp=(temp>>4);
		IO0SET=(temp<<20);
		IO0SET= RS;
		IO0SET=EN;
		delay(100);
		IO0CLR=EN;
    temp=ch&0x0f;
		IO0CLR=D4|D5|D6|D7;
		IO0SET=(temp<<20);
		IO0SET= RS;
		IO0SET=EN;
		delay(100);
		IO0CLR=EN;
	}
	void lcd_str(const char *str)
	{
		while(*str!='\0'){
			lcd_data(*str);
			str++;
		}
		}
	void delay(int d)
{
	 int i,j;
    for(i=0;i<d;i++)
    {
        for(j=0;j<d;j++);} }