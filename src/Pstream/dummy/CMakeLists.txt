# UPstream.C
# UIPread.C
# UOPwrite.C

# LIB = $(FOAM_LIBBIN)/dummy/libPstream

ADD_LIBRARY ( Pstream SHARED
  UPstream.C
  UIPread.C
  UOPwrite.C
  )
