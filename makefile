c= c_files
com= compile

all: $(c) $(com)
$(c): *c
	gcc -c $^
$(com):
	gcc -o 'Students Attendance System' *o libmysql.a
	
clean:
	
	del data.csv
	del D:\data.dat
	del *o
	
	
sub: subject.c essential.c creator.c
	gcc -c $^
	gcc  subject.o essential.o creator.o -o $@
msg: msg.c essential.c 
	gcc -c $<
	gcc -o msg msg.o essential.o
d: subject.c essential.c msg.c creator.c d_t.c 
	gcc -c $^
	gcc -o new subject.o creator.o essential.o msg.o d_t.o se_nd.o libmysql.a

o: option.c pin.c 
	gcc -c $^
	gcc -o op option.o creator.o essential.o pin.o libmysql.a
	