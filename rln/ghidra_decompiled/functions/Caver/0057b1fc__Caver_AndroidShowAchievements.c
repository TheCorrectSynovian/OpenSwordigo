/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057b1fc
 * Function: Caver::AndroidShowAchievements
 * Signature: undefined __cdecl AndroidShowAchievements(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AndroidShowAchievements() */

void Caver::AndroidShowAchievements(void)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*(long *)DAT_007e9c60 + 0x388))
                    (DAT_007e9c60,DAT_007e9c68,"showAchievements",&DAT_0069604e);
  _JNIEnv::CallStaticVoidMethod(DAT_007e9c60,DAT_007e9c68,uVar1);
  return;
}


