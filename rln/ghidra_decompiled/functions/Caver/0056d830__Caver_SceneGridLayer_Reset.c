/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056d830
 * Function: Caver::SceneGridLayer::Reset
 * Signature: undefined __thiscall Reset(SceneGridLayer * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneGridLayer::Reset() */

void __thiscall Caver::SceneGridLayer::Reset(SceneGridLayer *this)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  
  lVar12 = *(long *)(this + 0x30);
  if (lVar12 != 0) {
    iVar4 = *(int *)(this + 0x2c);
                    /* try { // try from 0056d854 to 0066d857 has its CatchHandler @ 0056e38c */
    if (0 < iVar4) {
      iVar5 = *(int *)(this + 0x28);
      iVar8 = 0;
      do {
        if (0 < iVar5) {
          iVar9 = 0;
          do {
            iVar1 = iVar5 * iVar8 + iVar9;
                    /* try { // try from 0056d874 to 0066d87b has its CatchHandler @ 0056e210 */
            iVar6 = *(int *)(lVar12 + (long)iVar1 * 0x10 + 8);
                    /* try { // try from 0056d87c to 0066d88f has its CatchHandler @ 0056e20c */
            if (0 < iVar6) {
              plVar3 = (long *)(lVar12 + (long)iVar1 * 0x10);
                    /* try { // try from 0056d890 to 0066d8a3 has its CatchHandler @ 0056e354 */
              lVar10 = *plVar3;
              iVar1 = *(int *)((long)plVar3 + 0xc) - iVar6;
              **(undefined8 **)(lVar10 + (long)iVar1 * 8) = 0;
                    /* try { // try from 0056d8a4 to 0066d8b3 has its CatchHandler @ 0056e1dc */
              if (iVar6 != 1) {
                iVar11 = 1;
                do {
                  iVar2 = iVar1 + iVar11;
                  iVar11 = iVar11 + 1;
                  **(undefined8 **)(lVar10 + (long)iVar2 * 8) = 0;
                } while (iVar11 < iVar6);
              }
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar5);
        }
        iVar8 = iVar8 + 1;
                    /* try { // try from 0056d8d4 to 0066d8d7 has its CatchHandler @ 0056e354 */
      } while (iVar8 < iVar4);
    }
    *(undefined8 *)(this + 0x30) = 0;
    lVar10 = *(long *)(lVar12 + -8);
    if (lVar10 != 0) {
      lVar10 = lVar10 << 4;
      do {
                    /* try { // try from 0056d8f0 to 0066d8f7 has its CatchHandler @ 0056e418 */
        pvVar7 = *(void **)(lVar12 + lVar10 + -0x10);
        if (pvVar7 != (void *)0x0) {
          operator_delete__(pvVar7);
        }
        lVar10 = lVar10 + -0x10;
      } while (lVar10 != 0);
    }
    operator_delete__((long *)(lVar12 + -8));
    *(undefined8 *)(this + 0x28) = 0;
  }
  return;
}


