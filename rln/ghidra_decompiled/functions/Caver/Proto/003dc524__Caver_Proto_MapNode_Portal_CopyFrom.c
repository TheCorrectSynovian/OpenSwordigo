/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003dc524
 * Function: Caver::Proto::MapNode_Portal::CopyFrom
 * Signature: undefined __thiscall CopyFrom(MapNode_Portal * this, MapNode_Portal * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapNode_Portal::CopyFrom(Caver::Proto::MapNode_Portal const&) */

void __thiscall Caver::Proto::MapNode_Portal::CopyFrom(MapNode_Portal *this,MapNode_Portal *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


