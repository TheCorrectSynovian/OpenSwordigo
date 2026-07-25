/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB870
 * Mangled: ._ZNSt11_Deque_baseIN5Caver19HeroEntityComponent12SafePositionESaIS2_EE15_M_create_nodesEPPS2_S6_
 * Demangled: std::_Deque_base<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_create_nodes(Caver::HeroEntityComponent::SafePosition**,Caver::HeroEntityComponent::SafePosition**)
 *
 * Callers: 1
 *   0x0000000000274E18  std::_Deque_base<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_initialize_map(ulong)
 *
 * Callees: 1
 *   0x0000000000274E18  std::_Deque_base<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_initialize_map(ulong)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB878 string=0x00000000001FB87C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::_Deque_base<Caver::HeroEntityComponent::SafePosition>::_M_create_nodes()
{
  JUMPOUT(0x274F14);
}

