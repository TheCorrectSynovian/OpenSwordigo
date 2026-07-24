/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00665c40
 * Function: FUN_00665c40
 * Signature: undefined FUN_00665c40(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00665c40(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  plVar4 = (long *)__cxa_allocate_exception(0x20);
  lVar5 = FUN_00666074();
  FUN_00666bb8(&local_8,"std::future_error",auStack_10);
  FUN_0064a9b8(plVar4,&local_8);
  if ((undefined *)(local_8 + -0x18) != PTR_DAT_007e5de8) {
    FUN_00665220((undefined *)(local_8 + -0x18),auStack_18);
  }
  *(undefined4 *)(plVar4 + 2) = param_1;
  puVar3 = PTR_FUN_007e4eb8;
  puVar2 = PTR_PTR_007e4bb0;
  puVar1 = PTR_DAT_007e6d98 + 0x10;
  plVar4[3] = lVar5;
  *plVar4 = (long)puVar1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar4,puVar2,puVar3);
}


