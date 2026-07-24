/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fe520
 * Function: Caver::Proto::SceneObject::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SceneObject::New() const */

void Caver::Proto::SceneObject::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = operator_new(0x90);
  plVar3[4] = (long)(plVar3 + 7);
  puVar1 = PTR__default_template_name__007e5070;
  *(undefined4 *)(plVar3 + 6) = 4;
  *(undefined4 *)(plVar3 + 0xd) = 0x3f800000;
  puVar2 = PTR_vtable_007e6240;
  plVar3[5] = 0;
  *(undefined4 *)(plVar3 + 1) = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  puVar2 = PTR__default_identifier__007e5320;
  plVar3[0xb] = 0;
  plVar3[0xc] = 0;
  plVar3[0xe] = 0;
  *(undefined1 *)(plVar3 + 0xf) = 0;
  plVar3[0x10] = 0;
  plVar3[3] = (long)puVar2;
  plVar3[2] = (long)puVar1;
  *(undefined4 *)(plVar3 + 0x11) = 0;
  return;
}


