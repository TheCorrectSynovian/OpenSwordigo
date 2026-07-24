/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057ad8c
 * Function: Caver::AndroidGetAnalyticsId
 * Signature: undefined __thiscall AndroidGetAnalyticsId(Caver * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AndroidGetAnalyticsId() */

void __thiscall Caver::AndroidGetAnalyticsId(Caver *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*(long *)DAT_007e9c60 + 0x388))
                    (DAT_007e9c60,DAT_007e9c68,"getAnalyticsId","()Ljava/lang/String;");
  uVar2 = _JNIEnv::CallStaticObjectMethod(DAT_007e9c60,DAT_007e9c68,uVar2);
  (**(code **)(*(long *)DAT_007e9c60 + 0x548))(DAT_007e9c60,uVar2,0);
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


