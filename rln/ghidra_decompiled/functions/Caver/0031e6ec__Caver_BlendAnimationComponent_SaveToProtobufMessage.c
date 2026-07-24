/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031e6ec
 * Function: Caver::BlendAnimationComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(BlendAnimationComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BlendAnimationComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::BlendAnimationComponent::SaveToProtobufMessage
          (BlendAnimationComponent *this,Component *param_1)

{
  int iVar1;
  MessageLite *pMVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e47c8;
  pMVar2 = (MessageLite *)Proto::BlendAnimationComponent::default_instance();
  lVar3 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar2,(FieldDescriptor *)0x0);
  if (*(int *)(this + 0x80) != 0) {
    *(int *)(lVar3 + 0xc) = *(int *)(this + 0x80);
    *(uint *)(lVar3 + 0x1c) = *(uint *)(lVar3 + 0x1c) | 1;
  }
  iVar1 = *(int *)(this + 0x90);
  uVar4 = *(uint *)(lVar3 + 0x1c);
  if (iVar1 != 0) {
    uVar4 = uVar4 | 2;
    *(uint *)(lVar3 + 0x1c) = uVar4;
    *(int *)(lVar3 + 0x10) = iVar1;
  }
  lVar5 = *(long *)(this + 0x78);
  fVar7 = *(float *)(lVar5 + 0x24);
  *(uint *)(lVar3 + 0x1c) = uVar4 | 4;
  *(float *)(lVar3 + 0x14) = fVar7;
  fVar6 = *(float *)(lVar5 + 0x28);
  if (fVar6 <= 0.0) {
    fVar6 = fVar7;
  }
  if (DAT_00683734 < ABS(fVar7 - fVar6)) {
    *(uint *)(lVar3 + 0x1c) = uVar4 | 0xc;
    *(float *)(lVar3 + 0x18) = fVar6;
  }
  return;
}


