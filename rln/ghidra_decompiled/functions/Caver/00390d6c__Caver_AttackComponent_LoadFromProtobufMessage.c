/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00390d6c
 * Function: Caver::AttackComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(AttackComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AttackComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::AttackComponent::LoadFromProtobufMessage(AttackComponent *this,Component *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar3 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e4be8,
                     *(MessageLite **)(PTR_extension_007e4be8 + 8));
  if (*(int *)(this + 0x78) != *(int *)(lVar3 + 0xc)) {
    plVar4 = *(long **)(this + 0x80);
    *(int *)(this + 0x78) = *(int *)(lVar3 + 0xc);
    *(undefined8 *)(this + 0x80) = 0;
    if ((plVar4 != (long *)0x0) &&
       (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (*(int *)(this + 0x90) != *(int *)(lVar3 + 0x10)) {
    plVar4 = *(long **)(this + 0x98);
    *(int *)(this + 0x90) = *(int *)(lVar3 + 0x10);
    *(undefined8 *)(this + 0x98) = 0;
    if ((plVar4 != (long *)0x0) &&
       (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (*(int *)(this + 0xa8) != *(int *)(lVar3 + 0x14)) {
    plVar4 = *(long **)(this + 0xb0);
    *(int *)(this + 0xa8) = *(int *)(lVar3 + 0x14);
    *(undefined8 *)(this + 0xb0) = 0;
    if ((plVar4 != (long *)0x0) &&
       (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (*(int *)(this + 0xc0) != *(int *)(lVar3 + 0x18)) {
    plVar4 = *(long **)(this + 200);
    *(int *)(this + 0xc0) = *(int *)(lVar3 + 0x18);
    *(undefined8 *)(this + 200) = 0;
    if ((plVar4 != (long *)0x0) &&
       (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  lVar1 = *(long *)PTR_default_instance__007e7ad0;
  if (*(long *)(lVar3 + 0x20) != 0) {
    lVar1 = lVar3;
  }
  Program::LoadFromProtobufMessage((Program *)(this + 0xd0),*(Program **)(lVar1 + 0x20));
  *(undefined8 *)(this + 0x104) = *(undefined8 *)(lVar3 + 0x28);
  uVar5 = *(undefined8 *)(lVar3 + 0x30);
  *(undefined8 *)(this + 0x11c) = *(undefined8 *)(lVar3 + 0x38);
  *(undefined8 *)(this + 0x114) = uVar5;
  *(undefined8 *)(this + 0x128) = *(undefined8 *)(lVar3 + 0x40);
  return;
}


