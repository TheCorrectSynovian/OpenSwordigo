/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ddf40
 * Function: Caver::Proto::MapZone::SharedCtor
 * Signature: undefined __thiscall SharedCtor(MapZone * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapZone::SharedCtor() */

void __thiscall Caver::Proto::MapZone::SharedCtor(MapZone *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  *(undefined4 *)(this + 8) = 0;
  puVar3 = PTR__default_title__007e7d78;
  puVar1 = PTR__default_name__007e5428;
  *(undefined4 *)(this + 0x58) = 0;
  puVar2 = PTR__default_music__007e5568;
  *(undefined **)(this + 0x18) = puVar3;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined **)(this + 0x60) = puVar2;
  *(undefined4 *)(this + 0x68) = 0;
  return;
}


