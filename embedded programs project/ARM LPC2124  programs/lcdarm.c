#include <lpc21xx.h>
#define RS (1)
#define EN (1<<1)
#define D0 (1<<15)
#define D1 (1<<16)
#define D2 (1<<17)
#define D3 (1<<18)
#define D4 (1<<19)
#define D5 (1<<20)
#define D6 (1<<21)
#define D7 (1<<22)
void lcd_str(const char * );
void lcd_init();
void lcd_cmd(int);
void lcd_data(char);
void delay(int);	
int main(){
	lcd_init();
	lcd_data('w');
	lcd_cmd(0xc7);
	lcd_str("welcome");
	return(0);
}
void lcd_init()
	{
		IO0DIR=RS|EN|D0|D1|D2|D3|D4|D5|D6|D7;
		lcd_cmd(0x38);
		lcd_cmd(0x06);
		lcd_cmd(0x0E);
		lcd_cmd(0x01);
		lcd_cmd(0x80);
	}
	void lcd_cmd(int cmd)	{
		IO0CLR=D0|D1|D2|D3|D4|D5|D6|D7;
		IO0SET=cmd<<15;
		IO0CLR= RS;
		IO0SET=EN;
		delay(150);
		IO0CLR=EN;
	}
	
	void lcd_data(char ch){
		IO0CLR=D0|D1|D2|D3|D4|D5|D6|D7;
		IO0SET=ch<<15;
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
				