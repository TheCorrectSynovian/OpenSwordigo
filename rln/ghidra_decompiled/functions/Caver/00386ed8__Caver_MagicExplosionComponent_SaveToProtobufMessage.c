/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00386ed8
 * Function: Caver::MagicExplosionComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(MagicExplosionComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicExplosionComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::MagicExplosionComponent::SaveToProtobufMessage
          (MagicExplosionComponent *this,Component *param_1)

{
  int iVar1;
  uint uVar2;
  MessageLite *pMVar3;
  long lVar4;
  FloatColor *this_00;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e7c20;
  pMVar3 = (MessageLite *)Proto::MagicExplosionComponent::default_instance();
  lVar4 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar3,(FieldDescriptor *)0x0);
  this_00 = *(FloatColor **)(lVar4 + 0x10);
  *(undefined4 *)(lVar4 + 0xc) = *(undefined4 *)(this + 0x78);
  *(uint *)(lVar4 + 0x24) = *(uint *)(lVar4 + 0x24) | 3;
  if (this_00 == (FloatColor *)0x0) {
    this_00 = operator_new(0x20);
    Proto::FloatColor::FloatColor(this_00);
    *(FloatColor **)(lVar4 + 0x10) = this_00;
  }
  FloatColorToProtobufMessage((FloatColor *)(this + 0xb0),this_00);
  uVar2 = *(uint *)(lVar4 + 0x24);
  *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(this + 0xe0);
  *(uint *)(lVar4 + 0x24) = uVar2 | 0xc;
  *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(this + 0x90);
  *(uint *)(lVar4 + 0x24) = uVar2 | 0x1c;
  return;
}


