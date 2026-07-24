/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00328c7c
 * Function: Caver::ObjectLinkControllerComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(ObjectLinkControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLinkControllerComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::ObjectLinkControllerComponent::SaveToProtobufMessage
          (ObjectLinkControllerComponent *this,Component *param_1)

{
  ObjectLinkControllerComponent *pOVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  MessageLite *pMVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  int iVar11;
  Vector3 *pVVar12;
  long local_58 [2];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar11 = *(int *)PTR_extension_007e47a0;
  pMVar7 = (MessageLite *)Proto::ObjectLinkControllerComponent::default_instance();
  lVar8 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar11,'\v',pMVar7,(FieldDescriptor *)0x0);
  pOVar1 = this + 0x70;
  if (*(long *)(this + 0x78) != 0) {
    pOVar1 = (ObjectLinkControllerComponent *)(*(long *)(this + 0x78) + 0x50);
  }
  FUN_0066a528(local_58,pOVar1);
  puVar5 = PTR__default_target_object_identifier__007e4c30;
  plVar9 = *(long **)(lVar8 + 0x10);
  *(uint *)(lVar8 + 0x38) = *(uint *)(lVar8 + 0x38) | 1;
  if (plVar9 == (long *)puVar5) {
    plVar9 = operator_new(8);
    *plVar9 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(lVar8 + 0x10) = plVar9;
  }
  FUN_0066a6a8(plVar9,local_58);
  puVar5 = PTR_DAT_007e5de8;
  if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar10 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  puVar6 = PTR__default_target_bone_identifier__007e7b50;
  plVar9 = *(long **)(lVar8 + 0x18);
  *(uint *)(lVar8 + 0x38) = *(uint *)(lVar8 + 0x38) | 2;
  if (plVar9 == (long *)puVar6) {
    plVar9 = operator_new(8);
    *plVar9 = (long)(puVar5 + 0x18);
    *(long **)(lVar8 + 0x18) = plVar9;
  }
  FUN_0066a6a8(plVar9,this + 0x90);
  pVVar12 = *(Vector3 **)(lVar8 + 0x20);
  *(uint *)(lVar8 + 0x38) = *(uint *)(lVar8 + 0x38) | 4;
  if (pVVar12 == (Vector3 *)0x0) {
    pVVar12 = operator_new(0x20);
    Proto::Vector3::Vector3(pVVar12);
    *(Vector3 **)(lVar8 + 0x20) = pVVar12;
  }
  *(undefined8 *)(pVVar12 + 0xc) = *(undefined8 *)(this + 0xec);
  *(undefined4 *)(pVVar12 + 0x14) = *(undefined4 *)(this + 0xf4);
  *(uint *)(pVVar12 + 0x18) = *(uint *)(pVVar12 + 0x18) | 7;
  pVVar12 = *(Vector3 **)(lVar8 + 0x28);
  *(uint *)(lVar8 + 0x38) = *(uint *)(lVar8 + 0x38) | 8;
  if (pVVar12 == (Vector3 *)0x0) {
    pVVar12 = operator_new(0x20);
    Proto::Vector3::Vector3(pVVar12);
    *(Vector3 **)(lVar8 + 0x28) = pVVar12;
  }
  *(undefined8 *)(pVVar12 + 0xc) = *(undefined8 *)(this + 0xf8);
  *(undefined4 *)(pVVar12 + 0x14) = *(undefined4 *)(this + 0x100);
  *(uint *)(pVVar12 + 0x18) = *(uint *)(pVVar12 + 0x18) | 7;
  pVVar12 = *(Vector3 **)(lVar8 + 0x30);
  *(uint *)(lVar8 + 0x38) = *(uint *)(lVar8 + 0x38) | 0x10;
  if (pVVar12 == (Vector3 *)0x0) {
    pVVar12 = operator_new(0x20);
    Proto::Vector3::Vector3(pVVar12);
    *(Vector3 **)(lVar8 + 0x30) = pVVar12;
  }
  *(undefined8 *)(pVVar12 + 0xc) = *(undefined8 *)(this + 0x104);
  *(undefined4 *)(pVVar12 + 0x14) = *(undefined4 *)(this + 0x10c);
  *(uint *)(pVVar12 + 0x18) = *(uint *)(pVVar12 + 0x18) | 7;
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


