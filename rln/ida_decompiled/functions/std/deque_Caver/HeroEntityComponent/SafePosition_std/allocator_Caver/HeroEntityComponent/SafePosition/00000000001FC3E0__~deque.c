/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC3E0
 * Mangled: ._ZNSt5dequeIN5Caver19HeroEntityComponent12SafePositionESaIS2_EED2Ev
 * Demangled: std::deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::~deque()
 *
 * Callers: 1
 *   0x0000000000273CA4  Caver::HeroEntityComponent::TargetObject(boost::intrusive_ptr<Caver::SceneObject> const&,int)
 *
 * Callees: 1
 *   0x0000000000274B68  std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_create_node(std::pair<std::string const,int> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC3E8 string=0x00000000001FC3EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::deque<Caver::HeroEntityComponent::SafePosition>::~deque()
{
  JUMPOUT(0x274BCC);
}

