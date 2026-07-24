/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036a308
 * Function: Caver::EntityControllerComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(EntityControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::EntityControllerComponent::LoadFromProtobufMessage
          (EntityControllerComponent *this,Component *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar2 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e5fa0,
                     *(MessageLite **)(PTR_extension_007e5fa0 + 8));
  if (*(int *)(this + 0x78) != *(int *)(lVar2 + 0xc)) {
    plVar3 = *(long **)(this + 0x80);
    *(int *)(this + 0x78) = *(int *)(lVar2 + 0xc);
    *(undefined8 *)(this + 0x80) = 0;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  if (*(int *)(this + 0x90) != *(int *)(lVar2 + 0x10)) {
    plVar3 = *(long **)(this + 0x98);
    *(int *)(this + 0x90) = *(int *)(lVar2 + 0x10);
    *(undefined8 *)(this + 0x98) = 0;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  if (*(int *)(this + 0xa8) != *(int *)(lVar2 + 0x14)) {
    plVar3 = *(long **)(this + 0xb0);
    *(int *)(this + 0xa8) = *(int *)(lVar2 + 0x14);
    *(undefined8 *)(this + 0xb0) = 0;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  if (*(int *)(this + 0xc0) != *(int *)(lVar2 + 0x18)) {
    plVar3 = *(long **)(this + 200);
    *(int *)(this + 0xc0) = *(int *)(lVar2 + 0x18);
    *(undefined8 *)(this + 200) = 0;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  *(undefined8 *)(this + 0xe0) = *(undefined8 *)(lVar2 + 0x1c);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(lVar2 + 0x24);
  iVar1 = *(int *)(lVar2 + 0x28) + -1;
  if (2 < *(int *)(lVar2 + 0x28) - 2U) {
    iVar1 = 0;
  }
  *(int *)(this + 0xf8) = iVar1;
  return;
}


