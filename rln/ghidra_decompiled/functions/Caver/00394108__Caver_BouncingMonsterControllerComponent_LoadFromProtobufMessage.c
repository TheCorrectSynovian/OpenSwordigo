/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00394108
 * Function: Caver::BouncingMonsterControllerComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(BouncingMonsterControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BouncingMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component
   const&) */

void __thiscall
Caver::BouncingMonsterControllerComponent::LoadFromProtobufMessage
          (BouncingMonsterControllerComponent *this,Component *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  MonsterControllerComponent::LoadFromProtobufMessage((MonsterControllerComponent *)this,param_1);
  lVar2 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e4e70,
                     *(MessageLite **)(PTR_extension_007e4e70 + 8));
  if (*(int *)(this + 0xd8) != *(int *)(lVar2 + 0xc)) {
    plVar3 = *(long **)(this + 0xe0);
    *(int *)(this + 0xd8) = *(int *)(lVar2 + 0xc);
    *(undefined8 *)(this + 0xe0) = 0;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  if (*(int *)(this + 0xf0) != *(int *)(lVar2 + 0x10)) {
    plVar3 = *(long **)(this + 0xf8);
    *(int *)(this + 0xf0) = *(int *)(lVar2 + 0x10);
    *(undefined8 *)(this + 0xf8) = 0;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  *(undefined8 *)(this + 0x108) = *(undefined8 *)(lVar2 + 0x14);
  return;
}


