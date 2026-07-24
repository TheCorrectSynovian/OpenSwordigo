/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fbb68
 * Function: Caver::Proto::Component::Swap
 * Signature: undefined __thiscall Swap(Component * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Component::Swap(Caver::Proto::Component*) */

void __thiscall Caver::Proto::Component::Swap(Component *this,Component *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != this) {
    uVar2 = *(undefined8 *)(this + 0x40);
    *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    uVar1 = *(undefined4 *)(this + 0x48);
    *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x4c);
    *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x4c) = uVar1;
    uVar2 = *(undefined8 *)(this + 0x50);
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = uVar2;
    uVar1 = *(undefined4 *)(this + 0x58);
    *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x38);
    *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = uVar1;
    google::protobuf::internal::ExtensionSet::Swap
              ((ExtensionSet *)(this + 8),(ExtensionSet *)(param_1 + 8));
    return;
  }
  return;
}


