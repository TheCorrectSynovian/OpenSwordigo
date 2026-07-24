/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004010d0
 * Function: Caver::Proto::SceneObjectGroup::CopyFrom
 * Signature: undefined __thiscall CopyFrom(SceneObjectGroup * this, SceneObjectGroup * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SceneObjectGroup::CopyFrom(Caver::Proto::SceneObjectGroup const&) */

void __thiscall
Caver::Proto::SceneObjectGroup::CopyFrom(SceneObjectGroup *this,SceneObjectGroup *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


