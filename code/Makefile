
INCLUDE:=${INCLUDE} -I../apue.3e/include -I../apue.3e/lib
LIB :=${LIB}  ../apue.3e/lib/libapue.a  #-L../localcomm/.lib -lmysqlagentcomm ${MysqlSrc_LIB}  -L../zookeeper/.lib -lcommzookeeper -L${boostdir}/lib -lboost_program_options  ${LIB} ${OPENSSL}libssl.a  ${OPENSSL}libcrypto.a  -lz

OBJS = #flashbackfile.o config.o
LIBA = 

UNITTEST_SOURCES = $(wildcard *.cpp)
UNITTEST_DISTS   = $(patsubst %.cpp, %, $(UNITTEST_SOURCES))

#target=../../bin/gtidprint 

#all:  $(target) #$(LIBA)
all:  $(UNITTEST_DISTS)


$(LIBA): $(OBJS)
	rm -f $(LIBA)
	ar q $@ $^ $(LIBWBL)
	

-include $(DEPS)

	
%:%.cpp
	$(CXX) ${INCLUDE} $(CFLAGS) -o $@   $^  $(LIB)  -Wl,-Bstatic -liconv -Wl,-Bdynamic #-rdynamic	

clean:
	rm -f *.o .*.d  $(LIBA)
	rm $(UNITTEST_DISTS)

install:
	echo "install,do nothing..."

uninstall:
	echo "uninstall,do nothing..."
