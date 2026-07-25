/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC360
 * Mangled: ._ZN5Caver7Texture11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::Texture::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x00000000004C9900  Caver::Texture::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 1
 *   0x00000000004C9900  Caver::Texture::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC368 string=0x00000000001FC36C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Texture::GetBindings(Caver::Texture *this)
{
  return _ZN5Caver7Texture11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE(this);
}

