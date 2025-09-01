ifneq ($(KERNELRELEASE),)
# kbuild stuff

obj-m += main.o

else
# normal makefile

KDIR ?= /lib/modules/`uname -r`/build

all: 
	$(MAKE) -C $(KDIR) M=$$PWD

clean: 
	$(MAKE) -C $(KDIR) M=$$PWD clean

re: clean all

endif
