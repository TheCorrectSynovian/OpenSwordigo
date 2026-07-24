/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032012c
 * Function: Caver::KeyframeAnimationComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(KeyframeAnimationComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::KeyframeAnimationComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::KeyframeAnimationComponent::LoadFromProtobufMessage
          (KeyframeAnimationComponent *this,Component *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar2 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e7f60,
                     *(MessageLite **)(PTR_extension_007e7f60 + 8));
  if (((*(byte *)(lVar2 + 0x20) & 1) != 0) && (*(int *)(this + 0x78) != *(int *)(lVar2 + 0xc))) {
    plVar3 = *(long **)(this + 0x80);
    *(int *)(this + 0x78) = *(int *)(lVar2 + 0xc);
    *(undefined8 *)(this + 0x80) = 0;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  uVar4 = *(uint *)(lVar2 + 0x20);
  if ((uVar4 >> 1 & 1) != 0) {
    FUN_0066a6a8(this + 0x88,*(undefined8 *)(lVar2 + 0x10));
    uVar4 = *(uint *)(lVar2 + 0x20);
  }
  lVar5 = *(long *)(this + 0x90);
  *(undefined1 *)(lVar5 + 0x2c) = *(undefined1 *)(lVar2 + 0x18);
  if ((uVar4 >> 3 & 1) != 0) {
    *(undefined1 *)(lVar5 + 0x38) = *(undefined1 *)(lVar2 + 0x19);
  }
  *(undefined4 *)(lVar5 + 0x30) = *(undefined4 *)(lVar2 + 0x1c);
  return;
}


