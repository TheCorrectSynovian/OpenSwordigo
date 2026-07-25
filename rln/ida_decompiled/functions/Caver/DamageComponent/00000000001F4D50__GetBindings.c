/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4D50
 * Mangled: ._ZN5Caver15DamageComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::DamageComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x0000000000264088  Caver::StringForDamageType(Caver::DamageType)
 *
 * Callees: 1
 *   0x0000000000264088  Caver::StringForDamageType(Caver::DamageType)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4D58 string=0x00000000001F4D5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::DamageComponent::GetBindings()
{
  JUMPOUT(0x2641E4);
}

