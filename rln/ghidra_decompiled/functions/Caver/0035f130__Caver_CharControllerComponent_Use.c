/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0035f130
 * Function: Caver::CharControllerComponent::Use
 * Signature: undefined __thiscall Use(CharControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharControllerComponent::Use() */

void __thiscall Caver::CharControllerComponent::Use(CharControllerComponent *this)

{
  if (*(SceneObject **)(this + 0x298) != (SceneObject *)0x0) {
    SceneObject::HandleMessage(*(SceneObject **)(this + 0x298),0x14,(void *)0x0);
    return;
  }
  return;
}


