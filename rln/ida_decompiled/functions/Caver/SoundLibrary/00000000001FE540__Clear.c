/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE540
 * Mangled: ._ZN5Caver12SoundLibrary5ClearEv
 * Demangled: Caver::SoundLibrary::Clear(void)
 *
 * Callers: 1
 *   0x000000000047E774  Caver::AudioSystem::Shutdown(void)
 *
 * Callees: 1
 *   0x0000000000485AAC  Caver::SoundLibrary::Clear(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE548 string=0x00000000001FE54C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SoundLibrary::Clear(Caver::SoundLibrary *this)
{
  return _ZN5Caver12SoundLibrary5ClearEv(this);
}

