/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b28a0
 * Function: Caver::DoorControllerComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(DoorControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DoorControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::DoorControllerComponent::LoadFromProtobufMessage
          (DoorControllerComponent *this,Component *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar2 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e7088,
                     *(MessageLite **)(PTR_extension_007e7088 + 8));
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
  this[0xd0] = *(DoorControllerComponent *)(lVar2 + 0x1c);
  return;
}


