/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040e86c
 * Function: Caver::Proto::BoneControlledCollisionShapeComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(BoneControlledCollisionShapeComponent * this, BoneControlledCollisionShapeComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BoneControlledCollisionShapeComponent::CopyFrom(Caver::Proto::BoneControlledCollisionShapeComponent
   const&) */

void __thiscall
Caver::Proto::BoneControlledCollisionShapeComponent::CopyFrom
          (BoneControlledCollisionShapeComponent *this,
          BoneControlledCollisionShapeComponent *param_1)

{
  if (param_1 != this) {
                    /* try { // try from 0040e890 to 0050e8b7 has its CatchHandler @ 0040fdb8 */
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


