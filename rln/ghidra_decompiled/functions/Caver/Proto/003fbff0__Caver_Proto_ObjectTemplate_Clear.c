/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fbff0
 * Function: Caver::Proto::ObjectTemplate::Clear
 * Signature: undefined __thiscall Clear(ObjectTemplate * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectTemplate::Clear() */

void __thiscall Caver::Proto::ObjectTemplate::Clear(ObjectTemplate *this)

{
  if (this[0x1c] != (ObjectTemplate)0x0) {
    if ((((byte)this[0x1c] & 1) != 0) && (*(SceneObject **)(this + 0x10) != (SceneObject *)0x0)) {
      SceneObject::Clear(*(SceneObject **)(this + 0x10));
    }
    *(undefined4 *)(this + 0x18) = 0x3f800000;
  }
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


