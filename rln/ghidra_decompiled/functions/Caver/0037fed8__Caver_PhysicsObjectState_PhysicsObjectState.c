/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037fed8
 * Function: Caver::PhysicsObjectState::PhysicsObjectState
 * Signature: undefined __thiscall PhysicsObjectState(PhysicsObjectState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::PhysicsObjectState::PhysicsObjectState() */

void __thiscall Caver::PhysicsObjectState::PhysicsObjectState(PhysicsObjectState *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x50) = uVar2;
  uVar1 = _UNK_006888d8;
  uVar2 = _DAT_006888d0;
  *(undefined8 *)this = 0;
  *(undefined2 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined8 *)(this + 8) = uVar2;
  uVar2 = DAT_006888f0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x30) = uVar2;
  uVar2 = DAT_006888f8;
  *(undefined8 *)(this + 0x3d) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x5e) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  this[0x75] = (PhysicsObjectState)0x0;
  *(undefined4 *)(this + 0x78) = 0;
  this[0x74] = (PhysicsObjectState)0x1;
  *(undefined8 *)(this + 0x6c) = uVar2;
  this[0x7c] = (PhysicsObjectState)0x0;
  return;
}


