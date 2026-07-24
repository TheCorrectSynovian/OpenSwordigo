/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00323764
 * Function: Caver::LightComponent::HasBounds
 * Signature: undefined __thiscall HasBounds(LightComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LightComponent::HasBounds() const */

bool __thiscall Caver::LightComponent::HasBounds(LightComponent *this)

{
  if (*(int *)(this + 0x70) == 3) {
    return DAT_00683f6c < *(float *)(this + 0x9c);
  }
  return false;
}


