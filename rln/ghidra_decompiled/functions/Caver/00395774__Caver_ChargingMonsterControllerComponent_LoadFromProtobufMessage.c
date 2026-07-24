/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00395774
 * Function: Caver::ChargingMonsterControllerComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(ChargingMonsterControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ChargingMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component
   const&) */

void __thiscall
Caver::ChargingMonsterControllerComponent::LoadFromProtobufMessage
          (ChargingMonsterControllerComponent *this,Component *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
  MonsterControllerComponent::LoadFromProtobufMessage((MonsterControllerComponent *)this,param_1);
  lVar3 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e5478,
                     *(MessageLite **)(PTR_extension_007e5478 + 8));
  if (*(int *)(this + 0xd8) != *(int *)(lVar3 + 0xc)) {
    plVar4 = *(long **)(this + 0xe0);
    *(int *)(this + 0xd8) = *(int *)(lVar3 + 0xc);
    *(undefined8 *)(this + 0xe0) = 0;
    if ((plVar4 != (long *)0x0) &&
       (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (*(int *)(this + 0xf0) != *(int *)(lVar3 + 0x10)) {
    plVar4 = *(long **)(this + 0xf8);
    *(int *)(this + 0xf0) = *(int *)(lVar3 + 0x10);
    *(undefined8 *)(this + 0xf8) = 0;
    if ((plVar4 != (long *)0x0) &&
       (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (*(int *)(this + 0x108) != *(int *)(lVar3 + 0x14)) {
    plVar4 = *(long **)(this + 0x110);
    *(int *)(this + 0x108) = *(int *)(lVar3 + 0x14);
    *(undefined8 *)(this + 0x110) = 0;
    if ((plVar4 != (long *)0x0) &&
       (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar4 + 8))();
      uVar1 = *(uint *)(lVar3 + 0x20);
      goto joined_r0x00395854;
    }
  }
  uVar1 = *(uint *)(lVar3 + 0x20);
joined_r0x00395854:
  if ((uVar1 >> 3 & 1) != 0) {
    *(undefined4 *)(this + 0x128) = *(undefined4 *)(lVar3 + 0x18);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    *(undefined4 *)(this + 300) = *(undefined4 *)(lVar3 + 0x1c);
  }
  return;
}


