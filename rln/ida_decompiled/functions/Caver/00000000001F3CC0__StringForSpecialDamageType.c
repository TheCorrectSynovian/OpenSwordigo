/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3CC0
 * Mangled: ._ZN5Caver26StringForSpecialDamageTypeENS_17SpecialDamageTypeE
 * Demangled: Caver::StringForSpecialDamageType(Caver::SpecialDamageType)
 *
 * Callers: 4
 *   0x0000000000254FF4  Caver::BreakableObjectComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000002553A0  Caver::BreakableObjectComponent::ValueForBindedProperty(int)
 *   0x00000000002652DC  Caver::DamageComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000002659DC  Caver::DamageComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x0000000000264088  Caver::StringForDamageType(Caver::DamageType)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3CC8 string=0x00000000001F3CCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::StringForSpecialDamageType()
{
  JUMPOUT(0x264124);
}

