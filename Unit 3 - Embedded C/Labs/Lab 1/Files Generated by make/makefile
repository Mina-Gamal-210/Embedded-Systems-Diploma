# Copyright: Mina Gamal

CC=arm-none-eabi-
CFLAGS=-mcpu=arm926ej-s -g
INCS=-I .
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS_SRC=$(wildcard *.s)
AS_OBJ=$(AS_SRC:.s=.o)
LS=$(wildcard *.ld)
LIBS=
Project_Name=Program


all:$(Project_Name).bin
	@echo -e "\n\t=================================="
	@echo -e "\n\t------ Building is Done ^_^ ------"
	@echo -e "\n\t=================================="


%.o: %.s
	$(CC)as.exe $(CFLAGS) $< -o $@

%.o: %.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@


$(Project_Name).elf: $(OBJ) $(AS_OBJ)
	$(CC)ld.exe -Map=map_file.map -T $(LS) $(LIBS) $(OBJ) $(AS_OBJ) -o $@


$(Project_Name).bin:$(Project_Name).elf
	$(CC)objcopy.exe -O binary $< $@


clean: 
	rm *.o *.elf 

clean_all: 
	rm *.o *.elf *.bin *.map 