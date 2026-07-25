/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE080
 * Mangled: ._ZSt13copy_backwardIN5Caver19HeroEntityComponent12SafePositionEESt15_Deque_iteratorIT_RS4_PS4_ES3_IS4_RKS4_PS8_ESB_S7_
 * Demangled: std::copy_backward<Caver::HeroEntityComponent::SafePosition>(std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition const&,Caver::HeroEntityComponent::SafePosition const*>,std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition const&,Caver::HeroEntityComponent::SafePosition const*>,std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition&,Caver::HeroEntityComponent::SafePosition*>)
 *
 * Callers: 1
 *   0x0000000000274FB4  std::deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_erase(std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition&,Caver::HeroEntityComponent::SafePosition*>)
 *
 * Callees: 1
 *   0x00000000002752B4  std::copy_backward<Caver::HeroEntityComponent::SafePosition>(std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition const&,Caver::HeroEntityComponent::SafePosition const*>,std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition const&,Caver::HeroEntityComponent::SafePosition const*>,std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition&,Caver::HeroEntityComponent::SafePosition*>)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE088 string=0x00000000001FE08C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::copy_backward<Caver::HeroEntityComponent::SafePosition>()
{
  return _ZSt13copy_backwardIN5Caver19HeroEntityComponent12SafePositionEESt15_Deque_iteratorIT_RS4_PS4_ES3_IS4_RKS4_PS8_ESB_S7_();
}

