/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00434204
 * Function: Caver::Proto::SkillComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SkillComponent::New() const */

void Caver::Proto::SkillComponent::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
                    /* try { // try from 00434208 to 00534213 has its CatchHandler @ 004343bc */
  plVar3 = operator_new(0x28);
  puVar1 = PTR_vtable_007e48c8;
                    /* try { // try from 00434214 to 00534427 has its CatchHandler @ 00434110 */
  plVar3[1] = 0;
  puVar2 = PTR__default_cast_object_template_name__007e65a8;
  *plVar3 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar3 + 4) = 0;
  plVar3[2] = (long)puVar2;
  plVar3[3] = 0;
  return;
}


