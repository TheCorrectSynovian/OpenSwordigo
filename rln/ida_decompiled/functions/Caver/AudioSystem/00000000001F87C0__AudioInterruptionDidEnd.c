/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F87C0
 * Mangled: ._ZN5Caver11AudioSystem23AudioInterruptionDidEndEv
 * Demangled: Caver::AudioSystem::AudioInterruptionDidEnd(void)
 *
 * Callers: 1
 *   0x0000000000478ED0  Java_com_touchfoo_swordigo_Native_applicationDidBecomeActive
 *
 * Callees: 1
 *   0x000000000047ED10  Caver::AudioSystem::AudioInterruptionDidEnd(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F87C8 string=0x00000000001F87CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AudioSystem::AudioInterruptionDidEnd(Caver::AudioSystem *this)
{
  return _ZN5Caver11AudioSystem23AudioInterruptionDidEndEv(this);
}

