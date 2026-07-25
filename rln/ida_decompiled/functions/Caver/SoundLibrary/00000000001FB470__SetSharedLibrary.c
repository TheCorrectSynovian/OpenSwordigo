/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB470
 * Mangled: ._ZN5Caver12SoundLibrary16SetSharedLibraryEPS0_
 * Demangled: Caver::SoundLibrary::SetSharedLibrary(Caver::SoundLibrary*)
 *
 * Callers: 2
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *
 * Callees: 1
 *   0x00000000004853D0  Caver::SoundLibrary::SetSharedLibrary(Caver::SoundLibrary*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB478 string=0x00000000001FB47C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SoundLibrary::SetSharedLibrary(Caver::SoundLibrary *this, Caver::SoundLibrary *a2)
{
  return _ZN5Caver12SoundLibrary16SetSharedLibraryEPS0_(this, a2);
}

