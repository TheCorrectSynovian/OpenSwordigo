/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00576720
 * Function: Caver::FastVector<Caver::SceneObject*>::Resize
 * Signature: undefined __thiscall Resize(FastVector<Caver::SceneObject*> * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FastVector<Caver::SceneObject*>::Resize(int) */

void __thiscall
Caver::FastVector<Caver::SceneObject*>::Resize(FastVector<Caver::SceneObject*> *this,int param_1)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
                    /* try { // try from 00576730 to 00676743 has its CatchHandler @ 0057c3f4 */
  uVar11 = *(uint *)this;
  if (param_1 < (int)*(uint *)this) {
                    /* try { // try from 00576744 to 00676757 has its CatchHandler @ 0057c3ec */
    *(int *)this = param_1;
    uVar11 = param_1;
  }
  if (param_1 == 0) {
    if (*(void **)(this + 8) != (void *)0x0) {
                    /* try { // try from 005767a8 to 006767bb has its CatchHandler @ 0057c3cc */
      operator_delete__(*(void **)(this + 8));
      *(undefined8 *)(this + 8) = 0;
    }
    *(undefined4 *)(this + 4) = 0;
    return;
  }
                    /* try { // try from 00576758 to 0067676b has its CatchHandler @ 0057c3e4 */
  if (*(int *)(this + 4) == param_1) {
    return;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)param_1;
  uVar5 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)param_1 << 3;
                    /* try { // try from 0057676c to 0067678b has its CatchHandler @ 0057c3dc */
  if (SUB168(auVar1 * ZEXT816(8),8) != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  pvVar3 = operator_new__(uVar5);
  pvVar4 = *(void **)(this + 8);
  if (pvVar4 == (void *)0x0) goto LAB_0057682c;
  if (0 < (int)uVar11) {
    uVar5 = (ulong)(int)uVar11;
                    /* try { // try from 00576794 to 006767a7 has its CatchHandler @ 0057c3d4 */
    if (uVar11 < 4) {
      uVar6 = 0;
    }
    else {
                    /* try { // try from 005767bc to 006767cf has its CatchHandler @ 0057c3c4 */
                    /* try { // try from 005767d0 to 006767e3 has its CatchHandler @ 0057c3bc */
      if ((pvVar3 < (void *)((long)pvVar4 + uVar5 * 8)) &&
         (pvVar4 < (void *)((long)pvVar3 + uVar5 * 8))) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar5 & 0xfffffffffffffffc;
        puVar7 = (undefined8 *)((long)pvVar4 + 0x10);
                    /* try { // try from 005767e4 to 00676803 has its CatchHandler @ 0057c3b4 */
        puVar9 = (undefined8 *)((long)pvVar3 + 0x10);
        uVar10 = uVar6;
        do {
          puVar2 = puVar7 + -1;
          uVar12 = puVar7[-2];
          uVar14 = puVar7[1];
          uVar13 = *puVar7;
          puVar7 = puVar7 + 4;
          uVar10 = uVar10 - 4;
          puVar9[-1] = *puVar2;
          puVar9[-2] = uVar12;
          puVar9[1] = uVar14;
          *puVar9 = uVar13;
          puVar9 = puVar9 + 4;
        } while (uVar10 != 0);
        if (uVar6 == uVar5) goto LAB_00576824;
      }
    }
    do {
                    /* try { // try from 0057680c to 0067681f has its CatchHandler @ 0057c3ac */
      lVar8 = uVar6 * 8;
      uVar6 = uVar6 + 1;
      *(undefined8 *)((long)pvVar3 + lVar8) = *(undefined8 *)((long)pvVar4 + lVar8);
                    /* try { // try from 00576820 to 00676833 has its CatchHandler @ 0057c3a4 */
    } while ((long)uVar6 < (long)uVar5);
  }
LAB_00576824:
  operator_delete__(pvVar4);
LAB_0057682c:
  *(int *)(this + 4) = param_1;
  *(void **)(this + 8) = pvVar3;
                    /* try { // try from 00576834 to 00676847 has its CatchHandler @ 0057c39c */
  return;
}


