/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00324688
 * Function: Caver::ModelComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(ModelComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::ModelComponent::LoadFromProtobufMessage(ModelComponent *this,Component *param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  byte bVar5;
  long lVar6;
  FloatColor *extraout_x1;
  FloatColor *extraout_x1_00;
  FloatColor *extraout_x1_01;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar6 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e6980,
                     *(MessageLite **)(PTR_extension_007e6980 + 8));
  if ((*(byte *)(lVar6 + 0x48) & 1) != 0) {
    FUN_0066a6a8(this + 0x70,*(undefined8 *)(lVar6 + 0x10));
  }
  puVar4 = PTR_default_instance__007e70f0;
  lVar1 = *(long *)PTR_default_instance__007e70f0;
  if (*(long *)(lVar6 + 0x18) != 0) {
    lVar1 = lVar6;
  }
  uVar2 = *(undefined4 *)(*(long *)(lVar1 + 0x18) + 0x14);
  *(undefined8 *)(this + 0xc4) = *(undefined8 *)(*(long *)(lVar1 + 0x18) + 0xc);
  *(undefined4 *)(this + 0xcc) = uVar2;
  bVar5 = Vector3::IsClose((Vector3 *)(this + 0xc4),(Vector3 *)PTR_Vector3Zero_007e5988,DAT_00683734
                          );
  this[0xc0] = (ModelComponent)(~bVar5 & 1);
  *(undefined8 *)(this + 0xd0) = *(undefined8 *)(lVar6 + 0x20);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(lVar6 + 0x28);
  lVar1 = *(long *)puVar4;
  if (*(long *)(lVar6 + 0x30) != 0) {
    lVar1 = lVar6;
  }
  FloatColorFromProtobufMessage(*(Caver **)(lVar1 + 0x30),extraout_x1);
  Color::FromFloatColor((Color *)&local_60,extraout_x1_00);
  *(undefined4 *)(this + 0x13a) = local_4c;
  this[0x9c] = *(ModelComponent *)(lVar6 + 0x38);
  if (*(char *)(lVar6 + 0x48) < '\0') {
    lVar1 = *(long *)puVar4;
    if (*(long *)(lVar6 + 0x40) != 0) {
      lVar1 = lVar6;
    }
    FloatColorFromProtobufMessage(*(Caver **)(lVar1 + 0x40),extraout_x1_01);
    *(undefined8 *)(this + 0xa8) = uStack_58;
    *(undefined8 *)(this + 0xa0) = local_60;
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


