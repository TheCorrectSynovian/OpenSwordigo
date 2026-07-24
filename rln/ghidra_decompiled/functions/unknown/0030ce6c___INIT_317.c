/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0030ce6c
 * Function: _INIT_317
 * Signature: undefined _INIT_317(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void _INIT_317(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00622294(&DAT_007e9f40);
  __cxa_atexit(PTR_FUN_007e6580,&DAT_007e9f40,&PTR_LOOP_007e8000);
  puVar3 = PTR_FUN_007e6cc8;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  DAT_007e9f48 = puVar1;
  __cxa_atexit(PTR_FUN_007e6cc8,&DAT_007e9f48,&PTR_LOOP_007e8000);
  DAT_007e9f50 = puVar1;
  __cxa_atexit(puVar3,&DAT_007e9f50,&PTR_LOOP_007e8000);
  FUN_00666bb8(&DAT_007e9f60,"resources",auStack_40);
  __cxa_atexit(PTR_FUN_007e6cc8,&DAT_007e9f60,&PTR_LOOP_007e8000);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


