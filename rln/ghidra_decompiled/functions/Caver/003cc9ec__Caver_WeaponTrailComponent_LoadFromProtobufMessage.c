/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cc9ec
 * Function: Caver::WeaponTrailComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(WeaponTrailComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponTrailComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::WeaponTrailComponent::LoadFromProtobufMessage(WeaponTrailComponent *this,Component *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  FloatColor *extraout_x1;
  FloatColor *extraout_x1_00;
  float fVar4;
  undefined1 auVar5 [16];
  Color aCStack_68 [16];
  byte local_58;
  byte local_57;
  byte local_56;
  byte local_55;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  undefined4 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  auVar5 = google::protobuf::internal::ExtensionSet::GetMessage
                     ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e6950,
                      *(MessageLite **)(PTR_extension_007e6950 + 8));
  lVar3 = auVar5._0_8_;
  if ((*(byte *)(lVar3 + 0x18) & 1) != 0) {
    lVar1 = *(long *)PTR_default_instance__007e5120;
    if (*(long *)(lVar3 + 0x10) != 0) {
      lVar1 = lVar3;
    }
    FloatColorFromProtobufMessage(*(Caver **)(lVar1 + 0x10),auVar5._8_8_);
    Color::FromFloatColor(aCStack_68,extraout_x1);
    fVar4 = (float)NEON_ucvtf((uint)local_58);
    fStack_4c = (float)NEON_ucvtf((uint)local_57);
    local_48 = (float)NEON_ucvtf((uint)local_56);
    fStack_44 = (float)NEON_ucvtf((uint)local_55);
    fStack_4c = fStack_4c / DAT_00683ffc;
    local_48 = local_48 / DAT_00683ffc;
    fStack_44 = fStack_44 / DAT_00683ffc;
    local_50 = (fVar4 / DAT_00683ffc) * *(float *)(this + 0xc0);
    *(float *)(this + 0xb0) = fVar4 / DAT_00683ffc;
    *(float *)(this + 0xb4) = fStack_4c;
    fStack_4c = fStack_4c * *(float *)(this + 0xc4);
    *(float *)(this + 0xb8) = local_48;
    *(float *)(this + 0xbc) = fStack_44;
    local_48 = local_48 * *(float *)(this + 200);
    fStack_44 = fStack_44 * *(float *)(this + 0xcc);
    Color::FromFloatColor((Color *)&local_50,extraout_x1_00);
    *(undefined4 *)(this + 0x78) = local_3c;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


