/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAC00
 * Mangled: ._ZN5Caver11AudioSystemC2Ev
 * Demangled: Caver::AudioSystem::AudioSystem(void)
 *
 * Callers: 1
 *   0x000000000047E32C  Caver::AudioSystem::sharedSystem(void)
 *
 * Callees: 1
 *   0x000000000047E3D4  Caver::AudioSystem::AudioSystem(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAC08 string=0x00000000001FAC0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AudioSystem::AudioSystem(Caver::AudioSystem *this)
{
  return _ZN5Caver11AudioSystemC2Ev(this);
}

