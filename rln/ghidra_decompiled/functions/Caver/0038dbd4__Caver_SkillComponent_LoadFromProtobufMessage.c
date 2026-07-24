/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038dbd4
 * Function: Caver::SkillComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(SkillComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::SkillComponent::LoadFromProtobufMessage(SkillComponent *this,Component *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar3 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e5658,
                     *(MessageLite **)(PTR_extension_007e5658 + 8));
  if (*(int *)(this + 0x78) != *(int *)(lVar3 + 0xc)) {
    plVar4 = *(long **)(this + 0x80);
    *(int *)(this + 0x78) = *(int *)(lVar3 + 0xc);
    *(undefined8 *)(this + 0x80) = 0;
    if ((plVar4 != (long *)0x0) &&
       (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  FUN_0066a6a8(this + 0xa0,*(undefined8 *)(lVar3 + 0x10));
  lVar1 = *(long *)PTR_default_instance__007e5830;
  if (*(long *)(lVar3 + 0x18) != 0) {
    lVar1 = lVar3;
  }
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(*(long *)(lVar1 + 0x18) + 0xc);
  return;
}


