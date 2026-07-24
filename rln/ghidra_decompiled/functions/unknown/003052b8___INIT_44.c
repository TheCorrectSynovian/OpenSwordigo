/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003052b8
 * Function: _INIT_44
 * Signature: undefined _INIT_44(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void _INIT_44(void)

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
  FUN_00622294(&DAT_007e8b50);
  __cxa_atexit(PTR_FUN_007e6580,&DAT_007e8b50,&PTR_LOOP_007e8000);
  puVar2 = PTR_bindingTypeStrings_007e6698;
  FUN_00666bb8(PTR_bindingTypeStrings_007e6698,"unknown",auStack_58);
  FUN_00666bb8(puVar2 + 8,&LAB_00687d04,auStack_60);
  FUN_00666bb8(puVar2 + 0x10,"manaPotion",auStack_68);
  FUN_00666bb8(puVar2 + 0x18,"magicPower",auStack_70);
  FUN_00666bb8(puVar2 + 0x20,"coin",auStack_78);
  FUN_00666bb8(puVar2 + 0x28,"experience",auStack_80);
  __cxa_atexit(FUN_00305068,0,&PTR_LOOP_007e8000);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


