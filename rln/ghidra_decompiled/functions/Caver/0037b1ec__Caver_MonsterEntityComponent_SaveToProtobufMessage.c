/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037b1ec
 * Function: Caver::MonsterEntityComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(MonsterEntityComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MonsterEntityComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::MonsterEntityComponent::SaveToProtobufMessage
          (MonsterEntityComponent *this,Component *param_1)

{
  int iVar1;
  MonsterEntityComponent MVar2;
  MessageLite *pMVar3;
  long lVar4;
  Program *pPVar5;
  
  EntityComponent::SaveToProtobufMessage((EntityComponent *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e4df0;
  pMVar3 = (MessageLite *)Proto::MonsterEntityComponent::default_instance();
  lVar4 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar3,(FieldDescriptor *)0x0);
  pPVar5 = *(Program **)(lVar4 + 0x10);
  *(uint *)(lVar4 + 0x24) = *(uint *)(lVar4 + 0x24) | 1;
  if (pPVar5 == (Program *)0x0) {
    pPVar5 = operator_new(0x30);
    Proto::Program::Program(pPVar5);
    *(Program **)(lVar4 + 0x10) = pPVar5;
  }
  Program::SaveToProtobufMessage((Program *)(this + 0x130),pPVar5);
  pPVar5 = *(Program **)(lVar4 + 0x18);
  *(uint *)(lVar4 + 0x24) = *(uint *)(lVar4 + 0x24) | 2;
  if (pPVar5 == (Program *)0x0) {
    pPVar5 = operator_new(0x30);
    Proto::Program::Program(pPVar5);
    *(Program **)(lVar4 + 0x18) = pPVar5;
  }
  Program::SaveToProtobufMessage((Program *)(this + 0x158),pPVar5);
  *(MonsterEntityComponent *)(lVar4 + 0x20) = this[0x198];
  MVar2 = this[0x19a];
  *(uint *)(lVar4 + 0x24) = *(uint *)(lVar4 + 0x24) | 0xc;
  *(MonsterEntityComponent *)(lVar4 + 0x21) = MVar2;
  return;
}


