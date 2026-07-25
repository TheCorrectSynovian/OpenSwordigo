/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5090
 * Mangled: ._ZNK5Caver9Component28GetEnumValuesForBindedOutletElPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: Caver::Component::GetEnumValuesForBindedOutlet(long,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 4
 *   0x000000000021F2B8  Caver::BlendAnimationComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x000000000021F2D0  `non-virtual thunk to'Caver::BlendAnimationComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x0000000000242650  Caver::Component::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x0000000000242CC4  `non-virtual thunk to'Caver::Component::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callees: 1
 *   0x00000000002426E4  Caver::Component::GetEnumValuesForBindedOutlet(long,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5098 string=0x00000000001F509C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::Component::GetEnumValuesForBindedOutlet()
{
  return _ZNK5Caver9Component28GetEnumValuesForBindedOutletElPSt6vectorINS_12BindingValueESaIS2_EE();
}

