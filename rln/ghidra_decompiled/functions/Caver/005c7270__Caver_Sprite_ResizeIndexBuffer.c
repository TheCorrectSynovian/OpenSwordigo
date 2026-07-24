/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c7270
 * Function: Caver::Sprite::ResizeIndexBuffer
 * Signature: undefined __thiscall ResizeIndexBuffer(Sprite * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Sprite::ResizeIndexBuffer(int) */

void __thiscall Caver::Sprite::ResizeIndexBuffer(Sprite *this,int param_1)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  void *__dest;
  ulong uVar4;
  void *__src;
  
                    /* try { // try from 005c7288 to 006c74d3 has its CatchHandler @ 005c7650 */
  if (param_1 < 1) {
    __src = *(void **)(this + 0x20);
    *(undefined8 *)(this + 0x20) = 0;
  }
  else {
    uVar4 = (ulong)(param_1 * 3);
    uVar2 = uVar4 * 2;
    if (CARRY8(uVar4,uVar4)) {
      uVar2 = 0xffffffffffffffff;
    }
    __dest = operator_new__(uVar2);
    iVar3 = *(int *)(this + 0x1c);
                    /* catch() { ... } // from try @ 005c6d40 with catch @ 005c72b4 */
    if (iVar3 < 1) {
      __src = *(void **)(this + 0x20);
      *(void **)(this + 0x20) = __dest;
    }
    else {
      __src = *(void **)(this + 0x20);
      iVar1 = param_1;
      if (iVar3 <= param_1) {
        iVar1 = iVar3;
      }
      memcpy(__dest,__src,
             -(ulong)((uint)(iVar1 * 3) >> 0x1f) & 0xfffffffe00000000 |
             (ulong)(uint)(iVar1 * 3) << 1);
      *(void **)(this + 0x20) = __dest;
    }
  }
  if (__src != (void *)0x0) {
                    /* catch() { ... } // from try @ 005c6ca0 with catch @ 005c7308 */
    operator_delete__(__src);
  }
  *(int *)(this + 0x18) = param_1;
                    /* catch() { ... } // from try @ 005c6bf0 with catch @ 005c7318 */
                    /* catch() { ... } // from try @ 005c6bc8 with catch @ 005c731c */
  return;
}


