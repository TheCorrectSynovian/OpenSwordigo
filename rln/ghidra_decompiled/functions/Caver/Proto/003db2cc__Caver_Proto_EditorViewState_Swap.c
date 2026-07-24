/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003db2cc
 * Function: Caver::Proto::EditorViewState::Swap
 * Signature: undefined __thiscall Swap(EditorViewState * this, EditorViewState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EditorViewState::Swap(Caver::Proto::EditorViewState*) */

void __thiscall Caver::Proto::EditorViewState::Swap(EditorViewState *this,EditorViewState *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != this) {
    uVar2 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0x18),(RepeatedPtrFieldBase *)(param_1 + 0x18));
    uVar2 = *(undefined8 *)(this + 0x50);
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = uVar2;
    uVar2 = *(undefined8 *)(this + 0x58);
    *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = uVar2;
    uVar1 = *(undefined4 *)(this + 0x60);
    *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x60) = uVar1;
    uVar2 = *(undefined8 *)(this + 0x68);
    *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    uVar2 = *(undefined8 *)(this + 0x70);
    *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = uVar2;
    uVar1 = *(undefined4 *)(this + 0x78);
    *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x78) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


