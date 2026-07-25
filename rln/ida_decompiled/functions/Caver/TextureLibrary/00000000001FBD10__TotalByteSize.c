/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBD10
 * Mangled: ._ZN5Caver14TextureLibrary13TotalByteSizeEv
 * Demangled: Caver::TextureLibrary::TotalByteSize(void)
 *
 * Callers: 1
 *   0x00000000003CC280  Caver::DebugInfoOverlay::Update(float)
 *
 * Callees: 1
 *   0x00000000004CDA98  Caver::TextureLibrary::TotalByteSize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBD18 string=0x00000000001FBD1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TextureLibrary::TotalByteSize(Caver::TextureLibrary *this)
{
  return _ZN5Caver14TextureLibrary13TotalByteSizeEv(this);
}

