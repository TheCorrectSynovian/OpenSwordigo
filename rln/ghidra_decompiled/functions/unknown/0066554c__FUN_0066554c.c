/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066554c
 * Function: FUN_0066554c
 * Signature: noreturn undefined FUN_0066554c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066554c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 00665578 to 00765703 has its CatchHandler @ 00665578
                       catch(type#1 @ 00000000) { ... } // from try @ 00665578 with catch @ 00665578
                       catch(type#1 @ 00000000) { ... } // from try @ 00665710 with catch @ 00665578
                       catch(type#1 @ 00000000) { ... } // from try @ 0066576c with catch @ 00665578
                        */
  FUN_00666bb8(&local_8,param_1,auStack_18);
  FUN_0064aa90(uVar1,&local_8);
  if ((undefined *)(local_8 + -0x18) != PTR_DAT_007e5de8) {
    FUN_00665220((undefined *)(local_8 + -0x18),auStack_10);
  }
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_PTR_007e5a18,PTR_FUN_007e6fa8);
}


