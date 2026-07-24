/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00331738
 * Function: Caver::ProgramComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(ProgramComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::ProgramComponent::SaveToProtobufMessage(ProgramComponent *this,Component *param_1)

{
  int iVar1;
  uint uVar2;
  ProgramComponent PVar3;
  MessageLite *pMVar4;
  long lVar5;
  undefined4 uVar6;
  Program *this_00;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e73f0;
  pMVar4 = (MessageLite *)Proto::ProgramComponent::default_instance();
  lVar5 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar4,(FieldDescriptor *)0x0);
  uVar2 = *(uint *)(lVar5 + 0x20);
  *(ProgramComponent *)(lVar5 + 0xc) = this[0x70];
  PVar3 = this[0x78];
  *(uint *)(lVar5 + 0x20) = uVar2 | 3;
  *(ProgramComponent *)(lVar5 + 0xd) = PVar3;
  if (*(int *)(this + 0x74) - 1U < 10) {
    uVar6 = *(undefined4 *)(&DAT_00684650 + (long)(int)(*(int *)(this + 0x74) - 1U) * 4);
  }
  else {
    uVar6 = 0;
  }
  this_00 = *(Program **)(lVar5 + 0x18);
  *(undefined4 *)(lVar5 + 0x10) = uVar6;
  *(uint *)(lVar5 + 0x20) = uVar2 | 0xf;
  if (this_00 == (Program *)0x0) {
    this_00 = operator_new(0x30);
    Proto::Program::Program(this_00);
    *(Program **)(lVar5 + 0x18) = this_00;
  }
  Program::SaveToProtobufMessage((Program *)(this + 0x80),this_00);
  return;
}


