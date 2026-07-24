/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003db544
 * Function: Caver::Proto::protobuf_AddDesc_GameData_2eproto
 * Signature: undefined __cdecl protobuf_AddDesc_GameData_2eproto(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::protobuf_AddDesc_GameData_2eproto() */

void Caver::Proto::protobuf_AddDesc_GameData_2eproto(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((DAT_007e8db8 & 1) != 0) {
    return;
  }
  DAT_007e8db8 = 1;
  google::protobuf::internal::VerifyVersion
            (0x1e9038,0x1e9038,"./../../../../Source/Caver/Content/Proto/GameData.pb.cc");
  protobuf_AddDesc_Common_2eproto();
  plVar7 = operator_new(0x88);
  puVar2 = PTR_vtable_007e68a0;
  plVar7[5] = (long)(plVar7 + 8);
  puVar3 = PTR__default_music__007e7748;
  puVar1 = PTR__default_level_name__007e5878;
  *(undefined4 *)(plVar7 + 1) = 0;
  plVar7[2] = 0;
  *plVar7 = (long)(puVar2 + 0x10);
  plVar7[0xe] = (long)puVar3;
  puVar2 = PTR__default_title__007e6348;
  *(undefined4 *)(plVar7 + 0xc) = 0;
  *(undefined1 *)((long)plVar7 + 100) = 0;
  *(undefined4 *)(plVar7 + 0xd) = 0;
  *(undefined1 *)(plVar7 + 0xf) = 0;
  *(undefined4 *)((long)plVar7 + 0x7c) = 0;
  *(undefined1 *)(plVar7 + 0x10) = 0;
  *(undefined4 *)((long)plVar7 + 0x84) = 0;
  puVar3 = PTR_default_instance__007e5378;
  plVar7[6] = 0;
  *(undefined4 *)(plVar7 + 7) = 4;
  plVar7[4] = (long)puVar2;
  plVar7[3] = (long)puVar1;
  *(long **)puVar3 = plVar7;
  plVar7 = operator_new(0x28);
  puVar4 = PTR_vtable_007e78c0;
  *(undefined4 *)(plVar7 + 1) = 0;
  puVar1 = PTR__default_destination_name__007e6b58;
  *(undefined1 *)(plVar7 + 4) = 0;
  *(undefined4 *)((long)plVar7 + 0x24) = 0;
  puVar2 = PTR_default_instance__007e7618;
  lVar8 = DAT_00689bc8;
  plVar7[2] = (long)puVar1;
  *plVar7 = (long)(puVar4 + 0x10);
  plVar7[3] = lVar8;
  *(long **)puVar2 = plVar7;
  plVar7 = operator_new(0x70);
  puVar1 = PTR__default_name__007e5428;
  plVar7[4] = (long)(plVar7 + 7);
  plVar7[0xc] = (long)PTR__default_music__007e5568;
  puVar2 = PTR_vtable_007e7268;
  plVar7[5] = 0;
  *(undefined4 *)(plVar7 + 6) = 4;
  *(undefined4 *)(plVar7 + 1) = 0;
  *plVar7 = (long)(puVar2 + 0x10);
  puVar4 = PTR__default_title__007e7d78;
  *(undefined4 *)(plVar7 + 0xb) = 0;
  *(undefined4 *)(plVar7 + 0xd) = 0;
  puVar2 = PTR_default_instance__007e6688;
  plVar7[3] = (long)puVar4;
  plVar7[2] = (long)puVar1;
  *(long **)puVar2 = plVar7;
  plVar7 = operator_new(0x50);
  puVar2 = PTR_vtable_007e65d0;
  plVar7[3] = 0;
  *(undefined4 *)(plVar7 + 4) = 4;
  *(undefined4 *)(plVar7 + 1) = 0;
  *(undefined4 *)(plVar7 + 9) = 0;
  puVar1 = PTR_default_instance__007e4e08;
  plVar7[2] = (long)(plVar7 + 5);
  *plVar7 = (long)(puVar2 + 0x10);
  *(long **)puVar1 = plVar7;
  plVar7 = operator_new(0x48);
  puVar4 = PTR__default_description__007e7e10;
  puVar2 = PTR__default_name__007e6888;
  puVar1 = PTR__default_short_description__007e6118;
  plVar7[3] = (long)PTR__default_title__007e4fd8;
  plVar7[2] = (long)puVar2;
  plVar7[5] = (long)puVar4;
  plVar7[4] = (long)puVar1;
  puVar1 = PTR_vtable_007e72f8;
  lVar8 = DAT_0068aa60;
  *(undefined1 *)(plVar7 + 6) = 0;
  *(undefined8 *)((long)plVar7 + 0x3c) = 0;
  *(undefined8 *)((long)plVar7 + 0x34) = 0;
  *plVar7 = (long)(puVar1 + 0x10);
  puVar1 = PTR_default_instance__007e53e0;
  plVar7[1] = lVar8;
  *(long **)puVar1 = plVar7;
  plVar7 = operator_new(0x38);
  puVar2 = PTR__default_name__007e6d10;
  puVar1 = PTR_vtable_007e5620;
  *(undefined4 *)(plVar7 + 1) = 0;
  puVar4 = PTR__default_title__007e7328;
  *plVar7 = (long)(puVar1 + 0x10);
  puVar5 = PTR__default_description__007e7dc0;
  plVar7[6] = 0;
  puVar1 = PTR_default_instance__007e6480;
  plVar7[4] = (long)puVar5;
  plVar7[5] = 0;
  plVar7[3] = (long)puVar4;
  plVar7[2] = (long)puVar2;
  *(long **)puVar1 = plVar7;
  plVar7 = operator_new(0x38);
  puVar5 = PTR__default_name__007e5e30;
  puVar4 = PTR__default_follow_up_quest__007e5bb8;
  puVar1 = PTR_vtable_007e5b70;
  *(undefined4 *)(plVar7 + 1) = 0;
  *plVar7 = (long)(puVar1 + 0x10);
  puVar6 = PTR__default_title__007e6d70;
  puVar1 = PTR__default_map_location__007e4c80;
  *(undefined4 *)(plVar7 + 6) = 0;
  puVar2 = PTR_default_instance__007e5918;
  plVar7[3] = (long)puVar6;
  plVar7[2] = (long)puVar5;
  plVar7[5] = (long)puVar1;
  plVar7[4] = (long)puVar4;
  *(long **)puVar2 = plVar7;
  plVar7 = operator_new(0x30);
  puVar4 = PTR_vtable_007e69c8;
  puVar2 = PTR__default_name__007e5c18;
  *(undefined4 *)(plVar7 + 1) = 0;
  puVar1 = PTR__default_title__007e56f8;
  *plVar7 = (long)(puVar4 + 0x10);
  plVar7[5] = 0;
  puVar4 = PTR_default_instance__007e7190;
  *(undefined4 *)(plVar7 + 4) = 0x1010100;
  *(undefined4 *)((long)plVar7 + 0x24) = 0;
  plVar7[3] = (long)puVar1;
  plVar7[2] = (long)puVar2;
  *(long **)puVar4 = plVar7;
  plVar7 = operator_new(0x78);
  puVar5 = PTR__default_object_identifier__007e7520;
  puVar2 = PTR__default_name__007e4fe0;
  plVar7[7] = (long)(plVar7 + 10);
  puVar1 = PTR_vtable_007e5c88;
  plVar7[8] = 0;
  *(undefined4 *)(plVar7 + 9) = 4;
  plVar7[1] = 0;
  *plVar7 = (long)(puVar1 + 0x10);
  puVar4 = PTR__default_level_name__007e6788;
  puVar1 = PTR__default_carry_object_identifier__007e49b0;
  *(undefined1 *)(plVar7 + 6) = 0;
  *(undefined4 *)(plVar7 + 0xe) = 0;
  puVar6 = PTR_default_instance__007e7bf8;
  plVar7[3] = (long)puVar4;
  plVar7[2] = (long)puVar2;
  plVar7[5] = (long)puVar1;
  plVar7[4] = (long)puVar5;
  *(long **)puVar6 = plVar7;
  plVar7 = operator_new(0x28);
  puVar1 = PTR_vtable_007e53b0;
  *(undefined4 *)(plVar7 + 1) = 0;
  puVar5 = PTR__default_object_identifier__007e7308;
  puVar4 = PTR__default_level_name__007e6158;
  *(undefined4 *)(plVar7 + 4) = 0;
  puVar2 = PTR_default_instance__007e5db0;
  *plVar7 = (long)(puVar1 + 0x10);
  plVar7[3] = (long)puVar5;
  plVar7[2] = (long)puVar4;
  *(long **)puVar2 = plVar7;
  plVar7 = operator_new(0x70);
  plVar7[2] = (long)(plVar7 + 5);
  *(undefined2 *)(plVar7 + 9) = 0x101;
  puVar1 = PTR_vtable_007e5708;
  plVar7[3] = 0;
  *(undefined4 *)(plVar7 + 4) = 4;
  *(undefined4 *)(plVar7 + 1) = 0;
  *(undefined4 *)((long)plVar7 + 0x6c) = 0;
  *(undefined1 *)((long)plVar7 + 0x6a) = 0;
  *(undefined2 *)(plVar7 + 0xd) = 0;
  plVar7[0xb] = 0;
  plVar7[0xc] = 0;
  *plVar7 = (long)(puVar1 + 0x10);
  puVar1 = PTR_default_instance__007e6d28;
  uVar9 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)((long)plVar7 + 0x4c) = uVar9;
  *(long **)puVar1 = plVar7;
  plVar7 = operator_new(0x130);
  puVar2 = PTR_vtable_007e6eb0;
  plVar7[2] = (long)(plVar7 + 5);
  plVar7[9] = (long)(plVar7 + 0xc);
  plVar7[0x10] = (long)(plVar7 + 0x13);
  plVar7[0x17] = (long)(plVar7 + 0x1a);
  *(undefined4 *)(plVar7 + 4) = 4;
  *(undefined4 *)(plVar7 + 0xb) = 4;
  *(undefined4 *)(plVar7 + 0x12) = 4;
  *(undefined4 *)(plVar7 + 0x19) = 4;
  *(undefined4 *)(plVar7 + 0x20) = 4;
  plVar7[3] = 0;
  plVar7[10] = 0;
  plVar7[0x11] = 0;
  plVar7[0x18] = 0;
  plVar7[0x1f] = 0;
  *(undefined4 *)(plVar7 + 1) = 0;
  *(undefined4 *)(plVar7 + 0x25) = 0;
  plVar7[0x1e] = (long)(plVar7 + 0x21);
  *plVar7 = (long)(puVar2 + 0x10);
  lVar8 = *(long *)puVar3;
  *(long **)PTR_default_instance__007e4e60 = plVar7;
  uVar9 = Vector2::default_instance();
  *(undefined8 *)(lVar8 + 0x10) = uVar9;
  lVar8 = *(long *)puVar1;
  uVar9 = GUIViewLayout::default_instance();
  *(undefined8 *)(lVar8 + 0x58) = uVar9;
  uVar9 = GUIViewLayout::default_instance();
  puVar1 = PTR_protobuf_ShutdownFile_GameData_2eproto_007e6458;
  *(undefined8 *)(lVar8 + 0x60) = uVar9;
  google::protobuf::internal::OnShutdown((_func_void *)puVar1);
  return;
}


