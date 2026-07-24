/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00306c84
 * Function: _INIT_116
 * Signature: undefined _INIT_116(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void _INIT_116(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  Caver::Proto::protobuf_AddDesc_EditorViewState_2eproto();
  puVar2 = PTR__default_file_path__007e4ba8;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  *(undefined **)PTR__default_file_path__007e4ba8 = puVar1;
  puVar3 = PTR_FUN_007e6cc8;
  __cxa_atexit(PTR_FUN_007e6cc8,puVar2,&PTR_LOOP_007e8000);
  puVar2 = PTR__default_inspected_object_identifier__007e7f88;
  *(undefined **)PTR__default_inspected_object_identifier__007e7f88 = puVar1;
  __cxa_atexit(puVar3,puVar2,&PTR_LOOP_007e8000);
  puVar2 = PTR__default_inspected_template_identifier__007e4d40;
  *(undefined **)PTR__default_inspected_template_identifier__007e4d40 = puVar1;
  __cxa_atexit(puVar3,puVar2,&PTR_LOOP_007e8000);
  return;
}


