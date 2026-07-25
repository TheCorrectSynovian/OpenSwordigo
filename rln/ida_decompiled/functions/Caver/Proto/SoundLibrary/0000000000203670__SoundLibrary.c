/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203670
 * Mangled: ._ZN5Caver5Proto12SoundLibraryC2Ev
 * Demangled: Caver::Proto::SoundLibrary::SoundLibrary(void)
 *
 * Callers: 1
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *
 * Callees: 1
 *   0x00000000002D7FEC  Caver::Proto::SoundEffect::GetTypeName(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000203674 string=0x00000000002D8044 "h "
 *   insn=0x0000000000203678 string=0x000000000020367C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::SoundLibrary::SoundLibrary(Caver::Proto::SoundLibrary *this)
{
  JUMPOUT(0x2D8044);
}

