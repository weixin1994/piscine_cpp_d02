
#ifndef _BORG_
#define _BORG_

#include <iostream>
#include <cctype>
#include "Warpsystem.hh"
#include "Federation.hh"
#include "Destination.hh"

namespace Borg
{
	class Ship
	{
		public:
			Ship();
			~Ship();
			void setupCore(WarpSystem::Core *);
			void checkCore();
			bool move(int warp, Destination d);
			bool move(int warp);
			bool move(Destination d);
			bool move();
		private:
			int _side;
			short _maxWarp;
			WarpSystem::Core *_core;
			Destination _location;
			Destination _home;
	};
}

#endif
