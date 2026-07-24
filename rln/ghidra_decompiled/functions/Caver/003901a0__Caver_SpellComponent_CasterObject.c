/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003901a0
 * Function: Caver::SpellComponent::CasterObject
 * Signature: undefined __cdecl CasterObject(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SpellComponent::CasterObject() */

void Caver::SpellComponent::CasterObject(void)

{
  long in_x0;
  long *in_x8;
  long lVar1;
  
  lVar1 = *(long *)(in_x0 + 0x70);
  *in_x8 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  return;
}


