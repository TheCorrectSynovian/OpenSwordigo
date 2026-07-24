/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003437ec
 * Function: Caver::Component::ComponentWithIdentifier
 * Signature: undefined __thiscall ComponentWithIdentifier(Component * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Component::ComponentWithIdentifier(int) const */

void __thiscall Caver::Component::ComponentWithIdentifier(Component *this,int param_1)

{
  if (*(SceneObject **)(this + 0x28) != (SceneObject *)0x0) {
    SceneObject::ComponentWithIdentifier(*(SceneObject **)(this + 0x28),param_1);
    return;
  }
  return;
}


