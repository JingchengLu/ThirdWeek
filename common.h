/*************************************************************************
	> File Name: common.h
	> Author: suyelu
	> Mail: suyelu@126.com
	> Created Time: Mon 06 Jul 2020 04:26:44 PM CST
 ************************************************************************/

#ifndef _COMMON_H
#define _COMMON_H
int socket_create(int port);
void make_block(int fd);
void make_non_block(int fd);
#ifdef _D
#define DBG(fmt, args...) printf(fmt, ##argc)
#else
#define DBG(fmt, args...)
#endif

#endif