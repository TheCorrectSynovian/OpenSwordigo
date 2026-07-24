/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b3ad4
 * Function: Caver::ElevatorControllerComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(ElevatorControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ElevatorControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::ElevatorControllerComponent::LoadFromProtobufMessage
          (ElevatorControllerComponent *this,Component *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar4 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e72d0,
                     *(MessageLite **)(PTR_extension_007e72d0 + 8));
  if (*(int *)(this + 0x78) != *(int *)(lVar4 + 0xc)) {
    plVar5 = *(long **)(this + 0x80);
    *(int *)(this + 0x78) = *(int *)(lVar4 + 0xc);
    *(undefined8 *)(this + 0x80) = 0;
    if ((plVar5 != (long *)0x0) &&
       (iVar3 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar3, iVar3 == 0)) {
      (**(code **)(*plVar5 + 8))();
      bVar1 = *(byte *)(lVar4 + 0x14);
      goto joined_r0x003b3b68;
    }
  }
  bVar1 = *(byte *)(lVar4 + 0x14);
joined_r0x003b3b68:
  if (((bVar1 >> 1 & 1) != 0) && (uVar2 = *(int *)(lVar4 + 0x10) - 1, uVar2 < 3)) {
    *(uint *)(this + 0x98) = uVar2;
  }
  return;
}


