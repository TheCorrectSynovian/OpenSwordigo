/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056d648
 * Function: Caver::SceneGridCell::Resize
 * Signature: undefined __thiscall Resize(SceneGridCell * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneGridCell::Resize(int) */

void __thiscall Caver::SceneGridCell::Resize(SceneGridCell *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  
                    /* catch() { ... } // from try @ 0056d26c with catch @ 0056d65c
                       catch() { ... } // from try @ 0056d4ac with catch @ 0056d65c */
                    /* catch() { ... } // from try @ 0056dcf4 with catch @ 0056d660
                       catch() { ... } // from try @ 0056e278 with catch @ 0056d660
                       catch() { ... } // from try @ 0056e48c with catch @ 0056d660 */
  pvVar2 = malloc(-(ulong)((uint)param_1 >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)param_1 << 3);
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    pvVar3 = *(void **)this;
    *(void **)this = pvVar2;
  }
  else {
    pvVar3 = *(void **)this;
                    /* try { // try from 0056d688 to 0066d69b has its CatchHandler @ 0056e350 */
    memcpy((void *)((long)pvVar2 + (long)(param_1 - iVar1) * 8),
           (void *)((long)pvVar3 + (long)(*(int *)(this + 0xc) - iVar1) * 8),(long)iVar1 << 3);
    *(void **)this = pvVar2;
                    /* try { // try from 0056d69c to 0066d6af has its CatchHandler @ 0056e348 */
  }
                    /* try { // try from 0056d6c4 to 0066d6df has its CatchHandler @ 0056e284 */
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  *(int *)(this + 0xc) = param_1;
                    /* try { // try from 0056d6b0 to 0066d6c3 has its CatchHandler @ 0056e2e8 */
  return;
}


