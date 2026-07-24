/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e3274
 * Function: Caver::Proto::EntityClass::CopyFrom
 * Signature: undefined __thiscall CopyFrom(EntityClass * this, EntityClass * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityClass::CopyFrom(Caver::Proto::EntityClass const&) */

void __thiscall Caver::Proto::EntityClass::CopyFrom(EntityClass *this,EntityClass *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


