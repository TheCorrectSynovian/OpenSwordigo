/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00319d38
 * Function: FUN_00319d38
 * Signature: undefined FUN_00319d38(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00319d38(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  switch(param_2) {
  case 1:
    FUN_00666bb8(param_1,"pickup",auStack_30);
    break;
  case 2:
    FUN_00666bb8(param_1,"pushable",auStack_30);
    break;
  case 3:
    FUN_00666bb8(param_1,"use",auStack_30);
    break;
  case 4:
    FUN_00666bb8(param_1,"portal",auStack_30);
    break;
  case 5:
    FUN_00666bb8(param_1,"collectable",auStack_30);
    break;
  case 6:
    FUN_00666bb8(param_1,"blocksDamage",auStack_30);
    break;
  case 7:
    FUN_00666bb8(param_1,"grabbable",auStack_30);
    break;
  default:
    FUN_00666bb8(param_1,&DAT_00683aec,auStack_30);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


