/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e7e54
 * Function: Caver::Proto::GameData::CopyFrom
 * Signature: undefined __thiscall CopyFrom(GameData * this, GameData * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameData::CopyFrom(Caver::Proto::GameData const&) */

void __thiscall Caver::Proto::GameData::CopyFrom(GameData *this,GameData *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


