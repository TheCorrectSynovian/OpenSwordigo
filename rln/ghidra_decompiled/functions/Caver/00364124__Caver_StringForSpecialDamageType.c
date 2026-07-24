/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00364124
 * Function: Caver::StringForSpecialDamageType
 * Signature: undefined __thiscall StringForSpecialDamageType(Caver * this, SpecialDamageType param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StringForSpecialDamageType(Caver::SpecialDamageType) */

void __thiscall Caver::StringForSpecialDamageType(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 == 2) {
    FUN_00666bb8(param_1,"bomb",auStack_40);
  }
  else if (param_2 == 1) {
    FUN_00666bb8(param_1,&DAT_00687e2f,auStack_38);
  }
  else if (param_2 == 0) {
    FUN_00666bb8(param_1,&DAT_00683aec,auStack_30);
  }
  else {
    FUN_00666bb8(param_1,&DAT_0068fbeb,auStack_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


