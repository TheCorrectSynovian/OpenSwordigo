/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037e034
 * Function: Caver::PhysicsObjectComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(PhysicsObjectComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PhysicsObjectComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::PhysicsObjectComponent::SaveToProtobufMessage
          (PhysicsObjectComponent *this,Component *param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  MessageLite *pMVar4;
  long lVar5;
  uint uVar6;
  Vector2 *this_00;
  float fVar7;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar2 = *(int *)PTR_extension_007e59b8;
  pMVar4 = (MessageLite *)Proto::PhysicsObjectComponent::default_instance();
  lVar5 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar2,'\v',pMVar4,(FieldDescriptor *)0x0);
  uVar6 = *(uint *)(lVar5 + 0x30);
  *(PhysicsObjectComponent *)(lVar5 + 0xc) = this[0x70];
  *(uint *)(lVar5 + 0x30) = uVar6 | 1;
  fVar3 = DAT_00683734;
  fVar7 = *(float *)(this + 0xe0);
  fVar1 = *(float *)(this + 0xe4);
  if ((DAT_00683734 < ABS(fVar7)) || (DAT_00683734 < ABS(fVar1 + 1.0))) {
    this_00 = *(Vector2 **)(lVar5 + 0x10);
    *(uint *)(lVar5 + 0x30) = uVar6 | 3;
    if (this_00 == (Vector2 *)0x0) {
      this_00 = operator_new(0x18);
      Proto::Vector2::Vector2(this_00);
      *(Vector2 **)(lVar5 + 0x10) = this_00;
    }
    *(float *)(this_00 + 0xc) = fVar7;
    *(float *)(this_00 + 0x10) = fVar1;
    *(uint *)(this_00 + 0x14) = *(uint *)(this_00 + 0x14) | 3;
  }
  if (ABS(*(float *)(this + 0xe8) + DAT_00688748) <= fVar3) {
    uVar6 = *(uint *)(lVar5 + 0x30);
  }
  else {
    uVar6 = *(uint *)(lVar5 + 0x30) | 4;
    fVar7 = *(float *)(this + 0xe8) / DAT_0068796c;
    *(uint *)(lVar5 + 0x30) = uVar6;
    *(float *)(lVar5 + 0x18) = fVar7;
  }
  *(undefined8 *)(lVar5 + 0x1c) = *(undefined8 *)(this + 0x10c);
  *(undefined4 *)(lVar5 + 0x24) = *(undefined4 *)(this + 0xac);
  *(PhysicsObjectComponent *)(lVar5 + 0x28) = this[0xed];
  *(undefined4 *)(lVar5 + 0x2c) = *(undefined4 *)(this + 0xf0);
  *(uint *)(lVar5 + 0x30) = uVar6 | 0xf8;
  return;
}


