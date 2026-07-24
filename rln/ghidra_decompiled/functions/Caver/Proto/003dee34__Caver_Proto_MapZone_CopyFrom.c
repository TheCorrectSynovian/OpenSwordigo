/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003dee34
 * Function: Caver::Proto::MapZone::CopyFrom
 * Signature: undefined __thiscall CopyFrom(MapZone * this, MapZone * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapZone::CopyFrom(Caver::Proto::MapZone const&) */

void __thiscall Caver::Proto::MapZone::CopyFrom(MapZone *this,MapZone *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


