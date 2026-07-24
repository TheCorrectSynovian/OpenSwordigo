/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003201e8
 * Function: Caver::KeyframeAnimationComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(KeyframeAnimationComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::KeyframeAnimationComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::KeyframeAnimationComponent::SaveToProtobufMessage
          (KeyframeAnimationComponent *this,Component *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  MessageLite *pMVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e7f60;
  pMVar5 = (MessageLite *)Proto::KeyframeAnimationComponent::default_instance();
  lVar6 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar5,(FieldDescriptor *)0x0);
  uVar2 = *(uint *)(lVar6 + 0x20);
  uVar3 = *(undefined4 *)(this + 0x78);
  uVar8 = uVar2 | 1;
  *(uint *)(lVar6 + 0x20) = uVar8;
  *(undefined4 *)(lVar6 + 0xc) = uVar3;
  puVar4 = PTR__default_name__007e5890;
  if (*(long *)(*(long *)(this + 0x88) + -0x18) != 0) {
    plVar7 = *(long **)(lVar6 + 0x10);
    *(uint *)(lVar6 + 0x20) = uVar2 | 3;
    if (plVar7 == (long *)puVar4) {
      plVar7 = operator_new(8);
      *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(lVar6 + 0x10) = plVar7;
    }
    FUN_0066a6a8(plVar7,this + 0x88);
    uVar8 = *(uint *)(lVar6 + 0x20);
  }
  lVar9 = *(long *)(this + 0x90);
  *(undefined1 *)(lVar6 + 0x18) = *(undefined1 *)(lVar9 + 0x2c);
  *(undefined1 *)(lVar6 + 0x19) = *(undefined1 *)(lVar9 + 0x38);
  *(undefined4 *)(lVar6 + 0x1c) = *(undefined4 *)(lVar9 + 0x30);
  *(uint *)(lVar6 + 0x20) = uVar8 | 0x1c;
  return;
}


