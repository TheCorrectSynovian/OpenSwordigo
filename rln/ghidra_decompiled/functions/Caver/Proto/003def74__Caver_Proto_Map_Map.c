/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003def74
 * Function: Caver::Proto::Map::Map
 * Signature: undefined __thiscall Map(Map * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Map::Map() */

void __thiscall Caver::Proto::Map::Map(Map *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e65d0;
  *(Map **)(this + 0x10) = this + 0x28;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x20) = 4;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x48) = 0;
  return;
}


