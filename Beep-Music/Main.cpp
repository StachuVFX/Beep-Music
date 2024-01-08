#include "BeepMusic.h"

int main()
{
	BeepMusic music;
	float* c = music.C;
	float* d = music.D;
	float* e = music.E;
	float* f = music.F;
	float* g = music.G;
	float* a = music.A;
	float* b = music.B;

	float* cis = music.Cis;
	float* dis = music.Dis;
	float* fis = music.Fis;
	float* gis = music.Gis;
	float* ais = music.Ais;

	float* dm = cis;
	float* em = dis;
	float* gm = fis;
	float* am = gis;
	float* bm = ais;

	BeepMusic::Song megaMan3("Mega Man 3 Title", 140);
	megaMan3.m_Notes = std::vector<BeepMusic::Note> {
		BeepMusic::Note(cis[5], 1500),

		BeepMusic::Note(fis[4], music.Eighth),
		BeepMusic::Note(cis[5], music.Eighth),
		BeepMusic::Note(b[4], music.Eighth),
		BeepMusic::Note(cis[5], 1500),

		BeepMusic::Note(a[4], music.Quarter),
		BeepMusic::Note(fis[4], music.Quarter),
		BeepMusic::Note(e[5], music.Quarter),
		BeepMusic::Note(dis[5], 1500),

		BeepMusic::Note(fis[4], music.Eighth),
		BeepMusic::Note(cis[5], music.Eighth),
		BeepMusic::Note(b[4], music.Eighth),
		BeepMusic::Note(d[5], 1500),

		BeepMusic::Note(gis[4], music.Eighth),
		BeepMusic::Note(cis[5], music.Eighth),
		BeepMusic::Note(b[4], music.Eighth),
		BeepMusic::Note(cis[5], music.Eighth),
		BeepMusic::Note(a[4], music.Eighth),
		BeepMusic::Note(fis[4], 1500),
	};
	megaMan3.Play();
}
