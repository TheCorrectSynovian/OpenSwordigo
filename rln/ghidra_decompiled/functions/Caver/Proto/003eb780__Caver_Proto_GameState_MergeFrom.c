/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003eb780
 * Function: Caver::Proto::GameState::MergeFrom
 * Signature: undefined __thiscall MergeFrom(GameState * this, GameState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::GameState::MergeFrom(Caver::Proto::GameState const&) */

void __thiscall Caver::Proto::GameState::MergeFrom(GameState *this,GameState *param_1)

{
  GameState *pGVar1;
  GameState GVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  LogMessage *pLVar10;
  CharacterState *this_00;
  StateProperties *this_01;
  long *plVar11;
  long *plVar12;
  uint uVar13;
  undefined8 uVar14;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/GameState.pb.cc",0x8cc);
    pLVar10 = (LogMessage *)
              google::protobuf::internal::LogMessage::operator<<
                        (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar10);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  google::protobuf::RepeatedPtrField<Caver::Proto::LevelState>::MergeFrom
            ((RepeatedPtrField<Caver::Proto::LevelState> *)(this + 0x18),
             (RepeatedPtrField *)(param_1 + 0x18));
  google::protobuf::RepeatedPtrField<Caver::Proto::QuestState>::MergeFrom
            ((RepeatedPtrField<Caver::Proto::QuestState> *)(this + 0x80),
             (RepeatedPtrField *)(param_1 + 0x80));
  google::protobuf::RepeatedPtrField<Caver::Proto::QuestText>::MergeFrom
            ((RepeatedPtrField<Caver::Proto::QuestText> *)(this + 0xe0),
             (RepeatedPtrField *)(param_1 + 0xe0));
  uVar13 = *(uint *)(param_1 + 0x11c);
  if ((uVar13 & 0xff) != 0) {
    puVar4 = PTR__default_current_level__007e5760;
    if ((uVar13 & 1) != 0) {
      this_00 = *(CharacterState **)(this + 0x10);
      *(uint *)(this + 0x11c) = *(uint *)(this + 0x11c) | 1;
      if (this_00 == (CharacterState *)0x0) {
        this_00 = operator_new(0xd0);
        puVar7 = PTR_vtable_007e59a0;
        *(long *)(this_00 + 0x18) = 0;
        *(CharacterState **)(this_00 + 0x20) = this_00 + 0x38;
        *(long *)(this_00 + 0x10) = 0;
        *(CharacterState **)(this_00 + 0x68) = this_00 + 0x80;
        puVar6 = PTR__default_equipped_weapon__007e56f0;
        *(undefined4 *)(this_00 + 0x30) = 4;
        *(undefined4 *)(this_00 + 0x78) = 4;
        puVar9 = PTR__default_equipped_armor__007e6790;
        puVar4 = PTR__default_current_skill__007e50e8;
        *(long *)(this_00 + 0x28) = 0;
        *(long *)(this_00 + 0x70) = 0;
        puVar8 = PTR__default_weapon_trinket__007e5d70;
        puVar5 = PTR__default_armor_trinket__007e5360;
        *(undefined **)(this_00 + 0x60) = puVar9;
        *(undefined **)(this_00 + 0x58) = puVar6;
        puVar6 = PTR__default_skill_trinket__007e61b0;
        *(long *)(this_00 + 0xc0) = 0;
        *(long *)(this_00 + 200) = 0;
        *(undefined **)this_00 = puVar7 + 0x10;
        *(long *)(this_00 + 8) = 0;
        *(undefined **)(this_00 + 0xa8) = puVar8;
        *(undefined **)(this_00 + 0xa0) = puVar4;
        *(undefined **)(this_00 + 0xb8) = puVar6;
        *(undefined **)(this_00 + 0xb0) = puVar5;
        *(CharacterState **)(this + 0x10) = this_00;
      }
      pGVar1 = *(GameState **)PTR_default_instance__007e5ff0;
      if (*(long *)(param_1 + 0x10) != 0) {
        pGVar1 = param_1;
      }
      CharacterState::MergeFrom(this_00,*(CharacterState **)(pGVar1 + 0x10));
      uVar13 = *(uint *)(param_1 + 0x11c);
      puVar4 = PTR__default_current_level__007e5760;
    }
    PTR__default_current_level__007e5760 = puVar4;
    puVar5 = PTR__default_current_spawn_point__007e6dd0;
    if ((uVar13 >> 2 & 1) != 0) {
      plVar12 = *(long **)(this + 0x50);
      uVar14 = *(undefined8 *)(param_1 + 0x50);
      *(uint *)(this + 0x11c) = *(uint *)(this + 0x11c) | 4;
      if (plVar12 == (long *)puVar4) {
        plVar12 = operator_new(8);
        *plVar12 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x50) = plVar12;
      }
      FUN_0066a6a8(plVar12,uVar14);
      uVar13 = *(uint *)(param_1 + 0x11c);
      puVar5 = PTR__default_current_spawn_point__007e6dd0;
    }
    PTR__default_current_spawn_point__007e6dd0 = puVar5;
    puVar4 = PTR__default_previous_portal_level__007e7670;
    if ((uVar13 >> 3 & 1) != 0) {
      plVar12 = *(long **)(this + 0x58);
      uVar14 = *(undefined8 *)(param_1 + 0x58);
      *(uint *)(this + 0x11c) = *(uint *)(this + 0x11c) | 8;
      if (plVar12 == (long *)puVar5) {
        plVar12 = operator_new(8);
        *plVar12 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x58) = plVar12;
      }
      FUN_0066a6a8(plVar12,uVar14);
      uVar13 = *(uint *)(param_1 + 0x11c);
      puVar4 = PTR__default_previous_portal_level__007e7670;
    }
    plVar12 = (long *)PTR__default_current_map_node_name__007e49b8;
    PTR__default_previous_portal_level__007e7670 = puVar4;
    if ((uVar13 >> 4 & 1) != 0) {
      plVar12 = *(long **)(this + 0x60);
      uVar14 = *(undefined8 *)(param_1 + 0x60);
      *(uint *)(this + 0x11c) = *(uint *)(this + 0x11c) | 0x10;
      if (plVar12 == (long *)puVar4) {
        plVar12 = operator_new(8);
        *plVar12 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x60) = plVar12;
      }
      FUN_0066a6a8(plVar12,uVar14);
      uVar13 = *(uint *)(param_1 + 0x11c);
      plVar12 = (long *)PTR__default_current_map_node_name__007e49b8;
    }
    PTR__default_current_map_node_name__007e49b8 = (undefined *)plVar12;
    plVar11 = (long *)PTR__default_carried_object_template__007e66a8;
    if ((uVar13 >> 5 & 1) != 0) {
      plVar11 = *(long **)(this + 0x68);
      uVar14 = *(undefined8 *)(param_1 + 0x68);
      *(uint *)(this + 0x11c) = *(uint *)(this + 0x11c) | 0x20;
      if (plVar11 == plVar12) {
        plVar11 = operator_new(8);
        *plVar11 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x68) = plVar11;
      }
      FUN_0066a6a8(plVar11,uVar14);
      uVar13 = *(uint *)(param_1 + 0x11c);
      plVar11 = (long *)PTR__default_carried_object_template__007e66a8;
    }
    plVar12 = (long *)PTR__default_carried_object_identifier__007e6520;
    PTR__default_carried_object_template__007e66a8 = (undefined *)plVar11;
    if ((uVar13 >> 6 & 1) != 0) {
      plVar12 = *(long **)(this + 0x70);
      uVar14 = *(undefined8 *)(param_1 + 0x70);
      *(uint *)(this + 0x11c) = *(uint *)(this + 0x11c) | 0x40;
      if (plVar12 == plVar11) {
        plVar12 = operator_new(8);
        *plVar12 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x70) = plVar12;
      }
      FUN_0066a6a8(plVar12,uVar14);
      uVar13 = *(uint *)(param_1 + 0x11c);
      plVar12 = (long *)PTR__default_carried_object_identifier__007e6520;
    }
    PTR__default_carried_object_identifier__007e6520 = (undefined *)plVar12;
    if ((uVar13 >> 7 & 1) != 0) {
      plVar11 = *(long **)(this + 0x78);
      uVar14 = *(undefined8 *)(param_1 + 0x78);
      *(uint *)(this + 0x11c) = *(uint *)(this + 0x11c) | 0x80;
      if (plVar11 == plVar12) {
        plVar11 = operator_new(8);
        *plVar11 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x78) = plVar11;
      }
      FUN_0066a6a8(plVar11,uVar14);
      uVar13 = *(uint *)(param_1 + 0x11c);
    }
  }
  if ((uVar13 & 0x1fe00) != 0) {
    puVar4 = PTR__default_selected_menu_tab__007e6ec0;
    if ((uVar13 >> 9 & 1) != 0) {
      this_01 = *(StateProperties **)(this + 0xb8);
      *(uint *)(this + 0x11c) = *(uint *)(this + 0x11c) | 0x200;
      if (this_01 == (StateProperties *)0x0) {
        this_01 = operator_new(0x50);
        puVar4 = PTR_vtable_007e6290;
        *(StateProperties **)(this_01 + 0x10) = this_01 + 0x28;
        *(long *)(this_01 + 0x18) = 0;
        *(undefined4 *)(this_01 + 8) = 0;
        *(undefined4 *)(this_01 + 0x48) = 0;
        *(undefined4 *)(this_01 + 0x20) = 4;
        *(undefined **)this_01 = puVar4 + 0x10;
        *(StateProperties **)(this + 0xb8) = this_01;
      }
      pGVar1 = *(GameState **)PTR_default_instance__007e5ff0;
      if (*(long *)(param_1 + 0xb8) != 0) {
        pGVar1 = param_1;
      }
      StateProperties::MergeFrom(this_01,*(StateProperties **)(pGVar1 + 0xb8));
      uVar13 = *(uint *)(param_1 + 0x11c);
      puVar4 = PTR__default_selected_menu_tab__007e6ec0;
    }
    PTR__default_selected_menu_tab__007e6ec0 = puVar4;
    if ((uVar13 >> 10 & 1) != 0) {
      plVar12 = *(long **)(this + 0xc0);
      uVar14 = *(undefined8 *)(param_1 + 0xc0);
      *(uint *)(this + 0x11c) = *(uint *)(this + 0x11c) | 0x400;
      if (plVar12 == (long *)puVar4) {
        plVar12 = operator_new(8);
        *plVar12 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0xc0) = plVar12;
      }
      FUN_0066a6a8(plVar12,uVar14);
      uVar13 = *(uint *)(param_1 + 0x11c);
    }
    if ((uVar13 >> 0xb & 1) != 0) {
      GVar2 = param_1[200];
      *(uint *)(this + 0x11c) = *(uint *)(this + 0x11c) | 0x800;
      this[200] = GVar2;
      uVar13 = *(uint *)(param_1 + 0x11c);
    }
    plVar12 = (long *)PTR__default_flashing_item_name__007e5158;
    if ((uVar13 >> 0xc & 1) != 0) {
      GVar2 = param_1[0xc9];
      *(uint *)(this + 0x11c) = *(uint *)(this + 0x11c) | 0x1000;
      this[0xc9] = GVar2;
      uVar13 = *(uint *)(param_1 + 0x11c);
      plVar12 = (long *)PTR__default_flashing_item_name__007e5158;
    }
    PTR__default_flashing_item_name__007e5158 = (undefined *)plVar12;
    plVar11 = (long *)PTR__default_flashing_skill_name__007e63c0;
    if ((uVar13 >> 0xd & 1) != 0) {
      plVar11 = *(long **)(this + 0xd0);
      uVar14 = *(undefined8 *)(param_1 + 0xd0);
      *(uint *)(this + 0x11c) = *(uint *)(this + 0x11c) | 0x2000;
      if (plVar11 == plVar12) {
        plVar11 = operator_new(8);
        *plVar11 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0xd0) = plVar11;
      }
      FUN_0066a6a8(plVar11,uVar14);
      uVar13 = *(uint *)(param_1 + 0x11c);
      plVar11 = (long *)PTR__default_flashing_skill_name__007e63c0;
    }
    PTR__default_flashing_skill_name__007e63c0 = (undefined *)plVar11;
    if ((uVar13 >> 0xe & 1) != 0) {
      plVar12 = *(long **)(this + 0xd8);
      uVar14 = *(undefined8 *)(param_1 + 0xd8);
      *(uint *)(this + 0x11c) = *(uint *)(this + 0x11c) | 0x4000;
      if (plVar12 == plVar11) {
        plVar12 = operator_new(8);
        *plVar12 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0xd8) = plVar12;
      }
      FUN_0066a6a8(plVar12,uVar14);
      uVar13 = *(uint *)(param_1 + 0x11c);
    }
  }
  if ((uVar13 & 0xff0000) != 0) {
    if ((uVar13 >> 0x10 & 1) != 0) {
      GVar2 = param_1[0x118];
      *(uint *)(this + 0x11c) = *(uint *)(this + 0x11c) | 0x10000;
      this[0x118] = GVar2;
      uVar13 = *(uint *)(param_1 + 0x11c);
    }
    if ((uVar13 >> 0x11 & 1) != 0) {
      GVar2 = param_1[0x119];
      *(uint *)(this + 0x11c) = *(uint *)(this + 0x11c) | 0x20000;
      this[0x119] = GVar2;
      uVar13 = *(uint *)(param_1 + 0x11c);
    }
    if ((uVar13 >> 0x12 & 1) != 0) {
      GVar2 = param_1[0x11a];
      *(uint *)(this + 0x11c) = *(uint *)(this + 0x11c) | 0x40000;
      this[0x11a] = GVar2;
      uVar13 = *(uint *)(param_1 + 0x11c);
    }
    if ((uVar13 >> 0x13 & 1) != 0) {
      GVar2 = param_1[0x11b];
      *(uint *)(this + 0x11c) = *(uint *)(this + 0x11c) | 0x80000;
      this[0x11b] = GVar2;
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


