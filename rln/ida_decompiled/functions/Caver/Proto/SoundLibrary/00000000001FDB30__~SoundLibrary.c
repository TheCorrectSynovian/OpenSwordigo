/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDB30
 * Mangled: ._ZN5Caver5Proto12SoundLibraryD2Ev
 * Demangled: Caver::Proto::SoundLibrary::~SoundLibrary()
 *
 * Callers: 1
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *
 * Callees: 1
 *   0x00000000002D807C  Caver::Proto::SoundLibrary::SoundLibrary(Caver::Proto::SoundLibrary const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDB38 string=0x00000000001FDB3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::SoundLibrary::~SoundLibrary(Caver::Proto::SoundLibrary *this)
{
  JUMPOUT(0x2D81F0);
}

