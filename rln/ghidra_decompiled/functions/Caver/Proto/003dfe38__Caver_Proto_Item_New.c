/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003dfe38
 * Function: Caver::Proto::Item::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Item::New() const */

void Caver::Proto::Item::New(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  
  plVar5 = operator_new(0x48);
  puVar4 = PTR__default_description__007e7e10;
  puVar3 = PTR__default_name__007e6888;
  puVar2 = PTR__default_short_description__007e6118;
  plVar5[3] = (long)PTR__default_title__007e4fd8;
  plVar5[2] = (long)puVar3;
  plVar5[5] = (long)puVar4;
  plVar5[4] = (long)puVar2;
  puVar2 = PTR_vtable_007e72f8;
  lVar1 = DAT_0068aa60;
  *(undefined1 *)(plVar5 + 6) = 0;
  *(undefined8 *)((long)plVar5 + 0x3c) = 0;
  plVar5[1] = lVar1;
  *plVar5 = (long)(puVar2 + 0x10);
  *(undefined8 *)((long)plVar5 + 0x34) = 0;
  return;
}


