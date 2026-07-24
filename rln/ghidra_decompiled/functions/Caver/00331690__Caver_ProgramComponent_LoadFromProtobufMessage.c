/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00331690
 * Function: Caver::ProgramComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(ProgramComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::ProgramComponent::LoadFromProtobufMessage(ProgramComponent *this,Component *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar3 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e73f0,
                     *(MessageLite **)(PTR_extension_007e73f0 + 8));
  this[0x70] = *(ProgramComponent *)(lVar3 + 0xc);
  this[0x78] = *(ProgramComponent *)(lVar3 + 0xd);
  uVar2 = *(int *)(lVar3 + 0x10) - 1;
  if (uVar2 < 10) {
    uVar4 = *(undefined4 *)(&LAB_00684620 + (long)(int)uVar2 * 4);
  }
  else {
    uVar4 = 0;
  }
  *(undefined4 *)(this + 0x74) = uVar4;
  if ((*(byte *)(lVar3 + 0x20) >> 3 & 1) == 0) {
    return;
  }
  lVar1 = *(long *)PTR_default_instance__007e56e8;
  if (*(long *)(lVar3 + 0x18) != 0) {
    lVar1 = lVar3;
  }
  Program::LoadFromProtobufMessage((Program *)(this + 0x80),*(Program **)(lVar1 + 0x18));
  return;
}


