/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056d144
 * Function: Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::Resize
 * Signature: undefined __thiscall Resize(FastVector<boost::shared_ptr<Caver::SceneGridLayer>> * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer> >::Resize(int) */

void __thiscall
Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::Resize
          (FastVector<boost::shared_ptr<Caver::SceneGridLayer>> *this,int param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  ulong *puVar4;
  ulong __n;
  long *plVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  
  iVar7 = *(int *)this;
  if (param_1 < *(int *)this) {
    *(int *)this = param_1;
    iVar7 = param_1;
  }
  if (param_1 == 0) {
                    /* catch() { ... } // from try @ 0056ce68 with catch @ 0056d2e8 */
    lVar6 = *(long *)(this + 8);
    if (lVar6 != 0) {
      lVar9 = *(long *)(lVar6 + -8);
                    /* catch() { ... } // from try @ 0056ce3c with catch @ 0056d2f8 */
      if (lVar9 != 0) {
        lVar9 = lVar9 << 4;
        do {
          plVar5 = *(long **)(lVar6 + lVar9 + -8);
                    /* catch() { ... } // from try @ 0056cdc0 with catch @ 0056d310 */
          if ((plVar5 != (long *)0x0) &&
             (lVar8 = plVar5[1], plVar5[1] = lVar8 + -1, lVar8 + -1 == 0)) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            lVar8 = plVar5[2];
            plVar5[2] = lVar8 + -1;
            if (lVar8 + -1 == 0) {
                    /* catch() { ... } // from try @ 0056cd98 with catch @ 0056d340 */
                    /* catch() { ... } // from try @ 0056cd90 with catch @ 0056d344 */
                    /* catch() { ... } // from try @ 0056cd40 with catch @ 0056d348 */
              (**(code **)(*plVar5 + 0x18))(plVar5);
            }
          }
          lVar9 = lVar9 + -0x10;
        } while (lVar9 != 0);
      }
      operator_delete__((long *)(lVar6 + -8));
      *(undefined8 *)(this + 8) = 0;
    }
    *(undefined4 *)(this + 4) = 0;
    return;
  }
  if (*(int *)(this + 4) == param_1) {
    return;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (long)param_1;
  __n = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffff000000000 | (ulong)(uint)param_1 << 4;
  uVar1 = __n + 8;
  if (SUB168(auVar3 * ZEXT816(0x10),8) != 0 || 0xfffffffffffffff7 < __n) {
    uVar1 = 0xffffffffffffffff;
  }
  puVar4 = operator_new__(uVar1);
  *puVar4 = (long)param_1;
  memset(puVar4 + 1,0,__n);
  lVar6 = *(long *)(this + 8);
  if (lVar6 != 0) {
    if (0 < iVar7) {
      lVar8 = 0;
      lVar9 = 0;
      do {
        uVar2 = *(undefined8 *)(lVar6 + lVar8);
        lVar6 = ((undefined8 *)(lVar6 + lVar8))[1];
        if (lVar6 != 0) {
          *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 1;
        }
        plVar5 = *(long **)((long)puVar4 + lVar8 + 0x10);
        *(undefined8 *)((long)puVar4 + lVar8 + 8) = uVar2;
        *(long *)((long)puVar4 + lVar8 + 0x10) = lVar6;
        if ((plVar5 != (long *)0x0) && (lVar6 = plVar5[1], plVar5[1] = lVar6 + -1, lVar6 + -1 == 0))
        {
                    /* catch() { ... } // from try @ 0056d030 with catch @ 0056d22c */
          (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* catch() { ... } // from try @ 0056cec0 with catch @ 0056d234 */
          lVar6 = plVar5[2];
                    /* catch() { ... } // from try @ 0056ce2c with catch @ 0056d238 */
                    /* catch() { ... } // from try @ 0056cf7c with catch @ 0056d23c */
          plVar5[2] = lVar6 + -1;
          if (lVar6 + -1 == 0) {
            (**(code **)(*plVar5 + 0x18))(plVar5);
          }
        }
        lVar6 = *(long *)(this + 8);
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 0x10;
      } while (lVar9 < *(int *)this);
                    /* try { // try from 0056d26c to 0066d3ab has its CatchHandler @ 0056d65c */
      if (lVar6 == 0) goto LAB_0056d2dc;
    }
    lVar9 = *(long *)(lVar6 + -8);
    if (lVar9 != 0) {
      lVar9 = lVar9 << 4;
      do {
        plVar5 = *(long **)(lVar6 + lVar9 + -8);
                    /* catch() { ... } // from try @ 0056ce98 with catch @ 0056d298 */
        if ((plVar5 != (long *)0x0) && (lVar8 = plVar5[1], plVar5[1] = lVar8 + -1, lVar8 + -1 == 0))
        {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          lVar8 = plVar5[2];
          plVar5[2] = lVar8 + -1;
          if (lVar8 + -1 == 0) {
            (**(code **)(*plVar5 + 0x18))(plVar5);
          }
        }
        lVar9 = lVar9 + -0x10;
      } while (lVar9 != 0);
    }
    operator_delete__((long *)(lVar6 + -8));
  }
LAB_0056d2dc:
  *(int *)(this + 4) = param_1;
  *(ulong **)(this + 8) = puVar4 + 1;
                    /* catch() { ... } // from try @ 0056cd18 with catch @ 0056d378 */
  return;
}


