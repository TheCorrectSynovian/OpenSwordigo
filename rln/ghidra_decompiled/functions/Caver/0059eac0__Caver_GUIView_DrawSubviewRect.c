/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059eac0
 * Function: Caver::GUIView::DrawSubviewRect
 * Signature: undefined __thiscall DrawSubviewRect(GUIView * this, GUIView * param_1, RenderingContext * param_2, Rectangle * param_3, Matrix4 * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GUIView::DrawSubviewRect(Caver::GUIView*, Caver::RenderingContext*, Caver::Rectangle
   const&, Caver::Matrix4 const&) */

void __thiscall
Caver::GUIView::DrawSubviewRect
          (GUIView *this,GUIView *param_1,RenderingContext *param_2,Rectangle *param_3,
          Matrix4 *param_4)

{
  GUIView *pGVar1;
  float fVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  float *pfVar10;
  GUIView *pGVar11;
  code *pcVar12;
  long *plVar13;
  GUIView *pGVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 local_140;
  float local_138;
  undefined1 auStack_130 [8];
  float local_128;
  float local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined4 uStack_100;
  float local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_88;
  
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 0059eaf4 to 0069ecdf has its CatchHandler @ 0059e2f8 */
                    /* catch() { ... } // from try @ 0059e360 with catch @ 0059eaf8 */
  pGVar1 = param_1 + 0x84;
                    /* catch() { ... } // from try @ 0059e34c with catch @ 0059eb00 */
                    /* catch() { ... } // from try @ 0059e33c with catch @ 0059eb08 */
  (**(code **)(*(long *)this + 0x118))(&local_120,this,pGVar1,param_1);
  pGVar14 = param_1 + 0x60;
  pGVar11 = *(GUIView **)pGVar14;
  if (pGVar11 == pGVar14) {
                    /* catch() { ... } // from try @ 0059e46c with catch @ 0059eca4
                       catch() { ... } // from try @ 0059e76c with catch @ 0059eca4 */
    bVar5 = false;
  }
  else {
    bVar5 = false;
    do {
      lVar9 = *(long *)(pGVar11 + 0x10);
                    /* catch() { ... } // from try @ 0059e320 with catch @ 0059eb78 */
      if (*(int *)(lVar9 + 0x30) == 3) {
        iVar3 = *(int *)(lVar9 + 0xa0);
        if (iVar3 == 0) {
          if (*(char *)(lVar9 + 100) == '\0') {
            plVar13 = *(long **)(lVar9 + 0x80);
            iVar3 = *(int *)(lVar9 + 0x70);
          }
          else {
            plVar13 = *(long **)(lVar9 + 0x98);
            iVar3 = *(int *)(lVar9 + 0x88);
          }
        }
        else {
                    /* catch() { ... } // from try @ 0059e5f8 with catch @ 0059eb84
                       catch() { ... } // from try @ 0059e63c with catch @ 0059eb84 */
          plVar13 = *(long **)(lVar9 + 0xb0);
        }
        if ((plVar13 != (long *)0x0) && (plVar13[1] == 0)) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          lVar9 = plVar13[2];
          plVar13[2] = lVar9 + -1;
          if (lVar9 + -1 == 0) {
            (**(code **)(*plVar13 + 0x18))(plVar13);
          }
        }
        if (iVar3 == 3) {
          lVar9 = *(long *)(pGVar11 + 0x10);
          pcVar12 = *(code **)(*(long *)this + 0x120);
          if (*(int *)(lVar9 + 0xa0) == 0) {
            if (*(char *)(lVar9 + 100) == '\0') {
              pfVar10 = *(float **)(lVar9 + 0x78);
              plVar13 = *(long **)(lVar9 + 0x80);
            }
            else {
              pfVar10 = *(float **)(lVar9 + 0x90);
              plVar13 = *(long **)(lVar9 + 0x98);
            }
          }
          else {
            pfVar10 = *(float **)(lVar9 + 0xa8);
            plVar13 = *(long **)(lVar9 + 0xb0);
          }
          if (plVar13 != (long *)0x0) {
            plVar13[1] = plVar13[1] + 1;
          }
          local_110 = *pfVar10;
          fStack_10c = (float)*(undefined8 *)(pfVar10 + 1);
          fStack_108 = (float)((ulong)*(undefined8 *)(pfVar10 + 1) >> 0x20);
          fStack_104 = pfVar10[3];
          (*pcVar12)(&local_d0,this,pGVar1,param_1,&local_110);
          uStack_118 = uStack_c8;
          local_120 = local_d0;
          if ((plVar13 != (long *)0x0) &&
             (lVar9 = plVar13[1], plVar13[1] = lVar9 + -1, lVar9 + -1 == 0)) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            lVar9 = plVar13[2];
            plVar13[2] = lVar9 + -1;
            if (lVar9 + -1 == 0) {
              (**(code **)(*plVar13 + 0x18))(plVar13);
            }
          }
          bVar5 = true;
        }
      }
      pGVar11 = *(GUIView **)pGVar11;
    } while (pGVar14 != pGVar11);
  }
                    /* catch() { ... } // from try @ 0059e488 with catch @ 0059ecac
                       catch() { ... } // from try @ 0059e4c0 with catch @ 0059ecac */
  Rectangle::Intersection(param_3);
                    /* catch() { ... } // from try @ 0059e4fc with catch @ 0059ecbc
                       catch() { ... } // from try @ 0059e5d4 with catch @ 0059ecbc
                       catch() { ... } // from try @ 0059e654 with catch @ 0059ecbc
                       catch() { ... } // from try @ 0059e738 with catch @ 0059ecbc */
  if ((local_128 <= 0.0) || (local_124 <= 0.0)) goto LAB_0059f27c;
  uStack_98 = *(undefined8 *)(param_4 + 0x38);
  local_a0 = *(undefined8 *)(param_4 + 0x30);
                    /* try { // try from 0059ece0 to 0069ed07 has its CatchHandler @ 0059edc8 */
  uStack_a8 = *(undefined8 *)(param_4 + 0x28);
  local_b0 = *(undefined8 *)(param_4 + 0x20);
  uStack_b8 = *(undefined8 *)(param_4 + 0x18);
  local_c0 = *(undefined8 *)(param_4 + 0x10);
  uStack_c8 = *(undefined8 *)(param_4 + 8);
  local_d0 = *(undefined8 *)param_4;
                    /* try { // try from 0059ed08 to 0069edcb has its CatchHandler @ 0059e2f8 */
  uVar15 = *(ulong *)(this + 0x8c);
  fVar16 = (float)(uVar15 >> 0x20);
  fVar18 = ((float)local_120 + (float)uStack_118 * 0.5) -
           ((float)*(undefined8 *)(this + 0x84) + (float)uVar15 * 0.5);
  fVar19 = ((float)((ulong)local_120 >> 0x20) + (float)((ulong)uStack_118 >> 0x20) * 0.5) -
           ((float)((ulong)*(undefined8 *)(this + 0x84) >> 0x20) + fVar16 * 0.5);
  if (((bool)(~(ABS(fVar18) <= 0.001) & 1)) || ((bool)(~(ABS(fVar19) <= 0.001) & 1))) {
    Matrix4::PostTranslate
              ((Matrix4 *)&local_d0,(2.0 / (float)uVar15) * fVar18,(2.0 / fVar16) * fVar19,0.0);
    uVar15 = (ulong)*(uint *)(this + 0x8c);
  }
  fVar16 = DAT_00683734;
  if (ABS(*(float *)(param_1 + 0x7c) - (float)uVar15) <= DAT_00683734) {
    fVar18 = *(float *)(this + 0x90);
    fVar19 = *(float *)(param_1 + 0x80);
    if (DAT_00683734 < ABS(fVar19 - fVar18)) goto LAB_0059eda4;
  }
  else {
    fVar19 = *(float *)(param_1 + 0x80);
    fVar18 = *(float *)(this + 0x90);
LAB_0059eda4:
    local_110 = *(float *)(param_1 + 0x7c) / (float)uVar15;
    local_fc = fVar19 / fVar18;
                    /* catch() { ... } // from try @ 0059e9a0 with catch @ 0059edc8
                       catch() { ... } // from try @ 0059ece0 with catch @ 0059edc8 */
                    /* catch() { ... } // from try @ 0059f1e8 with catch @ 0059edcc
                       catch() { ... } // from try @ 0059f584 with catch @ 0059edcc
                       catch() { ... } // from try @ 0059f798 with catch @ 0059edcc */
    local_d8 = 0x3f80000000000000;
    fStack_104 = 0.0;
    uStack_100 = 0;
    fStack_10c = 0.0;
    fStack_108 = 0.0;
    uStack_f0 = 0;
    local_f8 = 0;
    uStack_e0 = _UNK_00683498;
    local_e8 = _DAT_00683490;
    C_Matrix4Mul((float *)&local_d0,&local_110,(float *)&local_d0);
  }
  uVar8 = _UNK_00683498;
  uVar7 = _DAT_00683490;
  pGVar11 = *(GUIView **)pGVar14;
  if (pGVar11 == pGVar14) {
    bVar6 = false;
  }
  else {
                    /* try { // try from 0059edf4 to 0069ee0b has its CatchHandler @ 0059f608 */
    bVar6 = false;
    uVar20 = NEON_fmov(0xbf800000,4);
    do {
      lVar9 = *(long *)(pGVar11 + 0x10);
      if (*(int *)(lVar9 + 0x30) == 1) {
        iVar3 = *(int *)(lVar9 + 0xa0);
        if (iVar3 == 0) {
          if (*(char *)(lVar9 + 100) == '\0') {
                    /* try { // try from 0059f110 to 0069f123 has its CatchHandler @ 0059f614 */
            plVar13 = *(long **)(lVar9 + 0x80);
            iVar3 = *(int *)(lVar9 + 0x70);
          }
          else {
            plVar13 = *(long **)(lVar9 + 0x98);
            iVar3 = *(int *)(lVar9 + 0x88);
          }
        }
        else {
          plVar13 = *(long **)(lVar9 + 0xb0);
        }
        if ((plVar13 != (long *)0x0) && (plVar13[1] == 0)) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          lVar9 = plVar13[2];
          plVar13[2] = lVar9 + -1;
          if (lVar9 + -1 == 0) {
                    /* try { // try from 0059ee9c to 0069eec3 has its CatchHandler @ 0059f410 */
            (**(code **)(*plVar13 + 0x18))(plVar13);
          }
        }
        if (iVar3 != 2) goto LAB_0059ef20;
        lVar9 = *(long *)(pGVar11 + 0x10);
        if (*(int *)(lVar9 + 0xa0) == 0) {
          if (*(char *)(lVar9 + 100) == '\0') {
            pfVar10 = *(float **)(lVar9 + 0x78);
            plVar13 = *(long **)(lVar9 + 0x80);
            goto joined_r0x0059ee2c;
          }
          pfVar10 = *(float **)(lVar9 + 0x90);
          plVar13 = *(long **)(lVar9 + 0x98);
          if (plVar13 == (long *)0x0) goto LAB_0059f0d4;
LAB_0059eee0:
                    /* try { // try from 0059eee4 to 0069ef0b has its CatchHandler @ 0059f674 */
          fVar18 = *pfVar10;
          fVar2 = pfVar10[1];
          if (plVar13[1] == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            lVar9 = plVar13[2];
            plVar13[2] = lVar9 + -1;
            if (lVar9 + -1 == 0) {
              (**(code **)(*plVar13 + 0x18))(plVar13);
            }
          }
        }
        else {
          pfVar10 = *(float **)(lVar9 + 0xa8);
          plVar13 = *(long **)(lVar9 + 0xb0);
joined_r0x0059ee2c:
          if (plVar13 != (long *)0x0) goto LAB_0059eee0;
LAB_0059f0d4:
          fVar18 = *pfVar10;
          fVar2 = pfVar10[1];
        }
LAB_0059f0e0:
        local_fc = fVar2;
        local_110 = fVar18;
        fStack_104 = 0.0;
        uStack_100 = 0;
        fStack_10c = 0.0;
        fStack_108 = 0.0;
        uStack_f0 = 0;
        local_f8 = 0;
                    /* try { // try from 0059f0ec to 0069f0f3 has its CatchHandler @ 0059f74c */
                    /* try { // try from 0059f0f4 to 0069f0fb has its CatchHandler @ 0059f494 */
                    /* try { // try from 0059f0fc to 0069f10f has its CatchHandler @ 0059f490 */
        local_d8 = 0x3f80000000000000;
        uStack_e0 = uVar8;
        local_e8 = uVar7;
        C_Matrix4Mul((float *)&local_d0,&local_110,(float *)&local_d0);
      }
      else {
LAB_0059ef20:
        lVar9 = *(long *)(pGVar11 + 0x10);
        if (*(int *)(lVar9 + 0x30) == 1) {
          iVar3 = *(int *)(lVar9 + 0xa0);
          if (iVar3 == 0) {
            if (*(char *)(lVar9 + 100) == '\0') {
              plVar13 = *(long **)(lVar9 + 0x80);
              iVar3 = *(int *)(lVar9 + 0x70);
            }
            else {
              plVar13 = *(long **)(lVar9 + 0x98);
                    /* try { // try from 0059ef94 to 0069efbb has its CatchHandler @ 0059f73c */
              iVar3 = *(int *)(lVar9 + 0x88);
            }
          }
          else {
            plVar13 = *(long **)(lVar9 + 0xb0);
          }
                    /* try { // try from 0059ef40 to 0069ef4f has its CatchHandler @ 0059f734 */
          if ((plVar13 != (long *)0x0) && (plVar13[1] == 0)) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            lVar9 = plVar13[2];
                    /* try { // try from 0059ef5c to 0069ef67 has its CatchHandler @ 0059f73c */
            plVar13[2] = lVar9 + -1;
            if (lVar9 + -1 == 0) {
                    /* try { // try from 0059ef68 to 0069ef73 has its CatchHandler @ 0059f538 */
              (**(code **)(*plVar13 + 0x18))(plVar13);
            }
            lVar9 = *(long *)(pGVar11 + 0x10);
          }
          if (iVar3 == 1) {
            if (*(int *)(lVar9 + 0xa0) == 0) {
                    /* try { // try from 0059f124 to 0069f133 has its CatchHandler @ 0059f460 */
              if (*(char *)(lVar9 + 100) == '\0') {
                    /* try { // try from 0059ee34 to 0069ee47 has its CatchHandler @ 0059f588 */
                pfVar10 = *(float **)(lVar9 + 0x78);
                plVar13 = *(long **)(lVar9 + 0x80);
                goto joined_r0x0059ee38;
              }
              pfVar10 = *(float **)(lVar9 + 0x90);
              plVar13 = *(long **)(lVar9 + 0x98);
              if (plVar13 == (long *)0x0) goto LAB_0059f130;
LAB_0059efb4:
              fVar18 = *pfVar10;
              if (plVar13[1] == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
                    /* try { // try from 0059efd0 to 0069efd7 has its CatchHandler @ 0059f74c */
                lVar9 = plVar13[2];
                plVar13[2] = lVar9 + -1;
                if (lVar9 + -1 == 0) {
                    /* try { // try from 0059efe4 to 0069eff7 has its CatchHandler @ 0059f534 */
                  (**(code **)(*plVar13 + 0x18))(plVar13);
                }
              }
            }
            else {
              pfVar10 = *(float **)(lVar9 + 0xa8);
              plVar13 = *(long **)(lVar9 + 0xb0);
joined_r0x0059ee38:
              if (plVar13 != (long *)0x0) goto LAB_0059efb4;
LAB_0059f130:
              fVar18 = *pfVar10;
            }
            fVar19 = (float)*(undefined8 *)(*(long *)(pGVar11 + 0x10) + 0x68);
            fVar17 = (float)((ulong)*(undefined8 *)(*(long *)(pGVar11 + 0x10) + 0x68) >> 0x20);
                    /* try { // try from 0059f154 to 0069f157 has its CatchHandler @ 0059f614 */
            if ((ABS(fVar19 + -0.5) <= fVar16) && (fVar2 = fVar18, ABS(fVar17 + -0.5) <= fVar16))
            goto LAB_0059f0e0;
            local_140 = CONCAT44(fVar17 + fVar17 + (float)((ulong)uVar20 >> 0x20),
                                 fVar19 + fVar19 + (float)uVar20);
                    /* try { // try from 0059f16c to 0069f19f has its CatchHandler @ 0059f74c */
            local_138 = 0.0;
            Matrix4::PostTranslate((Matrix4 *)&local_d0,(Vector3 *)&local_140);
            fStack_104 = 0.0;
            uStack_100 = 0;
            fStack_10c = 0.0;
            fStack_108 = 0.0;
            uStack_f0 = 0;
            local_f8 = 0;
            local_d8 = 0x3f80000000000000;
            uStack_e0 = uVar8;
            local_e8 = uVar7;
            local_110 = fVar18;
            local_fc = fVar18;
            C_Matrix4Mul((float *)&local_d0,&local_110,(float *)&local_d0);
                    /* try { // try from 0059f1c0 to 0069f1e7 has its CatchHandler @ 0059f734 */
            local_110 = -(float)local_140;
            fStack_10c = -(float)((ulong)local_140 >> 0x20);
            fStack_108 = -local_138;
            Matrix4::PostTranslate((Matrix4 *)&local_d0,(Vector3 *)&local_110);
            goto LAB_0059f20c;
          }
        }
                    /* try { // try from 0059eff8 to 0069f003 has its CatchHandler @ 0059f4dc */
        if (*(int *)(lVar9 + 0x30) == 2) {
          iVar3 = *(int *)(lVar9 + 0xa0);
          if (iVar3 == 0) {
            if (*(char *)(lVar9 + 100) == '\0') {
              plVar13 = *(long **)(lVar9 + 0x80);
              iVar3 = *(int *)(lVar9 + 0x70);
                    /* try { // try from 0059ee20 to 0069ee33 has its CatchHandler @ 0059f590 */
            }
            else {
              plVar13 = *(long **)(lVar9 + 0x98);
              iVar3 = *(int *)(lVar9 + 0x88);
            }
          }
          else {
            plVar13 = *(long **)(lVar9 + 0xb0);
          }
          if ((plVar13 != (long *)0x0) && (plVar13[1] == 0)) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
                    /* try { // try from 0059f028 to 0069f02f has its CatchHandler @ 0059f4d8 */
            lVar9 = plVar13[2];
                    /* try { // try from 0059f030 to 0069f03b has its CatchHandler @ 0059f4a0 */
            plVar13[2] = lVar9 + -1;
            if (lVar9 + -1 == 0) {
              (**(code **)(*plVar13 + 0x18))(plVar13);
            }
          }
          if (iVar3 == 1) {
            lVar9 = *(long *)(pGVar11 + 0x10);
            if (*(int *)(lVar9 + 0xa0) == 0) {
                    /* try { // try from 0059f1e8 to 0069f433 has its CatchHandler @ 0059edcc */
              if (*(char *)(lVar9 + 100) == '\0') {
                pfVar10 = *(float **)(lVar9 + 0x78);
                plVar13 = *(long **)(lVar9 + 0x80);
                goto joined_r0x0059ee44;
              }
              pfVar10 = *(float **)(lVar9 + 0x90);
              plVar13 = *(long **)(lVar9 + 0x98);
              if (plVar13 == (long *)0x0) goto LAB_0059f1f8;
LAB_0059f084:
              fVar18 = *pfVar10;
              if (plVar13[1] == 0) {
                    /* try { // try from 0059f098 to 0069f0e7 has its CatchHandler @ 0059f730 */
                (**(code **)(*plVar13 + 0x10))(plVar13);
                lVar9 = plVar13[2];
                plVar13[2] = lVar9 + -1;
                if (lVar9 + -1 == 0) {
                  (**(code **)(*plVar13 + 0x18))(plVar13);
                }
              }
            }
            else {
              pfVar10 = *(float **)(lVar9 + 0xa8);
              plVar13 = *(long **)(lVar9 + 0xb0);
                    /* try { // try from 0059f080 to 0069f08b has its CatchHandler @ 0059f498 */
joined_r0x0059ee44:
              if (plVar13 != (long *)0x0) goto LAB_0059f084;
LAB_0059f1f8:
              fVar18 = *pfVar10;
            }
            RenderingContext::SetAlpha(param_2,fVar18);
            bVar6 = true;
          }
        }
      }
LAB_0059f20c:
      pGVar11 = *(GUIView **)pGVar11;
    } while (pGVar14 != pGVar11);
  }
  pcVar12 = *(code **)(*(long *)param_1 + 0x50);
  if (bVar5) {
    fStack_108 = (float)*(undefined8 *)(param_1 + 0x8c);
    fStack_104 = (float)((ulong)*(undefined8 *)(param_1 + 0x8c) >> 0x20);
    local_110 = (float)*(undefined8 *)pGVar1;
    fStack_10c = (float)((ulong)*(undefined8 *)pGVar1 >> 0x20);
  }
  else {
    (**(code **)(*(long *)this + 0x110))(&local_110,this,auStack_130,param_1);
  }
  (*pcVar12)(param_1,param_2,&local_110,&local_d0);
  if (bVar6) {
    RenderingContext::SetAlpha(param_2,1.0);
  }
LAB_0059f27c:
  if (*(long *)(lVar4 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


