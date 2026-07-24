/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038d710
 * Function: Caver::ProjectileControllerComponent::Clone
 * Signature: undefined __thiscall Clone(ProjectileControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProjectileControllerComponent::Clone() const */

long * __thiscall Caver::ProjectileControllerComponent::Clone(ProjectileControllerComponent *this)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = operator_new(0x80);
  *(undefined4 *)(plVar2 + 1) = 0;
  *(undefined1 *)(plVar2 + 6) = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  puVar1 = PTR_vtable_007e78b0;
  plVar2[7] = (long)(PTR_DAT_007e5de8 + 0x18);
  plVar3 = plVar2 + 9;
  *plVar3 = 0;
  *(undefined2 *)(plVar2 + 0xe) = 0x101;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[0xc] = (long)plVar3;
  plVar2[0xd] = 0;
  plVar2[10] = 0;
  plVar2[0xb] = (long)plVar3;
  plVar2[0xf] = 0;
  plVar2[3] = (long)(puVar1 + 0x168);
  plVar2[2] = (long)(puVar1 + 0x128);
  *(undefined4 *)(plVar2 + 4) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(plVar2 + 7,this + 0x38);
  *(ProjectileControllerComponent *)(plVar2 + 0xe) = this[0x70];
  *(ProjectileControllerComponent *)((long)plVar2 + 0x71) = this[0x71];
  return plVar2;
}


