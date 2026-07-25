/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200490
 * Mangled: ._ZN5Caver12ModelLibrary16SetSharedLibraryEPS0_
 * Demangled: Caver::ModelLibrary::SetSharedLibrary(Caver::ModelLibrary*)
 *
 * Callers: 2
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *
 * Callees: 1
 *   0x000000000044B4C0  Caver::ModelLibrary::SetSharedLibrary(Caver::ModelLibrary*)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200498 string=0x000000000020049C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ModelLibrary::SetSharedLibrary(Caver::ModelLibrary *this, Caver::ModelLibrary *a2)
{
  return _ZN5Caver12ModelLibrary16SetSharedLibraryEPS0_(this, a2);
}

