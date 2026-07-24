/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00406cf0
 * Function: Caver::Proto::GroundPolygonComponent::Swap
 * Signature: undefined __thiscall Swap(GroundPolygonComponent * this, GroundPolygonComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GroundPolygonComponent::Swap(Caver::Proto::GroundPolygonComponent*) */

void __thiscall
Caver::Proto::GroundPolygonComponent::Swap
          (GroundPolygonComponent *this,GroundPolygonComponent *param_1)

{
  undefined4 uVar1;
  GroundPolygonComponent GVar2;
  undefined8 uVar3;
  
  if (param_1 != this) {
    uVar3 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0x18),(RepeatedPtrFieldBase *)(param_1 + 0x18));
    uVar3 = *(undefined8 *)(this + 0x50);
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    GVar2 = this[0x58];
    this[0x58] = param_1[0x58];
    param_1[0x58] = GVar2;
    uVar1 = *(undefined4 *)(this + 0x5c);
    *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x60);
    *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x60) = uVar1;
    uVar1 = *(undefined4 *)(this + 100);
    *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_1 + 100) = uVar1;
    GVar2 = this[0x68];
    this[0x68] = param_1[0x68];
    param_1[0x68] = GVar2;
    uVar1 = *(undefined4 *)(this + 0x6c);
    *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


