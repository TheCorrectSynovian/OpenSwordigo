/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005621c4
 * Function: Caver::FastVector<boost::shared_ptr<Caver::PointLightGroup>>::Resize
 * Signature: undefined __thiscall Resize(FastVector<boost::shared_ptr<Caver::PointLightGroup>> * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FastVector<boost::shared_ptr<Caver::PointLightGroup> >::Resize(int) */

void __thiscall
Caver::FastVector<boost::shared_ptr<Caver::PointLightGroup>>::Resize
          (FastVector<boost::shared_ptr<Caver::PointLightGroup>> *this,int param_1)

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
                    /* try { // try from 005621f4 to 006621fb has its CatchHandler @ 005623c4 */
    *(int *)this = param_1;
    iVar7 = param_1;
  }
  if (param_1 == 0) {
    lVar6 = *(long *)(this + 8);
    if (lVar6 != 0) {
      lVar9 = *(long *)(lVar6 + -8);
      if (lVar9 != 0) {
        lVar9 = lVar9 << 4;
        do {
          plVar5 = *(long **)(lVar6 + lVar9 + -8);
          if ((plVar5 != (long *)0x0) &&
             (lVar8 = plVar5[1], plVar5[1] = lVar8 + -1, lVar8 + -1 == 0)) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            lVar8 = plVar5[2];
            plVar5[2] = lVar8 + -1;
            if (lVar8 + -1 == 0) {
                    /* catch() { ... } // from try @ 005621f4 with catch @ 005623c4 */
              (**(code **)(*plVar5 + 0x18))(plVar5);
            }
          }
          lVar9 = lVar9 + -0x10;
        } while (lVar9 != 0);
      }
      operator_delete__((long *)(lVar6 + -8));
      *(undefined8 *)(this + 8) = 0;
    }
                    /* try { // try from 005623e0 to 00662537 has its CatchHandler @ 00562554 */
    *(undefined4 *)(this + 4) = 0;
    return;
  }
                    /* try { // try from 005621fc to 0066225f has its CatchHandler @ 00562074 */
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
                    /* try { // try from 00562260 to 0066226b has its CatchHandler @ 00562458 */
    if (0 < iVar7) {
      lVar8 = 0;
      lVar9 = 0;
      do {
                    /* try { // try from 0056226c to 0066227f has its CatchHandler @ 0056244c */
        uVar2 = *(undefined8 *)(lVar6 + lVar8);
        lVar6 = ((undefined8 *)(lVar6 + lVar8))[1];
        if (lVar6 != 0) {
          *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 1;
        }
                    /* try { // try from 00562284 to 0066228f has its CatchHandler @ 005623ec */
        plVar5 = *(long **)((long)puVar4 + lVar8 + 0x10);
        *(undefined8 *)((long)puVar4 + lVar8 + 8) = uVar2;
        *(long *)((long)puVar4 + lVar8 + 0x10) = lVar6;
        if ((plVar5 != (long *)0x0) && (lVar6 = plVar5[1], plVar5[1] = lVar6 + -1, lVar6 + -1 == 0))
        {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          lVar6 = plVar5[2];
          plVar5[2] = lVar6 + -1;
                    /* try { // try from 005622c0 to 006622e7 has its CatchHandler @ 005624b0 */
          if (lVar6 + -1 == 0) {
            (**(code **)(*plVar5 + 0x18))(plVar5);
          }
        }
        lVar6 = *(long *)(this + 8);
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 0x10;
                    /* try { // try from 005622e8 to 006623df has its CatchHandler @ 00562074 */
      } while (lVar9 < *(int *)this);
      if (lVar6 == 0) goto LAB_0056235c;
    }
    lVar9 = *(long *)(lVar6 + -8);
    if (lVar9 != 0) {
      lVar9 = lVar9 << 4;
      do {
        plVar5 = *(long **)(lVar6 + lVar9 + -8);
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
LAB_0056235c:
  *(int *)(this + 4) = param_1;
  *(ulong **)(this + 8) = puVar4 + 1;
                    /* catch() { ... } // from try @ 00562284 with catch @ 005623ec */
  return;
}


