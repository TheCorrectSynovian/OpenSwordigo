/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00376128
 * Function: Caver::ItemDropComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(ItemDropComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemDropComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::ItemDropComponent::SaveToProtobufMessage(ItemDropComponent *this,Component *param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ItemDropComponent IVar4;
  undefined *puVar5;
  undefined *puVar6;
  MessageLite *pMVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  ItemDropComponent_ItemDropEntry *this_00;
  long lVar13;
  long lVar14;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar2 = *(int *)PTR_extension_007e5880;
  pMVar7 = (MessageLite *)Proto::ItemDropComponent::default_instance();
  lVar8 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar2,'\v',pMVar7,(FieldDescriptor *)0x0);
  puVar5 = PTR__default_item_name__007e5cd8;
  if (*(long *)(*(long *)(this + 0x78) + -0x18) != 0) {
    plVar9 = *(long **)(lVar8 + 0x10);
    *(uint *)(lVar8 + 0x5c) = *(uint *)(lVar8 + 0x5c) | 1;
    if (plVar9 == (long *)puVar5) {
      plVar9 = operator_new(8);
      *plVar9 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(lVar8 + 0x10) = plVar9;
    }
    FUN_0066a6a8(plVar9,this + 0x78);
  }
  puVar5 = PTR__default_item_identifier__007e6a38;
  if (*(long *)(*(long *)(this + 0x80) + -0x18) != 0) {
    plVar9 = *(long **)(lVar8 + 0x18);
    *(uint *)(lVar8 + 0x5c) = *(uint *)(lVar8 + 0x5c) | 2;
    if (plVar9 == (long *)puVar5) {
      plVar9 = operator_new(8);
      *plVar9 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(lVar8 + 0x18) = plVar9;
    }
    FUN_0066a6a8(plVar9,this + 0x80);
  }
  *(ItemDropComponent *)(lVar8 + 0x58) = this[0x70];
  IVar4 = this[0x71];
  *(uint *)(lVar8 + 0x5c) = *(uint *)(lVar8 + 0x5c) | 0x18;
  *(ItemDropComponent *)(lVar8 + 0x59) = IVar4;
  puVar6 = PTR__default_item_identifier__007e7320;
  puVar5 = PTR__default_template_name__007e6418;
  if (0 < *(int *)(this + 0x88)) {
    lVar13 = 0;
    lVar14 = 0;
    puVar1 = PTR_DAT_007e5de8 + 0x18;
    do {
      iVar2 = *(int *)(lVar8 + 0x28);
      iVar10 = *(int *)(lVar8 + 0x2c);
      if (iVar2 < iVar10) {
        *(int *)(lVar8 + 0x28) = iVar2 + 1;
        this_00 = *(ItemDropComponent_ItemDropEntry **)(*(long *)(lVar8 + 0x20) + (long)iVar2 * 8);
      }
      else {
        if (iVar10 == *(int *)(lVar8 + 0x30)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(lVar8 + 0x20),iVar10 + 1);
          iVar10 = *(int *)(lVar8 + 0x2c);
        }
        *(int *)(lVar8 + 0x2c) = iVar10 + 1;
        this_00 = operator_new(0x30);
        Proto::ItemDropComponent_ItemDropEntry::ItemDropComponent_ItemDropEntry(this_00);
        iVar2 = *(int *)(lVar8 + 0x28);
        *(int *)(lVar8 + 0x28) = iVar2 + 1;
        *(ItemDropComponent_ItemDropEntry **)(*(long *)(lVar8 + 0x20) + (long)iVar2 * 8) = this_00;
      }
      lVar11 = *(long *)(this + 0x90);
      plVar9 = *(long **)(this_00 + 0x10);
      *(uint *)(this_00 + 0x2c) = *(uint *)(this_00 + 0x2c) | 1;
      if (plVar9 == (long *)puVar5) {
        plVar9 = operator_new(8);
        *plVar9 = (long)puVar1;
        *(long **)(this_00 + 0x10) = plVar9;
      }
      FUN_0066a6a8(plVar9,lVar11 + lVar13);
      lVar11 = *(long *)(this + 0x90);
      plVar9 = *(long **)(this_00 + 0x18);
      *(uint *)(this_00 + 0x2c) = *(uint *)(this_00 + 0x2c) | 2;
      if (plVar9 == (long *)puVar6) {
        plVar9 = operator_new(8);
        *plVar9 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this_00 + 0x18) = plVar9;
      }
      FUN_0066a6a8(plVar9,lVar11 + lVar13 + 8);
      uVar3 = *(uint *)(this_00 + 0x2c);
      lVar14 = lVar14 + 1;
      lVar11 = *(long *)(this + 0x90) + lVar13;
      *(uint *)(this_00 + 0x2c) = uVar3 | 4;
      uVar12 = *(undefined8 *)(lVar11 + 0x10);
      *(uint *)(this_00 + 0x2c) = uVar3 | 0xc;
      *(undefined8 *)(this_00 + 0x20) = uVar12;
      lVar13 = lVar13 + 0x20;
      *(undefined4 *)(this_00 + 0x28) = *(undefined4 *)(lVar11 + 0x18);
      *(uint *)(this_00 + 0x2c) = uVar3 | 0x1c;
    } while (lVar14 < *(int *)(this + 0x88));
  }
  return;
}


