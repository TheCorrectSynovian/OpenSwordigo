/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003044f4
 * Function: _INIT_14
 * Signature: undefined _INIT_14(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void _INIT_14(void)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00622294(&DAT_007e8a70);
  __cxa_atexit(PTR_FUN_007e6580,&DAT_007e8a70,&PTR_LOOP_007e8000);
  puVar2 = PTR_typeStrings_007e6870;
  FUN_00666bb8(PTR_typeStrings_007e6870,"unknown",auStack_58);
  FUN_00666bb8(puVar2 + 8,"ambient",auStack_60);
  FUN_00666bb8(puVar2 + 0x10,"directional",auStack_68);
  FUN_00666bb8(puVar2 + 0x18,"point",auStack_70);
  FUN_00666bb8(puVar2 + 0x20,"overlay",auStack_78);
  FUN_00666bb8(puVar2 + 0x28,&DAT_0068fbeb,auStack_80);
  __cxa_atexit(FUN_003042a4,0,&PTR_LOOP_007e8000);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


