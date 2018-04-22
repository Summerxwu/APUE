INCLUDE:=${INCLUDE} -I../../apue.3e/include -I../../apue.3e/lib
LIB :=${LIB}  ../../apue.3e/lib/libapue.a -L/usr/local/lib  

OBJS = 
LIBA = 

UNITTEST_SOURCES = $(wildcard *.cpp)
UNITTEST_DISTS   = $(patsubst %.cpp, %, $(UNITTEST_SOURCES))

all:  $(UNITTEST_DISTS)


$(LIBA): $(OBJS)
	rm -f $(LIBA)
	ar q $@ $^ $(LIBWBL)
	

-include $(DEPS)

	
%:%.cpp
	$(CXX) ${INCLUDE} $(CFLAGS) -o $@   $^  $(LIB)  -Wl,-Bstatic -Wl,-Bdynamic 	

clean:
	rm -f *.o .*.d  $(LIBA)
	rm $(UNITTEST_DISTS)

install:
	echo "install,do nothing..."

uninstall:
	echo "uninstall,do nothing..."
