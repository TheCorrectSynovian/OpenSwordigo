/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000299FF0
 * Mangled: _ZN5Caver31MonsterDeathControllerComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::MonsterDeathControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000299FF0 string=0x00000000001FB3B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MonsterDeathControllerComponent::GetBindings(Caver::Component *a1)
{
  return Caver::Component::GetBindings(a1);
}

