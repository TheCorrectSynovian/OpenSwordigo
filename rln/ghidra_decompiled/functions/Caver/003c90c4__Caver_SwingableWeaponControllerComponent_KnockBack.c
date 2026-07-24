/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c90c4
 * Function: Caver::SwingableWeaponControllerComponent::KnockBack
 * Signature: undefined __thiscall KnockBack(SwingableWeaponControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponControllerComponent::KnockBack() */

void __thiscall
Caver::SwingableWeaponControllerComponent::KnockBack(SwingableWeaponControllerComponent *this)

{
  float fVar1;
  float fVar2;
  
  if (*(int *)(this + 0xa8) != 0) {
    fVar1 = *(float *)(*(long *)(this + 0x28) + 0x68);
    fVar2 = fVar1;
    if (*(int *)(this + 0xa8) < 0) {
      if ((fVar1 < DAT_00687990) &&
         (fVar2 = fVar1 + DAT_00687990, DAT_00687990 < fVar1 + DAT_00687990)) {
        fVar2 = DAT_00687990;
      }
    }
    else if ((DAT_0068a1c8 < fVar1) && (fVar2 = fVar1 + DAT_0068a1c8, fVar2 <= DAT_0068a1c8)) {
      fVar2 = DAT_0068a1c8;
    }
    *(float *)(*(long *)(this + 0x28) + 0x68) = fVar2;
  }
  return;
}


