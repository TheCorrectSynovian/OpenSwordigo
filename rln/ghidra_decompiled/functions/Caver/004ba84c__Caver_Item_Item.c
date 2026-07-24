/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ba84c
 * Function: Caver::Item::Item
 * Signature: undefined __thiscall Item(Item * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Item::Item() */

void __thiscall Caver::Item::Item(Item *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_007e5de8;
  this[0x28] = (Item)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  puVar1 = puVar1 + 0x18;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined **)(this + 8) = puVar1;
  *(undefined **)(this + 0x20) = puVar1;
  *(undefined **)(this + 0x18) = puVar1;
  return;
}


