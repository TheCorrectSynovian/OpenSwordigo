/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037b148
 * Function: Caver::MonsterEntityComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(MonsterEntityComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MonsterEntityComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::MonsterEntityComponent::LoadFromProtobufMessage
          (MonsterEntityComponent *this,Component *param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  
  EntityComponent::LoadFromProtobufMessage((EntityComponent *)this,param_1);
  lVar4 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e4df0,
                     *(MessageLite **)(PTR_extension_007e4df0 + 8));
  puVar3 = PTR_default_instance__007e4960;
  lVar1 = *(long *)PTR_default_instance__007e4960;
  if (*(long *)(lVar4 + 0x10) != 0) {
    lVar1 = lVar4;
  }
  Program::LoadFromProtobufMessage((Program *)(this + 0x130),*(Program **)(lVar1 + 0x10));
  lVar1 = *(long *)puVar3;
  if (*(long *)(lVar4 + 0x18) != 0) {
    lVar1 = lVar4;
  }
  Program::LoadFromProtobufMessage((Program *)(this + 0x158),*(Program **)(lVar1 + 0x18));
  uVar2 = *(uint *)(lVar4 + 0x24);
  if ((uVar2 >> 2 & 1) != 0) {
    this[0x198] = *(MonsterEntityComponent *)(lVar4 + 0x20);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    this[0x19a] = *(MonsterEntityComponent *)(lVar4 + 0x21);
  }
  return;
}


