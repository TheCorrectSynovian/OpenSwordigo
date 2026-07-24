/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00354730
 * Function: Caver::BreakableObjectComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(BreakableObjectComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BreakableObjectComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::BreakableObjectComponent::SaveToProtobufMessage
          (BreakableObjectComponent *this,Component *param_1)

{
  int iVar1;
  uint uVar2;
  BreakableObjectComponent BVar3;
  undefined4 uVar4;
  MessageLite *pMVar5;
  long lVar6;
  Program *this_00;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e4f70;
  pMVar5 = (MessageLite *)Proto::BreakableObjectComponent::default_instance();
  lVar6 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar5,(FieldDescriptor *)0x0);
  uVar2 = *(uint *)(lVar6 + 0x20);
  BVar3 = this[0x71];
  *(uint *)(lVar6 + 0x20) = uVar2 | 1;
  *(BreakableObjectComponent *)(lVar6 + 0xc) = BVar3;
  uVar4 = *(undefined4 *)(this + 0x74);
  *(uint *)(lVar6 + 0x20) = uVar2 | 3;
  *(undefined4 *)(lVar6 + 0x10) = uVar4;
  uVar4 = ProtobufValueFromSpecialDamageType(*(undefined4 *)(this + 0x78));
  this_00 = *(Program **)(lVar6 + 0x18);
  *(undefined4 *)(lVar6 + 0x14) = uVar4;
  *(uint *)(lVar6 + 0x20) = *(uint *)(lVar6 + 0x20) | 0xc;
  if (this_00 == (Program *)0x0) {
    this_00 = operator_new(0x30);
    Proto::Program::Program(this_00);
    *(Program **)(lVar6 + 0x18) = this_00;
  }
  Program::SaveToProtobufMessage((Program *)(this + 0x80),this_00);
  return;
}


