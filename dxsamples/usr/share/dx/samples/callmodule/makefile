BASE = /usr/local/dx
include $(BASE)/lib_$(ARCH)/arch.mak

INCLUDES  = -I$(BASE)/include
LIBS      = -L$(BASE)/lib_$(ARCH) -lDXcallm $(DXEXECLINKLIBS)

all: Simple ThunderStreamlines xapp_supervise renderimage

Simple: Simple.c
	$(DXCC) $(INCLUDES) $(DXCFLAGS) -o Simple Simple.c $(LIBS)

ThunderStreamlines: ThunderStreamlines.c
	$(DXCC) $(INCLUDES) $(DXCFLAGS) -o ThunderStreamlines ThunderStreamlines.c $(LIBS)

xapp_supervise: xapp_supervise.c
	$(DXCC) $(INCLUDES) $(DXCFLAGS) -o xapp_supervise xapp_supervise.c $(LIBS)

renderimage: renderimage.c
	$(DXCC) $(INCLUDES) $(DXCFLAGS) -o renderimage renderimage.c $(LIBS)
