/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000478F1C
 * Mangled: Java_com_touchfoo_swordigo_Native_applicationDidBecomeInactive
 * Demangled: Java_com_touchfoo_swordigo_Native_applicationDidBecomeInactive
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F5800  Caver::AudioSystem::AudioInterruptionDidBegin(void)
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *
 * Referenced strings: 6
 *   insn=0x0000000000478F30 string=0x0000000000478F34 "\t"
 *   insn=0x0000000000478F38 string=0x0000000000478F3C ""
 *   insn=0x0000000000478F40 string=0x0000000000478F44 "!@"
 *   insn=0x0000000000478F4C string=0x00000000001FDF30 "0'"
 *   insn=0x0000000000478F50 string=0x0000000000478F54 "+"
 *   insn=0x0000000000478F54 string=0x00000000001F5800 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 Java_com_touchfoo_swordigo_Native_applicationDidBecomeInactive()
{
  Caver::AudioSystem *v0; // x0
  Caver::AudioSystem *v1; // x0

  v0 = (Caver::AudioSystem *)qword_6E9C20;
  byte_6E9C7A = 1;
  if ( qword_6E9C20 )
    v0 = (Caver::AudioSystem *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_6E9C20 + 64LL))(
                                 qword_6E9C20,
                                 1);
  v1 = (Caver::AudioSystem *)Caver::AudioSystem::sharedSystem(v0);
  return Caver::AudioSystem::AudioInterruptionDidBegin(v1);
}

