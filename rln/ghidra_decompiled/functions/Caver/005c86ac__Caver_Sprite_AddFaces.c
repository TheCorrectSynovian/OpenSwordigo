/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c86ac
 * Function: Caver::Sprite::AddFaces
 * Signature: undefined __thiscall AddFaces(Sprite * this, int param_1, ushort * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Sprite::AddFaces(int, unsigned short*) */

void __thiscall Caver::Sprite::AddFaces(Sprite *this,int param_1,ushort *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  void *__dest;
  ulong uVar4;
  void *__src;
  int iVar5;
  
                    /* try { // try from 005c86ac to 006c86b7 has its CatchHandler @ 005c87c4 */
  iVar5 = *(int *)(this + 0x1c);
  iVar1 = iVar5 + param_1;
                    /* try { // try from 005c86d8 to 006c86ff has its CatchHandler @ 005c8814 */
  if (*(int *)(this + 0x18) < iVar1) {
    if (iVar1 < 1) {
      __src = *(void **)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
    }
    else {
      uVar4 = (ulong)(iVar1 * 3);
      uVar3 = uVar4 * 2;
      if (CARRY8(uVar4,uVar4)) {
        uVar3 = 0xffffffffffffffff;
      }
      __dest = operator_new__(uVar3);
                    /* try { // try from 005c8700 to 006c87e7 has its CatchHandler @ 005c8610 */
      if (iVar5 < 1) {
        __src = *(void **)(this + 0x20);
        *(void **)(this + 0x20) = __dest;
      }
      else {
        __src = *(void **)(this + 0x20);
        iVar2 = iVar1;
        if (iVar5 <= iVar1) {
          iVar2 = iVar5;
        }
        memcpy(__dest,__src,
               -(ulong)((uint)(iVar2 * 3) >> 0x1f) & 0xfffffffe00000000 |
               (ulong)(uint)(iVar2 * 3) << 1);
        *(void **)(this + 0x20) = __dest;
      }
    }
    if (__src != (void *)0x0) {
      operator_delete__(__src);
    }
    iVar5 = *(int *)(this + 0x1c);
    *(int *)(this + 0x18) = iVar1;
  }
  memcpy((void *)(*(long *)(this + 0x20) + (long)(iVar5 * 3) * 2),param_2,
         -(ulong)((uint)(param_1 * 3) >> 0x1f) & 0xfffffffe00000000 |
         (ulong)(uint)(param_1 * 3) << 1);
  *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + param_1;
  return;
}


