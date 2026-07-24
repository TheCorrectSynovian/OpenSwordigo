/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00430140
 * Function: Caver::Proto::ItemDropComponent::ItemDropComponent
 * Signature: undefined __thiscall ItemDropComponent(ItemDropComponent * this, ItemDropComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ItemDropComponent::ItemDropComponent(Caver::Proto::ItemDropComponent const&) */

void __thiscall
Caver::Proto::ItemDropComponent::ItemDropComponent
          (ItemDropComponent *this,ItemDropComponent *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__default_item_name__007e5cd8;
  *(undefined4 *)(this + 0x30) = 4;
  puVar1 = PTR_vtable_007e4ac0;
  *(undefined8 *)(this + 0x28) = 0;
                    /* try { // try from 00430170 to 00530177 has its CatchHandler @ 00430264 */
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 00430178 to 005301c3 has its CatchHandler @ 00430128 */
  *(undefined **)this = puVar1 + 0x10;
  puVar1 = PTR__default_item_identifier__007e6a38;
  *(undefined2 *)(this + 0x58) = 0;
  *(ItemDropComponent **)(this + 0x20) = this + 0x38;
  *(undefined **)(this + 0x18) = puVar1;
  *(undefined **)(this + 0x10) = puVar2;
  *(undefined4 *)(this + 0x5c) = 0;
  MergeFrom(this,param_1);
  return;
}


