/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d9e48
 * Function: Caver::Proto::protobuf_AddDesc_EditorViewState_2eproto
 * Signature: undefined __cdecl protobuf_AddDesc_EditorViewState_2eproto(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::protobuf_AddDesc_EditorViewState_2eproto() */

void Caver::Proto::protobuf_AddDesc_EditorViewState_2eproto(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  
  if ((DAT_007e8d38 & 1) != 0) {
    return;
  }
  DAT_007e8d38 = 1;
  google::protobuf::internal::VerifyVersion
            (0x1e9038,0x1e9038,"./../../../../Source/Caver/Content/Proto/EditorViewState.pb.cc");
  protobuf_AddDesc_Common_2eproto();
  plVar4 = operator_new(0x80);
  puVar1 = PTR_vtable_007e48d8;
  plVar4[4] = 0;
  *(undefined4 *)(plVar4 + 0xc) = 1;
  plVar4[2] = (long)PTR__default_file_path__007e4ba8;
  plVar4[3] = (long)(plVar4 + 6);
  *(undefined4 *)(plVar4 + 5) = 4;
  puVar3 = PTR__default_inspected_object_identifier__007e7f88;
  *(undefined4 *)(plVar4 + 1) = 0;
  puVar2 = PTR__default_inspected_template_identifier__007e4d40;
  *(undefined4 *)(plVar4 + 0xf) = 0;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  *plVar4 = (long)(puVar1 + 0x10);
  puVar1 = PTR_default_instance__007e4cc8;
  plVar4[0xb] = (long)puVar2;
  plVar4[10] = (long)puVar3;
  *(long **)puVar1 = plVar4;
  lVar5 = Vector3::default_instance();
  plVar4[0xd] = lVar5;
  lVar5 = Vector3::default_instance();
  puVar1 = PTR_protobuf_ShutdownFile_EditorViewState_2eproto_007e5ee8;
  plVar4[0xe] = lVar5;
  google::protobuf::internal::OnShutdown((_func_void *)puVar1);
  return;
}


