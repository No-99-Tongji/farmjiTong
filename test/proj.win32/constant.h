#pragma once
#ifndef _CONSTANT_H_
#define _CONSTANT_H_

#include <map>
#include <string>

// Ӧ�ó�������
constexpr int DESIGN_RESOLUTION_WIDTH = 1280;                               // ��Ʒֱ��ʿ��
constexpr int DESIGN_RESOLUTION_HEIGHT = 720;                               // ��Ʒֱ��ʸ߶�
constexpr int SMALL_RESOLUTION_WIDTH = 960;                                 // С�ֱ��ʿ��
constexpr int SMALL_RESOLUTION_HEIGHT = 540;                                // С�ֱ��ʸ߶�
constexpr int MEDIUM_RESOLUTION_WIDTH = 1280;                               // �зֱ��ʿ��
constexpr int MEDIUM_RESOLUTION_HEIGHT = 720;                               // �зֱ��ʸ߶�
constexpr int LARGE_RESOLUTION_WIDTH = 1920;                                // ��ֱ��ʿ��
constexpr int LARGE_RESOLUTION_HEIGHT = 1080;                               // ��ֱ��ʸ߶�
constexpr float FRAME_RATE = 60.0f;                                         // Ӧ�ó���֡��
const std::string APPLICATION_TITLE = u8"��¶������ Stardew Valley";// Ӧ�ó������

// ��ɫ����
constexpr int DARK_BLUE_R = 0;                                              // ����ɫ R ͨ��
constexpr int DARK_BLUE_G = 32;                                             // ����ɫ G ͨ��
constexpr int DARK_BLUE_B = 96;                                             // ����ɫ B ͨ��
constexpr int GOLDEN_R = 223;                                               // ���ɫ R ͨ��
constexpr int GOLDEN_G = 176;                                               // ���ɫ G ͨ��
constexpr int GOLDEN_B = 11;                                                // ���ɫ B ͨ��

// ������������
constexpr int STARTUP_SCENE_FONT_SIZE = 20;                                 // �������������С
constexpr int STARTUP_SCENE_LOADINGBAR_OFFSET_Y = -241;                     // �����������ؽ�����λ�� Y ƫ����
constexpr int STARTUP_SCENE_LOADING_LABEL_OFFSET_X = -30;                   // �����������ؽ�������ǩλ�� X ƫ����
constexpr float STARTUP_SCENE_DURATION = 2.0f;                              // ������������ʱ��
constexpr float SCENE_TRANSITION_DURATION = 0.3f;

#endif // !_CONSTANT_H_