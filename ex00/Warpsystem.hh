#ifndef _WARPSYSTEM_
#define _WARPSYSTEM_

namespace WarpSystem
{
	class QuantumReactor
	{
		public:
			QuantumReactor();
			~QuantumReactor();
			bool isStable();
			void setStability(bool _stability);
		private:
			bool _stability;
	};

	class Core
	{
		public:
			Core(QuantumReactor *);
			~Core();
			QuantumReactor *checkReactor();
		private:
			QuantumReactor *_coreReactor;
	};
}

#endif /* ! _WARPSYSTEM_H_ */
