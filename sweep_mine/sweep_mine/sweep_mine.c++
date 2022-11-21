#include"game.h"
//��������������¼�򿪵ĸ��ӵ�����
int cnt = 0;

bool isOver = false; 
int main ()
{
	//����ͼ�񴰿�
	initgraph(COL*IMGW,ROW*IMGW);

	//�������������
	srand((unsigned int)time(NULL));

	//������Ϸ��ͼ
	int map[ROW][COL] = { 0 };
	//��ʼ������
	initMap(map);
	//������ת�ɶ�Ӧ��ͼ�ν���
	IMAGE img[12];//����ͼƬ����
	//����ͼƬ
	for (int i = 0; i < 12; i++)
	{
		char fileName[50] = { 0 };
		sprintf(fileName, "./images/%d.jpg", i);
		loadimage(img + i, fileName, IMGW, IMGW);
	}

	//���������������ת���ɶ�Ӧ��ͼƬ����ͼ����ͼ�δ�����
	while(true)
	{
		mouseEvent(map, img);
		drawMap(map, img);
		if (isOver)
		{
			int ret =MessageBox(GetHWnd(), "��ȵ����ˣ�����һ�ѣ�", "��ʾ��", MB_OKCANCEL);
			if (ret == IDOK)
			{
				initMap(map);
				showMap(map);
				isOver = false;
			}
			else if(ret == IDCANCEL)
			{
				exit(666);
			}
		}
	}
	//��ʾ��ͼ
	showMap(map);
	return 0;
}