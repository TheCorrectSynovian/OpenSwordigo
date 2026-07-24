/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004000b4
 * Function: Caver::Proto::SceneObject::CopyFrom
 * Signature: undefined __thiscall CopyFrom(SceneObject * this, SceneObject * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SceneObject::CopyFrom(Caver::Proto::SceneObject const&) */

void __thiscall Caver::Proto::SceneObject::CopyFrom(SceneObject *this,SceneObject *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


