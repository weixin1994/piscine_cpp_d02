#ifndef _FEDERATION_H_
#define _FEDERATION_H_
#include <iostream>
#include "Warpsystem.hh"

namespace Federation 
{
	namespace Starfleet 
	{
		class Captain
		{
			private:	
				std::string _name;
				int	_age;

			public:
				Captain(std::string name);
				std::string getName();
				int	getAge();
				void setAge(int);
		};
		
		class Ship 
		{
			private:
				int	_length;
				int	_width;
				std::string	_name;
				short _maxWarp;
				WarpSystem::Core *_core;
				Captain	*_captain;
				
			public:
				Ship(int length, int width, std::string name, short maxWrap);
				void getName();
				void setupCore(WarpSystem::Core *);
				void checkCore();
				void promote(Captain *);
		};

		class Ensign 
		{
			private:
				std::string _name;
				
			public:
				explicit Ensign(std::string name);
		};
	}

	class Ship 
	{
		private:
			int	_length;
			int	_width;
			std::string	_name;
			short	_maxWarp;
			WarpSystem::Core *_core;
		public:
			Ship(int length, int width, std::string name);
			void getName();
			void setupCore(WarpSystem::Core *);
			void checkCore();		
	};
}

#endif /* ! _FEDERATION_H_ */
