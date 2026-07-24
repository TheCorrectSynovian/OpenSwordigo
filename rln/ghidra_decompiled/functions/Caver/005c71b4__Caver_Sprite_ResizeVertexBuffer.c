/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c71b4
 * Function: Caver::Sprite::ResizeVertexBuffer
 * Signature: undefined __thiscall ResizeVertexBuffer(Sprite * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Sprite::ResizeVertexBuffer(int) */

void __thiscall Caver::Sprite::ResizeVertexBuffer(Sprite *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *__dest;
  ulong uVar4;
  long lVar5;
  void *__src;
  
  iVar2 = *(int *)(this + 0x30);
                    /* try { // try from 005c71d4 to 006c7287 has its CatchHandler @ 005c6574 */
                    /* catch() { ... } // from try @ 005c66d8 with catch @ 005c71d8
                       catch() { ... } // from try @ 005c6714 with catch @ 005c71d8 */
  uVar4 = (ulong)(iVar2 * param_1);
  if ((long)uVar4 < 0) {
    uVar4 = 0xffffffffffffffff;
  }
  __dest = operator_new__(uVar4);
  iVar3 = *(int *)(this + 0x2c);
  if (iVar3 < 1) {
                    /* catch() { ... } // from try @ 005c6960 with catch @ 005c7260 */
    __src = *(void **)(this + 0x38);
                    /* catch() { ... } // from try @ 005c6ee0 with catch @ 005c7264 */
    *(void **)(this + 0x38) = __dest;
  }
  else {
    __src = *(void **)(this + 0x38);
    iVar1 = param_1;
    if (iVar3 <= param_1) {
      iVar1 = iVar3;
    }
    memcpy(__dest,__src,(long)(iVar1 * iVar2));
    *(void **)(this + 0x38) = __dest;
  }
  if (__src != (void *)0x0) {
    operator_delete__(__src);
    __dest = *(void **)(this + 0x38);
  }
  lVar5 = (long)__dest + 0xc;
  *(int *)(this + 0x28) = param_1;
  if (this[0x50] != (Sprite)0x0) {
    *(long *)(this + 0x40) = lVar5;
                    /* catch() { ... } // from try @ 005c65b8 with catch @ 005c7244 */
    lVar5 = (long)__dest + 0x10;
  }
  *(long *)(this + 0x48) = lVar5;
                    /* catch() { ... } // from try @ 005c6f08 with catch @ 005c7258 */
                    /* catch() { ... } // from try @ 005c69d4 with catch @ 005c725c */
  return;
}


