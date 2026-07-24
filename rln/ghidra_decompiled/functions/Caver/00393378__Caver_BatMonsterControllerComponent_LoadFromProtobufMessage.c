/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00393378
 * Function: Caver::BatMonsterControllerComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(BatMonsterControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BatMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::BatMonsterControllerComponent::LoadFromProtobufMessage
          (BatMonsterControllerComponent *this,Component *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  MonsterControllerComponent::LoadFromProtobufMessage((MonsterControllerComponent *)this,param_1);
  lVar2 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e5b28,
                     *(MessageLite **)(PTR_extension_007e5b28 + 8));
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
                    /* WARNING: Could not recover jumptable at 0x00393434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))();
      return;
    }
  }
  return;
}


