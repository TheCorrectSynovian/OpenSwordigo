/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e6524
 * Function: Caver::Proto::GameData::GameData
 * Signature: undefined __thiscall GameData(GameData * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameData::GameData() */

void __thiscall Caver::Proto::GameData::GameData(GameData *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e6eb0;
  *(GameData **)(this + 0x10) = this + 0x28;
  *(GameData **)(this + 0x48) = this + 0x60;
  *(GameData **)(this + 0x80) = this + 0x98;
  *(GameData **)(this + 0xb8) = this + 0xd0;
  *(GameData **)(this + 0xf0) = this + 0x108;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 4;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 4;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x90) = 4;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 200) = 4;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0x100) = 4;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x128) = 0;
  return;
}


