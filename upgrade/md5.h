
#ifndef __MD5_INCLUDED__
#define __MD5_INCLUDED__
#include <stdio.h>

//MD5ժҪֵ�ṹ��
typedef struct MD5VAL_STRUCT
{
	unsigned int a;
	unsigned int b;
	unsigned int c;
	unsigned int d;
} MD5VAL;

//�����ַ�����MD5ֵ(����ָ���������ɺ�������)
MD5VAL md5(char *str, unsigned int size );

//MD5�ļ�ժҪ
MD5VAL md5File(FILE *fpin);

#endif
