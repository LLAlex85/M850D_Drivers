obj-m += dcss_main.o

KERNEL_DIR ?= $(HOME)/mscale/linux-imx

all:
	make -C $(KERNEL_DIR) \
		SUBDIRS=$(PWD) modules	
clean:
	make -C $(KERNEL_DIR) \
		SUBIDRS=$(PWD) clean
 
