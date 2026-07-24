/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058d23c
 * Function: Caver::VertexArrayObject::Reset
 * Signature: undefined __thiscall Reset(VertexArrayObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::VertexArrayObject::Reset() */

void __thiscall Caver::VertexArrayObject::Reset(VertexArrayObject *this)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  VertexArrayObject *pVVar5;
  
  pvVar1 = *(void **)(this + 0x38);
  while (pvVar1 != (void *)0x0) {
    pvVar4 = *(void **)((long)pvVar1 + 0x18);
    operator_delete(pvVar1);
    pvVar1 = pvVar4;
  }
  uVar2 = (ulong)*(uint *)(this + 0x20);
  *(undefined8 *)(this + 0x38) = 0;
  if (0 < (int)*(uint *)(this + 0x20)) {
    if (*(int *)(this + 0x40) != 0) {
      lVar3 = 0;
      do {
        *(undefined4 *)(this + lVar3 * 4 + 0x40) = 0;
        uVar2 = (ulong)*(int *)(this + 0x20);
        lVar3 = lVar3 + 1;
                    /* catch() { ... } // from try @ 0058d344 with catch @ 0058d294 */
      } while (lVar3 < (long)uVar2);
      if (*(int *)(this + 0x20) < 1) goto LAB_0058d2d0;
    }
    glDeleteBuffers(uVar2,this + 0x28);
                    /* try { // try from 0058d2ac to 0068d2b3 has its CatchHandler @ 0058d350 */
    if (0 < *(int *)(this + 0x20)) {
      lVar3 = 0;
      do {
        *(undefined4 *)(this + 0x28 + lVar3 * 4) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(this + 0x20));
    }
  }
LAB_0058d2d0:
  pVVar5 = this + 0x30;
  if (*(int *)pVVar5 != 0) {
                    /* try { // try from 0058d2e0 to 0068d2eb has its CatchHandler @ 0058d2f8 */
    glDeleteBuffers(1,pVVar5);
    *(int *)pVVar5 = 0;
  }
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)this = 0;
                    /* catch() { ... } // from try @ 0058d2e0 with catch @ 0058d2f8 */
  *(undefined4 *)(this + 0x14) = 0;
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
    *(undefined8 *)(this + 8) = 0;
  }
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x18));
    *(undefined8 *)(this + 0x18) = 0;
  }
                    /* try { // try from 0058d31c to 0068d343 has its CatchHandler @ 0058d34c */
  return;
}


