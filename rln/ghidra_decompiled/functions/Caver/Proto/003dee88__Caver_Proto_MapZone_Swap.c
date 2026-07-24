/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003dee88
 * Function: Caver::Proto::MapZone::Swap
 * Signature: undefined __thiscall Swap(MapZone * this, MapZone * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapZone::Swap(Caver::Proto::MapZone*) */

void __thiscall Caver::Proto::MapZone::Swap(MapZone *this,MapZone *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != this) {
    uVar2 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    uVar2 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0x20),(RepeatedPtrFieldBase *)(param_1 + 0x20));
    uVar1 = *(undefined4 *)(this + 0x58);
    *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    uVar2 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    uVar1 = *(undefined4 *)(this + 0x68);
    *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x68) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


