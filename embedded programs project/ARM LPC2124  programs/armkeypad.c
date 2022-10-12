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
#define row1 (1<<16)
#define row2 (1<<17)
#define D3 (1<<18)
#define D4 (1<<19)
#define D5 (1<<20)
#define D6 (1<<21)

void lcd_str(const char * );
void lcd_init();
char keypad();				
void lcd_cmd(int);
void lcd_data(char);
void delay(int);	
int main(){
	char ch;
    lcd_init();
    lcd_str("Password");
    lcd_cmd(0xC1); 
   
     while(1)
       
        {
            ch = keypad();
            lcd_data(ch);
            
        } 
	return(0);
}
void lcd_init()
	{
		IO0DIR=RS|EN|D0|D1|D2|D3|D4|D5|D6|D7;
		IO1DIR=0x00f0000;
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
	char keypad()
{
	int key;
	IO1CLR=0x00000000;
	while(1){
		
		IO1SET=0x0000EEEE;
		key=IO1PIN&(0xFFFF0000);
		switch(key)
		{
			case 0xEEEE0000 : return('1');
			case 0xDDDD0000 : return('2');
			case 0xBBBB0000 : return('3');
			case 0x77770000 : return('4');
		}
		IO1SET=0x0D;
		key=IO1PIN&(0xF0);
		switch(key)
		{
			case 0xE0 : return('5');
			case 0xD0 : return('6');
			case 0xB0 : return('7');
			case 0x70 : return('8');
		}
	
		IO1SET=0x0B;
		key=IO1PIN&(0xF0);
		switch(key)
		{
			case 0xE0 : return('9');
			case 0xD0 : return('A');
			case 0xB0 : return('B');
			case 0x70 : return('C');
		}
		
		IO1SET=0x07;
		key=IO1PIN&(0xF0);
		switch(key)
		{
			case 0xE0 : return('D');
			case 0xD0 : return('E');
			case 0xB0 : return('F');
			case 0x70 : return('G');
		}delay(250);
	}
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
				





