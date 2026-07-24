/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00415460
 * Function: Caver::Proto::ElevatorControllerComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Proto::ElevatorControllerComponent::New() const */

void Caver::Proto::ElevatorControllerComponent::New(void)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = operator_new(0x18);
  puVar2 = PTR_vtable_007e4a50;
  lVar1 = _DAT_0068b480;
  plVar3[2] = _UNK_0068b488;
  plVar3[1] = lVar1;
  *plVar3 = (long)(puVar2 + 0x10);
  return;
}


