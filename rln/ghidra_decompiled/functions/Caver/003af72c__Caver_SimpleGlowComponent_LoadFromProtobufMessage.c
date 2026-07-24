/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003af72c
 * Function: Caver::SimpleGlowComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(SimpleGlowComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SimpleGlowComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::SimpleGlowComponent::LoadFromProtobufMessage(SimpleGlowComponent *this,Component *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  GlowComponent::LoadFromProtobufMessage((GlowComponent *)this,param_1);
  auVar7 = google::protobuf::internal::ExtensionSet::GetMessage
                     ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e66c0,
                      *(MessageLite **)(PTR_extension_007e66c0 + 8));
  puVar4 = PTR_default_instance__007e53a8;
  lVar5 = auVar7._0_8_;
  lVar1 = *(long *)PTR_default_instance__007e53a8;
  if (*(long *)(lVar5 + 0x10) != 0) {
    lVar1 = lVar5;
  }
  FloatColorFromProtobufMessage(*(Caver **)(lVar1 + 0x10),auVar7._8_8_);
  *(undefined8 *)(this + 0xac) = uStack_40;
  *(undefined8 *)(this + 0xa4) = local_48;
  *(undefined8 *)(this + 0xb4) = *(undefined8 *)(lVar5 + 0x18);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(lVar5 + 0x20);
  lVar1 = *(long *)puVar4;
  if (*(long *)(lVar5 + 0x28) != 0) {
    lVar1 = lVar5;
  }
  *(undefined8 *)(this + 0xbc) = *(undefined8 *)(*(long *)(lVar1 + 0x28) + 0xc);
  uVar2 = *(uint *)(lVar5 + 0x38);
  if ((uVar2 >> 5 & 1) != 0) {
    *(undefined4 *)(this + 0xcc) = *(undefined4 *)(lVar5 + 0x30);
  }
  if ((uVar2 >> 6 & 1) != 0) {
    *(undefined4 *)(this + 0xd0) = *(undefined4 *)(lVar5 + 0x34);
  }
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


