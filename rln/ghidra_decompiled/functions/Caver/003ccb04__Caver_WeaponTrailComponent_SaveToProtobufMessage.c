/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ccb04
 * Function: Caver::WeaponTrailComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(WeaponTrailComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponTrailComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::WeaponTrailComponent::SaveToProtobufMessage(WeaponTrailComponent *this,Component *param_1)

{
  int iVar1;
  MessageLite *pMVar2;
  long lVar3;
  FloatColor *this_00;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e6950;
  pMVar2 = (MessageLite *)Proto::WeaponTrailComponent::default_instance();
  lVar3 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar2,(FieldDescriptor *)0x0);
  this_00 = *(FloatColor **)(lVar3 + 0x10);
  *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) | 1;
  if (this_00 == (FloatColor *)0x0) {
    this_00 = operator_new(0x20);
    Proto::FloatColor::FloatColor(this_00);
    *(FloatColor **)(lVar3 + 0x10) = this_00;
  }
  FloatColorToProtobufMessage((FloatColor *)(this + 0xb0),this_00);
  return;
}


