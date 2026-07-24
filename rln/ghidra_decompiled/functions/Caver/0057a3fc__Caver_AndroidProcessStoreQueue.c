/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057a3fc
 * Function: Caver::AndroidProcessStoreQueue
 * Signature: undefined __cdecl AndroidProcessStoreQueue(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AndroidProcessStoreQueue() */

void Caver::AndroidProcessStoreQueue(void)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*(long *)DAT_007e9c60 + 0x388))
                    (DAT_007e9c60,DAT_007e9c68,"processStoreQueue",&DAT_0069604e);
  _JNIEnv::CallStaticVoidMethod(DAT_007e9c60,DAT_007e9c68,uVar1);
  return;
}


