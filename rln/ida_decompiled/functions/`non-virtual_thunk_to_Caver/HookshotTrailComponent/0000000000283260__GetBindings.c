/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000283260
 * Mangled: _ZThn16_N5Caver22HookshotTrailComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: `non-virtual thunk to'Caver::HookshotTrailComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4400  Caver::GlowComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Referenced strings: 2
 *   insn=0x0000000000283260 string=0x0000000000283264 "g"
 *   insn=0x0000000000283264 string=0x00000000001F4400 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 `non-virtual thunk to'Caver::HookshotTrailComponent::GetBindings()
{
  return Caver::GlowComponent::GetBindings();
}

