/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0035a740
 * Function: Caver::CharControllerComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(CharControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharControllerComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::CharControllerComponent::SaveToProtobufMessage
          (CharControllerComponent *this,Component *param_1)

{
  CharControllerComponent *pCVar1;
  void *pvVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  undefined4 uVar8;
  MessageLite *pMVar9;
  long lVar10;
  void *pvVar11;
  ulong uVar12;
  void *pvVar13;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar7 = *(int *)PTR_extension_007e75c0;
  pMVar9 = (MessageLite *)Proto::CharControllerComponent::default_instance();
  lVar10 = google::protobuf::internal::ExtensionSet::MutableMessage
                     ((ExtensionSet *)(param_1 + 8),iVar7,'\v',pMVar9,(FieldDescriptor *)0x0);
  uVar3 = *(uint *)(lVar10 + 0x7c);
  uVar8 = *(undefined4 *)(this + 0x78);
  pCVar1 = this + 0x1d0;
  *(uint *)(lVar10 + 0x7c) = uVar3 | 1;
  *(undefined4 *)(lVar10 + 0xc) = uVar8;
  uVar8 = *(undefined4 *)(this + 0x90);
  *(uint *)(lVar10 + 0x7c) = uVar3 | 3;
  *(undefined4 *)(lVar10 + 0x10) = uVar8;
  uVar8 = *(undefined4 *)(this + 0xa8);
  *(uint *)(lVar10 + 0x7c) = uVar3 | 7;
  pvVar2 = (void *)(lVar10 + 0x58);
  *(undefined4 *)(lVar10 + 0x14) = uVar8;
  uVar8 = *(undefined4 *)(this + 0xc0);
  *(uint *)(lVar10 + 0x7c) = uVar3 | 0xf;
  *(undefined4 *)(lVar10 + 0x18) = uVar8;
  uVar8 = *(undefined4 *)(this + 0xd8);
  *(uint *)(lVar10 + 0x7c) = uVar3 | 0x1f;
  *(undefined4 *)(lVar10 + 0x1c) = uVar8;
  uVar8 = *(undefined4 *)(this + 0xf0);
  *(uint *)(lVar10 + 0x7c) = uVar3 | 0x3f;
  *(undefined4 *)(lVar10 + 0x20) = uVar8;
  uVar8 = *(undefined4 *)(this + 0x108);
  *(uint *)(lVar10 + 0x7c) = uVar3 | 0x7f;
  *(undefined4 *)(lVar10 + 0x24) = uVar8;
  uVar8 = *(undefined4 *)(this + 0x120);
  *(uint *)(lVar10 + 0x7c) = uVar3 | 0xff;
  *(undefined4 *)(lVar10 + 0x28) = uVar8;
  uVar8 = *(undefined4 *)(this + 0x138);
  *(uint *)(lVar10 + 0x7c) = uVar3 | 0x1ff;
  *(undefined4 *)(lVar10 + 0x2c) = uVar8;
  uVar8 = *(undefined4 *)(this + 0x150);
  *(uint *)(lVar10 + 0x7c) = uVar3 | 0x3ff;
  *(undefined4 *)(lVar10 + 0x30) = uVar8;
  uVar8 = *(undefined4 *)(this + 0x168);
  *(uint *)(lVar10 + 0x7c) = uVar3 | 0x7ff;
  *(undefined4 *)(lVar10 + 0x34) = uVar8;
  uVar8 = *(undefined4 *)(this + 0x180);
  *(uint *)(lVar10 + 0x7c) = uVar3 | 0xfff;
  *(undefined4 *)(lVar10 + 0x38) = uVar8;
  uVar8 = *(undefined4 *)(this + 0x1a0);
  *(uint *)(lVar10 + 0x7c) = uVar3 | 0x1fff;
  *(undefined4 *)(lVar10 + 0x3c) = uVar8;
  uVar8 = *(undefined4 *)(this + 0x1b8);
  *(uint *)(lVar10 + 0x7c) = uVar3 | 0x3fff;
  *(undefined4 *)(lVar10 + 0x40) = uVar8;
  iVar7 = (**(code **)(*(long *)(this + 0x1d0) + 8))(pCVar1);
  if (iVar7 != 0) {
    uVar8 = (**(code **)(*(long *)pCVar1 + 8))(pCVar1);
    iVar7 = *(int *)(lVar10 + 0x50);
    if (iVar7 == *(int *)(lVar10 + 0x54)) {
      uVar3 = iVar7 * 2;
      if ((int)uVar3 < iVar7 + 1) {
        uVar3 = iVar7 + 1;
      }
      pvVar13 = *(void **)(lVar10 + 0x48);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (long)(int)uVar3;
      *(uint *)(lVar10 + 0x54) = uVar3;
      uVar12 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
      if (SUB168(auVar4 * ZEXT816(4),8) != 0) {
        uVar12 = 0xffffffffffffffff;
      }
      pvVar11 = operator_new__(uVar12);
      *(void **)(lVar10 + 0x48) = pvVar11;
      memcpy(pvVar11,pvVar13,(long)iVar7 << 2);
      if ((pvVar13 != pvVar2) && (pvVar13 != (void *)0x0)) {
        operator_delete__(pvVar13);
        iVar7 = *(int *)(lVar10 + 0x50);
      }
    }
    *(int *)(lVar10 + 0x50) = iVar7 + 1;
    *(undefined4 *)(*(long *)(lVar10 + 0x48) + (long)iVar7 * 4) = uVar8;
  }
  pCVar1 = this + 0x1e8;
  iVar7 = (**(code **)(*(long *)(this + 0x1e8) + 8))(pCVar1);
  if (iVar7 != 0) {
    uVar8 = (**(code **)(*(long *)pCVar1 + 8))(pCVar1);
    iVar7 = *(int *)(lVar10 + 0x50);
    if (iVar7 == *(int *)(lVar10 + 0x54)) {
      uVar3 = iVar7 * 2;
      if ((int)uVar3 < iVar7 + 1) {
        uVar3 = iVar7 + 1;
      }
      pvVar13 = *(void **)(lVar10 + 0x48);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (long)(int)uVar3;
      *(uint *)(lVar10 + 0x54) = uVar3;
      uVar12 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
      if (SUB168(auVar5 * ZEXT816(4),8) != 0) {
        uVar12 = 0xffffffffffffffff;
      }
      pvVar11 = operator_new__(uVar12);
      *(void **)(lVar10 + 0x48) = pvVar11;
      memcpy(pvVar11,pvVar13,(long)iVar7 << 2);
      if ((pvVar13 != pvVar2) && (pvVar13 != (void *)0x0)) {
        operator_delete__(pvVar13);
        iVar7 = *(int *)(lVar10 + 0x50);
      }
    }
    *(int *)(lVar10 + 0x50) = iVar7 + 1;
    *(undefined4 *)(*(long *)(lVar10 + 0x48) + (long)iVar7 * 4) = uVar8;
  }
  pCVar1 = this + 0x200;
  iVar7 = (**(code **)(*(long *)(this + 0x200) + 8))(pCVar1);
  if (iVar7 != 0) {
    uVar8 = (**(code **)(*(long *)pCVar1 + 8))(pCVar1);
    iVar7 = *(int *)(lVar10 + 0x50);
    if (iVar7 == *(int *)(lVar10 + 0x54)) {
      uVar3 = iVar7 * 2;
      if ((int)uVar3 < iVar7 + 1) {
        uVar3 = iVar7 + 1;
      }
      pvVar13 = *(void **)(lVar10 + 0x48);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (long)(int)uVar3;
      *(uint *)(lVar10 + 0x54) = uVar3;
      uVar12 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
      if (SUB168(auVar6 * ZEXT816(4),8) != 0) {
        uVar12 = 0xffffffffffffffff;
      }
      pvVar11 = operator_new__(uVar12);
      *(void **)(lVar10 + 0x48) = pvVar11;
      memcpy(pvVar11,pvVar13,(long)iVar7 << 2);
      if ((pvVar13 != pvVar2) && (pvVar13 != (void *)0x0)) {
        operator_delete__(pvVar13);
        iVar7 = *(int *)(lVar10 + 0x50);
      }
    }
    *(int *)(lVar10 + 0x50) = iVar7 + 1;
    *(undefined4 *)(*(long *)(lVar10 + 0x48) + (long)iVar7 * 4) = uVar8;
  }
  *(undefined4 *)(lVar10 + 0x6c) = *(undefined4 *)(this + 0x26c);
  *(undefined4 *)(lVar10 + 0x68) = *(undefined4 *)(this + 0x278);
  *(undefined8 *)(lVar10 + 0x70) = *(undefined8 *)(this + 0x27c);
  *(undefined4 *)(lVar10 + 0x78) = *(undefined4 *)(this + 0x284);
  *(uint *)(lVar10 + 0x7c) = *(uint *)(lVar10 + 0x7c) | 0xf8000;
  return;
}


