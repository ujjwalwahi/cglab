# reference: http://stackoverflow.com/questions/5178125/how-to-place-object-files-in-separate-subdirectory
.SUFFIXES:
.SUFFIXES: .c .o
CFLAGS = -lgraph -lm
TARGET = line
OBJDIR=obj
vpath %.c ../includes/
vpath %.h ../includes/
vpath %.o obj
default: $(TARGET)
objects = $(addprefix $(OBJDIR)/, functions.o)

$(OBJDIR):
	    mkdir $@

$(TARGET): $(objects)
	gcc -o $(TARGET).out $(TARGET).c $(objects) $(CFLAGS) -I../includes 

$(OBJDIR)/%.o: %.c
	@mkdir -p $(@D)
	gcc $(CFLAGS) -c $< -o $@


.PHONY=clean	
clean:
	rm -f $(TARGET).out $(objects)

