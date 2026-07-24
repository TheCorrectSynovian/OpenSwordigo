/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003df724
 * Function: Caver::Proto::Item::Item
 * Signature: undefined __thiscall Item(Item * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Item::Item() */

void __thiscall Caver::Proto::Item::Item(Item *this)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR__default_description__007e7e10;
  puVar3 = PTR__default_name__007e6888;
  puVar2 = PTR__default_short_description__007e6118;
  *(undefined **)(this + 0x18) = PTR__default_title__007e4fd8;
  *(undefined **)(this + 0x10) = puVar3;
  *(undefined **)(this + 0x28) = puVar4;
  *(undefined **)(this + 0x20) = puVar2;
  puVar2 = PTR_vtable_007e72f8;
  uVar1 = DAT_0068aa60;
  this[0x30] = (Item)0x0;
  *(undefined8 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined8 *)(this + 0x34) = 0;
  return;
}


