/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00382714
 * Function: Caver::FireBreathComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(FireBreathComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FireBreathComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::FireBreathComponent::SaveToProtobufMessage(FireBreathComponent *this,Component *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  MessageLite *pMVar4;
  long lVar5;
  FloatColor *this_00;
  
  SpellComponent::SaveToProtobufMessage((SpellComponent *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e6268;
  pMVar4 = (MessageLite *)Proto::FireBreathComponent::default_instance();
  lVar5 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar4,(FieldDescriptor *)0x0);
  uVar2 = *(uint *)(lVar5 + 0x20);
  this_00 = *(FloatColor **)(lVar5 + 0x18);
  *(undefined4 *)(lVar5 + 0xc) = *(undefined4 *)(this + 200);
  *(uint *)(lVar5 + 0x20) = uVar2 | 1;
  uVar3 = *(undefined4 *)(this + 0xe0);
  *(uint *)(lVar5 + 0x20) = uVar2 | 7;
  *(undefined4 *)(lVar5 + 0x10) = uVar3;
  if (this_00 == (FloatColor *)0x0) {
    this_00 = operator_new(0x20);
    Proto::FloatColor::FloatColor(this_00);
    *(FloatColor **)(lVar5 + 0x18) = this_00;
  }
  FloatColorToProtobufMessage((FloatColor *)(this + 0xf0),this_00);
  return;
}


