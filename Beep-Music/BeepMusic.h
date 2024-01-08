#pragma once

#include <iostream>
#include <vector>
#include <Windows.h>

class BeepMusic
{
	// variables
public:
	float C[9] = {
		16.3516f,
		32.7032f,
		65.4064f,
		130.813f,
		261.626f,
		523.251f,
		1046.50f,
		2093.00f,
		4186.01f
	};
	float D[9] = {
		18.3540f,
		36.7080f,
		73.4161f,
		146.832f,
		293.664f,
		587.329f,
		1174.66f,
		2349.31f,
		4698.63f
	};
	float E[9] = {
		20.6017f,
		41.2034f,
		82.4069f,
		164.814f,
		329.628f,
		659.255f,
		1318.51f,
		2637.02f,
		5274.04f
	};
	float F[9] = {
		21.8268f,
		43.6535f,
		87.3070f,
		174.614f,
		349.228f,
		698.456f,
		1396.91f,
		2793.82f,
		5587.65f
	};
	float G[9] = {
		24.4997f,
		48.9995f,
		97.9989f,
		195.998f,
		391.996f,
		783.991f,
		1567.98f,
		3135.97f,
		6271.93f
	};
	float A[9] = {
		27.500f,
		55.000f,
		110.00f,
		220.00f,
		440.00f,
		880.00f,
		1760.0f,
		3520.0f,
		7040.0f
	};
	float B[9] = {
		30.8677f,
		61.7354f,
		123.471f,
		246.942f,
		493.883f,
		987.766f,
		1975.53f,
		3951.06f,
		7902.13f
	};

	float Cis[9] = {
		17.3239f,
		34.6478f,
		69.2956f,
		138.591f,
		277.182f,
		554.365f,
		1108.73f,
		2217.46f,
		4434.92f
	};
	float Dis[9] = {
		19.4454f,
		38.8909f,
		77.7817f,
		155.563f,
		311.127f,
		622.254f,
		1244.51f,
		2489.01f,
		4978.03f
	};
	float Fis[9] = {
			23.1246f,
			46.2493f,
			92.4986f,
			184.997f,
			369.994f,
			739.989f,
			1479.98f,
			2959.96f,
			5919.91f
	};
	float Gis[9] = {
		25.9566f,
		51.9131f,
		103.826f,
		207.652f,
		415.305f,
		830.610f,
		1661.22f,
		3322.44f,
		6644.88f
	};
	float Ais[9] = {
		29.1352f,
		58.2705f,
		116.541f,
		233.082f,
		466.164f,
		932.328f,
		1864.66f,
		3729.31f,
		7458.62f
	};

	enum NoteLength
	{
		Full = 4000,
		Half = 2000,
		Quarter = 1000,
		Eighth = 500,
		Sixteenth = 250,
		ThirtySecond = 125
	};

	// classes
public:
	class Note
	{
	public:
		float m_Frequecy;
		float m_Duration;
	public:
		Note(float frequency, float duration) : m_Frequecy(frequency), m_Duration(duration) {}
		Note(float frequency, int duration) : m_Frequecy(frequency), m_Duration((float)duration) {}
	};

	class Song
	{
	private:
		std::string m_Name;
		int m_Tempo;
	public:
		std::vector<Note> m_Notes;
	public:
		Song(std::string name, int tempo = 100) : m_Name(name), m_Tempo(tempo) {}
		std::string GetName() { return m_Name; }
		void AddNote(Note note) { m_Notes.push_back(note); }
		void Play(int tempo = 0)
		{
			if (tempo > 0)
				m_Tempo = tempo;
			std::cout << "Playing song \"" << m_Name << "\"" << std::endl;
			for (int i = 0; i < m_Notes.size(); i++)
			{
				Note note = m_Notes[i];
				Beep(note.m_Frequecy, note.m_Duration * 60 / m_Tempo);
				std::cout << "Beep(" << note.m_Frequecy << ", " << note.m_Duration << ")" << std::endl;
			}
		}
	};
};
