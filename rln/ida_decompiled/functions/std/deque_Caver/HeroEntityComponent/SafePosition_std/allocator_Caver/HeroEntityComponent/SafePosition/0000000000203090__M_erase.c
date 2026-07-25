/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203090
 * Mangled: ._ZNSt5dequeIN5Caver19HeroEntityComponent12SafePositionESaIS2_EE8_M_eraseESt15_Deque_iteratorIS2_RS2_PS2_E
 * Demangled: std::deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_erase(std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition&,Caver::HeroEntityComponent::SafePosition*>)
 *
 * Callers: 1
 *   0x0000000000272780  Caver::HeroEntityComponent::AddSafePosition(void)
 *
 * Callees: 1
 *   0x0000000000274FB4  std::deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_erase(std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition&,Caver::HeroEntityComponent::SafePosition*>)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203098 string=0x000000000020309C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::deque<Caver::HeroEntityComponent::SafePosition>::_M_erase()
{
  return _ZNSt5dequeIN5Caver19HeroEntityComponent12SafePositionESaIS2_EE8_M_eraseESt15_Deque_iteratorIS2_RS2_PS2_E();
}

