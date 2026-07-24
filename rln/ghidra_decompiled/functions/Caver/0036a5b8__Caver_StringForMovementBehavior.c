/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036a5b8
 * Function: Caver::StringForMovementBehavior
 * Signature: undefined __thiscall StringForMovementBehavior(Caver * this, MovementBehavior param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StringForMovementBehavior(Caver::EntityControllerComponent::MovementBehavior) */

void __thiscall Caver::StringForMovementBehavior(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 == 3) {
    FUN_00666bb8(param_1,"fight",auStack_40);
  }
  else if (param_2 == 2) {
    FUN_00666bb8(param_1,"follow",auStack_38);
  }
  else if (param_2 == 1) {
    FUN_00666bb8(param_1,&DAT_0068804e,auStack_30);
  }
  else {
    FUN_00666bb8(param_1,&DAT_00683aec,auStack_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


