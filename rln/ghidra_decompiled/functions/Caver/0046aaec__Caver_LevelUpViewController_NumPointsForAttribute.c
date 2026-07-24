/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046aaec
 * Function: Caver::LevelUpViewController::NumPointsForAttribute
 * Signature: undefined __thiscall NumPointsForAttribute(LevelUpViewController * this, CharacterAttribute param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LevelUpViewController::NumPointsForAttribute(Caver::CharacterAttribute) */

undefined4 __thiscall
Caver::LevelUpViewController::NumPointsForAttribute(LevelUpViewController *this,int param_2)

{
  long *plVar1;
  
  if (param_2 == 2) {
    plVar1 = (long *)(*(long *)(this + 0x68) + 0x178);
  }
  else if (param_2 == 1) {
    plVar1 = (long *)(*(long *)(this + 0x68) + 0x168);
  }
  else {
    if (param_2 != 0) {
      return 0;
    }
    plVar1 = (long *)(*(long *)(this + 0x68) + 0x158);
  }
  return *(undefined4 *)(*plVar1 + 0x104);
}


