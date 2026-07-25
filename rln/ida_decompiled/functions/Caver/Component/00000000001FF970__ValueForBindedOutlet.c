/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF970
 * Mangled: ._ZNK5Caver9Component20ValueForBindedOutletERKN5boost13intrusive_ptrIS0_EE
 * Demangled: Caver::Component::ValueForBindedOutlet(boost::intrusive_ptr<Caver::Component> const&)
 *
 * Callers: 4
 *   0x000000000021F2EC  Caver::BlendAnimationComponent::ValueForBindedProperty(int)
 *   0x0000000000220E74  Caver::KeyframeAnimationComponent::ValueForBindedProperty(int)
 *   0x00000000002426E4  Caver::Component::GetEnumValuesForBindedOutlet(long,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x0000000000242D5C  Caver::Component::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x0000000000242D5C  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF978 string=0x00000000001FF97C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Component::ValueForBindedOutlet()
{
  JUMPOUT(0x242E98);
}

