/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040ef24
 * Function: Caver::Proto::ObjectLinkControllerComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectLinkControllerComponent::New() const */

void Caver::Proto::ObjectLinkControllerComponent::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  
                    /* try { // try from 0040ef24 to 0050ef4b has its CatchHandler @ 0040fc10 */
  plVar4 = operator_new(0x40);
  puVar2 = PTR_vtable_007e6098;
  *(undefined4 *)(plVar4 + 1) = 0;
  puVar3 = PTR__default_target_bone_identifier__007e7b50;
  puVar1 = PTR__default_target_object_identifier__007e4c30;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[4] = 0;
  *plVar4 = (long)(puVar2 + 0x10);
  plVar4[3] = (long)puVar3;
  plVar4[2] = (long)puVar1;
                    /* try { // try from 0040ef6c to 0050ef93 has its CatchHandler @ 00410290 */
  *(undefined4 *)(plVar4 + 7) = 0;
  return;
}


