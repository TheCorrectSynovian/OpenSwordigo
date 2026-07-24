/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003231a0
 * Function: Caver::LightComponent::Disable
 * Signature: undefined __thiscall Disable(LightComponent * this, RenderingContext * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LightComponent::Disable(Caver::RenderingContext*) */

void __thiscall Caver::LightComponent::Disable(LightComponent *this,RenderingContext *param_1)

{
  if ((-1 < *(int *)(this + 0xac)) && (*(int *)param_1 == 0)) {
    glDisable(*(int *)(this + 0xac) + 0x4000);
    return;
  }
  return;
}


