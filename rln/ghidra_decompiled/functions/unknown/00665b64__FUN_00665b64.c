/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00665b64
 * Function: FUN_00665b64
 * Signature: undefined FUN_00665b64(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00665b64(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auStack_10 [8];
  long local_8;
  
  plVar4 = (long *)__cxa_allocate_exception(0x20);
  plVar5 = (long *)FUN_0066b18c();
  (**(code **)(*plVar5 + 0x18))(&local_8,plVar5,param_1);
  FUN_0064ab28(plVar4,&local_8);
  if ((undefined *)(local_8 + -0x18) != PTR_DAT_007e5de8) {
    FUN_00665220((undefined *)(local_8 + -0x18),auStack_10);
  }
  *(undefined4 *)(plVar4 + 2) = param_1;
  puVar3 = PTR_PTR_007e60f8;
  puVar2 = PTR_FUN_007e6000;
                    /* try { // try from 00665be8 to 00765bf3 has its CatchHandler @ 00666380 */
  puVar1 = PTR_DAT_007e6ad0 + 0x10;
  plVar4[3] = (long)plVar5;
  *plVar4 = (long)puVar1;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00665bf4 to 00765d17 has its CatchHandler @ 00665968 */
  __cxa_throw(plVar4,puVar3,puVar2);
}


