/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00427544
 * Function: Caver::Proto::StaticMonsterControllerComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::StaticMonsterControllerComponent::New() const */

void Caver::Proto::StaticMonsterControllerComponent::New(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = operator_new(0x38);
  lVar2 = DAT_0068b470;
  puVar1 = PTR_vtable_007e4848 + 0x10;
  plVar3[1] = 0;
  plVar3[2] = (long)(plVar3 + 4);
  *plVar3 = (long)puVar1;
  plVar3[3] = lVar2;
  *(undefined4 *)(plVar3 + 6) = 0;
  return;
}


