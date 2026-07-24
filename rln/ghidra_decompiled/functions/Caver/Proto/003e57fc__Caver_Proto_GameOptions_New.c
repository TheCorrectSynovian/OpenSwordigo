/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e57fc
 * Function: Caver::Proto::GameOptions::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameOptions::New() const */

void Caver::Proto::GameOptions::New(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = operator_new(0x70);
  plVar2[2] = (long)(plVar2 + 5);
  *(undefined4 *)(plVar2 + 4) = 4;
  *(undefined2 *)(plVar2 + 9) = 0x101;
  puVar1 = PTR_vtable_007e5708;
  uVar3 = NEON_fmov(0x3f800000,4);
  plVar2[3] = 0;
  *(undefined4 *)(plVar2 + 1) = 0;
  *(undefined4 *)((long)plVar2 + 0x6c) = 0;
  plVar2[0xb] = 0;
  plVar2[0xc] = 0;
  *(undefined1 *)((long)plVar2 + 0x6a) = 0;
  *(undefined8 *)((long)plVar2 + 0x4c) = uVar3;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined2 *)(plVar2 + 0xd) = 0;
  return;
}


