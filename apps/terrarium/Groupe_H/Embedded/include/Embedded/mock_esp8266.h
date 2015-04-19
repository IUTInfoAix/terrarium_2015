#include <sys/types.h>

public class moc_esp8266 {
	static int fd;
public:
	int 	mock_open(const char *path, int oflag);
	int     mock_close(int fd);
	ssize_t mock_read(int fd, void *buf, size_t nbytes);
	ssize_t mock_write(int fd, const void *buf, size_t nbytes);
};
