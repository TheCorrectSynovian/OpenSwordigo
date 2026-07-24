/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005612d4
 * Function: Caver::PointLightManager::GetOptimizedLights
 * Signature: undefined __thiscall GetOptimizedLights(PointLightManager * this, Rectangle * param_1, PointLight * param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::PointLightManager::GetOptimizedLights(Caver::Rectangle const&, Caver::PointLight*, int) */

ulong __thiscall
Caver::PointLightManager::GetOptimizedLights
          (PointLightManager *this,Rectangle *param_1,PointLight *param_2,int param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  long lVar15;
  PointLightGroup *pPVar16;
  float fVar17;
  float *pfVar18;
  PointLightGroup *pPVar19;
  int iVar20;
  ulong uVar21;
  float *pfVar22;
  float *pfVar23;
  void *pvVar24;
  PointLight *pPVar25;
  float *pfVar26;
  float *pfVar27;
  undefined8 *puVar28;
  ulong uVar29;
  long lVar30;
  float *pfVar31;
  uint uVar32;
  long lVar33;
  FastVector<Caver::PointLight> *pFVar34;
  FastVector<boost::shared_ptr<Caver::PointLightGroup>> *this_00;
  int iVar35;
  ulong uVar36;
  long lVar37;
  long *plVar38;
  uint uVar39;
  uint uVar40;
  float *pfVar41;
  long lVar42;
  undefined8 uVar43;
  float fVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  float fVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float *local_128;
  float *local_120;
  PointLightGroup *local_e8;
  float local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  float local_a8 [2];
  undefined8 local_a0;
  long local_98;
  
                    /* try { // try from 005612e0 to 006612e7 has its CatchHandler @ 005613f4 */
  lVar15 = tpidr_el0;
  local_98 = *(long *)(lVar15 + 0x28);
                    /* try { // try from 00561308 to 0066132f has its CatchHandler @ 00561444 */
  this_00 = (FastVector<boost::shared_ptr<Caver::PointLightGroup>> *)(this + 0x10);
  *(undefined4 *)this_00 = 0;
  uVar39 = *(uint *)this;
  uVar36 = (ulong)uVar39;
  uVar2 = uVar39;
  if (param_3 <= (int)uVar39) {
    uVar2 = param_3;
  }
  if (uVar2 == 0) {
    uVar36 = 0;
  }
  else {
                    /* try { // try from 00561330 to 00661417 has its CatchHandler @ 005611e8 */
    if (param_3 < (int)uVar39) {
      if (uVar2 == 1) {
        local_a8[0] = 0.0;
        local_a8[1] = 0.0;
        local_a0 = (void *)0x0;
        if (0 < (int)uVar39) {
          lVar30 = 0;
          pvVar24 = (void *)0x0;
          fVar53 = 0.0;
          lVar33 = 1;
          fVar54 = (float)0;
          while( true ) {
            lVar37 = *(long *)(this + 8);
            if ((int)fVar54 <= (int)fVar53) {
              iVar35 = (int)fVar54 * 2;
              if (iVar35 < 0xb) {
                iVar35 = 10;
              }
              FastVector<Caver::PointLight>::Resize
                        ((FastVector<Caver::PointLight> *)local_a8,iVar35);
              pvVar24 = local_a0;
              fVar53 = local_a8[0];
            }
            puVar1 = (undefined8 *)(lVar37 + lVar30);
            puVar28 = (undefined8 *)((long)pvVar24 + (long)(int)fVar53 * 0x3c);
            fVar53 = (float)((int)fVar53 + 1);
            *puVar28 = *puVar1;
            *(undefined4 *)(puVar28 + 1) = *(undefined4 *)(puVar1 + 1);
            uVar52 = *(undefined8 *)((long)puVar1 + 0x2c);
            *(undefined8 *)((long)puVar28 + 0x34) = *(undefined8 *)((long)puVar1 + 0x34);
            *(undefined8 *)((long)puVar28 + 0x2c) = uVar52;
            uVar52 = *(undefined8 *)((long)puVar1 + 0x1c);
            *(undefined8 *)((long)puVar28 + 0x24) = *(undefined8 *)((long)puVar1 + 0x24);
            *(undefined8 *)((long)puVar28 + 0x1c) = uVar52;
            uVar52 = *(undefined8 *)((long)puVar1 + 0xc);
            *(undefined8 *)((long)puVar28 + 0x14) = *(undefined8 *)((long)puVar1 + 0x14);
            *(undefined8 *)((long)puVar28 + 0xc) = uVar52;
            local_a8[0] = fVar53;
            if (*(int *)this <= lVar33) break;
            lVar30 = lVar30 + 0x3c;
            lVar33 = lVar33 + 1;
            fVar54 = local_a8[1];
          }
        }
        PointLightGroup::CombinedLight();
                    /* catch() { ... } // from try @ 005612e0 with catch @ 005613f4 */
        *(PointLightGroup **)param_2 = local_e8;
        *(float *)(param_2 + 8) = local_e0;
        *(undefined8 *)(param_2 + 0x34) = uStack_b4;
        *(undefined8 *)(param_2 + 0x2c) = local_bc;
        *(undefined8 *)(param_2 + 0x24) = uStack_c4;
        *(undefined8 *)(param_2 + 0x1c) = local_cc;
                    /* try { // try from 00561418 to 00661493 has its CatchHandler @ 005614ec */
        *(undefined8 *)(param_2 + 0x14) = uStack_d4;
        *(ulong *)(param_2 + 0xc) = CONCAT44(uStack_d8,uStack_dc);
        if (local_a0 != (void *)0x0) {
          operator_delete__(local_a0);
        }
        uVar36 = 1;
      }
      else {
        if ((int)uVar2 < 1) {
          pfVar41 = (float *)0x0;
          pfVar31 = (float *)0x0;
        }
        else {
          iVar35 = 0;
                    /* catch() { ... } // from try @ 00561418 with catch @ 005614ec */
                    /* catch() { ... } // from try @ 00561228 with catch @ 005614f0 */
          pfVar41 = (float *)0x0;
          uVar32 = 0;
          uVar39 = 0;
          local_128 = (float *)0x0;
          local_120 = (float *)0x0;
          pfVar22 = (float *)0x0;
          do {
            uVar52 = *(undefined8 *)param_1;
            fVar53 = *(float *)(param_1 + 8);
            fVar54 = *(float *)(param_1 + 0xc);
            pfVar31 = pfVar22;
            uVar40 = uVar39;
            pfVar23 = local_128;
            pfVar18 = local_120;
            if ((int)uVar32 <= (int)uVar39) {
              uVar13 = uVar32 * 2;
              if ((int)uVar13 < 0xb) {
                uVar13 = 10;
              }
                    /* catch() { ... } // from try @ 005615a0 with catch @ 00561638 */
              uVar40 = uVar13;
              if ((int)uVar39 <= (int)uVar13) {
                uVar40 = uVar39;
              }
              if ((uVar32 != uVar13) &&
                 (pfVar41 = operator_new__((ulong)uVar13 << 3), pfVar31 = pfVar41, uVar32 = uVar13,
                 pfVar23 = pfVar41, pfVar18 = pfVar41, pfVar22 != (float *)0x0)) {
                if (0 < (int)uVar40) {
                  uVar21 = (ulong)(int)uVar40;
                  uVar36 = 0;
                  if (7 < uVar40) {
                    auVar14._8_8_ = 0;
                    auVar14._0_8_ = uVar21 - 1;
                    uVar29 = (uVar21 - 1) * 8;
                    /* catch() { ... } // from try @ 00561210 with catch @ 00561560 */
                    /* try { // try from 00561564 to 00661587 has its CatchHandler @ 00561564
                       catch() { ... } // from try @ 00561564 with catch @ 00561564
                       catch() { ... } // from try @ 005615ac with catch @ 00561564 */
                    if ((((!CARRY8(uVar29,(ulong)pfVar41)) && (SUB168(auVar14 * ZEXT816(8),8) == 0))
                        && (!CARRY8(uVar29,(ulong)pfVar22))) &&
                       ((!CARRY8(uVar29,(ulong)(pfVar41 + 1)) &&
                        (!CARRY8(uVar29,(ulong)(pfVar22 + 1)))))) {
                    /* try { // try from 00561588 to 0066159b has its CatchHandler @ 005616a8 */
                    /* try { // try from 005615a0 to 006615ab has its CatchHandler @ 00561638 */
                    /* try { // try from 005615ac to 006616ab has its CatchHandler @ 00561564 */
                      uVar36 = 0;
                      if ((pfVar22 + uVar21 * 2 + -1 <= pfVar41 ||
                           pfVar41 + uVar21 * 2 + -1 <= local_128) &&
                         (pfVar22 + uVar21 * 2 <= pfVar41 + 1 || pfVar41 + uVar21 * 2 <= pfVar22 + 1
                         )) {
                        uVar36 = uVar21 & 0xfffffffffffffff8;
                        pfVar26 = pfVar22 + 8;
                        pfVar27 = pfVar41 + 8;
                        uVar29 = uVar36;
                        do {
                          uVar43 = *(undefined8 *)(pfVar26 + -8);
                          uVar46 = *(undefined8 *)(pfVar26 + -2);
                          uVar45 = *(undefined8 *)(pfVar26 + -4);
                          uVar49 = *(undefined8 *)(pfVar26 + 2);
                          uVar48 = *(undefined8 *)pfVar26;
                          uVar51 = *(undefined8 *)(pfVar26 + 6);
                          uVar50 = *(undefined8 *)(pfVar26 + 4);
                          uVar29 = uVar29 - 8;
                          *(undefined8 *)(pfVar27 + -6) = *(undefined8 *)(pfVar26 + -6);
                          *(undefined8 *)(pfVar27 + -8) = uVar43;
                          *(undefined8 *)(pfVar27 + -2) = uVar46;
                          *(undefined8 *)(pfVar27 + -4) = uVar45;
                          *(undefined8 *)(pfVar27 + 2) = uVar49;
                          *(undefined8 *)pfVar27 = uVar48;
                          *(undefined8 *)(pfVar27 + 6) = uVar51;
                          *(undefined8 *)(pfVar27 + 4) = uVar50;
                          pfVar26 = pfVar26 + 0x10;
                          pfVar27 = pfVar27 + 0x10;
                        } while (uVar29 != 0);
                        if (uVar36 == uVar21) goto LAB_0056169c;
                      }
                    }
                  }
                  do {
                    uVar29 = uVar36 + 1;
                    *(undefined8 *)(pfVar41 + uVar36 * 2) = *(undefined8 *)(pfVar22 + uVar36 * 2);
                    uVar36 = uVar29;
                  } while ((long)uVar29 < (long)uVar21);
                }
LAB_0056169c:
                operator_delete__(local_120);
              }
            }
            local_120 = pfVar18;
            local_128 = pfVar23;
                    /* try { // try from 005616ac to 006616d7 has its CatchHandler @ 005616ac
                       catch() { ... } // from try @ 005616ac with catch @ 005616ac
                       catch() { ... } // from try @ 005616fc with catch @ 005616ac
                       catch() { ... } // from try @ 005619c0 with catch @ 005616ac
                       catch() { ... } // from try @ 00561bd0 with catch @ 005616ac
                       catch() { ... } // from try @ 00561cf0 with catch @ 005616ac */
            iVar35 = iVar35 + 1;
            *(ulong *)(pfVar31 + (long)(int)uVar40 * 2) =
                 CONCAT44((float)((ulong)uVar52 >> 0x20) + fVar54 * 0.5,
                          (float)uVar52 + (fVar53 * (float)iVar35) / (float)(int)(uVar2 + 1));
            pPVar19 = operator_new(0x10);
                    /* try { // try from 005616d8 to 006616eb has its CatchHandler @ 00561c58 */
            *(undefined8 *)pPVar19 = 0;
            *(undefined8 *)(pPVar19 + 8) = 0;
            local_e8 = pPVar19;
            boost::detail::shared_count::shared_count<Caver::PointLightGroup>
                      ((shared_count *)&local_e0,pPVar19);
                    /* try { // try from 005616f0 to 006616fb has its CatchHandler @ 00561bf0 */
            boost::detail::sp_enable_shared_from_this(&local_e8,pPVar19,pPVar19);
                    /* try { // try from 005616fc to 00661723 has its CatchHandler @ 005616ac */
            iVar20 = *(int *)(this + 0x10);
            if (*(int *)(this + 0x14) <= iVar20) {
              iVar20 = *(int *)(this + 0x14) * 2;
              if (iVar20 < 0xb) {
                iVar20 = 10;
              }
              FastVector<boost::shared_ptr<Caver::PointLightGroup>>::Resize(this_00,iVar20);
              iVar20 = *(int *)this_00;
            }
                    /* try { // try from 00561724 to 00661733 has its CatchHandler @ 00561be8 */
            lVar30 = *(long *)(this + 0x18);
            lVar33 = CONCAT44(uStack_dc,local_e0);
                    /* try { // try from 00561734 to 0066173f has its CatchHandler @ 00561be4 */
            if (lVar33 != 0) {
              *(long *)(lVar33 + 8) = *(long *)(lVar33 + 8) + 1;
            }
            *(PointLightGroup **)(lVar30 + (long)iVar20 * 0x10) = local_e8;
            lVar30 = lVar30 + (long)iVar20 * 0x10;
            plVar38 = *(long **)(lVar30 + 8);
            *(long *)(lVar30 + 8) = lVar33;
            if ((plVar38 != (long *)0x0) &&
               (lVar30 = plVar38[1], plVar38[1] = lVar30 + -1, lVar30 + -1 == 0)) {
              (**(code **)(*plVar38 + 0x10))(plVar38);
                    /* try { // try from 00561778 to 00661783 has its CatchHandler @ 00561b88 */
              lVar30 = plVar38[2];
              plVar38[2] = lVar30 + -1;
              if (lVar30 + -1 == 0) {
                (**(code **)(*plVar38 + 0x18))(plVar38);
              }
            }
                    /* try { // try from 005617a0 to 006617c7 has its CatchHandler @ 00561b84 */
            *(int *)this_00 = *(int *)this_00 + 1;
            plVar38 = (long *)CONCAT44(uStack_dc,local_e0);
            if ((plVar38 != (long *)0x0) &&
               (lVar30 = plVar38[1], plVar38[1] = lVar30 + -1, lVar30 + -1 == 0)) {
              (**(code **)(*plVar38 + 0x10))(plVar38);
              lVar30 = plVar38[2];
                    /* try { // try from 005617d0 to 006617db has its CatchHandler @ 00561bd4 */
              plVar38[2] = lVar30 + -1;
              if (lVar30 + -1 == 0) {
                    /* try { // try from 005617dc to 006617e3 has its CatchHandler @ 00561b6c */
                    /* try { // try from 005617e4 to 006617ef has its CatchHandler @ 00561bd4 */
                (**(code **)(*plVar38 + 0x18))(plVar38);
              }
            }
            uVar39 = uVar40 + 1;
                    /* try { // try from 005617f4 to 00661803 has its CatchHandler @ 00561c5c */
            pfVar22 = pfVar31;
          } while (iVar35 < (int)uVar2);
        }
        Rectangle::RectangleByInsetting(param_1,_DAT_0068782c);
        fVar53 = DAT_00688018;
        if (0 < *(int *)this) {
          lVar30 = 0;
                    /* try { // try from 0056183c to 00661847 has its CatchHandler @ 00561afc */
          lVar33 = (long)(int)uVar2 + -1;
          do {
                    /* try { // try from 00561864 to 0066188b has its CatchHandler @ 00561a9c */
            pfVar22 = (float *)(*(long *)(this + 8) + lVar30 * 0x3c);
            local_e0 = pfVar22[0xe];
            fVar54 = *pfVar22;
            fVar7 = pfVar22[1];
            fVar3 = pfVar22[2];
            fVar8 = pfVar22[3];
            fVar4 = pfVar22[4];
            fVar9 = pfVar22[5];
            fVar5 = pfVar22[6];
            fVar10 = pfVar22[7];
            fVar6 = pfVar22[8];
            fVar11 = pfVar22[9];
            fVar12 = pfVar22[10];
            local_e8 = *(PointLightGroup **)(pfVar22 + 0xc);
            if (local_a8[0] <= fVar54) {
                    /* try { // try from 005618bc to 006618bf has its CatchHandler @ 00561c5c */
              fVar44 = 1.0;
              if (local_a8[0] + (float)local_a0 < fVar54) {
                fVar44 = fVar54 - (local_a8[0] + (float)local_a0);
                goto LAB_005618c8;
              }
            }
            else {
              fVar44 = local_a8[0] - fVar54;
                    /* try { // try from 005618ac to 006618af has its CatchHandler @ 00561a88 */
LAB_005618c8:
              fVar44 = fVar44 / fVar53 + 1.0;
            }
                    /* try { // try from 005618dc to 006618e7 has its CatchHandler @ 00561aac */
            if (local_a8[1] <= fVar7) {
              if (local_a8[1] + local_a0._4_4_ < fVar7) {
                fVar47 = fVar7 - (local_a8[1] + local_a0._4_4_);
                goto LAB_005618fc;
              }
            }
            else {
              fVar47 = local_a8[1] - fVar7;
LAB_005618fc:
              fVar44 = fVar44 * (fVar47 / fVar53 + 1.0);
            }
                    /* try { // try from 00561908 to 0066192f has its CatchHandler @ 00561a8c */
            fVar44 = pfVar22[0xb] * fVar44;
            if (fVar54 <= *pfVar31) {
              pFVar34 = (FastVector<Caver::PointLight> *)**(undefined8 **)(this + 0x18);
              iVar35 = *(int *)pFVar34;
                    /* try { // try from 00561ad0 to 00661bcf has its CatchHandler @ 00561d50 */
              if (*(int *)(pFVar34 + 4) <= iVar35) {
                iVar35 = *(int *)(pFVar34 + 4) * 2;
                if (iVar35 < 0xb) {
                  iVar35 = 10;
                }
                FastVector<Caver::PointLight>::Resize(pFVar34,iVar35);
LAB_00561b20:
                iVar35 = *(int *)pFVar34;
              }
LAB_00561b38:
              pfVar22 = (float *)(*(long *)(pFVar34 + 8) + (long)iVar35 * 0x3c);
              *pfVar22 = fVar54;
              pfVar22[1] = fVar7;
              pfVar22[2] = fVar3;
              pfVar22[3] = fVar8;
              pfVar22[4] = fVar4;
              pfVar22[5] = fVar9;
              pfVar22[6] = fVar5;
              pfVar22[7] = fVar10;
              pfVar22[8] = fVar6;
              pfVar22[9] = fVar11;
              pfVar22[10] = fVar12;
              pfVar22[0xb] = fVar44;
              pfVar22[0xe] = local_e0;
                    /* catch() { ... } // from try @ 005617dc with catch @ 00561b6c */
              *(PointLightGroup **)(pfVar22 + 0xc) = local_e8;
              *(int *)pFVar34 = *(int *)pFVar34 + 1;
            }
            else {
              if (pfVar31[lVar33 * 2] <= fVar54) {
                pFVar34 = *(FastVector<Caver::PointLight> **)
                           (*(long *)(this + 0x18) + lVar33 * 0x10);
                    /* catch() { ... } // from try @ 0056183c with catch @ 00561afc */
                iVar35 = *(int *)pFVar34;
                if (*(int *)(pFVar34 + 4) <= iVar35) {
                  iVar35 = *(int *)(pFVar34 + 4) * 2;
                  if (iVar35 < 0xb) {
                    iVar35 = 10;
                  }
                  FastVector<Caver::PointLight>::Resize(pFVar34,iVar35);
                  goto LAB_00561b20;
                }
                goto LAB_00561b38;
              }
              if (1 < (int)uVar2) {
                lVar42 = 0;
                lVar37 = 1;
                pfVar22 = pfVar31;
                do {
                  fVar47 = local_e0;
                  pPVar19 = local_e8;
                    /* try { // try from 00561950 to 00661977 has its CatchHandler @ 00561bd4 */
                  fVar55 = pfVar22[2];
                  if (fVar54 < fVar55) {
                    fVar56 = *pfVar22;
                    pFVar34 = *(FastVector<Caver::PointLight> **)(*(long *)(this + 0x18) + lVar42);
                    iVar35 = *(int *)pFVar34;
                    if (*(int *)(pFVar34 + 4) <= iVar35) {
                      iVar35 = *(int *)(pFVar34 + 4) * 2;
                      if (iVar35 < 0xb) {
                        iVar35 = 10;
                      }
                    /* try { // try from 00561998 to 006619bf has its CatchHandler @ 00561b84 */
                      FastVector<Caver::PointLight>::Resize(pFVar34,iVar35);
                      iVar35 = *(int *)pFVar34;
                    }
                    fVar17 = local_e0;
                    pPVar16 = local_e8;
                    /* try { // try from 005619c0 to 00661acf has its CatchHandler @ 005616ac */
                    fVar55 = (fVar54 - fVar56) / (fVar55 - fVar56);
                    pfVar23 = (float *)(*(long *)(pFVar34 + 8) + (long)iVar35 * 0x3c);
                    *pfVar23 = fVar54;
                    pfVar23[1] = fVar7;
                    pfVar23[2] = fVar3;
                    pfVar23[3] = fVar8;
                    pfVar23[4] = fVar4;
                    pfVar23[5] = fVar9;
                    pfVar23[6] = fVar5;
                    pfVar23[7] = fVar10;
                    pfVar23[8] = fVar6;
                    pfVar23[9] = fVar11;
                    pfVar23[10] = fVar12;
                    pfVar23[0xb] = fVar44 * (1.0 - fVar55);
                    pfVar23[0xe] = fVar47;
                    *(PointLightGroup **)(pfVar23 + 0xc) = pPVar19;
                    *(int *)pFVar34 = *(int *)pFVar34 + 1;
                    pFVar34 = *(FastVector<Caver::PointLight> **)
                               (*(long *)(this + 0x18) + lVar42 + 0x10);
                    iVar35 = *(int *)pFVar34;
                    if (*(int *)(pFVar34 + 4) <= iVar35) {
                      iVar35 = *(int *)(pFVar34 + 4) * 2;
                      if (iVar35 < 0xb) {
                        iVar35 = 10;
                      }
                      FastVector<Caver::PointLight>::Resize(pFVar34,iVar35);
                      iVar35 = *(int *)pFVar34;
                    }
                    pfVar23 = (float *)(*(long *)(pFVar34 + 8) + (long)iVar35 * 0x3c);
                    *pfVar23 = fVar54;
                    pfVar23[1] = fVar7;
                    pfVar23[2] = fVar3;
                    pfVar23[3] = fVar8;
                    pfVar23[4] = fVar4;
                    pfVar23[5] = fVar9;
                    pfVar23[6] = fVar5;
                    pfVar23[7] = fVar10;
                    pfVar23[8] = fVar6;
                    pfVar23[9] = fVar11;
                    pfVar23[10] = fVar12;
                    pfVar23[0xb] = fVar44 * fVar55;
                    /* catch() { ... } // from try @ 005618ac with catch @ 00561a88 */
                    /* catch() { ... } // from try @ 00561908 with catch @ 00561a8c */
                    pfVar23[0xe] = fVar17;
                    *(PointLightGroup **)(pfVar23 + 0xc) = pPVar16;
                    /* catch() { ... } // from try @ 00561864 with catch @ 00561a9c */
                    *(int *)pFVar34 = *(int *)pFVar34 + 1;
                  }
                  lVar37 = lVar37 + 1;
                    /* catch() { ... } // from try @ 005618dc with catch @ 00561aac */
                  lVar42 = lVar42 + 0x10;
                  pfVar22 = pfVar22 + 2;
                } while (lVar37 < (int)uVar2);
              }
            }
                    /* catch() { ... } // from try @ 005617a0 with catch @ 00561b84
                       catch() { ... } // from try @ 00561998 with catch @ 00561b84 */
                    /* catch() { ... } // from try @ 00561778 with catch @ 00561b88 */
            lVar30 = lVar30 + 1;
          } while (lVar30 < *(int *)this);
        }
        if ((int)uVar2 < 1) {
          uVar36 = 0;
        }
        else {
          lVar33 = 0;
          lVar30 = 0;
          uVar36 = 0;
          do {
                    /* try { // try from 00561bd0 to 00661c7f has its CatchHandler @ 005616ac */
            if (0 < **(int **)(*(long *)(this + 0x18) + lVar33)) {
                    /* catch() { ... } // from try @ 005617d0 with catch @ 00561bd4
                       catch() { ... } // from try @ 005617e4 with catch @ 00561bd4
                       catch() { ... } // from try @ 00561950 with catch @ 00561bd4 */
              PointLightGroup::CombinedLight();
                    /* catch() { ... } // from try @ 00561734 with catch @ 00561be4 */
              pPVar25 = param_2 + (long)(int)uVar36 * 0x3c;
                    /* catch() { ... } // from try @ 00561724 with catch @ 00561be8 */
              uVar36 = (ulong)((int)uVar36 + 1);
              *(PointLightGroup **)pPVar25 = local_e8;
                    /* catch() { ... } // from try @ 005616f0 with catch @ 00561bf0 */
              *(float *)(pPVar25 + 8) = local_e0;
              *(undefined8 *)(pPVar25 + 0x34) = uStack_b4;
              *(undefined8 *)(pPVar25 + 0x2c) = local_bc;
              *(undefined8 *)(pPVar25 + 0x24) = uStack_c4;
              *(undefined8 *)(pPVar25 + 0x1c) = local_cc;
              *(undefined8 *)(pPVar25 + 0x14) = uStack_d4;
              *(ulong *)(pPVar25 + 0xc) = CONCAT44(uStack_d8,uStack_dc);
            }
            lVar30 = lVar30 + 1;
            lVar33 = lVar33 + 0x10;
          } while (lVar30 < (int)uVar2);
        }
        if (pfVar31 != (float *)0x0) {
          operator_delete__(pfVar41);
        }
      }
    }
    else if (0 < (int)uVar39) {
      lVar33 = 0;
                    /* catch() { ... } // from try @ 005612ac with catch @ 00561444
                       catch() { ... } // from try @ 00561308 with catch @ 00561444 */
      lVar30 = 0;
      do {
                    /* catch() { ... } // from try @ 00561284 with catch @ 0056144c */
        pPVar25 = param_2 + lVar33;
        lVar30 = lVar30 + 1;
        puVar1 = (undefined8 *)(*(long *)(this + 8) + lVar33);
        lVar33 = lVar33 + 0x3c;
        *(undefined8 *)pPVar25 = *puVar1;
        *(undefined4 *)(pPVar25 + 8) = *(undefined4 *)(puVar1 + 1);
        uVar52 = *(undefined8 *)((long)puVar1 + 0x2c);
        *(undefined8 *)(pPVar25 + 0x34) = *(undefined8 *)((long)puVar1 + 0x34);
        *(undefined8 *)(pPVar25 + 0x2c) = uVar52;
        uVar52 = *(undefined8 *)((long)puVar1 + 0x1c);
        *(undefined8 *)(pPVar25 + 0x24) = *(undefined8 *)((long)puVar1 + 0x24);
        *(undefined8 *)(pPVar25 + 0x1c) = uVar52;
        uVar52 = *(undefined8 *)((long)puVar1 + 0xc);
        *(undefined8 *)(pPVar25 + 0x14) = *(undefined8 *)((long)puVar1 + 0x14);
        *(undefined8 *)(pPVar25 + 0xc) = uVar52;
        uVar36 = (ulong)*(int *)this;
      } while (lVar30 < (long)uVar36);
    }
  }
                    /* try { // try from 00561494 to 00661563 has its CatchHandler @ 005611e8 */
  if (*(long *)(lVar15 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar36 & 0xffffffff;
}


