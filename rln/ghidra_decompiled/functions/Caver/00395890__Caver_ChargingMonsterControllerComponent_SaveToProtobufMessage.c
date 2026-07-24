/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00395890
 * Function: Caver::ChargingMonsterControllerComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(ChargingMonsterControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ChargingMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component*) const
    */

void __thiscall
Caver::ChargingMonsterControllerComponent::SaveToProtobufMessage
          (ChargingMonsterControllerComponent *this,Component *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  MessageLite *pMVar4;
  long lVar5;
  undefined8 uVar6;
  
  MonsterControllerComponent::SaveToProtobufMessage((MonsterControllerComponent *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e5478;
  pMVar4 = (MessageLite *)Proto::ChargingMonsterControllerComponent::default_instance();
  lVar5 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar4,(FieldDescriptor *)0x0);
  uVar2 = *(uint *)(lVar5 + 0x20);
  uVar3 = *(undefined4 *)(this + 0xd8);
  *(uint *)(lVar5 + 0x20) = uVar2 | 1;
  *(undefined4 *)(lVar5 + 0xc) = uVar3;
  uVar3 = *(undefined4 *)(this + 0xf0);
  *(uint *)(lVar5 + 0x20) = uVar2 | 3;
  *(undefined4 *)(lVar5 + 0x10) = uVar3;
  *(undefined4 *)(lVar5 + 0x14) = *(undefined4 *)(this + 0x108);
  uVar6 = *(undefined8 *)(this + 0x128);
  *(uint *)(lVar5 + 0x20) = uVar2 | 0x1f;
  *(undefined8 *)(lVar5 + 0x18) = uVar6;
  return;
}


