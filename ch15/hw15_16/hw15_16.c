#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct status
	{
		unsigned floppy:3;
		unsigned hard_disk:6;
		unsigned cd_rom:6;
		unsigned printer:5;
	};
	struct status device;
	int input;
	printf("Input number of floppy:");
	scanf("%d",&input);
	device.floppy=input;
	printf("Input number of hard_disk:");
	scanf("%d",&input);
	device.hard_disk=input;	
	printf("Input number of cd_rom:");
	scanf("%d",&input);
	device.cd_rom=input;		
	printf("Input number of printer:");
	scanf("%d",&input);
	device.printer=input;
	
	printf("========= Output =========\n");
	printf("Floppy number is \t%d\n",device.floppy);
	printf("Hard Disk number is \t%d\n",device.hard_disk);
	printf("CD-ROM number is \t%d\n",device.cd_rom);
	printf("Printer number is \t%d\n",device.printer);


	printf("sizeof(device)=%ld\n",sizeof(device));

	return 0;
}

