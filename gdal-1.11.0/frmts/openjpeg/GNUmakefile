
include ../../GDALmake.opt

OBJ	=	openjpegdataset.o

CPPFLAGS	:=	$(GDAL_INCLUDE) $(CPPFLAGS)

default:	$(OBJ:.o=.$(OBJ_EXT))

clean:
	rm -f $(OBJ) $(O_OBJ)

install-obj:	$(O_OBJ:.o=.$(OBJ_EXT))
