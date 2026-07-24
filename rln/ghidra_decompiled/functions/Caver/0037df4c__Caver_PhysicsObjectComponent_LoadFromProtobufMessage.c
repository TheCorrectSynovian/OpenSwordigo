/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037df4c
 * Function: Caver::PhysicsObjectComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(PhysicsObjectComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::PhysicsObjectComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::PhysicsObjectComponent::LoadFromProtobufMessage
          (PhysicsObjectComponent *this,Component *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar3 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e59b8,
                     *(MessageLite **)(PTR_extension_007e59b8 + 8));
  uVar2 = *(uint *)(lVar3 + 0x30);
  if ((uVar2 & 1) != 0) {
    this[0x70] = *(PhysicsObjectComponent *)(lVar3 + 0xc);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    lVar1 = *(long *)PTR_default_instance__007e5a38;
    if (*(long *)(lVar3 + 0x10) != 0) {
      lVar1 = lVar3;
    }
    *(undefined8 *)(this + 0xe0) = *(undefined8 *)(*(long *)(lVar1 + 0x10) + 0xc);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    *(float *)(this + 0xe8) = *(float *)(lVar3 + 0x18) * DAT_0068796c;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    *(undefined4 *)(this + 0x10c) = *(undefined4 *)(lVar3 + 0x1c);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    *(undefined4 *)(this + 0x110) = *(undefined4 *)(lVar3 + 0x20);
  }
  if ((uVar2 >> 5 & 1) != 0) {
    *(undefined4 *)(this + 0xac) = *(undefined4 *)(lVar3 + 0x24);
  }
  if ((uVar2 >> 6 & 1) != 0) {
    this[0xed] = *(PhysicsObjectComponent *)(lVar3 + 0x28);
  }
  if ((uVar2 >> 7 & 1) != 0) {
    *(undefined4 *)(this + 0xf0) = *(undefined4 *)(lVar3 + 0x2c);
  }
  return;
}


