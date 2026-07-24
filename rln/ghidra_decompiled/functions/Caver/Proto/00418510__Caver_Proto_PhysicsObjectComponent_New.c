/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00418510
 * Function: Caver::Proto::PhysicsObjectComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PhysicsObjectComponent::New() const */

void Caver::Proto::PhysicsObjectComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x38);
  puVar1 = PTR_vtable_007e7938;
  *(undefined4 *)(plVar2 + 1) = 0;
  plVar2[2] = 0;
  *(undefined8 *)((long)plVar2 + 0x2c) = 0;
                    /* try { // try from 00418540 to 00518553 has its CatchHandler @ 00419404 */
  *(undefined8 *)((long)plVar2 + 0x21) = 0;
  *(undefined1 *)((long)plVar2 + 0xc) = 1;
  *(undefined4 *)(plVar2 + 3) = 0x3f800000;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined8 *)((long)plVar2 + 0x1c) = 0;
  return;
}


