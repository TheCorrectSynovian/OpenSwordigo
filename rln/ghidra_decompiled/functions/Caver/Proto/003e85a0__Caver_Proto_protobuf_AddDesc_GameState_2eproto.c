/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e85a0
 * Function: Caver::Proto::protobuf_AddDesc_GameState_2eproto
 * Signature: undefined __cdecl protobuf_AddDesc_GameState_2eproto(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::protobuf_AddDesc_GameState_2eproto() */

void Caver::Proto::protobuf_AddDesc_GameState_2eproto(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  
  if ((DAT_007e8ed8 & 1) != 0) {
    return;
  }
  DAT_007e8ed8 = 1;
  google::protobuf::internal::VerifyVersion
            (0x1e9038,0x1e9038,"./../../../../Source/Caver/Content/Proto/GameState.pb.cc");
  protobuf_AddDesc_Common_2eproto();
  plVar11 = operator_new(0xb0);
  puVar2 = PTR_vtable_007e54b8;
  *(undefined4 *)(plVar11 + 1) = 0;
  puVar3 = PTR__default_equipped_weapon_name__007e59b0;
  plVar11[0xc] = (long)(plVar11 + 0xf);
  puVar6 = PTR__default_name__007e7d58;
  puVar4 = PTR__default_weapon_trinket_name__007e6df0;
  plVar11[0x14] = (long)PTR__default_identifier__007e5ce8;
  puVar1 = PTR__default_current_level_title__007e50a0;
  plVar11[6] = 0;
  plVar11[7] = 0;
  *plVar11 = (long)(puVar2 + 0x10);
  puVar5 = PTR__default_armor_trinket_name__007e7ba0;
  puVar2 = PTR__default_equipped_armor_name__007e6ea0;
  *(undefined1 *)(plVar11 + 0x13) = 0;
  *(undefined4 *)(plVar11 + 0x15) = 0;
  puVar10 = PTR_default_instance__007e7368;
  plVar11[0xd] = 0;
  *(undefined4 *)(plVar11 + 0xe) = 4;
  plVar11[2] = (long)puVar6;
  plVar11[3] = 0;
  plVar11[4] = (long)puVar1;
  plVar11[5] = 0;
  plVar11[9] = (long)puVar2;
  plVar11[8] = (long)puVar3;
  plVar11[0xb] = (long)puVar5;
  plVar11[10] = (long)puVar4;
  *(long **)puVar10 = plVar11;
  plVar11 = operator_new(0x20);
  puVar2 = PTR_vtable_007e4b40;
  *(undefined4 *)(plVar11 + 1) = 0;
  puVar3 = PTR__default_name__007e6560;
  plVar11[3] = 0;
  puVar1 = PTR_default_instance__007e49e8;
  plVar11[2] = (long)puVar3;
  *plVar11 = (long)(puVar2 + 0x10);
  *(long **)puVar1 = plVar11;
  plVar11 = operator_new(0x50);
  puVar2 = PTR_vtable_007e6290;
  plVar11[3] = 0;
  *(undefined4 *)(plVar11 + 4) = 4;
  *(undefined4 *)(plVar11 + 1) = 0;
  *(undefined4 *)(plVar11 + 9) = 0;
  puVar1 = PTR_default_instance__007e4820;
  plVar11[2] = (long)(plVar11 + 5);
  *plVar11 = (long)(puVar2 + 0x10);
  *(long **)puVar1 = plVar11;
  plVar11 = operator_new(0x20);
  puVar3 = PTR_vtable_007e7118;
  *(undefined4 *)(plVar11 + 1) = 0;
  puVar2 = PTR__default_quest_name__007e6f40;
  *(undefined1 *)(plVar11 + 3) = 0;
  *(undefined4 *)((long)plVar11 + 0x1c) = 0;
  puVar4 = PTR_default_instance__007e7930;
  plVar11[2] = (long)puVar2;
  *plVar11 = (long)(puVar3 + 0x10);
  *(long **)puVar4 = plVar11;
  plVar11 = operator_new(0x58);
  puVar2 = PTR_vtable_007e4c28;
  plVar11[4] = 0;
  *(undefined4 *)(plVar11 + 5) = 4;
  *(undefined4 *)(plVar11 + 1) = 0;
  puVar4 = PTR__default_quest_name__007e6638;
  *(undefined4 *)(plVar11 + 10) = 0;
  puVar3 = PTR_default_instance__007e55d0;
  plVar11[2] = (long)puVar4;
  plVar11[3] = (long)(plVar11 + 6);
  *plVar11 = (long)(puVar2 + 0x10);
  *(long **)puVar3 = plVar11;
  plVar11 = operator_new(0x120);
  plVar11[2] = 0;
  plVar11[3] = (long)(plVar11 + 6);
  plVar11[0xf] = (long)PTR__default_carried_object_identifier__007e6520;
  plVar11[0x10] = (long)(plVar11 + 0x13);
  puVar2 = PTR__default_current_level__007e5760;
  plVar11[0x1c] = (long)(plVar11 + 0x1f);
  puVar3 = PTR__default_current_spawn_point__007e6dd0;
  plVar11[10] = (long)puVar2;
  puVar2 = PTR__default_current_map_node_name__007e49b8;
  plVar11[0xc] = (long)PTR__default_previous_portal_level__007e7670;
  plVar11[0xb] = (long)puVar3;
  puVar3 = PTR__default_selected_menu_tab__007e6ec0;
  plVar11[0x17] = 0;
  plVar11[0x18] = (long)puVar3;
  puVar3 = PTR__default_flashing_item_name__007e5158;
  plVar11[0xe] = (long)PTR__default_carried_object_template__007e66a8;
  plVar11[0xd] = (long)puVar2;
  puVar2 = PTR_vtable_007e5898;
  plVar11[4] = 0;
  *(undefined4 *)(plVar11 + 5) = 4;
  plVar11[0x11] = 0;
  *(undefined4 *)(plVar11 + 0x12) = 4;
  plVar11[0x1d] = 0;
  *(undefined4 *)(plVar11 + 0x1e) = 4;
  *(undefined4 *)(plVar11 + 1) = 0;
  *(undefined2 *)(plVar11 + 0x19) = 0;
  *plVar11 = (long)(puVar2 + 0x10);
  puVar2 = PTR__default_flashing_skill_name__007e63c0;
  plVar11[0x23] = 0;
  puVar7 = PTR_default_instance__007e5ff0;
  plVar11[0x1b] = (long)puVar2;
  plVar11[0x1a] = (long)puVar3;
  *(long **)puVar7 = plVar11;
  plVar11 = operator_new(0x38);
  puVar2 = PTR_vtable_007e4a60;
  *(undefined4 *)(plVar11 + 1) = 0;
  puVar3 = PTR__default_level_name__007e5098;
  *(undefined1 *)(plVar11 + 3) = 0;
  plVar11[4] = 0;
  *(undefined4 *)(plVar11 + 6) = 0;
  puVar9 = PTR_default_instance__007e7240;
  plVar11[2] = (long)puVar3;
  plVar11[5] = 0xffffffff;
  *plVar11 = (long)(puVar2 + 0x10);
  *(long **)puVar9 = plVar11;
  plVar11 = operator_new(0xd0);
  puVar5 = PTR_vtable_007e59a0;
  plVar11[5] = 0;
  *(undefined4 *)(plVar11 + 6) = 4;
  *(undefined4 *)(plVar11 + 0xf) = 4;
  plVar11[0xe] = 0;
  plVar11[2] = 0;
  plVar11[3] = 0;
  plVar11[4] = (long)(plVar11 + 7);
  puVar4 = PTR__default_equipped_weapon__007e56f0;
  plVar11[0xd] = (long)(plVar11 + 0x10);
  puVar6 = PTR__default_weapon_trinket__007e5d70;
  puVar3 = PTR__default_armor_trinket__007e5360;
  puVar2 = PTR__default_current_skill__007e50e8;
  plVar11[0xc] = (long)PTR__default_equipped_armor__007e6790;
  plVar11[0xb] = (long)puVar4;
  puVar4 = PTR__default_skill_trinket__007e61b0;
  plVar11[0x18] = 0;
  plVar11[0x19] = 0;
  puVar8 = PTR_default_instance__007e6b78;
  *plVar11 = (long)(puVar5 + 0x10);
  plVar11[1] = 0;
  plVar11[0x15] = (long)puVar6;
  plVar11[0x14] = (long)puVar2;
  plVar11[0x17] = (long)puVar4;
  plVar11[0x16] = (long)puVar3;
  *(long **)puVar8 = plVar11;
  plVar11 = operator_new(0x20);
  puVar2 = PTR_vtable_007e65c0;
  *(undefined4 *)(plVar11 + 1) = 0;
  puVar3 = PTR_default_instance__007e6ba8;
  lVar13 = DAT_00689bc8;
  lVar14 = *(long *)puVar10;
  plVar11[2] = (long)PTR__default_name__007e5e50;
  *plVar11 = (long)(puVar2 + 0x10);
  plVar11[3] = lVar13;
  *(long **)puVar3 = plVar11;
  uVar12 = DateTime::default_instance();
  *(undefined8 *)(lVar14 + 0x18) = uVar12;
  lVar13 = *(long *)puVar7;
  if (lVar13 == 0) {
    protobuf_AddDesc_GameState_2eproto();
    lVar13 = *(long *)puVar7;
  }
  *(long *)(lVar14 + 0x38) = lVar13;
  lVar14 = *(long *)puVar8;
  if (lVar14 == 0) {
    protobuf_AddDesc_GameState_2eproto();
    lVar14 = *(long *)puVar8;
  }
  *(long *)(lVar13 + 0x10) = lVar14;
  lVar14 = *(long *)puVar1;
  if (lVar14 == 0) {
    protobuf_AddDesc_GameState_2eproto();
    lVar14 = *(long *)puVar1;
    *(long *)(lVar13 + 0xb8) = lVar14;
    lVar13 = *(long *)puVar9;
    if (lVar14 == 0) {
      protobuf_AddDesc_GameState_2eproto();
      lVar14 = *(long *)puVar1;
    }
  }
  else {
    *(long *)(lVar13 + 0xb8) = lVar14;
    lVar13 = *(long *)puVar9;
  }
  puVar1 = PTR_protobuf_ShutdownFile_GameState_2eproto_007e5490;
  *(long *)(lVar13 + 0x20) = lVar14;
  google::protobuf::internal::OnShutdown((_func_void *)puVar1);
  return;
}


