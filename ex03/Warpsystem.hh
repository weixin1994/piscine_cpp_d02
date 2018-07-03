#ifndef _WARPSYSTEM_HH_
#define _WARPSYSTEM_HH_

namespace WarpSystem
{
    class QuantumReactor 
    {
		private:
			bool _stability;
		public:
			bool  isStable ();
			void  setStability(bool);
			QuantumReactor();
			QuantumReactor(bool);
    };

    class Core 
    {
		private:
			QuantumReactor *_coreReactor;

		public:
			Core(QuantumReactor*);
			QuantumReactor *checkReactor();
			QuantumReactor *getReactor();
    };
}

#endif
