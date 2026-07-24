/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00665ad8
 * Function: FUN_00665ad8
 * Signature: noreturn undefined FUN_00665ad8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00665ad8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  uVar1 = __cxa_allocate_exception(0x10);
  FUN_00666bb8(&local_8,param_1,auStack_18);
  FUN_00671664(uVar1,&local_8);
  if ((undefined *)(local_8 + -0x18) != PTR_DAT_007e5de8) {
    FUN_00665220((undefined *)(local_8 + -0x18),auStack_10);
  }
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_PTR_007e53c0,PTR_FUN_007e4f50);
}


