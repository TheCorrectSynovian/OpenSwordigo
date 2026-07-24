/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e9614
 * Function: Caver::Proto::PlayerProfile::MergeFrom
 * Signature: undefined __thiscall MergeFrom(PlayerProfile * this, PlayerProfile * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::PlayerProfile::MergeFrom(Caver::Proto::PlayerProfile const&) */

void __thiscall Caver::Proto::PlayerProfile::MergeFrom(PlayerProfile *this,PlayerProfile *param_1)

{
  PlayerProfile *pPVar1;
  undefined4 uVar2;
  PlayerProfile PVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  LogMessage *pLVar9;
  long *plVar10;
  long *plVar11;
  GameState *this_00;
  uint uVar12;
  undefined8 uVar13;
  DateTime *this_01;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/GameState.pb.cc",0x34b);
    pLVar9 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar9);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  google::protobuf::RepeatedPtrField<Caver::Proto::PlayerProfile_Counter>::MergeFrom
            ((RepeatedPtrField<Caver::Proto::PlayerProfile_Counter> *)(this + 0x60),
             (RepeatedPtrField *)(param_1 + 0x60));
  puVar6 = PTR__default_name__007e7d58;
  uVar12 = *(uint *)(param_1 + 0xa8);
  plVar10 = (long *)PTR__default_equipped_armor_name__007e6ea0;
  if ((uVar12 & 0xff) != 0) {
    if ((uVar12 & 1) != 0) {
      plVar10 = *(long **)(this + 0x10);
      uVar13 = *(undefined8 *)(param_1 + 0x10);
      *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) | 1;
      if (plVar10 == (long *)puVar6) {
        plVar10 = operator_new(8);
        *plVar10 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x10) = plVar10;
      }
      FUN_0066a6a8(plVar10,uVar13);
      uVar12 = *(uint *)(param_1 + 0xa8);
    }
    if ((uVar12 >> 1 & 1) != 0) {
      this_01 = *(DateTime **)(this + 0x18);
      *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) | 2;
      if (this_01 == (DateTime *)0x0) {
        this_01 = operator_new(0x20);
        DateTime::DateTime(this_01);
        *(DateTime **)(this + 0x18) = this_01;
      }
      pPVar1 = *(PlayerProfile **)PTR_default_instance__007e7368;
      if (*(long *)(param_1 + 0x18) != 0) {
        pPVar1 = param_1;
      }
      DateTime::MergeFrom(this_01,*(DateTime **)(pPVar1 + 0x18));
      uVar12 = *(uint *)(param_1 + 0xa8);
    }
    puVar6 = PTR__default_current_level_title__007e50a0;
    if ((uVar12 >> 2 & 1) != 0) {
      plVar10 = *(long **)(this + 0x20);
      uVar13 = *(undefined8 *)(param_1 + 0x20);
      *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) | 4;
      if (plVar10 == (long *)puVar6) {
        plVar10 = operator_new(8);
        *plVar10 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x20) = plVar10;
      }
      FUN_0066a6a8(plVar10,uVar13);
      uVar12 = *(uint *)(param_1 + 0xa8);
    }
    if ((uVar12 >> 3 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x28);
      *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) | 8;
      *(undefined4 *)(this + 0x28) = uVar2;
      uVar12 = *(uint *)(param_1 + 0xa8);
    }
    if ((uVar12 >> 4 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x2c);
      *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) | 0x10;
      *(undefined4 *)(this + 0x2c) = uVar2;
      uVar12 = *(uint *)(param_1 + 0xa8);
    }
    if ((uVar12 >> 5 & 1) != 0) {
      uVar13 = *(undefined8 *)(param_1 + 0x30);
      *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) | 0x20;
      *(undefined8 *)(this + 0x30) = uVar13;
      uVar12 = *(uint *)(param_1 + 0xa8);
    }
    plVar11 = (long *)PTR__default_equipped_weapon_name__007e59b0;
    if ((uVar12 >> 6 & 1) != 0) {
      this_00 = *(GameState **)(this + 0x38);
      *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) | 0x40;
      if (this_00 == (GameState *)0x0) {
        this_00 = operator_new(0x120);
        puVar7 = PTR_vtable_007e5898;
        *(long *)(this_00 + 0x10) = 0;
        *(GameState **)(this_00 + 0x18) = this_00 + 0x30;
        puVar6 = PTR__default_carried_object_identifier__007e6520;
        *(undefined4 *)(this_00 + 8) = 0;
        *(undefined **)(this_00 + 0x78) = puVar6;
        *(GameState **)(this_00 + 0x80) = this_00 + 0x98;
        *(GameState **)(this_00 + 0xe0) = this_00 + 0xf8;
        *(undefined4 *)(this_00 + 0x28) = 4;
        *(undefined4 *)(this_00 + 0x90) = 4;
        *(undefined4 *)(this_00 + 0xf0) = 4;
        *(undefined **)(this_00 + 0x50) = PTR__default_current_level__007e5760;
        puVar5 = PTR__default_current_spawn_point__007e6dd0;
        *(long *)(this_00 + 0x20) = 0;
        *(long *)(this_00 + 0x88) = 0;
        *(long *)(this_00 + 0xe8) = 0;
        puVar6 = PTR__default_current_map_node_name__007e49b8;
        *(undefined **)(this_00 + 0x60) = PTR__default_previous_portal_level__007e7670;
        *(undefined **)(this_00 + 0x58) = puVar5;
        puVar5 = PTR__default_selected_menu_tab__007e6ec0;
        *(long *)(this_00 + 0xb8) = 0;
        *(undefined **)(this_00 + 0xc0) = puVar5;
        puVar8 = PTR__default_carried_object_template__007e66a8;
        *(undefined2 *)(this_00 + 200) = 0;
        puVar5 = PTR__default_flashing_item_name__007e5158;
        *(undefined **)(this_00 + 0x70) = puVar8;
        *(undefined **)(this_00 + 0x68) = puVar6;
        puVar6 = PTR__default_flashing_skill_name__007e63c0;
        *(long *)(this_00 + 0x118) = 0;
        *(undefined **)this_00 = puVar7 + 0x10;
        *(undefined **)(this_00 + 0xd8) = puVar6;
        *(undefined **)(this_00 + 0xd0) = puVar5;
        *(GameState **)(this + 0x38) = this_00;
      }
      pPVar1 = *(PlayerProfile **)PTR_default_instance__007e7368;
      if (*(long *)(param_1 + 0x38) != 0) {
        pPVar1 = param_1;
      }
      GameState::MergeFrom(this_00,*(GameState **)(pPVar1 + 0x38));
      uVar12 = *(uint *)(param_1 + 0xa8);
      plVar11 = (long *)PTR__default_equipped_weapon_name__007e59b0;
    }
    PTR__default_equipped_weapon_name__007e59b0 = (undefined *)plVar11;
    plVar10 = (long *)PTR__default_equipped_armor_name__007e6ea0;
    if ((uVar12 >> 7 & 1) != 0) {
      plVar10 = *(long **)(this + 0x40);
      uVar13 = *(undefined8 *)(param_1 + 0x40);
      *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) | 0x80;
      if (plVar10 == plVar11) {
        plVar10 = operator_new(8);
        *plVar10 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x40) = plVar10;
      }
      FUN_0066a6a8(plVar10,uVar13);
      uVar12 = *(uint *)(param_1 + 0xa8);
      plVar10 = (long *)PTR__default_equipped_armor_name__007e6ea0;
    }
  }
  PTR__default_equipped_armor_name__007e6ea0 = (undefined *)plVar10;
  if ((uVar12 & 0xff00) != 0) {
    puVar6 = PTR__default_weapon_trinket_name__007e6df0;
    if ((uVar12 >> 8 & 1) != 0) {
      plVar11 = *(long **)(this + 0x48);
      uVar13 = *(undefined8 *)(param_1 + 0x48);
      *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) | 0x100;
      if (plVar11 == plVar10) {
        plVar11 = operator_new(8);
        *plVar11 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x48) = plVar11;
      }
      FUN_0066a6a8(plVar11,uVar13);
      uVar12 = *(uint *)(param_1 + 0xa8);
      puVar6 = PTR__default_weapon_trinket_name__007e6df0;
    }
    PTR__default_weapon_trinket_name__007e6df0 = puVar6;
    puVar5 = PTR__default_armor_trinket_name__007e7ba0;
    if ((uVar12 >> 9 & 1) != 0) {
      plVar10 = *(long **)(this + 0x50);
      uVar13 = *(undefined8 *)(param_1 + 0x50);
      *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) | 0x200;
      if (plVar10 == (long *)puVar6) {
        plVar10 = operator_new(8);
        *plVar10 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x50) = plVar10;
      }
      FUN_0066a6a8(plVar10,uVar13);
      uVar12 = *(uint *)(param_1 + 0xa8);
      puVar5 = PTR__default_armor_trinket_name__007e7ba0;
    }
    PTR__default_armor_trinket_name__007e7ba0 = puVar5;
    if ((uVar12 >> 10 & 1) != 0) {
      plVar10 = *(long **)(this + 0x58);
      uVar13 = *(undefined8 *)(param_1 + 0x58);
      *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) | 0x400;
      if (plVar10 == (long *)puVar5) {
        plVar10 = operator_new(8);
        *plVar10 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x58) = plVar10;
      }
      FUN_0066a6a8(plVar10,uVar13);
      uVar12 = *(uint *)(param_1 + 0xa8);
    }
    plVar10 = (long *)PTR__default_identifier__007e5ce8;
    if ((uVar12 >> 0xc & 1) != 0) {
      PVar3 = param_1[0x98];
      *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) | 0x1000;
      this[0x98] = PVar3;
      uVar12 = *(uint *)(param_1 + 0xa8);
      plVar10 = (long *)PTR__default_identifier__007e5ce8;
    }
    PTR__default_identifier__007e5ce8 = (undefined *)plVar10;
    if ((uVar12 >> 0xd & 1) != 0) {
      plVar11 = *(long **)(this + 0xa0);
      uVar13 = *(undefined8 *)(param_1 + 0xa0);
      *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) | 0x2000;
      if (plVar11 == plVar10) {
        plVar11 = operator_new(8);
        *plVar11 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0xa0) = plVar11;
      }
      FUN_0066a6a8(plVar11,uVar13);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


