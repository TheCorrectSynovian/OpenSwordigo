/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00306770
 * Function: _INIT_103
 * Signature: undefined _INIT_103(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void _INIT_103(void)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00622294(&DAT_007e8c00);
  __cxa_atexit(PTR_FUN_007e6580,&DAT_007e8c00,&PTR_LOOP_007e8000);
  puVar2 = PTR_groundMeshTypeStrings_007e5d28;
  FUN_00666bb8(PTR_groundMeshTypeStrings_007e5d28,"plain",auStack_38);
  FUN_00666bb8(puVar2 + 8,"roundedHat",auStack_40);
  __cxa_atexit(FUN_00306670,0,&PTR_LOOP_007e8000);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


