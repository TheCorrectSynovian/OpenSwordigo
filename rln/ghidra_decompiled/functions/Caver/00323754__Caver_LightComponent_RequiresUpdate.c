/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00323754
 * Function: Caver::LightComponent::RequiresUpdate
 * Signature: undefined __thiscall RequiresUpdate(LightComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LightComponent::RequiresUpdate() const */

bool __thiscall Caver::LightComponent::RequiresUpdate(LightComponent *this)

{
  return *(int *)(this + 0x70) == 4;
}


