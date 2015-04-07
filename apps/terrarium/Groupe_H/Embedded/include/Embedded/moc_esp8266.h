#include <sys/types.h>

public class moc_esp8266 {
	static int fd;
public:
	int 	open(const char *path, int oflag);
	int     close(int fd);
	ssize_t read(int fd, void *buf, size_t nbytes);
	ssize_t write(int fd, const void *buf, size_t nbytes);
};
