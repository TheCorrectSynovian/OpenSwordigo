/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a0690
 * Function: Caver::StaticMonsterControllerComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(StaticMonsterControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StaticMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
    */

void __thiscall
Caver::StaticMonsterControllerComponent::LoadFromProtobufMessage
          (StaticMonsterControllerComponent *this,Component *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  StaticMonsterControllerComponent *pSVar5;
  
  MonsterControllerComponent::LoadFromProtobufMessage((MonsterControllerComponent *)this,param_1);
  lVar2 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e55f8,
                     *(MessageLite **)(PTR_extension_007e55f8 + 8));
  if (*(int *)(this + 0xd8) != *(int *)(lVar2 + 0xc)) {
    plVar3 = *(long **)(this + 0xe0);
    *(int *)(this + 0xd8) = *(int *)(lVar2 + 0xc);
    *(undefined8 *)(this + 0xe0) = 0;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  iVar1 = *(int *)(lVar2 + 0x18);
  *(int *)(this + 0x118) = iVar1;
  if (0 < iVar1) {
    lVar4 = 0;
    pSVar5 = this + 0xe8;
    do {
      (**(code **)(*(long *)pSVar5 + 0x10))
                (pSVar5,*(undefined4 *)(*(long *)(lVar2 + 0x10) + lVar4 * 4));
      lVar4 = lVar4 + 1;
      pSVar5 = pSVar5 + 0x18;
    } while (lVar4 < *(int *)(this + 0x118));
  }
  return;
}


