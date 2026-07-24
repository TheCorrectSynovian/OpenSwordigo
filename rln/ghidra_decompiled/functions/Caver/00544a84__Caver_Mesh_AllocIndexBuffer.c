/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00544a84
 * Function: Caver::Mesh::AllocIndexBuffer
 * Signature: undefined __thiscall AllocIndexBuffer(Mesh * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Mesh::AllocIndexBuffer(int) */

void __thiscall Caver::Mesh::AllocIndexBuffer(Mesh *this,int param_1)

{
  void *pvVar1;
  ulong uVar2;
  void *pvVar3;
  
  uVar2 = (ulong)param_1;
  if ((long)uVar2 < 0) {
    uVar2 = 0xffffffffffffffff;
  }
  *(int *)(this + 0x118) = param_1;
                    /* catch() { ... } // from try @ 005438e8 with catch @ 00544aa4
                       catch() { ... } // from try @ 00544338 with catch @ 00544aa4 */
  pvVar1 = operator_new__(uVar2);
  pvVar3 = *(void **)(this + 0x120);
  *(void **)(this + 0x120) = pvVar1;
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
    return;
  }
  return;
}


