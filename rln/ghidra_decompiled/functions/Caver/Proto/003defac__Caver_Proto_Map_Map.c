/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003defac
 * Function: Caver::Proto::Map::Map
 * Signature: undefined __thiscall Map(Map * this, Map * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Map::Map(Caver::Proto::Map const&) */

void __thiscall Caver::Proto::Map::Map(Map *this,Map *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e65d0 + 0x10;
  *(Map **)(this + 0x10) = this + 0x28;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x20) = 4;
  *(undefined **)this = puVar1;
  *(undefined4 *)(this + 0x48) = 0;
  MergeFrom(this,param_1);
  return;
}


