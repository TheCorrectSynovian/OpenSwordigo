/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f6790
 * Function: Caver::Proto::protobuf_AddDesc_Scene_2eproto
 * Signature: undefined __cdecl protobuf_AddDesc_Scene_2eproto(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Proto::protobuf_AddDesc_Scene_2eproto() */

void Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long *plVar14;
  undefined8 uVar15;
  MessageLite *pMVar16;
  long lVar17;
  MessageLite *pMVar18;
  long lVar19;
  
  if ((DAT_007e92a8 & 1) == 0) {
    DAT_007e92a8 = 1;
    google::protobuf::internal::VerifyVersion
              (0x1e9038,0x1e9038,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc");
    protobuf_AddDesc_Common_2eproto();
    plVar14 = operator_new(0x60);
    *plVar14 = (long)(PTR_vtable_007e6b00 + 0x10);
    google::protobuf::internal::ExtensionSet::ExtensionSet((ExtensionSet *)(plVar14 + 1));
    *(undefined4 *)(plVar14 + 7) = 0;
    puVar6 = PTR__default_label__007e6320;
    puVar3 = PTR__default_class_name__007e5328;
    *(undefined4 *)(plVar14 + 0xb) = 0;
    puVar11 = PTR_default_instance__007e6e98;
    plVar14[8] = (long)puVar3;
    plVar14[9] = 0;
    plVar14[10] = (long)puVar6;
    *(long **)puVar11 = plVar14;
    plVar14 = operator_new(0x20);
    puVar6 = PTR_vtable_007e5e80;
    *(undefined4 *)(plVar14 + 1) = 0;
    puVar3 = PTR_default_instance__007e4a98;
    plVar14[2] = 0;
    plVar14[3] = 0x3f800000;
    *plVar14 = (long)(puVar6 + 0x10);
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x100);
    puVar6 = PTR_vtable_007e6ec8;
    plVar14[4] = 0;
    puVar3 = PTR__default_name__007e6d40;
    plVar14[0xb] = 0;
    plVar14[2] = (long)puVar3;
    plVar14[3] = (long)(plVar14 + 6);
    plVar14[10] = (long)(plVar14 + 0xd);
    plVar14[0x11] = (long)(plVar14 + 0x14);
    plVar14[0x18] = (long)(plVar14 + 0x1b);
    plVar14[0x12] = 0;
    plVar14[0x19] = 0;
    *(undefined4 *)(plVar14 + 1) = 0;
    *(undefined4 *)(plVar14 + 0x1f) = 0;
    *plVar14 = (long)(puVar6 + 0x10);
    puVar12 = PTR_default_instance__007e7b58;
    *(undefined4 *)(plVar14 + 5) = 4;
    *(undefined4 *)(plVar14 + 0xc) = 4;
    *(undefined4 *)(plVar14 + 0x13) = 4;
    *(undefined4 *)(plVar14 + 0x1a) = 4;
    *(long **)puVar12 = plVar14;
    plVar14 = operator_new(0x90);
    puVar3 = PTR__default_template_name__007e5070;
    plVar14[4] = (long)(plVar14 + 7);
    puVar6 = PTR_vtable_007e6240;
    plVar14[5] = 0;
    *(undefined4 *)(plVar14 + 6) = 4;
    *(undefined4 *)(plVar14 + 1) = 0;
    *plVar14 = (long)(puVar6 + 0x10);
    puVar6 = PTR__default_identifier__007e5320;
    plVar14[0xb] = 0;
    plVar14[0xc] = 0;
    *(undefined4 *)(plVar14 + 0xd) = 0x3f800000;
    plVar14[0xe] = 0;
    *(undefined1 *)(plVar14 + 0xf) = 0;
    plVar14[0x10] = 0;
    *(undefined4 *)(plVar14 + 0x11) = 0;
    puVar13 = PTR_default_instance__007e7da8;
    plVar14[3] = (long)puVar6;
    plVar14[2] = (long)puVar3;
    *(long **)puVar13 = plVar14;
    plVar14 = operator_new(0x68);
    plVar14[2] = (long)PTR__default_identifier__007e5218;
    plVar14[3] = (long)(plVar14 + 6);
    puVar3 = PTR_vtable_007e63b0;
    plVar14[4] = 0;
    *(undefined4 *)(plVar14 + 5) = 4;
    *(undefined4 *)(plVar14 + 1) = 0;
    *(undefined2 *)(plVar14 + 10) = 0;
    *(undefined1 *)((long)plVar14 + 0x52) = 0;
    plVar14[0xb] = 0;
    *(undefined4 *)(plVar14 + 0xc) = 0;
    *plVar14 = (long)(puVar3 + 0x10);
    *(long **)PTR_default_instance__007e48f0 = plVar14;
    plVar14 = operator_new(0xa0);
    plVar14[2] = (long)(plVar14 + 5);
    plVar14[9] = (long)(plVar14 + 0xc);
    puVar3 = PTR_vtable_007e5680;
    plVar14[3] = 0;
    *(undefined4 *)(plVar14 + 4) = 4;
    plVar14[10] = 0;
    *(undefined4 *)(plVar14 + 0xb) = 4;
    *(undefined4 *)(plVar14 + 1) = 0;
    *(undefined4 *)(plVar14 + 0x13) = 0;
    plVar14[0x11] = 0;
    plVar14[0x12] = 0;
    plVar14[0x10] = 0;
    *plVar14 = (long)(puVar3 + 0x10);
    *(long **)PTR_default_instance__007e7a20 = plVar14;
    plVar14 = operator_new(0x20);
    puVar5 = PTR_vtable_007e6660;
    *(undefined4 *)(plVar14 + 1) = 0;
    puVar6 = PTR__default_texture_name__007e5d90;
    *(undefined4 *)(plVar14 + 3) = 0;
    puVar3 = PTR_default_instance__007e4938;
    plVar14[2] = (long)puVar6;
    *plVar14 = (long)(puVar5 + 0x10);
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x50);
    puVar3 = PTR_vtable_007e4d30;
    *(undefined4 *)(plVar14 + 1) = 0;
    puVar6 = PTR__default_name__007e7d30;
    plVar14[6] = 0;
    *(undefined1 *)(plVar14 + 7) = 0;
    plVar14[8] = 0;
    *(undefined4 *)(plVar14 + 9) = 0;
    *(undefined4 *)(plVar14 + 5) = 0;
    plVar14[4] = 0;
    *plVar14 = (long)(puVar3 + 0x10);
    puVar3 = PTR_default_instance__007e70f0;
    plVar14[2] = (long)puVar6;
    plVar14[3] = 0;
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x28);
    puVar6 = PTR_vtable_007e73c8;
    plVar14[1] = 0;
    puVar3 = PTR__default_name__007e5890;
    *(undefined2 *)(plVar14 + 3) = 0;
    *(undefined8 *)((long)plVar14 + 0x1c) = 0;
    puVar5 = PTR_default_instance__007e7bb8;
    plVar14[2] = (long)puVar3;
    *plVar14 = (long)(puVar6 + 0x10);
    *(long **)puVar5 = plVar14;
    plVar14 = operator_new(0x20);
    puVar6 = PTR_vtable_007e7198;
    plVar14[2] = 0;
    plVar14[3] = 0;
    puVar3 = PTR_default_instance__007e5180;
    *plVar14 = (long)(puVar6 + 0x10);
    plVar14[1] = 0;
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x30);
    puVar3 = PTR_vtable_007e5c10;
    *(undefined4 *)(plVar14 + 5) = 0;
    plVar14[3] = 0;
    plVar14[4] = 0;
    plVar14[2] = 0;
    puVar6 = PTR_default_instance__007e6260;
    *plVar14 = (long)(puVar3 + 0x10);
    plVar14[1] = 0;
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x70);
    plVar14[2] = 0;
    plVar14[3] = (long)(plVar14 + 6);
    puVar3 = PTR_vtable_007e7d70;
    plVar14[4] = 0;
    *(undefined4 *)(plVar14 + 5) = 4;
    *(undefined4 *)(plVar14 + 1) = 0;
    plVar14[10] = 0;
    *(undefined1 *)(plVar14 + 0xb) = 1;
    *(undefined4 *)((long)plVar14 + 0x6c) = 0;
    *(undefined8 *)((long)plVar14 + 0x61) = 0;
    *(undefined8 *)((long)plVar14 + 0x5c) = 0;
    *plVar14 = (long)(puVar3 + 0x10);
    puVar10 = PTR_default_instance__007e5920;
    *(long **)PTR_default_instance__007e5920 = plVar14;
    plVar14 = operator_new(0xe0);
    plVar14[4] = (long)(plVar14 + 7);
    plVar14[0xb] = 0;
    plVar14[0xc] = (long)(plVar14 + 0xf);
    puVar3 = PTR__default_vertex_data__007e4e40;
    plVar14[0x13] = (long)(plVar14 + 0x16);
    puVar6 = PTR_vtable_007e7300;
    plVar14[5] = 0;
    *(undefined4 *)(plVar14 + 6) = 4;
    plVar14[0xd] = 0;
    *(undefined4 *)(plVar14 + 0xe) = 4;
    plVar14[0x14] = 0;
    *(undefined4 *)(plVar14 + 0x15) = 4;
    *(undefined4 *)(plVar14 + 1) = 0;
    *plVar14 = (long)(puVar6 + 0x10);
    puVar6 = PTR__default_indices__007e67d8;
    plVar14[0x1a] = 0;
    *(undefined1 *)(plVar14 + 0x1b) = 0;
    *(undefined4 *)((long)plVar14 + 0xdc) = 0;
    puVar5 = PTR_default_instance__007e5600;
    plVar14[3] = (long)puVar6;
    plVar14[2] = (long)puVar3;
    *(long **)puVar5 = plVar14;
    plVar14 = operator_new(0x40);
    puVar3 = PTR_vtable_007e5330;
    *(undefined4 *)(plVar14 + 7) = 0;
    plVar14[5] = 0;
    plVar14[6] = 0;
    plVar14[3] = 0;
    plVar14[4] = 0;
    plVar14[2] = 0;
    puVar9 = PTR_default_instance__007e7900;
    *plVar14 = (long)(puVar3 + 0x10);
    plVar14[1] = 0;
    *(long **)puVar9 = plVar14;
    plVar14 = operator_new(0x30);
    puVar3 = PTR_vtable_007e60e0;
    *(undefined4 *)(plVar14 + 1) = 0;
    puVar8 = PTR__default_texture_name__007e7c58;
    *(undefined4 *)(plVar14 + 3) = 0;
    plVar14[4] = 0;
    *(undefined4 *)(plVar14 + 5) = 0;
    puVar6 = PTR_default_instance__007e7550;
    plVar14[2] = (long)puVar8;
    *plVar14 = (long)(puVar3 + 0x10);
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x30);
    puVar3 = PTR_vtable_007e4ed0;
    plVar14[1] = 0;
    *(undefined4 *)(plVar14 + 2) = 0;
    *(undefined4 *)(plVar14 + 5) = 0;
    plVar14[3] = 0;
    plVar14[4] = 0;
    puVar6 = PTR_default_instance__007e6e28;
    *plVar14 = (long)(puVar3 + 0x10);
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x30);
    puVar3 = PTR_vtable_007e6c08;
    *(undefined4 *)(plVar14 + 1) = 0;
    *(undefined4 *)(plVar14 + 5) = 0;
    plVar14[3] = 0;
    plVar14[4] = 0;
    plVar14[2] = 0;
    puVar6 = PTR_default_instance__007e7b10;
    *plVar14 = (long)(puVar3 + 0x10);
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x48);
    puVar3 = PTR_vtable_007e73d8;
    *(undefined4 *)(plVar14 + 1) = 0;
    *(undefined1 *)((long)plVar14 + 0xc) = 1;
    *(undefined4 *)((long)plVar14 + 0xd) = 0;
    *(undefined1 *)((long)plVar14 + 0x24) = 0;
    *(undefined8 *)((long)plVar14 + 0x1c) = 0;
    *(undefined8 *)((long)plVar14 + 0x14) = 0;
    *(undefined4 *)(plVar14 + 8) = 0;
    plVar14[6] = 0;
    plVar14[7] = 0;
    plVar14[5] = 0;
    *plVar14 = (long)(puVar3 + 0x10);
    *(long **)PTR_default_instance__007e7360 = plVar14;
    plVar14 = operator_new(0x30);
    puVar6 = PTR_vtable_007e7a18;
    plVar14[2] = 0;
    *(undefined8 *)((long)plVar14 + 0x15) = 0;
    plVar14[4] = 0;
    *(undefined2 *)(plVar14 + 5) = 0x100;
    *(undefined4 *)((long)plVar14 + 0x2c) = 0;
    puVar3 = PTR_default_instance__007e70b0;
    *plVar14 = (long)(puVar6 + 0x10);
    plVar14[1] = 0;
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x28);
    puVar3 = PTR_vtable_007e57c0;
    plVar14[1] = 0;
    *(undefined4 *)(plVar14 + 2) = 0;
    plVar14[3] = 0;
    *(undefined4 *)(plVar14 + 4) = 0;
    puVar6 = PTR_default_instance__007e6bf0;
    *plVar14 = (long)(puVar3 + 0x10);
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x20);
    puVar3 = PTR_vtable_007e6798;
    plVar14[1] = 0;
    puVar8 = PTR__default_controlling_bone_name__007e79d8;
    *(undefined4 *)(plVar14 + 3) = 0;
    puVar6 = PTR_default_instance__007e68d8;
    plVar14[2] = (long)puVar8;
    *plVar14 = (long)(puVar3 + 0x10);
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x40);
    puVar3 = PTR_vtable_007e6098;
    puVar6 = PTR__default_target_object_identifier__007e4c30;
    *(undefined4 *)(plVar14 + 1) = 0;
    *plVar14 = (long)(puVar3 + 0x10);
    puVar8 = PTR__default_target_bone_identifier__007e7b50;
    *(undefined4 *)(plVar14 + 7) = 0;
    plVar14[5] = 0;
    plVar14[6] = 0;
    plVar14[4] = 0;
    puVar3 = PTR_default_instance__007e4830;
    plVar14[3] = (long)puVar8;
    plVar14[2] = (long)puVar6;
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x40);
    puVar6 = PTR_vtable_007e64f0;
    plVar14[1] = 0;
    *(undefined4 *)(plVar14 + 2) = 0;
    plVar14[6] = 0;
    *(undefined4 *)(plVar14 + 7) = 0;
    *(undefined4 *)(plVar14 + 5) = 0;
    plVar14[3] = 0;
    plVar14[4] = 0;
    puVar3 = PTR_default_instance__007e5cc8;
    *plVar14 = (long)(puVar6 + 0x10);
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x28);
    puVar6 = PTR_vtable_007e7e98;
    *(undefined4 *)(plVar14 + 1) = 0;
    *(undefined8 *)((long)plVar14 + 0xc) = 0;
    plVar14[3] = 0;
    *(undefined4 *)(plVar14 + 4) = 0;
    puVar3 = PTR_default_instance__007e5258;
    *plVar14 = (long)(puVar6 + 0x10);
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x28);
    puVar3 = PTR_vtable_007e64a8;
    *(undefined4 *)(plVar14 + 1) = 0;
    puVar6 = PTR__default_name__007e7518;
    *(undefined4 *)(plVar14 + 4) = 0;
    puVar8 = PTR_default_instance__007e7628;
    lVar17 = _DAT_00683948;
    plVar14[2] = (long)puVar6;
    *plVar14 = (long)(puVar3 + 0x10);
    plVar14[3] = lVar17;
    *(long **)puVar8 = plVar14;
    plVar14 = operator_new(0x20);
    puVar3 = PTR_vtable_007e78a0;
    *(undefined4 *)(plVar14 + 3) = 0;
    *(undefined8 *)((long)plVar14 + 0xd) = 0;
    plVar14[1] = 0;
    puVar6 = PTR_default_instance__007e7c88;
    *plVar14 = (long)(puVar3 + 0x10);
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x28);
    puVar3 = PTR_vtable_007e61f0;
    plVar14[3] = 0;
    plVar14[4] = 0;
    plVar14[2] = 0;
    puVar6 = PTR_default_instance__007e7c30;
    *plVar14 = (long)(puVar3 + 0x10);
    plVar14[1] = 0;
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x80);
    puVar3 = PTR_vtable_007e6f20;
    plVar14[9] = (long)(plVar14 + 0xb);
    *(undefined4 *)(plVar14 + 8) = 0;
    plVar14[6] = 0;
    plVar14[7] = 0;
    plVar14[4] = 0;
    plVar14[5] = 0;
    plVar14[2] = 0;
    plVar14[3] = 0;
    plVar14[0xe] = 0;
    plVar14[0xf] = 0;
    plVar14[0xd] = 0;
    puVar6 = PTR_default_instance__007e7c08;
    lVar1 = DAT_0068b470;
    *plVar14 = (long)(puVar3 + 0x10);
    plVar14[1] = 0;
    plVar14[10] = lVar1;
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x18);
    puVar3 = PTR_vtable_007e5ea8;
    *(undefined1 *)(plVar14 + 2) = 1;
    *(undefined4 *)((long)plVar14 + 0x14) = 0;
    puVar6 = PTR_default_instance__007e7ca0;
    lVar19 = DAT_0068aa60;
    *plVar14 = (long)(puVar3 + 0x10);
    plVar14[1] = lVar19;
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x20);
    puVar6 = PTR_vtable_007e4c90;
    *(undefined4 *)(plVar14 + 3) = 0;
    plVar14[2] = 0;
    puVar3 = PTR_default_instance__007e4b10;
    *plVar14 = (long)(puVar6 + 0x10);
    plVar14[1] = 0;
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x18);
    puVar3 = PTR_default_instance__007e6f28;
    lVar2 = _UNK_0068b488;
    lVar17 = _DAT_0068b480;
    *plVar14 = (long)(PTR_vtable_007e4a50 + 0x10);
    plVar14[2] = lVar2;
    plVar14[1] = lVar17;
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x30);
    puVar6 = PTR_vtable_007e5d78;
    *(undefined1 *)(plVar14 + 2) = 0;
    *(undefined4 *)(plVar14 + 5) = 0;
    plVar14[3] = 0;
    plVar14[4] = 0;
    puVar3 = PTR_default_instance__007e4948;
    *plVar14 = (long)(puVar6 + 0x10);
    plVar14[1] = 0;
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x28);
    puVar6 = PTR_vtable_007e7608;
    *(undefined4 *)(plVar14 + 4) = 0;
    *(undefined8 *)((long)plVar14 + 0x15) = 0;
    plVar14[2] = 0;
    puVar3 = PTR_default_instance__007e6da8;
    *plVar14 = (long)(puVar6 + 0x10);
    plVar14[1] = 0;
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x28);
    puVar6 = PTR_vtable_007e7708;
    *(undefined4 *)(plVar14 + 1) = 0;
    *(undefined2 *)((long)plVar14 + 0xc) = 0;
    *(undefined4 *)(plVar14 + 2) = 1;
    plVar14[3] = 0;
    *(undefined4 *)(plVar14 + 4) = 0;
    puVar3 = PTR_default_instance__007e56e8;
    *plVar14 = (long)(puVar6 + 0x10);
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x28);
    puVar3 = PTR_vtable_007e47e8;
    *(undefined4 *)(plVar14 + 1) = 0;
    *(undefined4 *)((long)plVar14 + 0x24) = 0;
    *(undefined2 *)(plVar14 + 4) = 0;
    plVar14[2] = 0;
    plVar14[3] = 0;
    puVar6 = PTR_default_instance__007e4960;
    *plVar14 = (long)(puVar3 + 0x10);
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x38);
    puVar3 = PTR_vtable_007e7938;
    *(undefined4 *)(plVar14 + 1) = 0;
    *(undefined1 *)((long)plVar14 + 0xc) = 1;
    plVar14[2] = 0;
    *(undefined4 *)(plVar14 + 3) = 0x3f800000;
    *(undefined8 *)((long)plVar14 + 0x2c) = 0;
    *(undefined8 *)((long)plVar14 + 0x21) = 0;
    *(undefined8 *)((long)plVar14 + 0x1c) = 0;
    puVar8 = PTR_default_instance__007e5a38;
    *plVar14 = (long)(puVar3 + 0x10);
    *(long **)puVar8 = plVar14;
    plVar14 = operator_new(0x28);
    puVar6 = PTR_vtable_007e7a60;
    *(undefined4 *)(plVar14 + 1) = 0;
    *(undefined1 *)((long)plVar14 + 0xc) = 0;
    *(undefined4 *)(plVar14 + 4) = 0;
    plVar14[2] = 0;
    plVar14[3] = 0;
    puVar3 = PTR_default_instance__007e6f48;
    *plVar14 = (long)(puVar6 + 0x10);
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x30);
    puVar6 = PTR_vtable_007e7ec8;
    plVar14[3] = 0;
    plVar14[4] = 0;
    plVar14[2] = 0;
    puVar3 = PTR_default_instance__007e7728;
    lVar17 = DAT_00689bc8;
    *plVar14 = (long)(puVar6 + 0x10);
    plVar14[1] = 0;
    *(long **)puVar3 = plVar14;
    plVar14[5] = lVar17;
    plVar14 = operator_new(0x20);
    puVar3 = PTR_vtable_007e4a10;
    *(undefined4 *)(plVar14 + 1) = 0;
    plVar14[2] = 0;
    *(undefined4 *)(plVar14 + 3) = 0;
    puVar6 = PTR_default_instance__007e4b60;
    *plVar14 = (long)(puVar3 + 0x10);
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x20);
    puVar3 = PTR_vtable_007e57a0;
    plVar14[2] = 0;
    plVar14[3] = 0;
    puVar6 = PTR_default_instance__007e5ca0;
    *plVar14 = (long)(puVar3 + 0x10);
    plVar14[1] = 0;
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x20);
    puVar3 = PTR_vtable_007e4dd8;
    *(undefined4 *)(plVar14 + 1) = 0;
    puVar6 = PTR__default_entity_class__007e6138;
    *(undefined4 *)(plVar14 + 3) = 0;
    puVar7 = PTR_default_instance__007e7b20;
    plVar14[2] = (long)puVar6;
    *plVar14 = (long)(puVar3 + 0x10);
    *(long **)puVar7 = plVar14;
    plVar14 = operator_new(0x20);
    puVar6 = PTR_vtable_007e77d8;
    *(undefined4 *)(plVar14 + 1) = 0;
    plVar14[2] = 0;
    *(undefined4 *)(plVar14 + 3) = 0;
    puVar3 = PTR_default_instance__007e4d60;
    *plVar14 = (long)(puVar6 + 0x10);
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x20);
    puVar7 = PTR_vtable_007e6a70;
    *(undefined4 *)(plVar14 + 1) = 0;
    puVar3 = PTR__default_texture_name__007e56a8;
    *(undefined4 *)(plVar14 + 3) = 0;
    puVar6 = PTR_default_instance__007e5788;
    plVar14[2] = (long)puVar3;
    *plVar14 = (long)(puVar7 + 0x10);
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x20);
    puVar3 = PTR_vtable_007e4ea0;
    *(undefined4 *)(plVar14 + 1) = 0;
    plVar14[2] = 0;
    *(undefined4 *)(plVar14 + 3) = 0;
    puVar6 = PTR_default_instance__007e5f30;
    *plVar14 = (long)(puVar3 + 0x10);
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x58);
    puVar6 = PTR_vtable_007e5278;
    plVar14[7] = lVar1;
    *(undefined4 *)(plVar14 + 10) = 0;
    *(undefined4 *)(plVar14 + 5) = 0;
    plVar14[3] = 0;
    plVar14[4] = 0;
    plVar14[2] = 0;
    puVar3 = PTR_default_instance__007e4cf0;
    plVar14[6] = (long)(plVar14 + 8);
    *plVar14 = (long)(puVar6 + 0x10);
    plVar14[1] = 0;
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x90);
    plVar14[4] = (long)(plVar14 + 6);
    plVar14[8] = (long)(plVar14 + 0xb);
    puVar3 = PTR_vtable_007e6068;
    plVar14[5] = lVar1;
    plVar14[9] = 0;
    *(undefined4 *)(plVar14 + 10) = 4;
    *(undefined4 *)(plVar14 + 3) = 0;
    *(undefined1 *)((long)plVar14 + 0x1c) = 0;
    *(undefined8 *)((long)plVar14 + 0xd) = 0;
    *(undefined4 *)(plVar14 + 0x11) = 0;
    plVar14[0xf] = 0;
    plVar14[0x10] = 0;
    *plVar14 = (long)(puVar3 + 0x10);
    plVar14[1] = 0;
    *(long **)PTR_default_instance__007e5ba8 = plVar14;
    plVar14 = operator_new(0x20);
    puVar3 = PTR_vtable_007e5a48;
    *(undefined4 *)(plVar14 + 1) = 0;
    puVar7 = PTR_default_instance__007e61f8;
    puVar6 = PTR__default_texture_name__007e6170;
    *plVar14 = (long)(puVar3 + 0x10);
    plVar14[2] = (long)puVar6;
    plVar14[3] = 0;
    *(long **)puVar7 = plVar14;
    plVar14 = operator_new(0x48);
    puVar3 = PTR_vtable_007e5028;
    plVar14[1] = 0;
    *(undefined4 *)(plVar14 + 2) = 0;
    *(undefined4 *)(plVar14 + 8) = 0;
    plVar14[6] = 0;
    plVar14[7] = 0;
    plVar14[4] = 0;
    plVar14[5] = 0;
    plVar14[3] = 0;
    puVar6 = PTR_default_instance__007e7b98;
    *plVar14 = (long)(puVar3 + 0x10);
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x40);
    puVar6 = PTR_vtable_007e71b0;
    *(undefined4 *)(plVar14 + 1) = 0;
    *(undefined4 *)(plVar14 + 4) = 0;
    plVar14[2] = 0;
    plVar14[3] = 0;
    *(undefined4 *)(plVar14 + 7) = 0;
    plVar14[5] = 0;
    plVar14[6] = 0;
    puVar3 = PTR_default_instance__007e53a8;
    *plVar14 = (long)(puVar6 + 0x10);
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x18);
    puVar3 = PTR_vtable_007e6080;
    plVar14[1] = 0;
    *(undefined4 *)(plVar14 + 2) = 0;
    puVar6 = PTR_default_instance__007e66c8;
    *plVar14 = (long)(puVar3 + 0x10);
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x28);
    puVar3 = PTR_vtable_007e6548;
    *(undefined4 *)(plVar14 + 1) = 0;
    *(undefined4 *)(plVar14 + 4) = 0;
    plVar14[2] = 0;
    plVar14[3] = 0;
    puVar6 = PTR_default_instance__007e68f8;
    *plVar14 = (long)(puVar3 + 0x10);
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x10);
    puVar6 = PTR_vtable_007e6b68;
    plVar14[1] = 0;
    puVar3 = PTR_default_instance__007e58f0;
    *plVar14 = (long)(puVar6 + 0x10);
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x20);
    puVar3 = PTR_vtable_007e65d8;
    plVar14[2] = 0;
    plVar14[3] = 0;
    puVar6 = PTR_default_instance__007e7e70;
    *plVar14 = (long)(puVar3 + 0x10);
    plVar14[1] = 0;
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x18);
    puVar6 = PTR_vtable_007e63f8;
    plVar14[1] = 0;
    *(undefined4 *)(plVar14 + 2) = 0;
    puVar3 = PTR_default_instance__007e4ef8;
    *plVar14 = (long)(puVar6 + 0x10);
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x28);
    puVar3 = PTR_vtable_007e7130;
    *(undefined4 *)(plVar14 + 4) = 0;
    plVar14[2] = 0;
    plVar14[3] = 0;
    puVar6 = PTR_default_instance__007e7a90;
    *plVar14 = (long)(puVar3 + 0x10);
    plVar14[1] = 0;
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x28);
    puVar3 = PTR_vtable_007e74f0;
    *(undefined4 *)(plVar14 + 4) = 0;
    plVar14[2] = 0;
    plVar14[3] = 0;
    puVar6 = PTR_default_instance__007e7e20;
    *plVar14 = (long)(puVar3 + 0x10);
    plVar14[1] = 0;
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x50);
    puVar3 = PTR_vtable_007e66a0;
    *(undefined4 *)(plVar14 + 3) = 0;
    plVar14[2] = 0;
    *(undefined4 *)(plVar14 + 9) = 0;
    plVar14[7] = 0;
    plVar14[8] = 0;
    plVar14[5] = 0;
    plVar14[6] = 0;
    plVar14[4] = 0;
    puVar6 = PTR_default_instance__007e7ad0;
    *plVar14 = (long)(puVar3 + 0x10);
    plVar14[1] = 0;
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x18);
    puVar6 = PTR_vtable_007e5350;
    plVar14[2] = 0;
    puVar3 = PTR_default_instance__007e5270;
    *plVar14 = (long)(puVar6 + 0x10);
    plVar14[1] = 0;
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x18);
    puVar3 = PTR_vtable_007e4c78;
    plVar14[2] = 0;
    puVar6 = PTR_default_instance__007e7a40;
    *plVar14 = (long)(puVar3 + 0x10);
    plVar14[1] = 0;
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x38);
    puVar3 = PTR_vtable_007e4848;
    plVar14[3] = lVar1;
    plVar14[1] = 0;
    *(undefined4 *)(plVar14 + 6) = 0;
    puVar6 = PTR_default_instance__007e6fc0;
    plVar14[2] = (long)(plVar14 + 4);
    *plVar14 = (long)(puVar3 + 0x10);
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x18);
    puVar6 = PTR_vtable_007e6b18;
    plVar14[2] = 0;
    puVar3 = PTR_default_instance__007e6070;
    *plVar14 = (long)(puVar6 + 0x10);
    plVar14[1] = 0;
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x18);
    puVar3 = PTR_vtable_007e54c0;
    plVar14[2] = 0;
    puVar6 = PTR_default_instance__007e61c8;
    *plVar14 = (long)(puVar3 + 0x10);
    plVar14[1] = 0;
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x20);
    puVar6 = PTR_vtable_007e5a20;
    plVar14[2] = 0;
    plVar14[3] = 0;
    puVar3 = PTR_default_instance__007e4850;
    *plVar14 = (long)(puVar6 + 0x10);
    plVar14[1] = 0;
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x18);
    puVar3 = PTR_vtable_007e4ca0;
    plVar14[1] = 0;
    *(undefined4 *)(plVar14 + 2) = 0;
    puVar6 = PTR_default_instance__007e78d0;
    *plVar14 = (long)(puVar3 + 0x10);
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x18);
    puVar3 = PTR_vtable_007e47a8;
    plVar14[1] = 0;
    *(undefined4 *)(plVar14 + 2) = 0;
    puVar6 = PTR_default_instance__007e5228;
    *plVar14 = (long)(puVar3 + 0x10);
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x48);
    puVar3 = PTR_vtable_007e4a48;
    plVar14[7] = 0;
    plVar14[8] = 0;
    plVar14[5] = 0;
    plVar14[6] = 0;
    plVar14[3] = 0;
    plVar14[4] = 0;
    plVar14[2] = 0;
    puVar6 = PTR_default_instance__007e4b88;
    *plVar14 = (long)(puVar3 + 0x10);
    plVar14[1] = 0;
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x28);
    puVar3 = PTR_vtable_007e6528;
    plVar14[1] = 0;
    puVar7 = PTR__default_weapon_template_name__007e78e0;
    puVar6 = PTR__default_controlling_bone_name__007e7410;
    *(undefined4 *)(plVar14 + 4) = 0;
    puVar4 = PTR_default_instance__007e7ed8;
    *plVar14 = (long)(puVar3 + 0x10);
    plVar14[3] = (long)puVar7;
    plVar14[2] = (long)puVar6;
    *(long **)puVar4 = plVar14;
    plVar14 = operator_new(0x20);
    puVar6 = PTR_vtable_007e62a8;
    *(undefined8 *)((long)plVar14 + 0x14) = 0;
    *(undefined4 *)((long)plVar14 + 0x1c) = 0;
    *(undefined2 *)(plVar14 + 2) = 0;
    puVar3 = PTR_default_instance__007e5130;
    *plVar14 = (long)(puVar6 + 0x10);
    plVar14[1] = 0;
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x28);
    puVar6 = PTR_vtable_007e6f60;
    plVar14[3] = 0;
    plVar14[4] = 0;
    plVar14[2] = 0;
    puVar3 = PTR_default_instance__007e5698;
    *plVar14 = (long)(puVar6 + 0x10);
    plVar14[1] = 0;
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x20);
    puVar6 = PTR_vtable_007e7db8;
    *(undefined4 *)(plVar14 + 1) = 0;
    plVar14[2] = 0;
    *(undefined4 *)(plVar14 + 3) = 0;
    puVar3 = PTR_default_instance__007e5120;
    *plVar14 = (long)(puVar6 + 0x10);
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x28);
    puVar6 = PTR_vtable_007e6f58;
    plVar14[1] = 0;
    puVar7 = PTR__default_spawn_point_name__007e72a0;
    puVar3 = PTR__default_destination_scene_name__007e6a68;
    *(undefined1 *)(plVar14 + 4) = 0;
    *(undefined4 *)((long)plVar14 + 0x24) = 0;
    puVar4 = PTR_default_instance__007e7ee8;
    *plVar14 = (long)(puVar6 + 0x10);
    plVar14[3] = (long)puVar7;
    plVar14[2] = (long)puVar3;
    *(long **)puVar4 = plVar14;
    plVar14 = operator_new(0x20);
    puVar6 = PTR_vtable_007e5ed8;
    *(undefined4 *)(plVar14 + 3) = 0;
    plVar14[2] = 0;
    puVar3 = PTR_default_instance__007e5048;
    *plVar14 = (long)(puVar6 + 0x10);
    plVar14[1] = 0;
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x40);
    puVar6 = PTR_vtable_007e67c0;
    puVar3 = PTR__default_item_name__007e5e68;
    plVar14[1] = 0;
    *(undefined4 *)(plVar14 + 2) = 0;
    *plVar14 = (long)(puVar6 + 0x10);
    puVar7 = PTR__default_identifier__007e6b70;
    *(undefined1 *)(plVar14 + 5) = 0;
    plVar14[6] = 0;
    *(undefined4 *)(plVar14 + 7) = 0;
    puVar6 = PTR_default_instance__007e5fb8;
    plVar14[4] = (long)puVar7;
    plVar14[3] = (long)puVar3;
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x20);
    puVar6 = PTR_vtable_007e6360;
    *(undefined4 *)(plVar14 + 3) = 0;
    plVar14[2] = 0;
    puVar3 = PTR_default_instance__007e5f98;
    *plVar14 = (long)(puVar6 + 0x10);
    plVar14[1] = 0;
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x60);
    puVar6 = PTR__default_item_name__007e5cd8;
    plVar14[4] = (long)(plVar14 + 7);
    puVar3 = PTR_vtable_007e4ac0;
    plVar14[5] = 0;
    *(undefined4 *)(plVar14 + 6) = 4;
    *(undefined4 *)(plVar14 + 1) = 0;
    *plVar14 = (long)(puVar3 + 0x10);
    puVar7 = PTR__default_item_identifier__007e6a38;
    *(undefined2 *)(plVar14 + 0xb) = 0;
    *(undefined4 *)((long)plVar14 + 0x5c) = 0;
    puVar3 = PTR_default_instance__007e5930;
    plVar14[3] = (long)puVar7;
    plVar14[2] = (long)puVar6;
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x30);
    puVar6 = PTR_vtable_007e5f28;
    *(undefined4 *)(plVar14 + 1) = 0;
    puVar4 = PTR__default_item_identifier__007e7320;
    puVar7 = PTR__default_template_name__007e6418;
    plVar14[4] = 0;
    plVar14[5] = 0;
    puVar3 = PTR_default_instance__007e5550;
    *plVar14 = (long)(puVar6 + 0x10);
    plVar14[3] = (long)puVar4;
    plVar14[2] = (long)puVar7;
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x38);
    puVar4 = PTR_vtable_007e7bd8;
    *(undefined4 *)(plVar14 + 1) = 0;
    puVar7 = PTR__default_sprite_name__007e6978;
    puVar3 = PTR__default_text__007e5e10;
    *(undefined4 *)(plVar14 + 6) = 0;
    puVar6 = PTR_default_instance__007e6838;
    plVar14[2] = (long)puVar3;
    plVar14[3] = 0;
    plVar14[4] = (long)puVar7;
    plVar14[5] = 0;
    *plVar14 = (long)(puVar4 + 0x10);
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x30);
    puVar3 = PTR_vtable_007e64b8;
    plVar14[1] = 0;
    *(undefined4 *)(plVar14 + 2) = 0;
    *(undefined4 *)(plVar14 + 5) = 0;
    plVar14[3] = 0;
    plVar14[4] = 0;
    puVar6 = PTR_default_instance__007e69c0;
    *plVar14 = (long)(puVar3 + 0x10);
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x28);
    puVar3 = PTR_vtable_007e4cb0;
    plVar14[3] = 0;
    plVar14[4] = 0;
    plVar14[2] = 0;
    puVar6 = PTR_default_instance__007e4db8;
    *plVar14 = (long)(puVar3 + 0x10);
    plVar14[1] = 0;
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x28);
    puVar3 = PTR_vtable_007e58b0;
    plVar14[3] = 0;
    plVar14[4] = 0;
    plVar14[2] = 0;
    puVar6 = PTR_default_instance__007e5e18;
    *plVar14 = (long)(puVar3 + 0x10);
    plVar14[1] = 0;
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x28);
    puVar3 = PTR_vtable_007e48c8;
    plVar14[1] = 0;
    puVar7 = PTR__default_cast_object_template_name__007e65a8;
    *(undefined4 *)(plVar14 + 4) = 0;
    puVar6 = PTR_default_instance__007e5830;
    plVar14[2] = (long)puVar7;
    plVar14[3] = 0;
    *plVar14 = (long)(puVar3 + 0x10);
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x18);
    puVar3 = PTR_vtable_007e66b0;
    plVar14[2] = 0;
    puVar6 = PTR_default_instance__007e6fe0;
    *plVar14 = (long)(puVar3 + 0x10);
    plVar14[1] = 0;
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x28);
    puVar3 = PTR_vtable_007e6388;
    plVar14[1] = 0;
    *(undefined4 *)(plVar14 + 2) = 0;
    plVar14[3] = 0;
    *(undefined4 *)(plVar14 + 4) = 0;
    puVar6 = PTR_default_instance__007e77e8;
    *plVar14 = (long)(puVar3 + 0x10);
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x18);
    puVar3 = PTR_vtable_007e5f00;
    *(undefined4 *)(plVar14 + 1) = 0;
    *(undefined2 *)((long)plVar14 + 0xc) = 0;
    *(undefined4 *)(plVar14 + 2) = 0;
    puVar6 = PTR_default_instance__007e6b88;
    *plVar14 = (long)(puVar3 + 0x10);
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x20);
    puVar3 = PTR_vtable_007e5940;
    *(undefined4 *)(plVar14 + 1) = 0;
    plVar14[2] = 0;
    *(undefined4 *)(plVar14 + 3) = 0;
    puVar6 = PTR_default_instance__007e7bd0;
    *plVar14 = (long)(puVar3 + 0x10);
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x30);
    puVar6 = PTR_vtable_007e7cf0;
    plVar14[4] = 0;
    *(undefined4 *)(plVar14 + 5) = 0;
    *(undefined4 *)(plVar14 + 3) = 0;
    plVar14[2] = 0;
    puVar3 = PTR_default_instance__007e6b30;
    *plVar14 = (long)(puVar6 + 0x10);
    plVar14[1] = 0;
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x20);
    puVar6 = PTR_vtable_007e7f10;
    *(undefined4 *)(plVar14 + 1) = 0;
    plVar14[2] = 0;
    *(undefined4 *)(plVar14 + 3) = 0;
    puVar3 = PTR_default_instance__007e66b8;
    *plVar14 = (long)(puVar6 + 0x10);
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x10);
    puVar3 = PTR_vtable_007e66d0;
    plVar14[1] = 0;
    puVar6 = PTR_default_instance__007e69e0;
    *plVar14 = (long)(puVar3 + 0x10);
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x10);
    puVar3 = PTR_vtable_007e64e8;
    plVar14[1] = 0;
    puVar6 = PTR_default_instance__007e6610;
    *plVar14 = (long)(puVar3 + 0x10);
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x20);
    puVar6 = PTR_vtable_007e7be0;
    plVar14[1] = lVar19;
    plVar14[2] = 0;
    plVar14[3] = 0;
    puVar3 = PTR_default_instance__007e7378;
    *plVar14 = (long)(puVar6 + 0x10);
    *(long **)puVar3 = plVar14;
    plVar14 = operator_new(0x40);
    puVar3 = PTR_vtable_007e5a10;
    *(undefined4 *)(plVar14 + 1) = 0;
    plVar14[6] = 0;
    *(undefined4 *)(plVar14 + 7) = 0;
    *(undefined4 *)(plVar14 + 5) = 0;
    plVar14[3] = 0;
    plVar14[4] = 0;
    plVar14[2] = 0;
    puVar6 = PTR_default_instance__007e6c30;
    *plVar14 = (long)(puVar3 + 0x10);
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0xa8);
    puVar6 = PTR_vtable_007e6d30;
    *(undefined4 *)(plVar14 + 8) = 4;
    plVar14[7] = 0;
    plVar14[1] = 0;
    *(undefined4 *)(plVar14 + 2) = 0;
    plVar14[3] = 0;
    plVar14[4] = 0;
    plVar14[0x10] = 0;
    plVar14[0x11] = 0;
    plVar14[0xf] = 0;
    plVar14[5] = 0;
    plVar14[6] = (long)(plVar14 + 9);
    puVar3 = PTR__default_vertex_data__007e5ae0;
    plVar14[0xd] = 0;
    plVar14[0xe] = 0;
    puVar7 = PTR__default_index_data__007e6c48;
    *(undefined4 *)(plVar14 + 0x14) = 0;
    *plVar14 = (long)(puVar6 + 0x10);
    puVar6 = PTR_default_instance__007e66e0;
    plVar14[0x13] = (long)puVar7;
    plVar14[0x12] = (long)puVar3;
    *(long **)puVar6 = plVar14;
    plVar14 = operator_new(0x98);
    plVar14[2] = (long)(plVar14 + 4);
    plVar14[7] = (long)(plVar14 + 9);
    plVar14[0xc] = (long)(plVar14 + 0xe);
    plVar14[0x11] = (long)PTR__default_vertex_data__007e74e8;
    puVar3 = PTR_vtable_007e5790;
    plVar14[3] = lVar1;
    plVar14[8] = lVar1;
    plVar14[0xd] = lVar1;
    *(undefined4 *)(plVar14 + 1) = 0;
    *(undefined4 *)(plVar14 + 0x12) = 0;
    *plVar14 = (long)(puVar3 + 0x10);
    *(long **)PTR_default_instance__007e5170 = plVar14;
    plVar14 = operator_new(0x80);
    plVar14[2] = (long)(plVar14 + 4);
    plVar14[6] = (long)(plVar14 + 8);
    plVar14[10] = (long)(plVar14 + 0xc);
    plVar14[0xe] = (long)PTR__default_vertex_data__007e7148;
    *(long **)PTR_default_instance__007e75b0 = plVar14;
    puVar3 = PTR_vtable_007e64d8;
    plVar14[3] = lVar1;
    plVar14[7] = lVar1;
    lVar17 = *(long *)puVar13;
    *plVar14 = (long)(puVar3 + 0x10);
    puVar3 = PTR_default_instance__007e4a98;
    plVar14[0xb] = lVar1;
    *(undefined4 *)(plVar14 + 1) = 0;
    *(undefined4 *)(plVar14 + 0xf) = 0;
    lVar19 = *(long *)puVar3;
    if (lVar17 == 0) {
      protobuf_AddDesc_Scene_2eproto();
      lVar17 = *(long *)puVar13;
    }
    *(long *)(lVar19 + 0x10) = lVar17;
    uVar15 = Vector2::default_instance();
    *(undefined8 *)(lVar17 + 0x58) = uVar15;
    uVar15 = Rectangle::default_instance();
    *(undefined8 *)(lVar17 + 0x70) = uVar15;
    uVar15 = Program::default_instance();
    *(undefined8 *)(lVar17 + 0x80) = uVar15;
    lVar17 = *(long *)PTR_default_instance__007e48f0;
    uVar15 = Program::default_instance();
    *(undefined8 *)(lVar17 + 0x58) = uVar15;
    lVar17 = *(long *)puVar12;
    lVar19 = *(long *)PTR_default_instance__007e7a20;
    if (lVar17 == 0) {
      protobuf_AddDesc_Scene_2eproto();
      lVar17 = *(long *)puVar12;
    }
    *(long *)(lVar19 + 0x80) = lVar17;
    uVar15 = Rectangle::default_instance();
    *(undefined8 *)(lVar19 + 0x88) = uVar15;
    uVar15 = Program::default_instance();
    *(undefined8 *)(lVar19 + 0x90) = uVar15;
    puVar6 = PTR_default_instance__007e6260;
    puVar3 = PTR_default_instance__007e4938;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar7 = PTR_default_instance__007e7bb8;
    pMVar16 = *(MessageLite **)puVar3;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar3;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,100,'\v',false,false,pMVar16);
    puVar3 = PTR_default_instance__007e70f0;
    lVar17 = *(long *)PTR_default_instance__007e70f0;
    uVar15 = Vector3::default_instance();
    *(undefined8 *)(lVar17 + 0x18) = uVar15;
    uVar15 = FloatColor::default_instance();
    *(undefined8 *)(lVar17 + 0x30) = uVar15;
    uVar15 = FloatColor::default_instance();
    *(undefined8 *)(lVar17 + 0x40) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar3;
    }
    else {
      pMVar16 = *(MessageLite **)puVar3;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar3;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x65,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar7;
    }
    else {
      pMVar16 = *(MessageLite **)puVar7;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar7;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x66,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar3 = PTR_default_instance__007e5180;
    pMVar16 = *(MessageLite **)PTR_default_instance__007e5180;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar3;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x67,'\v',false,false,pMVar16);
    lVar17 = *(long *)puVar6;
    uVar15 = Vector3::default_instance();
    *(undefined8 *)(lVar17 + 0x10) = uVar15;
    uVar15 = Vector3::default_instance();
    *(undefined8 *)(lVar17 + 0x18) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar6;
    }
    else {
      pMVar16 = *(MessageLite **)puVar6;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar6;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x68,'\v',false,false,pMVar16);
    lVar17 = *(long *)puVar10;
    uVar15 = Program::default_instance();
    *(undefined8 *)(lVar17 + 0x10) = uVar15;
    uVar15 = Polygon::default_instance();
    *(undefined8 *)(lVar17 + 0x50) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar10;
    }
    else {
      pMVar16 = *(MessageLite **)puVar10;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar10;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x6e,'\v',false,false,pMVar16);
    lVar17 = *(long *)puVar5;
    uVar15 = Rectangle::default_instance();
    *(undefined8 *)(lVar17 + 0x58) = uVar15;
    uVar15 = FloatColor::default_instance();
    *(undefined8 *)(lVar17 + 0xd0) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar5;
    }
    else {
      pMVar16 = *(MessageLite **)puVar5;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar5;
    }
    puVar3 = PTR_default_instance__007e7b10;
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x6f,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar9;
    }
    else {
      pMVar16 = *(MessageLite **)puVar9;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar9;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x70,'\v',false,false,pMVar16);
    puVar6 = PTR_default_instance__007e7550;
    lVar17 = *(long *)PTR_default_instance__007e7550;
    uVar15 = Vector2::default_instance();
    *(undefined8 *)(lVar17 + 0x20) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar6;
    }
    else {
      pMVar16 = *(MessageLite **)puVar6;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar6;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x71,'\v',false,false,pMVar16);
    puVar6 = PTR_default_instance__007e6e28;
    lVar17 = *(long *)PTR_default_instance__007e6e28;
    uVar15 = FloatColor::default_instance();
    *(undefined8 *)(lVar17 + 0x18) = uVar15;
    uVar15 = FloatColor::default_instance();
    *(undefined8 *)(lVar17 + 0x20) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar6;
    }
    else {
      pMVar16 = *(MessageLite **)puVar6;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar6;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x72,'\v',false,false,pMVar16);
    lVar17 = *(long *)puVar3;
    uVar15 = Rectangle::default_instance();
    *(undefined8 *)(lVar17 + 0x10) = uVar15;
    uVar15 = Circle::default_instance();
    *(undefined8 *)(lVar17 + 0x18) = uVar15;
    uVar15 = Polygon::default_instance();
    *(undefined8 *)(lVar17 + 0x20) = uVar15;
    puVar5 = PTR_default_instance__007e7c30;
    puVar6 = PTR_default_instance__007e70b0;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar3;
    }
    else {
      pMVar16 = *(MessageLite **)puVar3;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar3;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x78,'\v',false,false,pMVar16);
    puVar10 = PTR_default_instance__007e7360;
    lVar17 = *(long *)PTR_default_instance__007e7360;
    uVar15 = Program::default_instance();
    *(undefined8 *)(lVar17 + 0x28) = uVar15;
    uVar15 = Program::default_instance();
    *(undefined8 *)(lVar17 + 0x30) = uVar15;
    uVar15 = Program::default_instance();
    *(undefined8 *)(lVar17 + 0x38) = uVar15;
    puVar3 = PTR_default_instance__007e6f28;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar9 = PTR_default_instance__007e7628;
    puVar4 = PTR_default_instance__007e68d8;
    puVar7 = PTR_default_instance__007e4960;
    pMVar16 = *(MessageLite **)puVar10;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar10;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x79,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    pMVar16 = *(MessageLite **)puVar6;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar6;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x7a,'\v',false,false,pMVar16);
    puVar6 = PTR_default_instance__007e6bf0;
    lVar17 = *(long *)PTR_default_instance__007e6bf0;
    uVar15 = Vector2::default_instance();
    *(undefined8 *)(lVar17 + 0x18) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar10 = PTR_default_instance__007e5cc8;
    pMVar16 = *(MessageLite **)puVar6;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar6;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x7b,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar6 = PTR_default_instance__007e7ca0;
    pMVar16 = *(MessageLite **)puVar4;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar4;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x7c,'\v',false,false,pMVar16);
    puVar4 = PTR_default_instance__007e4830;
    lVar17 = *(long *)PTR_default_instance__007e4830;
    uVar15 = Vector3::default_instance();
    *(undefined8 *)(lVar17 + 0x20) = uVar15;
    uVar15 = Vector3::default_instance();
    *(undefined8 *)(lVar17 + 0x28) = uVar15;
    uVar15 = Vector3::default_instance();
    *(undefined8 *)(lVar17 + 0x30) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar4;
    }
    else {
      pMVar16 = *(MessageLite **)puVar4;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar4;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x7d,'\v',false,false,pMVar16);
    lVar17 = *(long *)puVar10;
    uVar15 = FloatColor::default_instance();
    *(undefined8 *)(lVar17 + 0x18) = uVar15;
    uVar15 = Vector3::default_instance();
    *(undefined8 *)(lVar17 + 0x30) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar4 = PTR_default_instance__007e58f0;
    pMVar16 = *(MessageLite **)puVar10;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar10;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x82,'\v',false,false,pMVar16);
    puVar10 = PTR_default_instance__007e5258;
    lVar17 = *(long *)PTR_default_instance__007e5258;
    uVar15 = Vector3::default_instance();
    *(undefined8 *)(lVar17 + 0x18) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar10;
    }
    else {
      pMVar16 = *(MessageLite **)puVar10;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar10;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x83,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    pMVar16 = *(MessageLite **)puVar9;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar9;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x8c,'\v',false,false,pMVar16);
    puVar10 = PTR_default_instance__007e6da8;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar9 = PTR_default_instance__007e7c88;
    pMVar16 = *(MessageLite **)PTR_default_instance__007e7c88;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar9;
    }
    puVar9 = PTR_default_instance__007e4d60;
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x95,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar5;
    }
    else {
      pMVar16 = *(MessageLite **)puVar5;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar5;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x96,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar5 = PTR_default_instance__007e7c08;
    pMVar16 = *(MessageLite **)PTR_default_instance__007e7c08;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar5;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x97,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar6;
    }
    else {
      pMVar16 = *(MessageLite **)puVar6;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar6;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x98,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar6 = PTR_default_instance__007e4b10;
    pMVar16 = *(MessageLite **)PTR_default_instance__007e4b10;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar6;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x99,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar3;
    }
    else {
      pMVar16 = *(MessageLite **)puVar3;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar3;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x9a,'\v',false,false,pMVar16);
    puVar3 = PTR_default_instance__007e4948;
    lVar17 = *(long *)PTR_default_instance__007e4948;
    uVar15 = Program::default_instance();
    *(undefined8 *)(lVar17 + 0x18) = uVar15;
    uVar15 = Program::default_instance();
    *(undefined8 *)(lVar17 + 0x20) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar3;
    }
    else {
      pMVar16 = *(MessageLite **)puVar3;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar3;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x9b,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    plVar14 = (long *)PTR_default_instance__007e5f30;
    pMVar16 = *(MessageLite **)puVar10;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar10;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x9c,'\v',false,false,pMVar16);
    puVar3 = PTR_default_instance__007e56e8;
    lVar17 = *(long *)PTR_default_instance__007e56e8;
    uVar15 = Program::default_instance();
    *(undefined8 *)(lVar17 + 0x18) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar3;
    }
    else {
      pMVar16 = *(MessageLite **)puVar3;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar3;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x9d,'\v',false,false,pMVar16);
    lVar17 = *(long *)puVar7;
    uVar15 = Program::default_instance();
    *(undefined8 *)(lVar17 + 0x10) = uVar15;
    uVar15 = Program::default_instance();
    *(undefined8 *)(lVar17 + 0x18) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar3 = PTR_default_instance__007e78d0;
    pMVar16 = *(MessageLite **)puVar7;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar7;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x9e,'\v',false,false,pMVar16);
    lVar17 = *(long *)puVar8;
    uVar15 = Vector2::default_instance();
    *(undefined8 *)(lVar17 + 0x10) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar6 = PTR_default_instance__007e53a8;
    pMVar16 = *(MessageLite **)puVar8;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar8;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x9f,'\v',false,false,pMVar16);
    puVar5 = PTR_default_instance__007e6f48;
    lVar17 = *(long *)PTR_default_instance__007e6f48;
    uVar15 = Program::default_instance();
    *(undefined8 *)(lVar17 + 0x18) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar5;
    }
    else {
      pMVar16 = *(MessageLite **)puVar5;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar5;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0xa0,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar10 = PTR_default_instance__007e7ad0;
    puVar5 = PTR_default_instance__007e7728;
    pMVar16 = *(MessageLite **)PTR_default_instance__007e7728;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar5;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0xa1,'\v',false,false,pMVar16);
    puVar5 = PTR_default_instance__007e4b60;
    lVar17 = *(long *)PTR_default_instance__007e4b60;
    uVar15 = Program::default_instance();
    *(undefined8 *)(lVar17 + 0x10) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar5;
    }
    else {
      pMVar16 = *(MessageLite **)puVar5;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar5;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0xa2,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar8 = PTR_default_instance__007e61f8;
    puVar5 = PTR_default_instance__007e5ca0;
    pMVar16 = *(MessageLite **)PTR_default_instance__007e5ca0;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar5;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0xa3,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar5 = PTR_default_instance__007e7b20;
    pMVar16 = *(MessageLite **)PTR_default_instance__007e7b20;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar5;
      plVar14 = (long *)PTR_default_instance__007e5f30;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0xa4,'\v',false,false,pMVar16);
    lVar17 = *(long *)puVar9;
    uVar15 = Program::default_instance();
    *(undefined8 *)(lVar17 + 0x10) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar9;
    }
    else {
      pMVar16 = *(MessageLite **)puVar9;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar9;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0xa5,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar5 = PTR_default_instance__007e5788;
    pMVar16 = *(MessageLite **)PTR_default_instance__007e5788;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar5;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,200,'\v',false,false,pMVar16);
    lVar17 = *plVar14;
    uVar15 = Program::default_instance();
    *(undefined8 *)(lVar17 + 0x10) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = (MessageLite *)*plVar14;
    }
    else {
      pMVar16 = (MessageLite *)*plVar14;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = (MessageLite *)*plVar14;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0xd2,'\v',false,false,pMVar16);
    lVar17 = *(long *)PTR_default_instance__007e4cf0;
    uVar15 = Vector3::default_instance();
    *(undefined8 *)(lVar17 + 0x10) = uVar15;
    uVar15 = FloatColor::default_instance();
    *(undefined8 *)(lVar17 + 0x18) = uVar15;
    puVar5 = PTR_default_instance__007e5ba8;
    lVar17 = *(long *)PTR_default_instance__007e5ba8;
    uVar15 = Vector3::default_instance();
    *(undefined8 *)(lVar17 + 0x78) = uVar15;
    uVar15 = Vector3::default_instance();
    *(undefined8 *)(lVar17 + 0x80) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar5;
    }
    else {
      pMVar16 = *(MessageLite **)puVar5;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar5;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0xfa,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar9 = PTR_default_instance__007e7a90;
    puVar7 = PTR_default_instance__007e68f8;
    puVar5 = PTR_default_instance__007e4ef8;
    pMVar16 = *(MessageLite **)puVar8;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar8;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0xfb,'\v',false,false,pMVar16);
    puVar8 = PTR_default_instance__007e7b98;
    lVar17 = *(long *)PTR_default_instance__007e7b98;
    uVar15 = Vector2::default_instance();
    *(undefined8 *)(lVar17 + 0x18) = uVar15;
    uVar15 = Vector3::default_instance();
    *(undefined8 *)(lVar17 + 0x20) = uVar15;
    uVar15 = FloatColor::default_instance();
    *(undefined8 *)(lVar17 + 0x28) = uVar15;
    uVar15 = Vector3::default_instance();
    *(undefined8 *)(lVar17 + 0x38) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar8;
    }
    else {
      pMVar16 = *(MessageLite **)puVar8;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar8;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0xfd,'\v',false,false,pMVar16);
    lVar17 = *(long *)puVar6;
    uVar15 = FloatColor::default_instance();
    *(undefined8 *)(lVar17 + 0x10) = uVar15;
    uVar15 = Vector2::default_instance();
    *(undefined8 *)(lVar17 + 0x28) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar8 = PTR_default_instance__007e4b88;
    pMVar16 = *(MessageLite **)puVar6;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar6;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0xfe,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar6 = PTR_default_instance__007e66c8;
    pMVar16 = *(MessageLite **)PTR_default_instance__007e66c8;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar6;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0xff,'\v',false,false,pMVar16);
    lVar17 = *(long *)puVar7;
    uVar15 = Vector3::default_instance();
    *(undefined8 *)(lVar17 + 0x10) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar7;
    }
    else {
      pMVar16 = *(MessageLite **)puVar7;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar7;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x100,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar4;
    }
    else {
      pMVar16 = *(MessageLite **)puVar4;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar4;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x101,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar6 = PTR_default_instance__007e7e70;
    pMVar16 = *(MessageLite **)PTR_default_instance__007e7e70;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar6;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x12e,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar5;
    }
    else {
      pMVar16 = *(MessageLite **)puVar5;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar5;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x12f,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar6 = PTR_default_instance__007e5130;
    pMVar16 = *(MessageLite **)puVar9;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar9;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x130,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar5 = PTR_default_instance__007e7e20;
    pMVar16 = *(MessageLite **)PTR_default_instance__007e7e20;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar5;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x131,'\v',false,false,pMVar16);
    lVar17 = *(long *)puVar10;
    uVar15 = Program::default_instance();
    *(undefined8 *)(lVar17 + 0x20) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar10;
    }
    else {
      pMVar16 = *(MessageLite **)puVar10;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar10;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x132,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar5 = PTR_default_instance__007e5270;
    pMVar16 = *(MessageLite **)PTR_default_instance__007e5270;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar5;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x133,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar5 = PTR_default_instance__007e7a40;
    pMVar16 = *(MessageLite **)PTR_default_instance__007e7a40;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar5;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x134,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar5 = PTR_default_instance__007e6fc0;
    pMVar16 = *(MessageLite **)PTR_default_instance__007e6fc0;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar5;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x135,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar5 = PTR_default_instance__007e6070;
    pMVar16 = *(MessageLite **)PTR_default_instance__007e6070;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar5;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x136,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar5 = PTR_default_instance__007e61c8;
    pMVar16 = *(MessageLite **)PTR_default_instance__007e61c8;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar5;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x137,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar5 = PTR_default_instance__007e4850;
    pMVar16 = *(MessageLite **)PTR_default_instance__007e4850;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar5;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x138,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar3;
    }
    else {
      pMVar16 = *(MessageLite **)puVar3;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar3;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x139,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar3 = PTR_default_instance__007e5228;
    pMVar16 = *(MessageLite **)PTR_default_instance__007e5228;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar3;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x13a,'\v',false,false,pMVar16);
    lVar17 = *(long *)puVar8;
    uVar15 = FloatColor::default_instance();
    *(undefined8 *)(lVar17 + 0x20) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar8;
    }
    else {
      pMVar16 = *(MessageLite **)puVar8;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar8;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,400,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar5 = PTR_default_instance__007e7ed8;
    puVar3 = PTR_default_instance__007e5048;
    pMVar16 = *(MessageLite **)PTR_default_instance__007e7ed8;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar5;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x191,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar6;
    }
    else {
      pMVar16 = *(MessageLite **)puVar6;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar6;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x192,'\v',false,false,pMVar16);
    puVar6 = PTR_default_instance__007e5698;
    lVar17 = *(long *)PTR_default_instance__007e5698;
    uVar15 = FloatColor::default_instance();
    *(undefined8 *)(lVar17 + 0x10) = uVar15;
    uVar15 = FloatColor::default_instance();
    *(undefined8 *)(lVar17 + 0x18) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    plVar14 = (long *)PTR_default_instance__007e5fb8;
    pMVar16 = *(MessageLite **)puVar6;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar6;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x193,'\v',false,false,pMVar16);
    puVar6 = PTR_default_instance__007e5120;
    lVar17 = *(long *)PTR_default_instance__007e5120;
    uVar15 = FloatColor::default_instance();
    *(undefined8 *)(lVar17 + 0x10) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar5 = PTR_default_instance__007e5930;
    pMVar16 = *(MessageLite **)puVar6;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar6;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x194,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar10 = PTR_default_instance__007e7ee8;
    puVar6 = PTR_default_instance__007e69c0;
    pMVar16 = *(MessageLite **)PTR_default_instance__007e7ee8;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar10;
      plVar14 = (long *)PTR_default_instance__007e5fb8;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,500,'\v',false,false,pMVar16);
    lVar17 = *(long *)puVar3;
    uVar15 = Vector3::default_instance();
    *(undefined8 *)(lVar17 + 0x10) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar3;
    }
    else {
      pMVar16 = *(MessageLite **)puVar3;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar3;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x1f5,'\v',false,false,pMVar16);
    lVar17 = *plVar14;
    uVar15 = Program::default_instance();
    *(undefined8 *)(lVar17 + 0x30) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar3 = PTR_default_instance__007e6fe0;
    pMVar16 = (MessageLite *)*plVar14;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = (MessageLite *)*plVar14;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x1f6,'\v',false,false,pMVar16);
    puVar10 = PTR_default_instance__007e5f98;
    lVar17 = *(long *)PTR_default_instance__007e5f98;
    uVar15 = Program::default_instance();
    *(undefined8 *)(lVar17 + 0x10) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar10;
    }
    else {
      pMVar16 = *(MessageLite **)puVar10;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar10;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x1f8,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar5;
    }
    else {
      pMVar16 = *(MessageLite **)puVar5;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar5;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x1f9,'\v',false,false,pMVar16);
    puVar5 = PTR_default_instance__007e6838;
    lVar17 = *(long *)PTR_default_instance__007e6838;
    uVar15 = Vector2::default_instance();
    *(undefined8 *)(lVar17 + 0x18) = uVar15;
    uVar15 = Vector2::default_instance();
    *(undefined8 *)(lVar17 + 0x28) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar5;
    }
    else {
      pMVar16 = *(MessageLite **)puVar5;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar5;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x1fa,'\v',false,false,pMVar16);
    lVar17 = *(long *)puVar6;
    uVar15 = FloatColor::default_instance();
    *(undefined8 *)(lVar17 + 0x18) = uVar15;
    uVar15 = Vector3::default_instance();
    *(undefined8 *)(lVar17 + 0x20) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar10 = PTR_default_instance__007e69e0;
    puVar5 = PTR_default_instance__007e5830;
    pMVar16 = *(MessageLite **)puVar6;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar6;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x1fb,'\v',false,false,pMVar16);
    puVar6 = PTR_default_instance__007e4db8;
    lVar17 = *(long *)PTR_default_instance__007e4db8;
    uVar15 = FloatColor::default_instance();
    *(undefined8 *)(lVar17 + 0x18) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar6;
    }
    else {
      pMVar16 = *(MessageLite **)puVar6;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar6;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x226,'\v',false,false,pMVar16);
    lVar17 = *(long *)PTR_default_instance__007e5e18;
    uVar15 = FloatColor::default_instance();
    *(undefined8 *)(lVar17 + 0x10) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar6 = PTR_default_instance__007e6b88;
    pMVar16 = *(MessageLite **)PTR_default_instance__007e5e18;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)PTR_default_instance__007e5e18;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x227,'\v',false,false,pMVar16);
    lVar17 = *(long *)puVar5;
    uVar15 = Vector2::default_instance();
    *(undefined8 *)(lVar17 + 0x18) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar8 = PTR_default_instance__007e7bd0;
    pMVar16 = *(MessageLite **)puVar5;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar5;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x228,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar3;
    }
    else {
      pMVar16 = *(MessageLite **)puVar3;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar3;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x229,'\v',false,false,pMVar16);
    puVar3 = PTR_default_instance__007e77e8;
    lVar17 = *(long *)PTR_default_instance__007e77e8;
    uVar15 = FloatColor::default_instance();
    *(undefined8 *)(lVar17 + 0x18) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar3;
    }
    else {
      pMVar16 = *(MessageLite **)puVar3;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar3;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x22a,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar3 = PTR_default_instance__007e66b8;
    pMVar16 = *(MessageLite **)puVar6;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar6;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x22b,'\v',false,false,pMVar16);
    lVar17 = *(long *)puVar8;
    uVar15 = FloatColor::default_instance();
    *(undefined8 *)(lVar17 + 0x10) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar6 = PTR_default_instance__007e6b30;
    pMVar16 = *(MessageLite **)puVar8;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar8;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x22c,'\v',false,false,pMVar16);
    lVar17 = *(long *)puVar6;
    uVar15 = FloatColor::default_instance();
    *(undefined8 *)(lVar17 + 0x20) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar6;
    }
    else {
      pMVar16 = *(MessageLite **)puVar6;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar6;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x22d,'\v',false,false,pMVar16);
    lVar17 = *(long *)puVar3;
    uVar15 = Program::default_instance();
    *(undefined8 *)(lVar17 + 0x10) = uVar15;
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar3;
    }
    else {
      pMVar16 = *(MessageLite **)puVar3;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar3;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x22e,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
      pMVar16 = *(MessageLite **)puVar10;
    }
    else {
      pMVar16 = *(MessageLite **)puVar10;
    }
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar10;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x22f,'\v',false,false,pMVar16);
    pMVar18 = *(MessageLite **)puVar11;
    if (pMVar18 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar18 = *(MessageLite **)puVar11;
    }
    puVar3 = PTR_default_instance__007e6610;
    pMVar16 = *(MessageLite **)PTR_default_instance__007e6610;
    if (pMVar16 == (MessageLite *)0x0) {
      protobuf_AddDesc_Scene_2eproto();
      pMVar16 = *(MessageLite **)puVar3;
    }
    google::protobuf::internal::ExtensionSet::RegisterMessageExtension
              (pMVar18,0x230,'\v',false,false,pMVar16);
    lVar17 = *(long *)PTR_default_instance__007e6c30;
    uVar15 = FloatColor::default_instance();
    *(undefined8 *)(lVar17 + 0x10) = uVar15;
    uVar15 = FloatColor::default_instance();
    *(undefined8 *)(lVar17 + 0x18) = uVar15;
    uVar15 = FloatColor::default_instance();
    *(undefined8 *)(lVar17 + 0x20) = uVar15;
    uVar15 = Texture::default_instance();
    *(undefined8 *)(lVar17 + 0x30) = uVar15;
    Mesh::InitAsDefaultInstance(*(Mesh **)PTR_default_instance__007e66e0);
    google::protobuf::internal::OnShutdown
              ((_func_void *)PTR_protobuf_ShutdownFile_Scene_2eproto_007e52f0);
    return;
  }
  return;
}


