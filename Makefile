
vpath %.c src
vpath %.h include

CP       = cp -f -u
RM       = rm -f

OBJS     = $(patsubst %.c,%.o,$(notdir $(wildcard src/*.c)))

CC       = gcc
CFLAGS   = -std=c17 -Wall -Wextra -Wpedantic -O3 -mtune=intel -march=skylake
CPPFLAGS = -D_GNU_SOURCE -D_XOPEN_SOURCE=700
LDFLAGS  = -lm

TARGET   = ed

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(CPPFLAGS) -I include    -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -I include -c -o $@ $^

.PHONY: clean
clean:
	$(RM) $(OBJS) $(TARGET)

.PHONY: install
install: $(TARGET)
	$(CP) ./$(TARGET) /usr/bin

.PHONY: uninstall
uninstall:
	$(RM) /usr/bin/$(TARGET)

