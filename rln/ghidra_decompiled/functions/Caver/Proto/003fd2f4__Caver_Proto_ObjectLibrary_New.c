/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fd2f4
 * Function: Caver::Proto::ObjectLibrary::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectLibrary::New() const */

void Caver::Proto::ObjectLibrary::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x100);
  puVar1 = PTR_vtable_007e6ec8 + 0x10;
  plVar2[2] = (long)PTR__default_name__007e6d40;
  plVar2[3] = (long)(plVar2 + 6);
  plVar2[10] = (long)(plVar2 + 0xd);
  plVar2[0x11] = (long)(plVar2 + 0x14);
  plVar2[0x18] = (long)(plVar2 + 0x1b);
  *(undefined4 *)(plVar2 + 1) = 0;
  plVar2[4] = 0;
  *(undefined4 *)(plVar2 + 5) = 4;
  plVar2[0xb] = 0;
  *(undefined4 *)(plVar2 + 0xc) = 4;
  plVar2[0x12] = 0;
  *(undefined4 *)(plVar2 + 0x13) = 4;
  plVar2[0x19] = 0;
  *(undefined4 *)(plVar2 + 0x1a) = 4;
  *plVar2 = (long)puVar1;
  *(undefined4 *)(plVar2 + 0x1f) = 0;
  return;
}


