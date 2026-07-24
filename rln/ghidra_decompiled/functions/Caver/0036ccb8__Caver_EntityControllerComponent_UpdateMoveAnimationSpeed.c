/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036ccb8
 * Function: Caver::EntityControllerComponent::UpdateMoveAnimationSpeed
 * Signature: undefined __thiscall UpdateMoveAnimationSpeed(EntityControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::EntityControllerComponent::UpdateMoveAnimationSpeed() */

void __thiscall
Caver::EntityControllerComponent::UpdateMoveAnimationSpeed(EntityControllerComponent *this)

{
  if ((*(long *)(this + 0x100) != 0) && (DAT_00683944 < *(float *)(this + 0x10c))) {
    *(float *)(*(long *)(this + 0x100) + 0x34) =
         *(float *)(this + 0x10c) / (*(float *)(*(long *)(this + 0x28) + 0x8c) * _DAT_0068782c);
  }
  return;
}


