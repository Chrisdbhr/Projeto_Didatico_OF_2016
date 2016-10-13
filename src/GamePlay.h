#pragma once
#include "ofMain.h"
#include "GameManager.h"

class GamePlay 
{
public:
	ofImage m_bg;
	ofSoundPlayer m_ambient;

	Transition *transicao;

	ofImage m_camera1;
	ofImage m_camera2;
	ofImage m_camera4;
	ofImage m_monitorHud;

	Button *m_room1; // Camera 1
	Button *m_room2; // Camera 2
	Button *m_room3; // Camera 3
	Button *m_room4; // Camera 4
	Button *m_monitor; // Ligar e desligar o monitor
	Button *m_lights; // Ligar e desligar as luzes
	
	void m_cameraOff(); // Desenha o efeito de Camera Desligada
	ofSoundPlayer m_sndCameraOff; // Som da statica
	float m_cameraTempoEfeitoTroca = 0; // Tempo para reproduzir o efeito de troca de camera

	GamePlay();
	~GamePlay();
	
	int m_cameraNaTela; // comeca sem nada mostrando, depois ou fica com a camera ou estatico

	void update(GameManager *game);
	void draw();

};

