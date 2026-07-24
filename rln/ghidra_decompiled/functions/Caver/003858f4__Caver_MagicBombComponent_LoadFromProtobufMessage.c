/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003858f4
 * Function: Caver::MagicBombComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(MagicBombComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicBombComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::MagicBombComponent::LoadFromProtobufMessage(MagicBombComponent *this,Component *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  SpellComponent::LoadFromProtobufMessage((SpellComponent *)this,param_1);
  auVar4 = google::protobuf::internal::ExtensionSet::GetMessage
                     ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e5d98,
                      *(MessageLite **)(PTR_extension_007e5d98 + 8));
  lVar1 = *(long *)PTR_default_instance__007e7bd0;
  if (*(long *)(auVar4._0_8_ + 0x10) != 0) {
    lVar1 = auVar4._0_8_;
  }
  FloatColorFromProtobufMessage(*(Caver **)(lVar1 + 0x10),auVar4._8_8_);
  *(undefined8 *)(this + 0xd8) = uStack_40;
  *(undefined8 *)(this + 0xd0) = local_48;
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


