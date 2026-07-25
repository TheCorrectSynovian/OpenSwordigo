/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA160
 * Mangled: ._ZN5Caver14TextureLibrary16SetSharedLibraryEPS0_
 * Demangled: Caver::TextureLibrary::SetSharedLibrary(Caver::TextureLibrary*)
 *
 * Callers: 2
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *
 * Callees: 1
 *   0x00000000004CC370  Caver::TextureLibrary::SetSharedLibrary(Caver::TextureLibrary*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA168 string=0x00000000001FA16C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TextureLibrary::SetSharedLibrary(Caver::TextureLibrary *this, Caver::TextureLibrary *a2)
{
  return _ZN5Caver14TextureLibrary16SetSharedLibraryEPS0_(this, a2);
}

