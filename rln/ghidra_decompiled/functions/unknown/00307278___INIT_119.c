/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00307278
 * Function: _INIT_119
 * Signature: undefined _INIT_119(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void _INIT_119(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  Caver::Proto::protobuf_AddDesc_Scene_2eproto();
  puVar2 = PTR_DAT_007e5de8;
  puVar3 = PTR__default_class_name__007e5328;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  *(undefined **)PTR__default_class_name__007e5328 = puVar1;
  puVar4 = PTR_FUN_007e6cc8;
  __cxa_atexit(PTR_FUN_007e6cc8,puVar3,&PTR_LOOP_007e8000);
  puVar3 = PTR__default_label__007e6320;
  *(undefined **)PTR__default_label__007e6320 = puVar1;
  __cxa_atexit(puVar4,puVar3,&PTR_LOOP_007e8000);
  puVar3 = PTR__default_name__007e6d40;
  *(undefined **)PTR__default_name__007e6d40 = puVar1;
  __cxa_atexit(puVar4,puVar3,&PTR_LOOP_007e8000);
  puVar3 = PTR__default_template_name__007e5070;
  *(undefined **)PTR__default_template_name__007e5070 = puVar1;
  __cxa_atexit(puVar4,puVar3,&PTR_LOOP_007e8000);
  puVar3 = PTR__default_identifier__007e5320;
  *(undefined **)PTR__default_identifier__007e5320 = puVar1;
  __cxa_atexit(puVar4,puVar3,&PTR_LOOP_007e8000);
  puVar3 = PTR__default_identifier__007e5218;
  *(undefined **)PTR__default_identifier__007e5218 = puVar1;
  __cxa_atexit(puVar4,puVar3,&PTR_LOOP_007e8000);
  puVar3 = PTR__default_texture_name__007e5d90;
  *(undefined **)PTR__default_texture_name__007e5d90 = puVar1;
  __cxa_atexit(puVar4,puVar3,&PTR_LOOP_007e8000);
  puVar3 = PTR_default_instance__007e4938;
  lVar6 = *(long *)PTR_default_instance__007e4938;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar3;
  }
  puVar4 = PTR__default_name__007e7d30;
  puVar3 = PTR_extension_007e7690;
  *(undefined4 *)PTR_extension_007e7690 = 100;
  *(long *)(puVar3 + 8) = lVar6;
  *(undefined **)puVar4 = puVar1;
  __cxa_atexit(PTR_FUN_007e6cc8,puVar4,&PTR_LOOP_007e8000);
  puVar1 = PTR_default_instance__007e70f0;
  lVar6 = *(long *)PTR_default_instance__007e70f0;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = PTR_extension_007e6980;
  puVar1 = PTR__default_name__007e5890;
  *(undefined4 *)PTR_extension_007e6980 = 0x65;
  *(long *)(puVar3 + 8) = lVar6;
  *(undefined **)puVar1 = puVar2 + 0x18;
  __cxa_atexit(PTR_FUN_007e6cc8,puVar1,&PTR_LOOP_007e8000);
  puVar1 = PTR_default_instance__007e7bb8;
  lVar6 = *(long *)PTR_default_instance__007e7bb8;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = PTR_extension_007e7f60;
  puVar1 = PTR_default_instance__007e5180;
  lVar7 = *(long *)PTR_default_instance__007e5180;
  *(undefined4 *)PTR_extension_007e7f60 = 0x66;
  *(long *)(puVar3 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar1;
  }
  puVar3 = PTR_default_instance__007e6260;
  puVar1 = PTR_extension_007e47c8;
  lVar6 = *(long *)PTR_default_instance__007e6260;
  *(undefined4 *)PTR_extension_007e47c8 = 0x67;
  *(long *)(puVar1 + 8) = lVar7;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar3;
  }
  puVar3 = PTR_extension_007e7650;
  puVar1 = PTR_default_instance__007e5920;
  lVar7 = *(long *)PTR_default_instance__007e5920;
  *(undefined4 *)PTR_extension_007e7650 = 0x68;
  *(long *)(puVar3 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar1;
  }
  puVar3 = PTR_extension_007e5308;
  puVar1 = PTR__default_vertex_data__007e4e40;
  *(undefined4 *)PTR_extension_007e5308 = 0x6e;
  *(long *)(puVar3 + 8) = lVar7;
  *(undefined **)puVar1 = puVar2 + 0x18;
  puVar3 = PTR_FUN_007e6cc8;
  __cxa_atexit(PTR_FUN_007e6cc8,puVar1,&PTR_LOOP_007e8000);
  puVar1 = PTR__default_indices__007e67d8;
  *(undefined **)PTR__default_indices__007e67d8 = puVar2 + 0x18;
  __cxa_atexit(puVar3,puVar1,&PTR_LOOP_007e8000);
  puVar1 = PTR_default_instance__007e5600;
  lVar6 = *(long *)PTR_default_instance__007e5600;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = PTR_default_instance__007e7900;
  puVar1 = PTR_extension_007e5418;
  lVar7 = *(long *)PTR_default_instance__007e7900;
  *(undefined4 *)PTR_extension_007e5418 = 0x6f;
  *(long *)(puVar1 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar3;
  }
  puVar3 = PTR__default_texture_name__007e7c58;
  puVar1 = PTR_extension_007e58c0;
  *(undefined4 *)PTR_extension_007e58c0 = 0x70;
  *(long *)(puVar1 + 8) = lVar7;
  *(undefined **)puVar3 = puVar2 + 0x18;
  __cxa_atexit(PTR_FUN_007e6cc8,puVar3,&PTR_LOOP_007e8000);
  puVar1 = PTR_default_instance__007e7550;
  lVar6 = *(long *)PTR_default_instance__007e7550;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = PTR_extension_007e6e38;
  puVar1 = PTR_default_instance__007e6e28;
  lVar7 = *(long *)PTR_default_instance__007e6e28;
  *(undefined4 *)PTR_extension_007e6e38 = 0x71;
  *(long *)(puVar3 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar1;
  }
  puVar3 = PTR_default_instance__007e7b10;
  puVar1 = PTR_extension_007e71e0;
  lVar6 = *(long *)PTR_default_instance__007e7b10;
  *(undefined4 *)PTR_extension_007e71e0 = 0x72;
  *(long *)(puVar1 + 8) = lVar7;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar3;
  }
  puVar3 = PTR_default_instance__007e7360;
  puVar1 = PTR_extension_007e6128;
  lVar7 = *(long *)PTR_default_instance__007e7360;
  *(undefined4 *)PTR_extension_007e6128 = 0x78;
  *(long *)(puVar1 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar3;
  }
  puVar3 = PTR_default_instance__007e70b0;
  puVar1 = PTR_extension_007e4c40;
  lVar6 = *(long *)PTR_default_instance__007e70b0;
  *(undefined4 *)PTR_extension_007e4c40 = 0x79;
  *(long *)(puVar1 + 8) = lVar7;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar3;
  }
  puVar3 = PTR_extension_007e7a08;
  puVar1 = PTR_default_instance__007e6bf0;
  lVar7 = *(long *)PTR_default_instance__007e6bf0;
  *(undefined4 *)PTR_extension_007e7a08 = 0x7a;
  *(long *)(puVar3 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar1;
  }
  puVar4 = PTR__default_controlling_bone_name__007e79d8;
  puVar3 = PTR_extension_007e7648;
  puVar1 = puVar2 + 0x18;
  *(undefined4 *)PTR_extension_007e7648 = 0x7b;
  *(long *)(puVar3 + 8) = lVar7;
  *(undefined **)puVar4 = puVar1;
  __cxa_atexit(PTR_FUN_007e6cc8,puVar4,&PTR_LOOP_007e8000);
  puVar3 = PTR_default_instance__007e68d8;
  lVar6 = *(long *)PTR_default_instance__007e68d8;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar3;
  }
  puVar4 = PTR_extension_007e6bf8;
  puVar3 = PTR__default_target_object_identifier__007e4c30;
  *(undefined4 *)PTR_extension_007e6bf8 = 0x7c;
  *(long *)(puVar4 + 8) = lVar6;
  *(undefined **)puVar3 = puVar1;
  puVar4 = PTR_FUN_007e6cc8;
  __cxa_atexit(PTR_FUN_007e6cc8,puVar3,&PTR_LOOP_007e8000);
  puVar3 = PTR__default_target_bone_identifier__007e7b50;
  *(undefined **)PTR__default_target_bone_identifier__007e7b50 = puVar1;
  __cxa_atexit(puVar4,puVar3,&PTR_LOOP_007e8000);
  puVar1 = PTR_default_instance__007e4830;
  lVar6 = *(long *)PTR_default_instance__007e4830;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = PTR_default_instance__007e5cc8;
  puVar1 = PTR_extension_007e47a0;
  lVar7 = *(long *)PTR_default_instance__007e5cc8;
  *(undefined4 *)PTR_extension_007e47a0 = 0x7d;
  *(long *)(puVar1 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar3;
  }
  puVar3 = PTR_extension_007e6668;
  puVar1 = PTR_default_instance__007e5258;
  lVar6 = *(long *)PTR_default_instance__007e5258;
  *(undefined4 *)PTR_extension_007e6668 = 0x82;
  *(long *)(puVar3 + 8) = lVar7;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = PTR__default_name__007e7518;
  puVar1 = PTR_extension_007e6890;
  *(undefined4 *)PTR_extension_007e6890 = 0x83;
  *(long *)(puVar1 + 8) = lVar6;
  *(undefined **)puVar3 = puVar2 + 0x18;
  __cxa_atexit(PTR_FUN_007e6cc8,puVar3,&PTR_LOOP_007e8000);
  puVar1 = PTR_default_instance__007e7628;
  lVar6 = *(long *)PTR_default_instance__007e7628;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = PTR_default_instance__007e7c88;
  puVar1 = PTR_extension_007e6a80;
  lVar7 = *(long *)PTR_default_instance__007e7c88;
  *(undefined4 *)PTR_extension_007e6a80 = 0x8c;
  *(long *)(puVar1 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar3;
  }
  puVar3 = PTR_default_instance__007e7c30;
  puVar1 = PTR_extension_007e4fc8;
  lVar6 = *(long *)PTR_default_instance__007e7c30;
  *(undefined4 *)PTR_extension_007e4fc8 = 0x95;
  *(long *)(puVar1 + 8) = lVar7;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar3;
  }
  puVar3 = PTR_default_instance__007e7c08;
  puVar1 = PTR_extension_007e5a68;
  lVar7 = *(long *)PTR_default_instance__007e7c08;
  *(undefined4 *)PTR_extension_007e5a68 = 0x96;
  *(long *)(puVar1 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar3;
  }
  puVar3 = PTR_default_instance__007e7ca0;
  puVar1 = PTR_extension_007e75c0;
  lVar6 = *(long *)PTR_default_instance__007e7ca0;
  *(undefined4 *)PTR_extension_007e75c0 = 0x97;
  *(long *)(puVar1 + 8) = lVar7;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar3;
  }
  puVar3 = PTR_extension_007e73e8;
  puVar1 = PTR_default_instance__007e4b10;
  lVar7 = *(long *)PTR_default_instance__007e4b10;
  *(undefined4 *)PTR_extension_007e73e8 = 0x98;
  *(long *)(puVar3 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar1;
  }
  puVar3 = PTR_extension_007e7620;
  puVar1 = PTR_default_instance__007e6f28;
  lVar6 = *(long *)PTR_default_instance__007e6f28;
  *(undefined4 *)PTR_extension_007e7620 = 0x99;
  *(long *)(puVar3 + 8) = lVar7;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = PTR_extension_007e72d0;
  puVar1 = PTR_default_instance__007e4948;
  lVar7 = *(long *)PTR_default_instance__007e4948;
  *(undefined4 *)PTR_extension_007e72d0 = 0x9a;
  *(long *)(puVar3 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar1;
  }
  puVar3 = PTR_extension_007e79f0;
  puVar1 = PTR_default_instance__007e6da8;
  lVar6 = *(long *)PTR_default_instance__007e6da8;
  *(undefined4 *)PTR_extension_007e79f0 = 0x9b;
  *(long *)(puVar3 + 8) = lVar7;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = PTR_extension_007e7088;
  puVar1 = PTR_default_instance__007e56e8;
  lVar7 = *(long *)PTR_default_instance__007e56e8;
  *(undefined4 *)PTR_extension_007e7088 = 0x9c;
  *(long *)(puVar3 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar1;
  }
  puVar3 = PTR_extension_007e73f0;
  puVar1 = PTR_default_instance__007e4960;
  lVar6 = *(long *)PTR_default_instance__007e4960;
  *(undefined4 *)PTR_extension_007e73f0 = 0x9d;
  *(long *)(puVar3 + 8) = lVar7;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = PTR_default_instance__007e5a38;
  puVar1 = PTR_extension_007e4df0;
  lVar7 = *(long *)PTR_default_instance__007e5a38;
  *(undefined4 *)PTR_extension_007e4df0 = 0x9e;
  *(long *)(puVar1 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar3;
  }
  puVar3 = PTR_default_instance__007e6f48;
  puVar1 = PTR_extension_007e59b8;
  lVar6 = *(long *)PTR_default_instance__007e6f48;
  *(undefined4 *)PTR_extension_007e59b8 = 0x9f;
  *(long *)(puVar1 + 8) = lVar7;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar3;
  }
  puVar3 = PTR_default_instance__007e7728;
  puVar1 = PTR_extension_007e4f70;
  lVar7 = *(long *)PTR_default_instance__007e7728;
  *(undefined4 *)PTR_extension_007e4f70 = 0xa0;
  *(long *)(puVar1 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar3;
  }
  puVar3 = PTR_extension_007e5fa0;
  puVar1 = PTR_default_instance__007e4b60;
  lVar6 = *(long *)PTR_default_instance__007e4b60;
  *(undefined4 *)PTR_extension_007e5fa0 = 0xa1;
  *(long *)(puVar3 + 8) = lVar7;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = PTR_default_instance__007e5ca0;
  puVar1 = PTR_extension_007e5c20;
  lVar7 = *(long *)PTR_default_instance__007e5ca0;
  *(undefined4 *)PTR_extension_007e5c20 = 0xa2;
  *(long *)(puVar1 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar3;
  }
  puVar3 = PTR__default_entity_class__007e6138;
  puVar1 = PTR_extension_007e4c88;
  *(undefined4 *)PTR_extension_007e4c88 = 0xa3;
  *(long *)(puVar1 + 8) = lVar7;
  *(undefined **)puVar3 = puVar2 + 0x18;
  __cxa_atexit(PTR_FUN_007e6cc8,puVar3,&PTR_LOOP_007e8000);
  puVar1 = PTR_default_instance__007e7b20;
  lVar6 = *(long *)PTR_default_instance__007e7b20;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = PTR_extension_007e5280;
  puVar1 = PTR_default_instance__007e4d60;
  lVar7 = *(long *)PTR_default_instance__007e4d60;
  *(undefined4 *)PTR_extension_007e5280 = 0xa4;
  *(long *)(puVar3 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar1;
  }
  puVar3 = PTR_extension_007e7738;
  puVar1 = PTR__default_texture_name__007e56a8;
  *(undefined4 *)PTR_extension_007e7738 = 0xa5;
  *(long *)(puVar3 + 8) = lVar7;
  *(undefined **)puVar1 = puVar2 + 0x18;
  __cxa_atexit(PTR_FUN_007e6cc8,puVar1,&PTR_LOOP_007e8000);
  puVar1 = PTR_default_instance__007e5788;
  lVar6 = *(long *)PTR_default_instance__007e5788;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = PTR_extension_007e6c58;
  puVar1 = PTR_default_instance__007e5f30;
  lVar7 = *(long *)PTR_default_instance__007e5f30;
  *(undefined4 *)PTR_extension_007e6c58 = 200;
  *(long *)(puVar3 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar1;
  }
  puVar3 = PTR_default_instance__007e5ba8;
  puVar1 = PTR_extension_007e58a8;
  lVar6 = *(long *)PTR_default_instance__007e5ba8;
  *(undefined4 *)PTR_extension_007e58a8 = 0xd2;
  *(long *)(puVar1 + 8) = lVar7;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar3;
  }
  puVar3 = PTR_extension_007e6aa8;
  puVar1 = PTR__default_texture_name__007e6170;
  *(undefined4 *)PTR_extension_007e6aa8 = 0xfa;
  *(long *)(puVar3 + 8) = lVar6;
  *(undefined **)puVar1 = puVar2 + 0x18;
  __cxa_atexit(PTR_FUN_007e6cc8,puVar1,&PTR_LOOP_007e8000);
  puVar1 = PTR_default_instance__007e61f8;
  lVar6 = *(long *)PTR_default_instance__007e61f8;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = PTR_default_instance__007e7b98;
  puVar1 = PTR_extension_007e4d80;
  lVar7 = *(long *)PTR_default_instance__007e7b98;
  *(undefined4 *)PTR_extension_007e4d80 = 0xfb;
  *(long *)(puVar1 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar3;
  }
  puVar3 = PTR_extension_007e7f00;
  puVar1 = PTR_default_instance__007e53a8;
  lVar6 = *(long *)PTR_default_instance__007e53a8;
  *(undefined4 *)PTR_extension_007e7f00 = 0xfd;
  *(long *)(puVar3 + 8) = lVar7;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = PTR_default_instance__007e66c8;
  puVar1 = PTR_extension_007e66c0;
  lVar7 = *(long *)PTR_default_instance__007e66c8;
  *(undefined4 *)PTR_extension_007e66c0 = 0xfe;
  *(long *)(puVar1 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar3;
  }
  puVar3 = PTR_default_instance__007e68f8;
  puVar1 = PTR_extension_007e4c68;
  lVar6 = *(long *)PTR_default_instance__007e68f8;
  *(undefined4 *)PTR_extension_007e4c68 = 0xff;
  *(long *)(puVar1 + 8) = lVar7;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar3;
  }
  puVar3 = PTR_extension_007e69a8;
  puVar1 = PTR_default_instance__007e58f0;
  lVar7 = *(long *)PTR_default_instance__007e58f0;
  *(undefined4 *)PTR_extension_007e69a8 = 0x100;
  *(long *)(puVar3 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar1;
  }
  puVar3 = PTR_default_instance__007e7e70;
  puVar1 = PTR_extension_007e5748;
  lVar6 = *(long *)PTR_default_instance__007e7e70;
  *(undefined4 *)PTR_extension_007e5748 = 0x101;
  *(long *)(puVar1 + 8) = lVar7;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar3;
  }
  puVar3 = PTR_default_instance__007e4ef8;
  puVar1 = PTR_extension_007e4d48;
  lVar7 = *(long *)PTR_default_instance__007e4ef8;
  *(undefined4 *)PTR_extension_007e4d48 = 0x12e;
  *(long *)(puVar1 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar3;
  }
  puVar3 = PTR_default_instance__007e7a90;
  puVar1 = PTR_extension_007e7380;
  lVar6 = *(long *)PTR_default_instance__007e7a90;
  *(undefined4 *)PTR_extension_007e7380 = 0x12f;
  *(long *)(puVar1 + 8) = lVar7;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar3;
  }
  puVar3 = PTR_default_instance__007e7e20;
  puVar1 = PTR_extension_007e5478;
  lVar7 = *(long *)PTR_default_instance__007e7e20;
  *(undefined4 *)PTR_extension_007e5478 = 0x130;
  *(long *)(puVar1 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar3;
  }
  puVar3 = PTR_extension_007e7cb0;
  puVar1 = PTR_default_instance__007e7ad0;
  lVar6 = *(long *)PTR_default_instance__007e7ad0;
  *(undefined4 *)PTR_extension_007e7cb0 = 0x131;
  *(long *)(puVar3 + 8) = lVar7;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = PTR_default_instance__007e5270;
  puVar1 = PTR_extension_007e4be8;
  lVar7 = *(long *)PTR_default_instance__007e5270;
  *(undefined4 *)PTR_extension_007e4be8 = 0x132;
  *(long *)(puVar1 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar3;
  }
  puVar3 = PTR_default_instance__007e7a40;
  puVar1 = PTR_extension_007e74a8;
  lVar6 = *(long *)PTR_default_instance__007e7a40;
  *(undefined4 *)PTR_extension_007e74a8 = 0x133;
  *(long *)(puVar1 + 8) = lVar7;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar3;
  }
  puVar3 = PTR_extension_007e7120;
  puVar1 = PTR_default_instance__007e6fc0;
  lVar7 = *(long *)PTR_default_instance__007e6fc0;
  *(undefined4 *)PTR_extension_007e7120 = 0x134;
  *(long *)(puVar3 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar1;
  }
  puVar3 = PTR_default_instance__007e6070;
  puVar1 = PTR_extension_007e55f8;
  lVar6 = *(long *)PTR_default_instance__007e6070;
  *(undefined4 *)PTR_extension_007e55f8 = 0x135;
  *(long *)(puVar1 + 8) = lVar7;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar3;
  }
  puVar3 = PTR_extension_007e6720;
  puVar1 = PTR_default_instance__007e61c8;
  lVar7 = *(long *)PTR_default_instance__007e61c8;
  *(undefined4 *)PTR_extension_007e6720 = 0x136;
  *(long *)(puVar3 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar1;
  }
  puVar3 = PTR_extension_007e5b28;
  puVar1 = PTR_default_instance__007e4850;
  lVar6 = *(long *)PTR_default_instance__007e4850;
  *(undefined4 *)PTR_extension_007e5b28 = 0x137;
  *(long *)(puVar3 + 8) = lVar7;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = PTR_default_instance__007e78d0;
  puVar1 = PTR_extension_007e4e70;
  lVar7 = *(long *)PTR_default_instance__007e78d0;
  *(undefined4 *)PTR_extension_007e4e70 = 0x138;
  *(long *)(puVar1 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar3;
  }
  puVar3 = PTR_extension_007e68b8;
  puVar1 = PTR_default_instance__007e5228;
  lVar6 = *(long *)PTR_default_instance__007e5228;
  *(undefined4 *)PTR_extension_007e68b8 = 0x139;
  *(long *)(puVar3 + 8) = lVar7;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = PTR_default_instance__007e4b88;
  puVar1 = PTR_extension_007e4838;
  lVar7 = *(long *)PTR_default_instance__007e4b88;
  *(undefined4 *)PTR_extension_007e4838 = 0x13a;
  *(long *)(puVar1 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar3;
  }
  puVar3 = PTR__default_controlling_bone_name__007e7410;
  puVar1 = PTR_extension_007e4b38;
  *(undefined4 *)PTR_extension_007e4b38 = 400;
  *(long *)(puVar1 + 8) = lVar7;
  *(undefined **)puVar3 = puVar2 + 0x18;
  puVar1 = PTR_FUN_007e6cc8;
  __cxa_atexit(PTR_FUN_007e6cc8,puVar3,&PTR_LOOP_007e8000);
  puVar3 = PTR__default_weapon_template_name__007e78e0;
  *(undefined **)PTR__default_weapon_template_name__007e78e0 = puVar2 + 0x18;
  __cxa_atexit(puVar1,puVar3,&PTR_LOOP_007e8000);
  puVar1 = PTR_default_instance__007e7ed8;
  lVar6 = *(long *)PTR_default_instance__007e7ed8;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = PTR_extension_007e7760;
  puVar1 = PTR_default_instance__007e5130;
  lVar7 = *(long *)PTR_default_instance__007e5130;
  *(undefined4 *)PTR_extension_007e7760 = 0x191;
  *(long *)(puVar3 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar1;
  }
  puVar3 = PTR_default_instance__007e5698;
  puVar1 = PTR_extension_007e5348;
  lVar6 = *(long *)PTR_default_instance__007e5698;
  *(undefined4 *)PTR_extension_007e5348 = 0x192;
  *(long *)(puVar1 + 8) = lVar7;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar3;
  }
  puVar3 = PTR_default_instance__007e5120;
  puVar1 = PTR_extension_007e4d00;
  lVar7 = *(long *)PTR_default_instance__007e5120;
  *(undefined4 *)PTR_extension_007e4d00 = 0x193;
  *(long *)(puVar1 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar3;
  }
  puVar3 = PTR__default_destination_scene_name__007e6a68;
  puVar1 = PTR_extension_007e6950;
  *(undefined4 *)PTR_extension_007e6950 = 0x194;
  *(long *)(puVar1 + 8) = lVar7;
  *(undefined **)puVar3 = puVar2 + 0x18;
  puVar1 = PTR_FUN_007e6cc8;
  __cxa_atexit(PTR_FUN_007e6cc8,puVar3,&PTR_LOOP_007e8000);
  puVar3 = PTR__default_spawn_point_name__007e72a0;
  *(undefined **)PTR__default_spawn_point_name__007e72a0 = puVar2 + 0x18;
  __cxa_atexit(puVar1,puVar3,&PTR_LOOP_007e8000);
  puVar1 = PTR_default_instance__007e7ee8;
  lVar6 = *(long *)PTR_default_instance__007e7ee8;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = PTR_extension_007e72d8;
  puVar1 = PTR_default_instance__007e5048;
  lVar7 = *(long *)PTR_default_instance__007e5048;
  *(undefined4 *)PTR_extension_007e72d8 = 500;
  *(long *)(puVar3 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar1;
  }
  puVar3 = PTR_extension_007e68d0;
  puVar1 = PTR__default_item_name__007e5e68;
  *(undefined4 *)PTR_extension_007e68d0 = 0x1f5;
  *(long *)(puVar3 + 8) = lVar7;
  *(undefined **)puVar1 = puVar2 + 0x18;
  puVar3 = PTR_FUN_007e6cc8;
  __cxa_atexit(PTR_FUN_007e6cc8,puVar1,&PTR_LOOP_007e8000);
  puVar1 = PTR__default_identifier__007e6b70;
  *(undefined **)PTR__default_identifier__007e6b70 = puVar2 + 0x18;
  __cxa_atexit(puVar3,puVar1,&PTR_LOOP_007e8000);
  puVar1 = PTR_default_instance__007e5fb8;
  lVar6 = *(long *)PTR_default_instance__007e5fb8;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = PTR_default_instance__007e5f98;
  puVar1 = PTR_extension_007e5498;
  lVar7 = *(long *)PTR_default_instance__007e5f98;
  *(undefined4 *)PTR_extension_007e5498 = 0x1f6;
  *(long *)(puVar1 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar3;
  }
  puVar4 = PTR_extension_007e7388;
  puVar3 = PTR__default_template_name__007e6418;
  puVar1 = puVar2 + 0x18;
  *(undefined4 *)PTR_extension_007e7388 = 0x1f8;
  *(long *)(puVar4 + 8) = lVar7;
  *(undefined **)puVar3 = puVar1;
  puVar4 = PTR_FUN_007e6cc8;
  __cxa_atexit(PTR_FUN_007e6cc8,puVar3,&PTR_LOOP_007e8000);
  puVar3 = PTR__default_item_identifier__007e7320;
  *(undefined **)PTR__default_item_identifier__007e7320 = puVar1;
  __cxa_atexit(puVar4,puVar3,&PTR_LOOP_007e8000);
  puVar3 = PTR__default_item_name__007e5cd8;
  *(undefined **)PTR__default_item_name__007e5cd8 = puVar1;
  __cxa_atexit(puVar4,puVar3,&PTR_LOOP_007e8000);
  puVar3 = PTR__default_item_identifier__007e6a38;
  *(undefined **)PTR__default_item_identifier__007e6a38 = puVar1;
  __cxa_atexit(puVar4,puVar3,&PTR_LOOP_007e8000);
  puVar3 = PTR_default_instance__007e5930;
  lVar6 = *(long *)PTR_default_instance__007e5930;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar3;
  }
  puVar4 = PTR__default_text__007e5e10;
  puVar3 = PTR_extension_007e5880;
  *(undefined4 *)PTR_extension_007e5880 = 0x1f9;
  *(long *)(puVar3 + 8) = lVar6;
  *(undefined **)puVar4 = puVar1;
  puVar5 = PTR_FUN_007e6cc8;
  __cxa_atexit(PTR_FUN_007e6cc8,puVar4,&PTR_LOOP_007e8000);
  puVar3 = PTR__default_sprite_name__007e6978;
  *(undefined **)PTR__default_sprite_name__007e6978 = puVar1;
  __cxa_atexit(puVar5,puVar3,&PTR_LOOP_007e8000);
  puVar1 = PTR_default_instance__007e6838;
  lVar6 = *(long *)PTR_default_instance__007e6838;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = PTR_default_instance__007e69c0;
  puVar1 = PTR_extension_007e4e48;
  lVar7 = *(long *)PTR_default_instance__007e69c0;
  *(undefined4 *)PTR_extension_007e4e48 = 0x1fa;
  *(long *)(puVar1 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar3;
  }
  puVar3 = PTR_extension_007e6200;
  puVar1 = PTR_default_instance__007e4db8;
  lVar6 = *(long *)PTR_default_instance__007e4db8;
  *(undefined4 *)PTR_extension_007e6200 = 0x1fb;
  *(long *)(puVar3 + 8) = lVar7;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = PTR_extension_007e7888;
  puVar1 = PTR_default_instance__007e5e18;
  lVar7 = *(long *)PTR_default_instance__007e5e18;
  *(undefined4 *)PTR_extension_007e7888 = 0x226;
  *(long *)(puVar3 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar1;
  }
  puVar3 = PTR_extension_007e7c20;
  puVar1 = PTR__default_cast_object_template_name__007e65a8;
  *(undefined4 *)PTR_extension_007e7c20 = 0x227;
  *(long *)(puVar3 + 8) = lVar7;
  *(undefined **)puVar1 = puVar2 + 0x18;
  __cxa_atexit(PTR_FUN_007e6cc8,puVar1,&PTR_LOOP_007e8000);
  puVar1 = PTR_default_instance__007e5830;
  lVar6 = *(long *)PTR_default_instance__007e5830;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = PTR_default_instance__007e6fe0;
  puVar1 = PTR_extension_007e5658;
  lVar7 = *(long *)PTR_default_instance__007e6fe0;
  *(undefined4 *)PTR_extension_007e5658 = 0x228;
  *(long *)(puVar1 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar3;
  }
  puVar3 = PTR_default_instance__007e77e8;
  puVar1 = PTR_extension_007e4c20;
  lVar6 = *(long *)PTR_default_instance__007e77e8;
  *(undefined4 *)PTR_extension_007e4c20 = 0x229;
  *(long *)(puVar1 + 8) = lVar7;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar3;
  }
  puVar3 = PTR_default_instance__007e6b88;
  puVar1 = PTR_extension_007e6268;
  lVar7 = *(long *)PTR_default_instance__007e6b88;
  *(undefined4 *)PTR_extension_007e6268 = 0x22a;
  *(long *)(puVar1 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar3;
  }
  puVar3 = PTR_extension_007e7df8;
  puVar1 = PTR_default_instance__007e7bd0;
  lVar6 = *(long *)PTR_default_instance__007e7bd0;
  *(undefined4 *)PTR_extension_007e7df8 = 0x22b;
  *(long *)(puVar3 + 8) = lVar7;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = PTR_default_instance__007e6b30;
  puVar1 = PTR_extension_007e5d98;
  lVar7 = *(long *)PTR_default_instance__007e6b30;
  *(undefined4 *)PTR_extension_007e5d98 = 0x22c;
  *(long *)(puVar1 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar3;
  }
  puVar3 = PTR_extension_007e7f98;
  puVar1 = PTR_default_instance__007e66b8;
  lVar6 = *(long *)PTR_default_instance__007e66b8;
  *(undefined4 *)PTR_extension_007e7f98 = 0x22d;
  *(long *)(puVar3 + 8) = lVar7;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = PTR_default_instance__007e69e0;
  puVar1 = PTR_extension_007e4ea8;
  lVar7 = *(long *)PTR_default_instance__007e69e0;
  *(undefined4 *)PTR_extension_007e4ea8 = 0x22e;
  *(long *)(puVar1 + 8) = lVar6;
  if (lVar7 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar7 = *(long *)puVar3;
  }
  puVar3 = PTR_extension_007e7188;
  puVar1 = PTR_default_instance__007e6610;
  lVar6 = *(long *)PTR_default_instance__007e6610;
  *(undefined4 *)PTR_extension_007e7188 = 0x22f;
  *(long *)(puVar3 + 8) = lVar7;
  if (lVar6 == 0) {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = PTR_extension_007e7700;
  puVar1 = PTR__default_vertex_data__007e5ae0;
  puVar2 = puVar2 + 0x18;
  *(undefined4 *)PTR_extension_007e7700 = 0x230;
  *(long *)(puVar3 + 8) = lVar6;
  *(undefined **)puVar1 = puVar2;
  puVar3 = PTR_FUN_007e6cc8;
  __cxa_atexit(PTR_FUN_007e6cc8,puVar1,&PTR_LOOP_007e8000);
  puVar1 = PTR__default_index_data__007e6c48;
  *(undefined **)PTR__default_index_data__007e6c48 = puVar2;
  __cxa_atexit(puVar3,puVar1,&PTR_LOOP_007e8000);
  puVar1 = PTR__default_vertex_data__007e74e8;
  *(undefined **)PTR__default_vertex_data__007e74e8 = puVar2;
  __cxa_atexit(puVar3,puVar1,&PTR_LOOP_007e8000);
  puVar1 = PTR__default_vertex_data__007e7148;
  *(undefined **)PTR__default_vertex_data__007e7148 = puVar2;
  __cxa_atexit(puVar3,puVar1,&PTR_LOOP_007e8000);
  return;
}


