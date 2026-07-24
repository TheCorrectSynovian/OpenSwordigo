/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f12c8
 * Function: Caver::Proto::CharacterState::MergeFrom
 * Signature: undefined __thiscall MergeFrom(CharacterState * this, CharacterState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::CharacterState::MergeFrom(Caver::Proto::CharacterState const&) */

void __thiscall
Caver::Proto::CharacterState::MergeFrom(CharacterState *this,CharacterState *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  LogMessage *pLVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/GameState.pb.cc",0xdac);
    pLVar6 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar6);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  google::protobuf::RepeatedPtrField<Caver::Proto::CharacterState_ItemState>::MergeFrom
            ((RepeatedPtrField<Caver::Proto::CharacterState_ItemState> *)(this + 0x20),
             (RepeatedPtrField *)(param_1 + 0x20));
  google::protobuf::RepeatedPtrField<std::string>::MergeFrom
            ((RepeatedPtrField<std::string> *)(this + 0x68),(RepeatedPtrField *)(param_1 + 0x68));
  uVar1 = *(uint *)(param_1 + 0xcc);
  plVar8 = (long *)PTR__default_current_skill__007e50e8;
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0xc);
      *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) | 1;
      *(undefined4 *)(this + 0xc) = uVar2;
      uVar1 = *(uint *)(param_1 + 0xcc);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) | 2;
      *(undefined4 *)(this + 0x10) = uVar2;
      uVar1 = *(uint *)(param_1 + 0xcc);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x14);
      *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) | 4;
      *(undefined4 *)(this + 0x14) = uVar2;
      uVar1 = *(uint *)(param_1 + 0xcc);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) | 8;
      *(undefined4 *)(this + 0x18) = uVar2;
      uVar1 = *(uint *)(param_1 + 0xcc);
    }
    plVar8 = (long *)PTR__default_equipped_weapon__007e56f0;
    if ((uVar1 >> 4 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x1c);
      *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) | 0x10;
      *(undefined4 *)(this + 0x1c) = uVar2;
      uVar1 = *(uint *)(param_1 + 0xcc);
      plVar8 = (long *)PTR__default_equipped_weapon__007e56f0;
    }
    PTR__default_equipped_weapon__007e56f0 = (undefined *)plVar8;
    plVar7 = (long *)PTR__default_equipped_armor__007e6790;
    if ((uVar1 >> 6 & 1) != 0) {
      plVar7 = *(long **)(this + 0x58);
      uVar9 = *(undefined8 *)(param_1 + 0x58);
      *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) | 0x40;
      if (plVar7 == plVar8) {
        plVar7 = operator_new(8);
        *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x58) = plVar7;
      }
      FUN_0066a6a8(plVar7,uVar9);
      uVar1 = *(uint *)(param_1 + 0xcc);
      plVar7 = (long *)PTR__default_equipped_armor__007e6790;
    }
    plVar8 = (long *)PTR__default_current_skill__007e50e8;
    PTR__default_equipped_armor__007e6790 = (undefined *)plVar7;
    if ((uVar1 >> 7 & 1) != 0) {
      plVar8 = *(long **)(this + 0x60);
      uVar9 = *(undefined8 *)(param_1 + 0x60);
      *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) | 0x80;
      if (plVar8 == plVar7) {
        plVar8 = operator_new(8);
        *plVar8 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x60) = plVar8;
      }
      FUN_0066a6a8(plVar8,uVar9);
      uVar1 = *(uint *)(param_1 + 0xcc);
      plVar8 = (long *)PTR__default_current_skill__007e50e8;
    }
  }
  PTR__default_current_skill__007e50e8 = (undefined *)plVar8;
  if ((uVar1 & 0x1fe00) != 0) {
    puVar4 = PTR__default_weapon_trinket__007e5d70;
    if ((uVar1 >> 9 & 1) != 0) {
      plVar7 = *(long **)(this + 0xa0);
      uVar9 = *(undefined8 *)(param_1 + 0xa0);
      *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) | 0x200;
      if (plVar7 == plVar8) {
        plVar7 = operator_new(8);
        *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0xa0) = plVar7;
      }
      FUN_0066a6a8(plVar7,uVar9);
      uVar1 = *(uint *)(param_1 + 0xcc);
      puVar4 = PTR__default_weapon_trinket__007e5d70;
    }
    puVar5 = PTR__default_armor_trinket__007e5360;
    PTR__default_weapon_trinket__007e5d70 = puVar4;
    if ((uVar1 >> 10 & 1) != 0) {
      plVar8 = *(long **)(this + 0xa8);
      uVar9 = *(undefined8 *)(param_1 + 0xa8);
      *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) | 0x400;
      if (plVar8 == (long *)puVar4) {
        plVar8 = operator_new(8);
        *plVar8 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0xa8) = plVar8;
      }
      FUN_0066a6a8(plVar8,uVar9);
      uVar1 = *(uint *)(param_1 + 0xcc);
      puVar5 = PTR__default_armor_trinket__007e5360;
    }
    PTR__default_armor_trinket__007e5360 = puVar5;
    puVar4 = PTR__default_skill_trinket__007e61b0;
    if ((uVar1 >> 0xb & 1) != 0) {
      plVar8 = *(long **)(this + 0xb0);
      uVar9 = *(undefined8 *)(param_1 + 0xb0);
      *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) | 0x800;
      if (plVar8 == (long *)puVar5) {
        plVar8 = operator_new(8);
        *plVar8 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0xb0) = plVar8;
      }
      FUN_0066a6a8(plVar8,uVar9);
      uVar1 = *(uint *)(param_1 + 0xcc);
      puVar4 = PTR__default_skill_trinket__007e61b0;
    }
    PTR__default_skill_trinket__007e61b0 = puVar4;
    if ((uVar1 >> 0xc & 1) != 0) {
      plVar8 = *(long **)(this + 0xb8);
      uVar9 = *(undefined8 *)(param_1 + 0xb8);
      *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) | 0x1000;
      if (plVar8 == (long *)puVar4) {
        plVar8 = operator_new(8);
        *plVar8 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0xb8) = plVar8;
      }
      FUN_0066a6a8(plVar8,uVar9);
      uVar1 = *(uint *)(param_1 + 0xcc);
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0xc0);
      *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) | 0x2000;
      *(undefined4 *)(this + 0xc0) = uVar2;
      uVar1 = *(uint *)(param_1 + 0xcc);
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0xc4);
      *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) | 0x4000;
      *(undefined4 *)(this + 0xc4) = uVar2;
      uVar1 = *(uint *)(param_1 + 0xcc);
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
      *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) | 0x8000;
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


