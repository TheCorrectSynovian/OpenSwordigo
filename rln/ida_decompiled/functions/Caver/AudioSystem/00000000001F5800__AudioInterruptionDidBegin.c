/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5800
 * Mangled: ._ZN5Caver11AudioSystem25AudioInterruptionDidBeginEv
 * Demangled: Caver::AudioSystem::AudioInterruptionDidBegin(void)
 *
 * Callers: 1
 *   0x0000000000478F1C  Java_com_touchfoo_swordigo_Native_applicationDidBecomeInactive
 *
 * Callees: 1
 *   0x000000000047EB04  Caver::AudioSystem::AudioInterruptionDidBegin(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5808 string=0x00000000001F580C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AudioSystem::AudioInterruptionDidBegin(Caver::AudioSystem *this)
{
  return _ZN5Caver11AudioSystem25AudioInterruptionDidBeginEv(this);
}

