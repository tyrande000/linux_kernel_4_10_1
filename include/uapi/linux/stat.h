#ifndef _UAPI_LINUX_STAT_H
#define _UAPI_LINUX_STAT_H


#if defined(__KERNEL__) || !defined(__GLIBC__) || (__GLIBC__ < 2)

#define S_IFMT  00170000
#define S_IFSOCK 0140000
#define S_IFLNK	 0120000
#define S_IFREG  0100000
#define S_IFBLK  0060000
#define S_IFDIR  0040000
#define S_IFCHR  0020000
#define S_IFIFO  0010000
#define S_ISUID  0004000
#define S_ISGID  0002000
#define S_ISVTX  0001000

#define S_ISLNK(m)	(((m) & S_IFMT) == S_IFLNK)
#define S_ISREG(m)	(((m) & S_IFMT) == S_IFREG)
#define S_ISDIR(m)	(((m) & S_IFMT) == S_IFDIR)
#define S_ISCHR(m)	(((m) & S_IFMT) == S_IFCHR)
#define S_ISBLK(m)	(((m) & S_IFMT) == S_IFBLK)
#define S_ISFIFO(m)	(((m) & S_IFMT) == S_IFIFO)
#define S_ISSOCK(m)	(((m) & S_IFMT) == S_IFSOCK)

#define S_IRWXU 00700
#define S_IRUSR 00400		//Read permission bit for the owner of the file. On many systems this bit is 0400
#define S_IWUSR 00200		//Write permission bit for the owner of the file. Usually 0200
#define S_IXUSR 00100		//Execute (for ordinary files) or search (for directories) permission bit for the owner of the file. Usually 0100

#define S_IRWXG 00070
#define S_IRGRP 00040		//Read permission bit for the group owner of the file. Usually 040.
#define S_IWGRP 00020		//Write permission bit for the group owner of the file. Usually 020.
#define S_IXGRP 00010		//Execute or search permission bit for the group owner of the file. Usually 010.

#define S_IRWXO 00007
#define S_IROTH 00004		//Read permission bit for other users. Usually 04.
#define S_IWOTH 00002		//Write permission bit for other users. Usually 02.
#define S_IXOTH 00001		//Execute or search permission bit for other users. Usually 01.

#endif


#endif /* _UAPI_LINUX_STAT_H */
