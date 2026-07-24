/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c3e94
 * Function: Caver::StateProperties::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(StateProperties * this, StateProperties * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StateProperties::SaveToProtobufMessage(Caver::Proto::StateProperties*) const */

void __thiscall
Caver::StateProperties::SaveToProtobufMessage(StateProperties *this,StateProperties *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  StateProperties *pSVar4;
  
  pSVar4 = *(StateProperties **)(this + 0x18);
  if (this + 8 != pSVar4) {
    do {
      iVar1 = *(int *)(param_1 + 0x18);
      iVar3 = *(int *)(param_1 + 0x1c);
      if (iVar1 < iVar3) {
        *(int *)(param_1 + 0x18) = iVar1 + 1;
        uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)iVar1 * 8);
      }
      else {
        if (iVar3 == *(int *)(param_1 + 0x20)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(param_1 + 0x10),iVar3 + 1);
          iVar3 = *(int *)(param_1 + 0x1c);
        }
        *(int *)(param_1 + 0x1c) = iVar3 + 1;
        uVar2 = google::protobuf::internal::StringTypeHandlerBase::New();
        iVar1 = *(int *)(param_1 + 0x18);
        *(int *)(param_1 + 0x18) = iVar1 + 1;
        *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)iVar1 * 8) = uVar2;
      }
      FUN_0066a6a8(uVar2,pSVar4 + 0x20);
      pSVar4 = (StateProperties *)FUN_0064c6a0(pSVar4);
    } while (this + 8 != pSVar4);
  }
  return;
}


