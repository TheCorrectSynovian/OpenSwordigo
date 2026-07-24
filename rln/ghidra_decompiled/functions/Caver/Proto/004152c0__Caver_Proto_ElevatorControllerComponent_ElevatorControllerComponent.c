/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004152c0
 * Function: Caver::Proto::ElevatorControllerComponent::ElevatorControllerComponent
 * Signature: undefined __thiscall ElevatorControllerComponent(ElevatorControllerComponent * this, ElevatorControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Proto::ElevatorControllerComponent::ElevatorControllerComponent(Caver::Proto::ElevatorControllerComponent
   const&) */

void __thiscall
Caver::Proto::ElevatorControllerComponent::ElevatorControllerComponent
          (ElevatorControllerComponent *this,ElevatorControllerComponent *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_vtable_007e4a50;
  uVar1 = _DAT_0068b480;
                    /* try { // try from 004152dc to 005152df has its CatchHandler @ 00415358 */
                    /* try { // try from 004152e0 to 005152e7 has its CatchHandler @ 0041536c */
  *(undefined8 *)(this + 0x10) = _UNK_0068b488;
  *(undefined8 *)(this + 8) = uVar1;
                    /* try { // try from 004152e8 to 0051535b has its CatchHandler @ 00415250 */
  *(undefined **)this = puVar2 + 0x10;
  MergeFrom(this,param_1);
  return;
}


