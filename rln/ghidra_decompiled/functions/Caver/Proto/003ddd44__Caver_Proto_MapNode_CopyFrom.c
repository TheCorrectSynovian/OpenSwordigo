/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ddd44
 * Function: Caver::Proto::MapNode::CopyFrom
 * Signature: undefined __thiscall CopyFrom(MapNode * this, MapNode * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapNode::CopyFrom(Caver::Proto::MapNode const&) */

void __thiscall Caver::Proto::MapNode::CopyFrom(MapNode *this,MapNode *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


