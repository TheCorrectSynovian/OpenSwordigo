/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004062c4
 * Function: Caver::Proto::GroundPolygonComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GroundPolygonComponent::New() const */

void Caver::Proto::GroundPolygonComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x70);
  plVar2[2] = 0;
  plVar2[3] = (long)(plVar2 + 6);
  *(undefined4 *)(plVar2 + 5) = 4;
  *(undefined1 *)(plVar2 + 0xb) = 1;
  puVar1 = PTR_vtable_007e7d70;
  plVar2[4] = 0;
  *(undefined4 *)(plVar2 + 1) = 0;
  plVar2[10] = 0;
  *(undefined4 *)((long)plVar2 + 0x6c) = 0;
  *(undefined8 *)((long)plVar2 + 0x61) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined8 *)((long)plVar2 + 0x5c) = 0;
  return;
}


