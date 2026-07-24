/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046aac8
 * Function: Caver::LevelUpViewController::CharacterViewDismissed
 * Signature: undefined __thiscall CharacterViewDismissed(LevelUpViewController * this, CharacterView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::LevelUpViewController::CharacterViewDismissed(Caver::CharacterView*)
    */

void __thiscall
Caver::LevelUpViewController::CharacterViewDismissed
          (LevelUpViewController *this,CharacterView *param_1)

{
  if (param_1[0x198] != (CharacterView)0x0) {
    if (*(undefined8 **)(this + 8) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0046aae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)**(undefined8 **)(this + 8))();
      return;
    }
  }
  return;
}


