#ifndef MON_SYSINFO_H
#define MON_SYSINFO_H
 
float	process(char *command);
 
float	INODE(const char * mountPoint);
float	FILESIZE(const char * filename);
float	DF(const char * mountPoint);
float	getPROC(char *file,int lineno,int fieldno);
float	FREEMEM(void);
float	TOTALMEM(void);
float	SHAREDMEM(void);
float	BUFFERSMEM(void);
float	CACHEDMEM(void);
float	PING(void);
float	PROCCOUNT(void);
float	PROCLOAD(void);
float	PROCLOAD5(void);
float	PROCLOAD15(void);
float	SWAPFREE(void);
float	SWAPTOTAL(void);
float	TCP_LISTEN(const char *porthex);
float	UPTIME(void);
float	EXECUTE(char *command);

#define COMMAND struct command_type
COMMAND
{
	char	*key;
	void	*function;
	char	*parameter;
};


#endif
