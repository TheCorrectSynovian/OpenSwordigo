/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023CD28
 * Mangled: _ZThn16_N5Caver19TextBubbleComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: `non-virtual thunk to'Caver::TextBubbleComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Referenced strings: 1
 *   insn=0x000000000023CD2C string=0x00000000001FB3B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::TextBubbleComponent::GetBindings(__int64 a1)
{
  return Caver::Component::GetBindings((Caver::Component *)(a1 - 16));
}

