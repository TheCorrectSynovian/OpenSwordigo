/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c7d60
 * Function: Caver::Sprite::AddFace
 * Signature: undefined __thiscall AddFace(Sprite * this, int param_1, int param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Sprite::AddFace(int, int, int) */

void __thiscall Caver::Sprite::AddFace(Sprite *this,int param_1,int param_2,int param_3)

{
  long lVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  void *__dest;
  long lVar5;
  void *__src;
  int iVar6;
  
                    /* try { // try from 005c7d70 to 006c7d97 has its CatchHandler @ 005c7db8 */
  iVar6 = *(int *)(this + 0x1c);
  if (*(int *)(this + 0x18) <= iVar6) {
                    /* try { // try from 005c7d98 to 006c7dbb has its CatchHandler @ 005c79a4 */
    iVar4 = *(int *)(this + 0x18) * 2;
    if (iVar4 < 3) {
      iVar4 = 2;
    }
    if (iVar4 < 1) {
      __src = *(void **)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
    }
    else {
                    /* catch() { ... } // from try @ 005c7d70 with catch @ 005c7db8 */
      __dest = operator_new__((ulong)(uint)(iVar4 * 6));
                    /* try { // try from 005c7dbc to 006c7def has its CatchHandler @ 005c7dbc
                       catch() { ... } // from try @ 005c7dbc with catch @ 005c7dbc
                       catch() { ... } // from try @ 005c7df4 with catch @ 005c7dbc
                       catch() { ... } // from try @ 005c7fc4 with catch @ 005c7dbc
                       catch() { ... } // from try @ 005c80d0 with catch @ 005c7dbc
                       catch() { ... } // from try @ 005c8148 with catch @ 005c7dbc */
      if (iVar6 < 1) {
        __src = *(void **)(this + 0x20);
        *(void **)(this + 0x20) = __dest;
      }
      else {
        __src = *(void **)(this + 0x20);
        iVar3 = iVar4;
        if (iVar6 <= iVar4) {
          iVar3 = iVar6;
        }
        memcpy(__dest,__src,
               -(ulong)((uint)(iVar3 * 3) >> 0x1f) & 0xfffffffe00000000 |
               (ulong)(uint)(iVar3 * 3) << 1);
        *(void **)(this + 0x20) = __dest;
                    /* try { // try from 005c7df0 to 006c7df3 has its CatchHandler @ 005c80d4 */
      }
    }
    if (__src != (void *)0x0) {
      operator_delete__(__src);
    }
    iVar6 = *(int *)(this + 0x1c);
    *(int *)(this + 0x18) = iVar4;
  }
                    /* try { // try from 005c7e24 to 006c7e2f has its CatchHandler @ 005c80ec */
  lVar5 = *(long *)(this + 0x20);
  lVar1 = (long)iVar6 + (long)iVar6 * 2;
  puVar2 = (undefined2 *)(lVar5 + (long)(int)lVar1 * 2);
  *puVar2 = (short)param_1;
  *(short *)(lVar5 + lVar1 * 2 + 2) = (short)param_2;
  puVar2[2] = (short)param_3;
  *(int *)(this + 0x1c) = iVar6 + 1;
  return;
}


