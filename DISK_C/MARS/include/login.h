#ifndef _LOGIN_H_
#define _LOGIN_H_
void func_login1();
void func_login2();
void inputid(char* id, int x1, int y1, int charnum, int color);//�����˺�
void inputpassword(char* id, int x1, int y1, int charnum, int color);//��������
void lightbutton_admin(int x, int y, int x1, int y1, int color1, int color2, int flag);//�ı䰴ť��ɫ
//void recoverbutton_admin(int status);�ָ���ť��ɫ
int judge_login(char* id, char* pass);//�ж��˺������Ƿ���ȷ
#endif