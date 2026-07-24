/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a0758
 * Function: Caver::StaticMonsterControllerComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(StaticMonsterControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StaticMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::StaticMonsterControllerComponent::SaveToProtobufMessage
          (StaticMonsterControllerComponent *this,Component *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  undefined4 uVar5;
  MessageLite *pMVar6;
  long lVar7;
  void *pvVar8;
  ulong uVar9;
  StaticMonsterControllerComponent *pSVar10;
  void *pvVar11;
  
  MonsterControllerComponent::SaveToProtobufMessage((MonsterControllerComponent *)this,param_1);
  iVar4 = *(int *)PTR_extension_007e55f8;
  pMVar6 = (MessageLite *)Proto::StaticMonsterControllerComponent::default_instance();
  lVar7 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar4,'\v',pMVar6,(FieldDescriptor *)0x0);
  uVar5 = *(undefined4 *)(this + 0xd8);
  *(uint *)(lVar7 + 0x30) = *(uint *)(lVar7 + 0x30) | 1;
  *(undefined4 *)(lVar7 + 0xc) = uVar5;
  pSVar10 = this + 0xe8;
  iVar4 = (**(code **)(*(long *)pSVar10 + 8))(pSVar10);
  if (iVar4 != 0) {
    uVar5 = (**(code **)(*(long *)pSVar10 + 8))(pSVar10);
    iVar4 = *(int *)(lVar7 + 0x18);
    if (iVar4 == *(int *)(lVar7 + 0x1c)) {
      uVar1 = iVar4 * 2;
      if ((int)uVar1 < iVar4 + 1) {
        uVar1 = iVar4 + 1;
      }
      pvVar11 = *(void **)(lVar7 + 0x10);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (long)(int)uVar1;
      *(uint *)(lVar7 + 0x1c) = uVar1;
      uVar9 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
      if (SUB168(auVar2 * ZEXT816(4),8) != 0) {
        uVar9 = 0xffffffffffffffff;
      }
      pvVar8 = operator_new__(uVar9);
      *(void **)(lVar7 + 0x10) = pvVar8;
      memcpy(pvVar8,pvVar11,(long)iVar4 << 2);
      if ((pvVar11 != (void *)(lVar7 + 0x20)) && (pvVar11 != (void *)0x0)) {
        operator_delete__(pvVar11);
        iVar4 = *(int *)(lVar7 + 0x18);
      }
    }
    *(int *)(lVar7 + 0x18) = iVar4 + 1;
    *(undefined4 *)(*(long *)(lVar7 + 0x10) + (long)iVar4 * 4) = uVar5;
  }
  pSVar10 = this + 0x100;
  iVar4 = (**(code **)(*(long *)(this + 0x100) + 8))(pSVar10);
  if (iVar4 != 0) {
    uVar5 = (**(code **)(*(long *)pSVar10 + 8))(pSVar10);
    iVar4 = *(int *)(lVar7 + 0x18);
    if (iVar4 == *(int *)(lVar7 + 0x1c)) {
      uVar1 = iVar4 * 2;
      if ((int)uVar1 < iVar4 + 1) {
        uVar1 = iVar4 + 1;
      }
      pvVar11 = *(void **)(lVar7 + 0x10);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (long)(int)uVar1;
      *(uint *)(lVar7 + 0x1c) = uVar1;
      uVar9 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
      if (SUB168(auVar3 * ZEXT816(4),8) != 0) {
        uVar9 = 0xffffffffffffffff;
      }
      pvVar8 = operator_new__(uVar9);
      *(void **)(lVar7 + 0x10) = pvVar8;
      memcpy(pvVar8,pvVar11,(long)iVar4 << 2);
      if ((pvVar11 != (void *)(lVar7 + 0x20)) && (pvVar11 != (void *)0x0)) {
        operator_delete__(pvVar11);
        iVar4 = *(int *)(lVar7 + 0x18);
      }
    }
    *(int *)(lVar7 + 0x18) = iVar4 + 1;
    *(undefined4 *)(*(long *)(lVar7 + 0x10) + (long)iVar4 * 4) = uVar5;
  }
  return;
}


