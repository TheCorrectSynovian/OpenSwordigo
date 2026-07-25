/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201B30
 * Mangled: ._ZN5Caver11FontLibrary16SetSharedLibraryEPS0_
 * Demangled: Caver::FontLibrary::SetSharedLibrary(Caver::FontLibrary*)
 *
 * Callers: 2
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *
 * Callees: 1
 *   0x00000000004C33F4  Caver::FontLibrary::SetSharedLibrary(Caver::FontLibrary*)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201B38 string=0x0000000000201B3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FontLibrary::SetSharedLibrary(Caver::FontLibrary *this, Caver::FontLibrary *a2)
{
  return _ZN5Caver11FontLibrary16SetSharedLibraryEPS0_(this, a2);
}

