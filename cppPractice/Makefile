



INCPATH = -I"/root/cppPractice/include"

SRCDIR = /root/cppPractice/src
OBJDIR = /root/cppPractice/objs
LIBDIR = /root/cppPractice/lib
SRCS := $(wildcard $(SRCDIR)/*.cpp)
OBJS := $(SRCS:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)
CC = g++

#链接静态库
#gcc -o main2 main.o -L./ -ladd_minus  #-L./ 表明库文件位置在当前文件夹
#链接动态库 
#gcc -o strace_c strace_c.c -lm  #在 LD_LIBRARY_PATH 变量中指定库文件路径   那么，编译时链接，和运行时链接，有区别吗
# 制作静态库文件
# 	ar -rc $(LIBDIR)/a.a $(OBJDIR)/a.o
# 	制作动态库文件
# 	$(CC) $(SRCDIR)/b.cpp -fPIC -shared -o $(LIBDIR)/b.so $(INCPATH)

#引用库文件不需要特别的声明，include头文件即可。编译器会去每一个.o里寻找函数或类的定义

go: $(OBJS)
	
	$(CC) -o $@ $^ $(INCPATH) 

$(OBJDIR)%.o: $(SRCDIR)%.cpp
	$(CC) -c $< -o $@ $(INCPATH)

# $(OBJS): $(SRCS)
# 	$(CC) -c $(INCPATH) $< -o $@




#那提前把.cpp全变成.o有意义吗
#直接从.cpp到可执行文件，中间经历什么。之前把go.cpp变成go.o，再基于3个.o为什么就报错
#为什么只生成了一个b.o，而没有a.o
#答：1.只有%.o: %.cpp这种形式才会一一生成.o文件  否则用$(OBJS): $(SRCS)只会生成OBJS里的第一个.o文件。
#2.$(OBJS) go.cpp可以混合提供给go这个目标，编译成可执行文件
#3.不知道为什么，光是用%.o: %.cpp生成.o文件会报没有target. 4.那么怎么制作静态lib和动态.so


	
