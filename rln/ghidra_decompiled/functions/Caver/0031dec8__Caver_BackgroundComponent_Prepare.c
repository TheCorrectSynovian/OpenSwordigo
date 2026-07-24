/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031dec8
 * Function: Caver::BackgroundComponent::Prepare
 * Signature: undefined __thiscall Prepare(BackgroundComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BackgroundComponent::Prepare() */

void __thiscall Caver::BackgroundComponent::Prepare(BackgroundComponent *this)

{
  SceneObject::SetAlwaysActive(*(SceneObject **)(this + 0x28),true);
  return;
}


