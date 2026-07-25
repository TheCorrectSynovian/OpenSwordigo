/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202D40
 * Mangled: ._ZNSt5dequeIN5Caver19HeroEntityComponent12SafePositionESaIS2_EE17_M_reallocate_mapEmb
 * Demangled: std::deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_reallocate_map(ulong,bool)
 *
 * Callers: 2
 *   0x0000000000272780  Caver::HeroEntityComponent::AddSafePosition(void)
 *   0x0000000000273CA4  Caver::HeroEntityComponent::TargetObject(boost::intrusive_ptr<Caver::SceneObject> const&,int)
 *
 * Callees: 1
 *   0x0000000000275804  std::deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_reallocate_map(ulong,bool)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202D48 string=0x0000000000202D4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::deque<Caver::HeroEntityComponent::SafePosition>::_M_reallocate_map()
{
  return _ZNSt5dequeIN5Caver19HeroEntityComponent12SafePositionESaIS2_EE17_M_reallocate_mapEmb();
}

