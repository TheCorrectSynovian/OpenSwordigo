/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054e4fc
 * Function: Caver::PODLoader::CreateSkeleton
 * Signature: undefined __cdecl CreateSkeleton(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::PODLoader::CreateSkeleton() */

void Caver::PODLoader::CreateSkeleton(void)

{
  char cVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  int iVar15;
  long *in_x0;
  void *__s;
  int *piVar16;
  char *pcVar17;
  undefined4 *puVar18;
  Skeleton *this;
  void *pvVar19;
  size_t sVar20;
  Quaternion *extraout_x1;
  undefined4 uVar21;
  undefined8 *in_x8;
  long *plVar22;
  void *pvVar23;
  long lVar24;
  float *pfVar25;
  long *plVar26;
  float *pfVar27;
  undefined8 *puVar28;
  long *plVar29;
  undefined4 *puVar30;
  undefined4 *puVar31;
  float *pfVar32;
  float *pfVar33;
  ulong uVar34;
  ulong uVar35;
  long *plVar36;
  long *plVar37;
  char *pcVar38;
  long *plVar39;
  long lVar40;
  uint uVar41;
  long lVar42;
  long lVar43;
  ulong uVar44;
  undefined8 *puVar45;
  int iVar46;
  long lVar47;
  undefined8 uVar48;
  float fVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined4 local_110;
  undefined8 local_10c;
  float local_104;
  Skeleton *local_100;
  long *plStack_f8;
  float local_f0 [4];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  float fStack_c8;
  undefined4 uStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined4 local_b4;
  long local_b0 [4];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 0054e524 to 0064e527 has its CatchHandler @ 0054e948 */
  lVar40 = *in_x0;
  __s = operator_new__((ulong)*(uint *)(lVar40 + 0x48));
                    /* try { // try from 0054e540 to 0064e54b has its CatchHandler @ 0054e894 */
  memset(__s,0,(ulong)*(uint *)(lVar40 + 0x48));
                    /* try { // try from 0054e54c to 0064e577 has its CatchHandler @ 0054e1a0 */
  iVar46 = *(int *)(lVar40 + 0x48);
  iVar15 = iVar46 + -1;
  if (-1 < iVar15) {
    lVar42 = (long)iVar15;
    piVar16 = (int *)(*(long *)(lVar40 + 0x50) + (long)iVar15 * 0x60 + 0x14);
    do {
                    /* try { // try from 0054e578 to 0064e583 has its CatchHandler @ 0054e864 */
                    /* try { // try from 0054e584 to 0064e6c7 has its CatchHandler @ 0054e1a0 */
      iVar15 = strncmp(*(char **)(piVar16 + -3),"Bone",4);
      if (((iVar15 == 0) || (*(char *)((long)__s + lVar42) != '\0')) && (-1 < *piVar16)) {
        *(undefined1 *)((long)__s + (long)*piVar16) = 1;
      }
      lVar42 = lVar42 + -1;
      piVar16 = piVar16 + -0x18;
    } while (-1 < (int)lVar42);
  }
  *(undefined4 *)(in_x0 + 4) = 0;
  puVar14 = PTR_Vector3Zero_007e5988;
  in_x0[0x14] = *(long *)PTR_Vector3Zero_007e5988;
  *(undefined4 *)(in_x0 + 0x15) = *(undefined4 *)(puVar14 + 8);
  if (iVar46 != 0) {
    iVar46 = 0;
    uVar44 = 0;
    do {
      lVar42 = *(long *)(lVar40 + 0x50);
      if (*(char *)((long)__s + uVar44) == '\0') {
        pcVar38 = *(char **)(lVar42 + uVar44 * 0x60 + 8);
        iVar15 = strncmp(pcVar38,"Bone",4);
        if ((iVar15 == 0) && (pcVar17 = strstr(pcVar38,"Control"), pcVar17 == (char *)0x0))
        goto LAB_0054e640;
        iVar15 = strcmp(pcVar38,"CenterPoint");
        if (iVar15 == 0) {
          plVar22 = *(long **)(lVar42 + uVar44 * 0x60 + 0x28);
          in_x0[0x14] = *plVar22;
                    /* try { // try from 0054e6c8 to 0064e6db has its CatchHandler @ 0054e828 */
          *(int *)(in_x0 + 0x15) = (int)plVar22[1];
        }
      }
      else {
LAB_0054e640:
        fVar49 = (float)uVar44;
        local_b0[0]._0_4_ = fVar49;
        piVar16 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                         operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                     *)(in_x0 + 5),(int *)local_b0);
        *piVar16 = iVar46;
        local_b0[0] = CONCAT44(local_b0[0]._4_4_,fVar49);
        pfVar25 = (float *)in_x0[0xc];
        if (pfVar25 == (float *)in_x0[0xd]) {
                    /* try { // try from 0054e6dc to 0064e7fb has its CatchHandler @ 0054e1a0 */
          std::vector<int,std::allocator<int>>::_M_insert_aux
                    ((vector<int,std::allocator<int>> *)(in_x0 + 0xb),pfVar25,local_b0);
        }
        else {
          *pfVar25 = fVar49;
          in_x0[0xc] = (long)(pfVar25 + 1);
        }
        lVar40 = in_x0[4];
        FUN_00666bb8(local_b0,*(undefined8 *)(lVar42 + uVar44 * 0x60 + 8),&local_100);
        puVar18 = (undefined4 *)
                  std::
                  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                  ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                *)(in_x0 + 0xe),(string *)local_b0);
        *puVar18 = (int)lVar40;
        if ((undefined *)(local_b0[0] + -0x18) != PTR_DAT_007e5de8) {
          piVar16 = (int *)(local_b0[0] + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar46 = *piVar16;
            *piVar16 = iVar46 + -1;
          }
          else {
            do {
              iVar46 = *piVar16;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar16,0x10);
              if (bVar2) {
                *piVar16 = iVar46 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          if (iVar46 < 1) {
            operator_delete((undefined *)(local_b0[0] + -0x18));
          }
        }
        lVar40 = *in_x0;
        iVar46 = (int)in_x0[4] + 1;
        *(int *)(in_x0 + 4) = iVar46;
      }
      uVar44 = uVar44 + 1;
    } while (uVar44 < *(uint *)(lVar40 + 0x48));
    if (iVar46 != 0) {
      this = operator_new(0x38);
      Skeleton::Skeleton(this,iVar46);
      local_100 = this;
      boost::detail::shared_count::shared_count<Caver::Skeleton>((shared_count *)&plStack_f8,this);
      boost::detail::sp_enable_shared_from_this(&local_100,this,this);
      fVar49 = *(float *)(in_x0 + 0x15);
      *(ulong *)(local_100 + 0x28) =
           CONCAT44(-(float)((ulong)in_x0[0x14] >> 0x20),-(float)in_x0[0x14]);
      uVar9 = _UNK_006952a8;
      uVar8 = _DAT_006952a0;
      *(undefined8 *)(local_100 + 0x20) = 0x700000003;
      *(float *)(local_100 + 0x30) = -fVar49;
      *(undefined8 *)(local_100 + 0x18) = uVar9;
      *(undefined8 *)(local_100 + 0x10) = uVar8;
      uVar41 = *(uint *)(in_x0 + 4);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (long)(int)uVar41 * 3;
      uVar44 = (long)(int)uVar41 * 0xc;
      if (SUB168(auVar3 * ZEXT816(4),8) != 0) {
        uVar44 = 0xffffffffffffffff;
      }
      pvVar19 = operator_new__(uVar44);
                    /* catch() { ... } // from try @ 0054e458 with catch @ 0054e7d8 */
      pvVar23 = (void *)in_x0[2];
      in_x0[2] = (long)pvVar19;
      if (pvVar23 != (void *)0x0) {
        operator_delete__(pvVar23);
        uVar41 = *(uint *)(in_x0 + 4);
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (long)(int)(uVar41 << 2);
                    /* try { // try from 0054e7fc to 0064e857 has its CatchHandler @ 0054ea6c */
      uVar44 = -(ulong)((uVar41 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
               (ulong)(uVar41 << 2) << 2;
      if (SUB168(auVar4 * ZEXT816(4),8) != 0) {
        uVar44 = 0xffffffffffffffff;
      }
      pvVar19 = operator_new__(uVar44);
      pvVar23 = (void *)in_x0[3];
      in_x0[3] = (long)pvVar19;
      if (pvVar23 != (void *)0x0) {
        operator_delete__(pvVar23);
        uVar41 = *(uint *)(in_x0 + 4);
      }
                    /* catch() { ... } // from try @ 0054e6c8 with catch @ 0054e828 */
      uVar13 = _UNK_006837f8;
      uVar12 = _DAT_006837f0;
      uVar11 = _UNK_006837e8;
      uVar10 = _DAT_006837e0;
      uVar9 = _UNK_00683498;
      uVar8 = _DAT_00683490;
      if (0 < (int)uVar41) {
        plVar22 = in_x0 + 6;
                    /* try { // try from 0054e858 to 0064e887 has its CatchHandler @ 0054e1a0 */
                    /* catch() { ... } // from try @ 0054e578 with catch @ 0054e864 */
        lVar40 = 0;
                    /* try { // try from 0054e888 to 0064e8bf has its CatchHandler @ 0054ea6c */
                    /* catch() { ... } // from try @ 0054e540 with catch @ 0054e894 */
        do {
          lVar47 = *(long *)(*in_x0 + 0x50);
          lVar43 = (long)*(int *)(in_x0[0xb] + lVar40 * 4);
          lVar42 = *(long *)(local_100 + 8);
          pcVar38 = *(char **)(lVar47 + lVar43 * 0x60 + 8);
                    /* try { // try from 0054e8c0 to 0064e8ff has its CatchHandler @ 0054e1a0 */
                    /* catch() { ... } // from try @ 0054e3e8 with catch @ 0054e8c4 */
                    /* catch() { ... } // from try @ 0054e3e0 with catch @ 0054e8c8 */
          sVar20 = strlen(pcVar38);
                    /* catch() { ... } // from try @ 0054e3b8 with catch @ 0054e8d8 */
                    /* catch() { ... } // from try @ 0054e35c with catch @ 0054e8dc */
          FUN_0066918c(lVar42 + lVar40 * 0x90,pcVar38,sVar20);
          piVar16 = (int *)(lVar47 + lVar43 * 0x60 + 0x14);
          iVar46 = *piVar16;
          if (iVar46 < 0) {
            uVar21 = 0xffffffff;
LAB_0054e960:
            *(undefined4 *)(lVar42 + lVar40 * 0x90 + 8) = uVar21;
          }
          else {
            plVar29 = (long *)in_x0[7];
            plVar39 = plVar22;
            while (plVar29 != (long *)0x0) {
                    /* try { // try from 0054e900 to 0064e927 has its CatchHandler @ 0054ea6c */
              plVar26 = plVar29 + 3;
              if (iVar46 <= (int)plVar29[4]) {
                plVar39 = plVar29;
                plVar26 = plVar29 + 2;
              }
              plVar29 = (long *)*plVar26;
            }
            if (plVar39 != plVar22) {
                    /* catch() { ... } // from try @ 0054e3fc with catch @ 0054e940
                       catch() { ... } // from try @ 0054e4e8 with catch @ 0054e940 */
                    /* catch() { ... } // from try @ 0054e3cc with catch @ 0054e948
                       catch() { ... } // from try @ 0054e524 with catch @ 0054e948 */
              plVar29 = plVar22;
              if ((int)plVar39[4] <= iVar46) {
                plVar29 = plVar39;
              }
                    /* catch() { ... } // from try @ 0054e410 with catch @ 0054e950
                       catch() { ... } // from try @ 0054e4a0 with catch @ 0054e950 */
              if (plVar29 != plVar22) {
                puVar18 = (undefined4 *)
                          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                          ::operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                        *)(in_x0 + 5),piVar16);
                uVar21 = *puVar18;
                goto LAB_0054e960;
              }
            }
          }
                    /* try { // try from 0054e974 to 0064e9b3 has its CatchHandler @ 0054ea6c */
          iVar46 = *(int *)(lVar42 + lVar40 * 0x90 + 8);
          if (iVar46 < 0) {
            local_b0[1] = *(long *)(PTR_identityMatrix_007e74c8 + 8);
            local_b0[0] = *(long *)PTR_identityMatrix_007e74c8;
            local_b0[3] = *(long *)(PTR_identityMatrix_007e74c8 + 0x18);
            local_b0[2] = *(long *)(PTR_identityMatrix_007e74c8 + 0x10);
            uStack_88 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x28);
            local_90 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x20);
            uStack_78 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x38);
            uStack_80 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x30);
          }
          else {
            lVar24 = *(long *)(local_100 + 8) + (long)iVar46 * 0x90;
            plVar39 = (long *)(lVar24 + 0xc);
            if ((local_b0 < (long *)(lVar24 + 0x4cU)) && (plVar39 < &lStack_70)) {
              plVar29 = local_b0;
              do {
                plVar26 = (long *)((long)plVar29 + 4);
                *(int *)plVar29 = (int)*plVar39;
                    /* try { // try from 0054e9b4 to 0064ea6f has its CatchHandler @ 0054e1a0 */
                plVar39 = (long *)((long)plVar39 + 4);
                plVar29 = plVar26;
              } while (plVar26 < &lStack_70);
            }
            else {
              local_b0[1] = *(undefined8 *)(lVar24 + 0x14);
              local_b0[0] = *plVar39;
              lVar24 = *(long *)(local_100 + 8) + (long)iVar46 * 0x90;
              local_b0[3] = *(undefined8 *)(lVar24 + 0x24);
              local_b0[2] = *(undefined8 *)(lVar24 + 0x1c);
              uStack_88 = *(undefined8 *)(lVar24 + 0x34);
              local_90 = *(undefined8 *)(lVar24 + 0x2c);
              uStack_78 = *(undefined8 *)(lVar24 + 0x44);
              uStack_80 = *(undefined8 *)(lVar24 + 0x3c);
            }
          }
          lVar24 = lVar47 + lVar43 * 0x60;
          plVar39 = (long *)(lVar24 + 0x38);
          puVar45 = (undefined8 *)*plVar39;
          plVar29 = (long *)(lVar24 + 0x28);
          pfVar25 = (float *)*plVar29;
          local_b8 = *(float *)((long)in_x0 + 0xac);
          local_b4 = 0x3f800000;
          local_c0 = local_b8 * *pfVar25;
          fStack_bc = local_b8 * pfVar25[1];
          local_b8 = local_b8 * pfVar25[2];
          local_f0[2] = (float)uVar9;
          local_f0[3] = (float)((ulong)uVar9 >> 0x20);
          local_f0[0] = (float)uVar8;
          local_f0[1] = (float)((ulong)uVar8 >> 0x20);
          uStack_d8 = uVar11;
          local_e0._0_4_ = (undefined4)uVar10;
          local_e0._4_4_ = (float)((ulong)uVar10 >> 0x20);
          fStack_c8 = (float)uVar13;
          uStack_c4 = (undefined4)((ulong)uVar13 >> 0x20);
          local_d0 = uVar12;
                    /* catch() { ... } // from try @ 0054e7fc with catch @ 0054ea6c
                       catch() { ... } // from try @ 0054e888 with catch @ 0054ea6c
                       catch() { ... } // from try @ 0054e900 with catch @ 0054ea6c
                       catch() { ... } // from try @ 0054e974 with catch @ 0054ea6c */
          C_Matrix4Mul((float *)local_b0,local_f0,(float *)local_b0);
          local_110 = *(undefined4 *)((long)puVar45 + 0xc);
          local_10c = CONCAT44(-(float)((ulong)*puVar45 >> 0x20),-(float)*puVar45);
          local_104 = -*(float *)(puVar45 + 1);
          Matrix4::FromRotationQuaternion((Matrix4 *)&local_110,extraout_x1);
          C_Matrix4Mul((float *)local_b0,local_f0,(float *)local_b0);
          pfVar25 = *(float **)(lVar47 + lVar43 * 0x60 + 0x48);
          local_f0[0] = *pfVar25;
          local_e0._4_4_ = pfVar25[1];
          fStack_c8 = pfVar25[2];
          local_f0[3] = 0.0;
          local_e0._0_4_ = 0;
          local_f0[1] = 0.0;
          local_f0[2] = 0.0;
          local_d0 = 0;
          uStack_d8 = 0;
          fStack_bc = 0.0;
          local_b8 = 0.0;
          uStack_c4 = 0;
          local_c0 = 0.0;
          local_b4 = 0x3f800000;
          C_Matrix4Mul((float *)local_b0,local_f0,(float *)local_b0);
          lVar43 = lVar42 + lVar40 * 0x90;
          puVar18 = (undefined4 *)(lVar43 + 0x4c);
          puVar30 = puVar18;
          if (puVar18 <= (undefined4 *)(lVar43 + 0x10U)) {
            puVar30 = (undefined4 *)(lVar43 + 0x10U);
          }
          uVar44 = ((ulong)((long)puVar30 + (lVar40 * -0x90 - lVar42) + -0xd) >> 2) + 1;
          plVar26 = local_b0;
          puVar30 = (undefined4 *)(lVar43 + 0xc);
          if (uVar44 < 8) {
LAB_0054ebd8:
            do {
              puVar31 = puVar30 + 1;
              *puVar30 = (int)*plVar26;
              plVar26 = (long *)((long)plVar26 + 4);
              puVar30 = puVar31;
            } while (puVar31 < puVar18);
          }
          else {
            lVar43 = lVar42 + lVar40 * 0x90;
            uVar34 = lVar43 + 0x4cU;
            if (lVar43 + 0x4cU <= lVar43 + 0x10U) {
              uVar34 = lVar43 + 0x10U;
            }
            uVar34 = ((uVar34 + lVar40 * -0x90) - lVar42) - 0xd & 0xfffffffffffffffc;
            if ((lVar43 + 0xcU < ((ulong)local_b0 | 4) + uVar34) &&
               (plVar26 < (long *)(lVar43 + 0xcU + uVar34 + 4))) goto LAB_0054ebd8;
            uVar35 = uVar44 & 0x7ffffffffffffff8;
            lVar43 = lVar42 + lVar40 * 0x90;
            plVar26 = (long *)((long)local_b0 + uVar35 * 4);
            puVar30 = (undefined4 *)(lVar43 + uVar35 * 4 + 0xc);
            plVar36 = (long *)(lVar43 + 0x1c);
            uVar34 = uVar35;
            plVar37 = local_b0 + 2;
            do {
              plVar6 = plVar37 + -1;
              lVar43 = plVar37[-2];
              lVar24 = plVar37[1];
              lVar47 = *plVar37;
              uVar34 = uVar34 - 8;
              plVar37 = plVar37 + 4;
              plVar36[-1] = *plVar6;
              plVar36[-2] = lVar43;
              plVar36[1] = lVar24;
              *plVar36 = lVar47;
              plVar36 = plVar36 + 4;
            } while (uVar34 != 0);
            if (uVar44 != uVar35) goto LAB_0054ebd8;
          }
          Matrix4::Inverse();
          lVar43 = lVar42 + lVar40 * 0x90;
          pfVar25 = (float *)(lVar43 + 0x8c);
          pfVar27 = pfVar25;
          if (pfVar25 <= (float *)(lVar43 + 0x50U)) {
            pfVar27 = (float *)(lVar43 + 0x50U);
          }
          uVar44 = ((ulong)((long)pfVar27 + (lVar40 * -0x90 - lVar42) + -0x4d) >> 2) + 1;
          pfVar27 = local_f0;
          pfVar32 = (float *)(lVar43 + 0x4c);
          if (uVar44 < 8) {
LAB_0054ecc8:
            do {
              pfVar33 = pfVar32 + 1;
              *pfVar32 = *pfVar27;
              pfVar27 = pfVar27 + 1;
              pfVar32 = pfVar33;
            } while (pfVar33 < pfVar25);
          }
          else {
            lVar47 = lVar42 + lVar40 * 0x90;
            uVar34 = lVar47 + 0x8cU;
            if (lVar47 + 0x8cU <= lVar47 + 0x50U) {
              uVar34 = lVar47 + 0x50U;
            }
            uVar34 = ((uVar34 + lVar40 * -0x90) - lVar42) - 0x4d & 0xfffffffffffffffc;
            if ((lVar47 + 0x4cU < ((ulong)local_f0 | 4) + uVar34) &&
               (local_f0 < (float *)(lVar47 + 0x4cU + uVar34 + 4))) goto LAB_0054ecc8;
            uVar35 = uVar44 & 0x7ffffffffffffff8;
            lVar42 = lVar42 + lVar40 * 0x90;
            puVar45 = (undefined8 *)(lVar42 + 0x5c);
            uVar34 = uVar35;
            puVar28 = &local_e0;
            do {
              puVar7 = puVar28 + -1;
              uVar48 = puVar28[-2];
              uVar51 = puVar28[1];
              uVar50 = *puVar28;
              uVar34 = uVar34 - 8;
              puVar28 = puVar28 + 4;
              puVar45[-1] = *puVar7;
              puVar45[-2] = uVar48;
              puVar45[1] = uVar51;
              *puVar45 = uVar50;
              puVar45 = puVar45 + 4;
            } while (uVar34 != 0);
            pfVar27 = local_f0 + uVar35;
            pfVar32 = (float *)(lVar42 + uVar35 * 4 + 0x4c);
            if (uVar44 != uVar35) goto LAB_0054ecc8;
          }
          puVar45 = (undefined8 *)*plVar29;
          puVar28 = (undefined8 *)(in_x0[2] + lVar40 * 0xc);
          *(undefined4 *)(puVar28 + 1) = *(undefined4 *)(puVar45 + 1);
          *puVar28 = *puVar45;
          puVar28 = (undefined8 *)*plVar39;
          uVar48 = *puVar28;
          uVar41 = (uint)lVar40;
          lVar40 = lVar40 + 1;
          puVar45 = (undefined8 *)
                    (in_x0[3] +
                    (-(ulong)((uVar41 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                    (ulong)(uVar41 << 2) << 2));
          puVar45[1] = puVar28[1];
          *puVar45 = uVar48;
        } while (lVar40 < (int)in_x0[4]);
      }
                    /* try { // try from 0054ed2c to 0064ee7b has its CatchHandler @ 0054ed2c
                       catch(type#1 @ 00000000) { ... } // from try @ 0054ed2c with catch @ 0054ed2c
                       catch(type#1 @ 00000000) { ... } // from try @ 0054ee94 with catch @ 0054ed2c
                       catch(type#1 @ 00000000) { ... } // from try @ 0054f038 with catch @ 0054ed2c
                        */
      *in_x8 = local_100;
      in_x8[1] = plStack_f8;
      if ((plStack_f8 != (long *)0x0) && (plStack_f8[1] == 0)) {
        (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
        lVar40 = plStack_f8[2];
        plStack_f8[2] = lVar40 + -1;
        if (lVar40 + -1 == 0) {
          (**(code **)(*plStack_f8 + 0x18))(plStack_f8);
        }
      }
      goto LAB_0054ed78;
    }
  }
  *in_x8 = 0;
  in_x8[1] = 0;
LAB_0054ed78:
  operator_delete__(__s);
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


