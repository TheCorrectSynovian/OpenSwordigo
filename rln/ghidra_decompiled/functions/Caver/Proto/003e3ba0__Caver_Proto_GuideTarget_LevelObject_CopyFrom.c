/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e3ba0
 * Function: Caver::Proto::GuideTarget_LevelObject::CopyFrom
 * Signature: undefined __thiscall CopyFrom(GuideTarget_LevelObject * this, GuideTarget_LevelObject * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GuideTarget_LevelObject::CopyFrom(Caver::Proto::GuideTarget_LevelObject const&) */

void __thiscall
Caver::Proto::GuideTarget_LevelObject::CopyFrom
          (GuideTarget_LevelObject *this,GuideTarget_LevelObject *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


