/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00574af4
 * Function: Caver::SceneObject::SetAlwaysActive
 * Signature: undefined __thiscall SetAlwaysActive(SceneObject * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::SetAlwaysActive(bool) */

void __thiscall Caver::SceneObject::SetAlwaysActive(SceneObject *this,bool param_1)

{
  if ((((SceneObject)param_1 != this[0xf1]) && (this[0xf1] = (SceneObject)param_1, param_1)) &&
     (this[0xf0] == (SceneObject)0x0)) {
    Activate(this);
    return;
  }
  return;
}


