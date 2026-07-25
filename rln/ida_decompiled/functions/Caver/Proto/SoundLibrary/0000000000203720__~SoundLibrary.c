/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203720
 * Mangled: ._ZN5Caver5Proto12SoundLibraryD2Ev_0
 * Demangled: Caver::Proto::SoundLibrary::~SoundLibrary()
 *
 * Callers: 1
 *   0x00000000002D8290  Caver::Proto::SoundLibrary::~SoundLibrary()
 *
 * Callees: 1
 *   0x00000000002D807C  Caver::Proto::SoundLibrary::SoundLibrary(Caver::Proto::SoundLibrary const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203728 string=0x000000000020372C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::SoundLibrary::~SoundLibrary(Caver::Proto::SoundLibrary *this)
{
  JUMPOUT(0x2D81F0);
}

