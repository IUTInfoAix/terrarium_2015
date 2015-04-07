int moc_esp8266::open	(const char *path, int oflag)
{
	if (strcmp("/dev/ttyS0", path)){
		moc_esp8266.fd = 32987;
		return moc_esp8266.fd;
	}
	else{
		return -1;
	}
}

int moc_esp8266::close 	(int fd)
{
	if (moc_esp8266.fd != -1){
		moc_esp8266.fd = -1;
		return 0;
	}
	else return -1;
}

ssize_t moc_esp8266::read	(int fd, void *buf, size_t nbytes)
{
	if (nbytes == 0)
		return 0;
	
}

ssize_t moc_esp8266::write	(int fd, const void *buf, size_t nbytes)
{

}
