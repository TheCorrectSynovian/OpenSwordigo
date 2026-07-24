/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00430f44
 * Function: Caver::Proto::ItemDropComponent::Swap
 * Signature: undefined __thiscall Swap(ItemDropComponent * this, ItemDropComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ItemDropComponent::Swap(Caver::Proto::ItemDropComponent*) */

void __thiscall
Caver::Proto::ItemDropComponent::Swap(ItemDropComponent *this,ItemDropComponent *param_1)

{
  undefined4 uVar1;
  ItemDropComponent IVar2;
  undefined8 uVar3;
  
                    /* try { // try from 00430f4c to 00530f4f has its CatchHandler @ 0043106c */
  if (param_1 != this) {
    uVar3 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    uVar3 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0x20),(RepeatedPtrFieldBase *)(param_1 + 0x20));
    IVar2 = this[0x58];
    this[0x58] = param_1[0x58];
    param_1[0x58] = IVar2;
    IVar2 = this[0x59];
    this[0x59] = param_1[0x59];
                    /* try { // try from 00430fa8 to 00530fab has its CatchHandler @ 00431064 */
    param_1[0x59] = IVar2;
                    /* try { // try from 00430fac to 005310f7 has its CatchHandler @ 00430ee4 */
    uVar1 = *(undefined4 *)(this + 0x5c);
    *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


