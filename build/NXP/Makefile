# This file was automagically generated by mbed.org. For more information, 
# see http://mbed.org/handbook/Exporting-to-GCC-ARM-Embedded

GCC_BIN = 

DEBUG := 1
BUILD_SLAVE := 

PROJECT = AIT_UWB_Tracker
TARGET := TARGET_LPC1768
TARGET_BOARD := MBED_LPC1768
TOOLCHAIN := TOOLCHAIN_GCC_ARM

OBJDIR := ./obj

BASE := ../..
SRCDIR := $(BASE)/src
LIBDIR := $(BASE)/lib

SYS_PATH := $(SRCDIR)/mbed/$(TARGET)/$(TOOLCHAIN)
SYS_OBJECTS := $(wildcard $(addsuffix /*.o, $(SYS_PATH)))
 

INCLUDE_PATHS := $(SRCDIR)
INCLUDE_PATHS += $(SRCDIR)/DW1000
INCLUDE_PATHS += $(SRCDIR)/PC
INCLUDE_PATHS += $(SRCDIR)/BufferedSerial
INCLUDE_PATHS += $(SRCDIR)/BufferedSerial/Buffer
#INCLUDE_PATHS += $(SRCDIR)/mavlink_bridge
INCLUDE_PATHS += $(SRCDIR)/ait_link
INCLUDE_PATHS += $(SRCDIR)/UWB2WayMultiRange
INCLUDE_PATHS += $(SRCDIR)/UWBProtocol
INCLUDE_PATHS += $(SRCDIR)/UWBSlave
INCLUDE_PATHS += $(SRCDIR)/UWBSwarmRing

INCLUDE_PATHS += $(SRCDIR)/mbed
INCLUDE_PATHS += $(SRCDIR)/mbed/$(TARGET) 
INCLUDE_PATHS += $(SRCDIR)/mbed/$(TARGET)/$(TOOLCHAIN) 
INCLUDE_PATHS += $(SRCDIR)/mbed/$(TARGET)/TARGET_NXP
INCLUDE_PATHS += $(SRCDIR)/mbed/$(TARGET)/TARGET_NXP/TARGET_$(TARGET_BOARD) 

 
INCS :=  $(patsubst %, -I%, $(INCLUDE_PATHS))

OBJS := $(wildcard $(addsuffix /*.c, $(INCLUDE_PATHS)))
OBJS += $(wildcard $(addsuffix /*.cpp, $(INCLUDE_PATHS)))
OBJS := $(notdir $(OBJS))
OBJS := $(OBJS:.cpp=.o)
OBJS := $(OBJS:.c=.o)
OBJS := $(patsubst %, $(OBJDIR)/%, $(OBJS))
OBJECTS = $(OBJS) 
 
LIBRARY_PATHS = -L../../src/mbed/$(TARGET)/$(TOOLCHAIN)
LIBRARIES = -lmbed
 
LINKER_SCRIPTS := ../../src/mbed/$(TARGET)/$(TOOLCHAIN)/LPC1768.ld


LS := $(patsubst %, -T%, $(LINKER_SCRIPTS))

VPATH := $(INCLUDE_PATHS)
#VPATH +=  ../../src/libs/
#VPATH +=  ../../src/drivers/

############################################################################### 
AS      = $(GCC_BIN)arm-none-eabi-as
CC      = $(GCC_BIN)arm-none-eabi-gcc
CPP     = $(GCC_BIN)arm-none-eabi-g++
LD      = $(GCC_BIN)arm-none-eabi-gcc
OBJCOPY = $(GCC_BIN)arm-none-eabi-objcopy
OBJDUMP = $(GCC_BIN)arm-none-eabi-objdump
SIZE 	= $(GCC_BIN)arm-none-eabi-size

CPU = -mcpu=cortex-m3 -mthumb 
CC_FLAGS = $(CPU) -c -g -fno-common -fmessage-length=0 -Wall -Wextra -fno-exceptions -ffunction-sections -fdata-sections -fomit-frame-pointer -MMD -MP
CC_SYMBOLS = -DTOOLCHAIN_GCC_ARM -DTOOLCHAIN_GCC -DARM_MATH_CM3 -DTARGET_LIKE_CORTEX_M3 -DTARGET_CORTEX_M -DMBED_BUILD_TIMESTAMP=1458640859.55 -DTARGET_LIKE_MBED -DTARGET_LPC176X -DTARGET_NXP -DMBED_LPC1768 -D__CORTEX_M3 -DTARGET_M3 -DTARGET_MBED_LPC1768 -D__MBED__=1 

LD_FLAGS = $(CPU) -Wl,--gc-sections --specs=nano.specs -u _printf_float -u _scanf_float -Wl,--wrap,main -Wl,-Map=$(PROJECT).map,--cref
LD_SYS_LIBS = -lstdc++ -lsupc++ -lm -lc -lgcc -lnosys


  CC_FLAGS += -D_DEBUG
  CC_FLAGS += -O0
  CC_FLAGS += -DDEBUG


ifdef $(BUILD_SLAVE)
  CC_FLAGS += -DBUILD_SLAVE
endif

upload3: all upload2
	cp $(PROJECT).bin /cygdrive/o/
	
upload2: all upload
	cp $(PROJECT).bin /cygdrive/n/

upload: all
	cp $(PROJECT).bin /cygdrive/m/
		
all: $(PROJECT).bin $(PROJECT).hex 

clean:
	rm -f $(PROJECT).bin $(PROJECT).elf $(PROJECT).hex $(PROJECT).map $(PROJECT).lst $(OBJECTS) $(DEPS)

$(OBJDIR)/%.o: %.s Makefile
	@echo --- assembling $<...
	$(AS) $(CPU) -o $@ $<
	@sed -e "s/\\\[ ]*\\\/\\\/g" \
		-e "s/C:\\\/\/cygdrive\/c\//g" \
	    -e "s/c:\\\/\/cygdrive\/c\//g" < $(OBJDIR)/$*.d >  $(OBJDIR)/$*.p;
	    
	$(RM) $(OBJDIR)/$*.d

$(OBJDIR)/%.o: %.c Makefile
	@echo --- compiling $<...
	$(CC)  $(CC_FLAGS) $(CC_SYMBOLS) -std=gnu99  $(INCS) -o $@ $<
	@sed -e "s/\\\[ ]*\\\/\\\/g" \
		-e "s/C:\\\/\/cygdrive\/c\//g" \
	    -e "s/c:\\\/\/cygdrive\/c\//g" < $(OBJDIR)/$*.d >  $(OBJDIR)/$*.p;
	
	$(RM) $(OBJDIR)/$*.d

$(OBJDIR)/%.o: %.cpp Makefile
	@echo --- compiling $<...
	$(CPP) $(CC_FLAGS) $(CC_SYMBOLS) -std=gnu++98 -fno-rtti $(INCS) -o $@ $<
	@sed -e "s/\\\[ ]*\\\/\\\/g" \
		-e "s/C:\\\/\/cygdrive\/c\//g" \
	    -e "s/c:\\\/\/cygdrive\/c\//g" < $(OBJDIR)/$*.d >  $(OBJDIR)/$*.p;
	
	$(RM) $(OBJDIR)/$*.d


$(PROJECT).elf: $(OBJECTS) $(SYS_OBJECTS) 
	@echo --- linking...
	$(LD) $(LD_FLAGS) $(LS) $(LIBRARY_PATHS) -o $@ $^ $(LIBRARIES) $(LD_SYS_LIBS) $(LIBRARIES) $(LD_SYS_LIBS)
	$(SIZE) $@

$(PROJECT).bin: $(PROJECT).elf
	@$(OBJCOPY) -O binary $< $@

$(PROJECT).hex: $(PROJECT).elf
	@$(OBJCOPY) -O ihex $< $@

$(PROJECT).lst: $(PROJECT).elf
	@$(OBJDUMP) -Sdh $< > $@

lst: $(PROJECT).lst

size:
	$(SIZE) $(PROJECT).elf

DEPS = $(OBJECTS:.o=.p) $(SYS_OBJECTS:.o=.d)
-include $(DEPS)
