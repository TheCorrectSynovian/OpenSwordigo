/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000256BA0
 * Mangled: _ZThn16_N5Caver27CharAnimControllerComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: `non-virtual thunk to'Caver::CharAnimControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FCD60  Caver::AnimationControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Referenced strings: 2
 *   insn=0x0000000000256BA0 string=0x0000000000256BA4 "o"
 *   insn=0x0000000000256BA4 string=0x00000000001FCD60 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 `non-virtual thunk to'Caver::CharAnimControllerComponent::GetBindings()
{
  return Caver::AnimationControllerComponent::GetBindings();
}

