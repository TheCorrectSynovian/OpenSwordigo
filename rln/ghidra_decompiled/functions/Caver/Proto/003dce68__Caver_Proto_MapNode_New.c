/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003dce68
 * Function: Caver::Proto::MapNode::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapNode::New() const */

void Caver::Proto::MapNode::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = operator_new(0x88);
  plVar3[5] = (long)(plVar3 + 8);
  puVar1 = PTR__default_level_name__007e5878;
  *(undefined4 *)(plVar3 + 7) = 4;
  plVar3[0xe] = (long)PTR__default_music__007e7748;
  puVar2 = PTR_vtable_007e68a0;
  plVar3[6] = 0;
  *(undefined4 *)(plVar3 + 1) = 0;
  plVar3[2] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  puVar2 = PTR__default_title__007e6348;
  *(undefined4 *)(plVar3 + 0xc) = 0;
  *(undefined1 *)((long)plVar3 + 100) = 0;
  *(undefined4 *)(plVar3 + 0xd) = 0;
  *(undefined1 *)(plVar3 + 0xf) = 0;
  *(undefined4 *)((long)plVar3 + 0x7c) = 0;
  *(undefined1 *)(plVar3 + 0x10) = 0;
  plVar3[4] = (long)puVar2;
  plVar3[3] = (long)puVar1;
  *(undefined4 *)((long)plVar3 + 0x84) = 0;
  return;
}


