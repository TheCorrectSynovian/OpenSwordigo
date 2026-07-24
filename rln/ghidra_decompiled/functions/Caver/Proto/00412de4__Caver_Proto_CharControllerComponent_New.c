/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00412de4
 * Function: Caver::Proto::CharControllerComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharControllerComponent::New() const */

void Caver::Proto::CharControllerComponent::New(void)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = operator_new(0x80);
  plVar3[9] = (long)(plVar3 + 0xb);
  puVar2 = PTR_vtable_007e6f20;
  lVar1 = DAT_0068b470;
  plVar3[6] = 0;
  plVar3[7] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  *(undefined4 *)(plVar3 + 8) = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[1] = 0;
  plVar3[10] = lVar1;
  plVar3[0xd] = 0;
  return;
}


