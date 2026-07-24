/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003bc1e4
 * Function: Caver::GroundMeshGeneratorComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(GroundMeshGeneratorComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshGeneratorComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::GroundMeshGeneratorComponent::LoadFromProtobufMessage
          (GroundMeshGeneratorComponent *this,Component *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar3 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e58c0,
                     *(MessageLite **)(PTR_extension_007e58c0 + 8));
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
  iVar2 = *(int *)(lVar3 + 0x24);
  if ((iVar2 == 1) || (iVar2 == 0)) {
    *(int *)(this + 0xd0) = iVar2;
  }
  if (*(char *)(lVar3 + 0x38) < '\0') {
    *(undefined4 *)(this + 0xd4) = *(undefined4 *)(lVar3 + 0x28);
  }
  *(undefined8 *)(this + 0xd8) = *(undefined8 *)(lVar3 + 0x1c);
  uVar1 = *(uint *)(lVar3 + 0x38);
  if ((uVar1 >> 8 & 1) != 0) {
    *(undefined4 *)(this + 0xe0) = *(undefined4 *)(lVar3 + 0x2c);
  }
  if ((uVar1 >> 9 & 1) != 0) {
    *(undefined4 *)(this + 0xe4) = *(undefined4 *)(lVar3 + 0x30);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    *(undefined4 *)(this + 0xe4) = *(undefined4 *)(lVar3 + 0x34);
  }
  return;
}


