HELLO      = userhello.c hello.c
HELLOERR   = userhelloerr.c hello_errorchecking.c
HELLOOUT   = hello.c 
HELLOLOAD  = hello.c userhello_load.c
MAKEX      = usermakex.c makex.c
MAKEXEFF   = usermakexeff.c makexeff.c
ADD        = useradd.c add.c
ADD2       = useradd2.c add2.c
ADD2INV    = useradd2inv.c add2invalid.c
ADDPAR     = useraddpar.c add_parallel.c
AVGCELL    = useravgcell.c averagecell.c
AVGCELLPAR = useravgcellpar.c averagecell_parallel.c
PICK       = userpick.c showpick.c
ALL        = userall.c hello.c hello_errorchecking.c add.c add2.c makex.c makexeff.c \
	     averagecell.c showpick.c add_parallel.c add2invalid.c averagecell_parallel.c

BASE = /usr/local/dx
include $(BASE)/lib_$(ARCH)/arch.mak

INCLUDES  = -I$(BASE)/include
DXLIB     = -L$(BASE)/lib_$(ARCH) -lDX
DXLIBLITE = -L$(BASE)/lib_$(ARCH) -lDXlite

hello:		$(HELLO)
		$(DXCC) $(INCLUDES)  $(DXCFLAGS) $(HELLO) $(DXLIB) $(DXEXECLINKLIBS)  -o dxexec

hello_err:	$(HELLOERR)
		$(DXCC) $(INCLUDES)  $(DXCFLAGS) $(HELLOERR) $(DXLIB) $(DXEXECLINKLIBS)  -o dxexec

hello_outboard:	$(HELLOOUT)
		$(DXCC) $(INCLUDES)  $(HELLOOUT) -DUSERMODULE=m_Hello $(BASE)/lib/outboard.c $(DXLIBLITE)  $(DXEXECLINKLIBS) -o hello_outboard

hello_loadable:	$(HELLOLOAD)
		$(DXCC) $(INCLUDES)  $(DXCFLAGS)  -c hello.c
		$(DXCC) $(INCLUDES)  $(DXCFLAGS)  -c userhello_load.c
		$(DXCC) $(INCLUDES)  userhello_load.o hello.o -o hello_loadable  

add:		$(ADD)
		$(DXCC) $(INCLUDES)  $(DXCFLAGS) $(ADD) $(DXLIB) $(DXEXECLINKLIBS)  -o dxexec

add_par:	$(ADDPAR)
		$(DXCC) $(INCLUDES)  $(DXCFLAGS) $(ADDPAR) $(DXLIB) $(DXEXECLINKLIBS)  -o dxexec

add2:		$(ADD2)
		$(DXCC) $(INCLUDES)  $(DXCFLAGS) $(ADD2) $(DXLIB) $(DXEXECLINKLIBS)  -o dxexec

add2_inv:	$(ADD2INV)
		$(DXCC) $(INCLUDES)  $(DXCFLAGS) $(ADD2INV) $(DXLIB) $(DXEXECLINKLIBS)  -o dxexec

makex:		$(MAKEX)
		$(DXCC) $(INCLUDES)  $(DXCFLAGS) $(MAKEX) $(DXLIB) $(DXEXECLINKLIBS)  -o dxexec

makex_eff:	$(MAKEXEFF)
		$(DXCC) $(INCLUDES)  $(DXCFLAGS) $(MAKEXEFF) $(DXLIB) $(DXEXECLINKLIBS)  -o dxexec

avgcell:	$(AVGCELL)
		$(DXCC) $(INCLUDES)  $(DXCFLAGS) $(AVGCELL) $(DXLIB) $(DXEXECLINKLIBS)  -o dxexec

avgcell_2:	$(AVGCELL2)
		$(DXCC) $(INCLUDES)  $(DXCFLAGS) $(AVGCELL2) $(DXLIB) $(DXEXECLINKLIBS)  -o dxexec

avgcell_par:	$(AVGCELLPAR)
		$(DXCC) $(INCLUDES)  $(DXCFLAGS) $(AVGCELLPAR) $(DXLIB) $(DXEXECLINKLIBS)  -o dxexec

showpick:	$(PICK)
		$(DXCC) $(INCLUDES)  $(DXCFLAGS) $(PICK) $(DXLIB) $(DXEXECLINKLIBS)  -o dxexec

all:		$(ALL)
		$(DXCC) $(INCLUDES)  $(DXCFLAGS) $(ALL) $(DXLIB) $(DXEXECLINKLIBS)  -o dxexec


# how to make the outboard main routine - source is in $(DXROOT)/lib
outboard.o:
	$(DXCC) $(INCLUDES)  $(DXCFLAGS) -DUSERMODULE=m_Hello -c $(BASE)/lib/outboard.c


# make the user files
userhello.c:		hello.mdf
			$(BASE)/bin/mdf2c hello.mdf > userhello.c

userhelloerr.c:		helloerr.mdf
			$(BASE)/bin/mdf2c helloerr.mdf > userhelloerr.c

userhello_load.c:	hello_loadable.mdf
			$(BASE)/bin/mdf2c -m hello_loadable.mdf > userhello_load.c

useradd.c:		add.mdf
			$(BASE)/bin/mdf2c add.mdf >useradd.c

useradd2.c:		add2.mdf
			$(BASE)/bin/mdf2c add2.mdf >useradd2.c

useradd2inv.c:		add2inv.mdf
			$(BASE)/bin/mdf2c add2inv.mdf >useradd2inv.c

useraddtypes.c:		addtypes.mdf
			$(BASE)/bin/mdf2c addtypes.mdf >useraddtypes.c

usermakex.c:		makex.mdf
			$(BASE)/bin/mdf2c makex.mdf >usermakex.c

usermakexeff.c:		makexeff.mdf
			$(BASE)/bin/mdf2c makexeff.mdf >usermakexeff.c

useravgcell.c:		averagecell.mdf
			$(BASE)/bin/mdf2c averagecell.mdf >useravgcell.c

useravgcell2.c:		averagecell2.mdf
			$(BASE)/bin/mdf2c averagecell2.mdf >useravgcell2.c

useravgcellpar.c:	averagecellpar.mdf
			$(BASE)/bin/mdf2c averagecellpar.mdf >useravgcellpar.c

useraddpar.c:		addpar.mdf
			$(BASE)/bin/mdf2c addpar.mdf >useraddpar.c

userpick.c:		showpick.mdf
			$(BASE)/bin/mdf2c showpick.mdf >userpick.c

userall.c:		all.mdf
			$(BASE)/bin/mdf2c all.mdf >userall.c

