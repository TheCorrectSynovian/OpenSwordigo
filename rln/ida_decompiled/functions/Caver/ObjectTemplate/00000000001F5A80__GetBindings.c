/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5A80
 * Mangled: ._ZN5Caver14ObjectTemplate11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::ObjectTemplate::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x0000000000460284  Caver::ObjectTemplate::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 1
 *   0x0000000000460284  Caver::ObjectTemplate::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5A88 string=0x00000000001F5A8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ObjectTemplate::GetBindings()
{
  return _ZN5Caver14ObjectTemplate11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE();
}

