/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000478ED0
 * Mangled: Java_com_touchfoo_swordigo_Native_applicationDidBecomeActive
 * Demangled: Java_com_touchfoo_swordigo_Native_applicationDidBecomeActive
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F8140  Caver::StoreController_Android::ResetHasRestoredPurchases(void)
 *   0x00000000001F87C0  Caver::AudioSystem::AudioInterruptionDidEnd(void)
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *
 * Referenced strings: 7
 *   insn=0x0000000000478EE0 string=0x0000000000478EE4 "7"
 *   insn=0x0000000000478EE0 string=0x00000000001FDF30 "0'"
 *   insn=0x0000000000478EE4 string=0x00000000001F87C0 "0'"
 *   insn=0x0000000000478EEC string=0x0000000000478EF0 "@"
 *   insn=0x0000000000478EF4 string=0x00000000001F8140 "0'"
 *   insn=0x0000000000478F00 string=0x0000000000478F04 ""
 *   insn=0x0000000000478F0C string=0x0000000000478F10 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Java_com_touchfoo_swordigo_Native_applicationDidBecomeActive(Caver::AudioSystem *a1)
{
  Caver::AudioSystem *v1; // x0
  __int64 result; // x0

  byte_6E9C7A = 0;
  v1 = (Caver::AudioSystem *)Caver::AudioSystem::sharedSystem(a1);
  Caver::AudioSystem::AudioInterruptionDidEnd(v1);
  if ( qword_6E9C50 )
    Caver::StoreController_Android::ResetHasRestoredPurchases((Caver::StoreController_Android *)qword_6E9C50);
  result = qword_6E9C20;
  if ( qword_6E9C20 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_6E9C20 + 72LL))(qword_6E9C20);
  return result;
}

