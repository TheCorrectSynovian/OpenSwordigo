/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046aaa0
 * Function: Caver::LevelUpViewController::CharacterViewDismissed
 * Signature: undefined __thiscall CharacterViewDismissed(LevelUpViewController * this, CharacterView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LevelUpViewController::CharacterViewDismissed(Caver::CharacterView*) */

void __thiscall
Caver::LevelUpViewController::CharacterViewDismissed
          (LevelUpViewController *this,CharacterView *param_1)

{
  undefined8 *puVar1;
  
  if ((param_1[0x198] != (CharacterView)0x0) &&
     (puVar1 = *(undefined8 **)(this + 0x50), puVar1 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0046aac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,this);
    return;
  }
  return;
}


