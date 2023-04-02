#include<stdio.h>
#define reg register
int main()
{
	for(reg int a=0;a<100;a++)
	{
//		reg int i=0;
//		i++;
//		printf("%d\n",i);
//不能用&来取寄存条的地址 
		printf("0");
	}
}
//register 声明变量只能在主函数或自定义内部
//用register关键字修饰变量，编译程序时把该变量放到寄存器中，提高对该变量的访问速度（CPU访问寄存器比访问内存的快捷） 
//&取的是逻辑地址，寄存器是物理地址，所以不能用&取地址，&只能取逻辑地址（也叫虚拟地址）

