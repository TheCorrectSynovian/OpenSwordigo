/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA1D0
 * Mangled: ._ZN5Caver5ImageD2Ev
 * Demangled: Caver::Image::~Image()
 *
 * Callers: 1
 *   0x00000000004C9900  Caver::Texture::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 1
 *   0x00000000004D227C  Caver::Image::~Image()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA1D8 string=0x00000000001FA1DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Image::~Image(Caver::Image *this)
{
  _ZN5Caver5ImageD2Ev(this);
}

