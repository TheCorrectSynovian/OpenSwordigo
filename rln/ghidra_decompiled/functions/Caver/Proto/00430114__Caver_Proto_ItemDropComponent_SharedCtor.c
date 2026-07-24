/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00430114
 * Function: Caver::Proto::ItemDropComponent::SharedCtor
 * Signature: undefined __thiscall SharedCtor(ItemDropComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ItemDropComponent::SharedCtor() */

void __thiscall Caver::Proto::ItemDropComponent::SharedCtor(ItemDropComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)(this + 8) = 0;
  puVar2 = PTR__default_item_identifier__007e6a38;
  puVar1 = PTR__default_item_name__007e5cd8;
                    /* try { // try from 00430128 to 0053016f has its CatchHandler @ 00430128
                       catch() { ... } // from try @ 00430128 with catch @ 00430128
                       catch() { ... } // from try @ 00430178 with catch @ 00430128
                       catch() { ... } // from try @ 004301cc with catch @ 00430128 */
  *(undefined2 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  return;
}


