/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ddee4
 * Function: Caver::Proto::MapZone::MapZone
 * Signature: undefined __thiscall MapZone(MapZone * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapZone::MapZone() */

void __thiscall Caver::Proto::MapZone::MapZone(MapZone *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(MapZone **)(this + 0x20) = this + 0x38;
  puVar1 = PTR__default_name__007e5428;
  *(undefined4 *)(this + 0x30) = 4;
  *(undefined **)(this + 0x60) = PTR__default_music__007e5568;
  puVar2 = PTR_vtable_007e7268;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined **)this = puVar2 + 0x10;
  puVar2 = PTR__default_title__007e7d78;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  return;
}


