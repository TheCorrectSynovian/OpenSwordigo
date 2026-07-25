/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3970
 * Mangled: ._ZN5Caver5ImageC2Ev
 * Demangled: Caver::Image::Image(void)
 *
 * Callers: 1
 *   0x00000000004C9900  Caver::Texture::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 1
 *   0x00000000004D20B8  Caver::Image::Image(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3978 string=0x00000000001F397C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Image::Image(Caver::Image *this)
{
  return _ZN5Caver5ImageC2Ev(this);
}

