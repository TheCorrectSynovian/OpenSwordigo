/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ddd98
 * Function: Caver::Proto::MapNode::Swap
 * Signature: undefined __thiscall Swap(MapNode * this, MapNode * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapNode::Swap(Caver::Proto::MapNode*) */

void __thiscall Caver::Proto::MapNode::Swap(MapNode *this,MapNode *param_1)

{
  undefined4 uVar1;
  MapNode MVar2;
  undefined8 uVar3;
  
  if (param_1 != this) {
    uVar3 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    uVar3 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    uVar3 = *(undefined8 *)(this + 0x20);
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0x28),(RepeatedPtrFieldBase *)(param_1 + 0x28));
    uVar1 = *(undefined4 *)(this + 0x60);
    *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x60) = uVar1;
    MVar2 = this[100];
    this[100] = param_1[100];
    param_1[100] = MVar2;
    uVar1 = *(undefined4 *)(this + 0x68);
    *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x68) = uVar1;
    uVar3 = *(undefined8 *)(this + 0x70);
    *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = uVar3;
    MVar2 = this[0x78];
    this[0x78] = param_1[0x78];
    param_1[0x78] = MVar2;
    uVar1 = *(undefined4 *)(this + 0x7c);
    *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(param_1 + 0x7c) = uVar1;
    MVar2 = this[0x80];
    this[0x80] = param_1[0x80];
    param_1[0x80] = MVar2;
    uVar1 = *(undefined4 *)(this + 0x84);
    *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)(param_1 + 0x84) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


