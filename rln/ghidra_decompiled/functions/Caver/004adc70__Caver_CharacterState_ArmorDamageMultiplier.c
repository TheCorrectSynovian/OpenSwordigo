/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004adc70
 * Function: Caver::CharacterState::ArmorDamageMultiplier
 * Signature: undefined __thiscall ArmorDamageMultiplier(CharacterState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharacterState::ArmorDamageMultiplier() */

undefined1  [16] __thiscall Caver::CharacterState::ArmorDamageMultiplier(CharacterState *this)

{
  long lVar1;
  shared_ptr *psVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  shared_ptr asStack_48 [8];
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  psVar2 = (shared_ptr *)HighestLevelItemOfType(asStack_48,this,2);
  auVar4 = ArmorDamageMultiplierWithItem(psVar2,asStack_48);
  uVar5 = auVar4._8_8_;
                    /* catch() { ... } // from try @ 004ad938 with catch @ 004adcbc */
  if ((local_40 != (long *)0x0) && (lVar3 = local_40[1], local_40[1] = lVar3 + -1, lVar3 + -1 == 0))
  {
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar3 = local_40[2];
    local_40[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*local_40 + 0x18))(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    auVar4._8_8_ = uVar5;
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


