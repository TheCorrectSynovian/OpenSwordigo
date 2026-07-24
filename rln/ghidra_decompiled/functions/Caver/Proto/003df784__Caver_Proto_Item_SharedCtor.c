/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003df784
 * Function: Caver::Proto::Item::SharedCtor
 * Signature: undefined __thiscall SharedCtor(Item * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Item::SharedCtor() */

void __thiscall Caver::Proto::Item::SharedCtor(Item *this)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar5 = PTR__default_description__007e7e10;
  puVar4 = PTR__default_name__007e6888;
  puVar3 = PTR__default_short_description__007e6118;
  puVar2 = PTR__default_title__007e4fd8;
  uVar1 = DAT_0068aa60;
  this[0x30] = (Item)0x0;
  *(undefined8 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar4;
  *(undefined **)(this + 0x28) = puVar5;
  *(undefined **)(this + 0x20) = puVar3;
  *(undefined8 *)(this + 0x34) = 0;
  return;
}


