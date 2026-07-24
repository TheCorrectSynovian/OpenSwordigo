/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ddf78
 * Function: Caver::Proto::MapZone::MapZone
 * Signature: undefined __thiscall MapZone(MapZone * this, MapZone * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapZone::MapZone(Caver::Proto::MapZone const&) */

void __thiscall Caver::Proto::MapZone::MapZone(MapZone *this,MapZone *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__default_name__007e5428;
  *(undefined4 *)(this + 0x30) = 4;
  puVar3 = PTR__default_music__007e5568;
  puVar1 = PTR_vtable_007e7268 + 0x10;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined **)(this + 0x60) = puVar3;
  *(undefined **)this = puVar1;
  puVar1 = PTR__default_title__007e7d78;
  *(undefined4 *)(this + 0x58) = 0;
  *(MapZone **)(this + 0x20) = this + 0x38;
  *(undefined **)(this + 0x18) = puVar1;
  *(undefined **)(this + 0x10) = puVar2;
  *(undefined4 *)(this + 0x68) = 0;
  MergeFrom(this,param_1);
  return;
}


