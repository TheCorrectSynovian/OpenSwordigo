/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003568ec
 * Function: Caver::CharAnimControllerComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(CharAnimControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharAnimControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::CharAnimControllerComponent::LoadFromProtobufMessage
          (CharAnimControllerComponent *this,Component *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  AnimationControllerComponent::LoadFromProtobufMessage
            ((AnimationControllerComponent *)this,param_1);
  lVar2 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e5a68,
                     *(MessageLite **)(PTR_extension_007e5a68 + 8));
  if (*(int *)(this + 0xc0) != *(int *)(lVar2 + 0xc)) {
    plVar3 = *(long **)(this + 200);
    *(int *)(this + 0xc0) = *(int *)(lVar2 + 0xc);
    *(undefined8 *)(this + 200) = 0;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  if (*(int *)(this + 0xd8) != *(int *)(lVar2 + 0x10)) {
    plVar3 = *(long **)(this + 0xe0);
    *(int *)(this + 0xd8) = *(int *)(lVar2 + 0x10);
    *(undefined8 *)(this + 0xe0) = 0;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  if (*(int *)(this + 0xf0) != *(int *)(lVar2 + 0x14)) {
    plVar3 = *(long **)(this + 0xf8);
    *(int *)(this + 0xf0) = *(int *)(lVar2 + 0x14);
    *(undefined8 *)(this + 0xf8) = 0;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  if (*(int *)(this + 0x108) != *(int *)(lVar2 + 0x18)) {
    plVar3 = *(long **)(this + 0x110);
    *(int *)(this + 0x108) = *(int *)(lVar2 + 0x18);
    *(undefined8 *)(this + 0x110) = 0;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  if (*(int *)(this + 0x120) != *(int *)(lVar2 + 0x1c)) {
    plVar3 = *(long **)(this + 0x128);
    *(int *)(this + 0x120) = *(int *)(lVar2 + 0x1c);
    *(undefined8 *)(this + 0x128) = 0;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  if (*(int *)(this + 0x138) != *(int *)(lVar2 + 0x20)) {
    plVar3 = *(long **)(this + 0x140);
    *(int *)(this + 0x138) = *(int *)(lVar2 + 0x20);
    *(undefined8 *)(this + 0x140) = 0;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00356a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))();
      return;
    }
  }
  return;
}


