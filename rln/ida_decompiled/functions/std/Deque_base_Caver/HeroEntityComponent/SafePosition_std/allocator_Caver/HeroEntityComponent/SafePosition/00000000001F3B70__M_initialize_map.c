/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3B70
 * Mangled: ._ZNSt11_Deque_baseIN5Caver19HeroEntityComponent12SafePositionESaIS2_EE17_M_initialize_mapEm
 * Demangled: std::_Deque_base<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_initialize_map(ulong)
 *
 * Callers: 1
 *   0x0000000000271E60  Caver::HeroEntityComponent::HeroEntityComponent(void)
 *
 * Callees: 1
 *   0x0000000000274E18  std::_Deque_base<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_initialize_map(ulong)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3B78 string=0x00000000001F3B7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Deque_base<Caver::HeroEntityComponent::SafePosition>::_M_initialize_map()
{
  return _ZNSt11_Deque_baseIN5Caver19HeroEntityComponent12SafePositionESaIS2_EE17_M_initialize_mapEm();
}

