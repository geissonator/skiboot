# -*-Makefile-*-

LIBSTB_DIR = libstb

SUBDIRS += $(LIBSTB_DIR)

LIBSTB_SRCS = container.c rom.c tpm_chip.c
LIBSTB_OBJS = $(LIBSTB_SRCS:%.c=%.o)
LIBSTB = $(LIBSTB_DIR)/built-in.o

include $(SRC)/$(LIBSTB_DIR)/drivers/Makefile.inc

$(LIBSTB): $(LIBSTB_OBJS:%=$(LIBSTB_DIR)/%) $(DRIVERS)