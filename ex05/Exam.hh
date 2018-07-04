#ifndef _EXAM_H_
#define _EXAM_H_

class Exam 
{
	public:
		static bool cheat;
		void (Exam::*kobayashiMaru)(int) const;

		Exam(bool *cheat_ptr);
		bool isCheating() const;
		void start(int klingons) const;

	private:
		bool *_cheat;
};

#endif
