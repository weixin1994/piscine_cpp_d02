#include "Warpsystem.hh"

WarpSystem::QuantumReactor::QuantumReactor()
{
	this->_stability = true;
}

WarpSystem::QuantumReactor::~QuantumReactor()
{
}

bool WarpSystem::QuantumReactor::isStable()
{
	return (this->_stability);
}

void WarpSystem::QuantumReactor::setStability(bool stability)
{
	this->_stability = stability;
}

WarpSystem::Core::Core(QuantumReactor *Reactor)
{
	this->_coreReactor = Reactor;
}

WarpSystem::Core::~Core()
{
}

WarpSystem::QuantumReactor *WarpSystem::Core::checkReactor()
{
	return (this->_coreReactor);
}
