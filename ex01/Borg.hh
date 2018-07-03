#ifndef _BORG_H_
#define _BORG_H_

#include <iostream>
#include <cctype>
#include "Warpsystem.hh"
#include "Federation.hh"

namespace Borg
{
	class Ship
	{
		public:
			Ship();
			~Ship();
			void setupCore(WarpSystem::Core *);
			void checkCore();
			
		private:
			int _side;
			short _maxWarp;
			WarpSystem::Core *_core;
	};
}

#endif /* ! _BORG_H_ */
