/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003df614
 * Function: Caver::Proto::Map::CopyFrom
 * Signature: undefined __thiscall CopyFrom(Map * this, Map * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Map::CopyFrom(Caver::Proto::Map const&) */

void __thiscall Caver::Proto::Map::CopyFrom(Map *this,Map *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


