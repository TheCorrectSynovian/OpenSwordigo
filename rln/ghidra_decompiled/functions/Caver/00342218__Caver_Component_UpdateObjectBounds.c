/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00342218
 * Function: Caver::Component::UpdateObjectBounds
 * Signature: undefined __thiscall UpdateObjectBounds(Component * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Component::UpdateObjectBounds() */

void __thiscall Caver::Component::UpdateObjectBounds(Component *this)

{
  if (*(SceneObject **)(this + 0x28) != (SceneObject *)0x0) {
    SceneObject::UpdateBounds(*(SceneObject **)(this + 0x28));
    return;
  }
  return;
}


