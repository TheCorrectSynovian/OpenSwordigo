/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEA60
 * Mangled: ._ZN5Caver14TextureLibrary5ClearEv
 * Demangled: Caver::TextureLibrary::Clear(void)
 *
 * Callers: 1
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *
 * Callees: 1
 *   0x00000000004CD580  Caver::TextureLibrary::Clear(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEA68 string=0x00000000001FEA6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TextureLibrary::Clear(Caver::TextureLibrary *this)
{
  return _ZN5Caver14TextureLibrary5ClearEv(this);
}

