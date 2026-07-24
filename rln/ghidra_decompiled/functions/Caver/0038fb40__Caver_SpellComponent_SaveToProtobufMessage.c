/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038fb40
 * Function: Caver::SpellComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(SpellComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SpellComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::SpellComponent::SaveToProtobufMessage(SpellComponent *this,Component *param_1)

{
  int iVar1;
  MessageLite *pMVar2;
  long lVar3;
  Program *this_00;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e4ea8;
  pMVar2 = (MessageLite *)Proto::SpellComponent::default_instance();
  lVar3 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar2,(FieldDescriptor *)0x0);
  if (((*(long *)(*(long *)(this + 0x90) + -0x18) == 0) && (*(long *)(this + 0x98) == 0)) &&
     (*(long *)(this + 0xa8) == 0)) {
    return;
  }
  this_00 = *(Program **)(lVar3 + 0x10);
  *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) | 1;
  if (this_00 == (Program *)0x0) {
    this_00 = operator_new(0x30);
    Proto::Program::Program(this_00);
    *(Program **)(lVar3 + 0x10) = this_00;
  }
  Program::SaveToProtobufMessage((Program *)(this + 0x90),this_00);
  return;
}


