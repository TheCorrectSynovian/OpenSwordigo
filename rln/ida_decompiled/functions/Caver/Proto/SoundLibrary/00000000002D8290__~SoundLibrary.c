/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D8290
 * Mangled: _ZN5Caver5Proto12SoundLibraryD0Ev
 * Demangled: Caver::Proto::SoundLibrary::~SoundLibrary()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000203720  Caver::Proto::SoundLibrary::~SoundLibrary()
 *   0x00000000002D82C8  Caver::Proto::SoundLibrary::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 2
 *   insn=0x00000000002D829C string=0x00000000002D82A0 " "
 *   insn=0x00000000002D82B0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SoundLibrary::~SoundLibrary(Caver::Proto::SoundLibrary *this)
{
  Caver::Proto::SoundLibrary::~SoundLibrary(this);
  operator delete(this);
}

