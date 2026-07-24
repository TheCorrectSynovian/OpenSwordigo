/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00544ad0
 * Function: Caver::Mesh::AllocVertexBuffer
 * Signature: undefined __thiscall AllocVertexBuffer(Mesh * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Mesh::AllocVertexBuffer(int) */

void __thiscall Caver::Mesh::AllocVertexBuffer(Mesh *this,int param_1)

{
  void *pvVar1;
  ulong uVar2;
  void *pvVar3;
  
  uVar2 = (ulong)param_1;
  if ((long)uVar2 < 0) {
    uVar2 = 0xffffffffffffffff;
  }
  *(int *)(this + 0x108) = param_1;
  pvVar1 = operator_new__(uVar2);
  pvVar3 = *(void **)(this + 0x110);
  *(void **)(this + 0x110) = pvVar1;
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
    return;
  }
  return;
}


