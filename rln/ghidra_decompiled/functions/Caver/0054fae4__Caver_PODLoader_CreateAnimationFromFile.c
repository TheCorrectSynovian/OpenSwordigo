/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054fae4
 * Function: Caver::PODLoader::CreateAnimationFromFile
 * Signature: undefined __cdecl CreateAnimationFromFile(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PODLoader::CreateAnimationFromFile(std::string const&) */

void Caver::PODLoader::CreateAnimationFromFile(string *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long lVar11;
  ulong *puVar12;
  int iVar13;
  char *pcVar14;
  void *__s;
  string *psVar15;
  KeyframeAnimation *pKVar16;
  long *plVar17;
  ulong *puVar18;
  float *pfVar19;
  string *in_x1;
  ulong *puVar20;
  undefined8 *in_x8;
  ulong *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined8 *puVar28;
  ulong uVar29;
  long *plVar30;
  long lVar31;
  long lVar32;
  undefined8 uVar33;
  float fVar34;
  long *local_110;
  KeyframeAnimation *local_108;
  long *local_100;
  undefined1 auStack_f8 [8];
  CPVRTModelPOD aCStack_f0 [72];
  uint local_a8;
  long local_a0;
  int local_78;
  long local_68;
  
  lVar11 = tpidr_el0;
  local_68 = *(long *)(lVar11 + 0x28);
  CPVRTModelPOD::CPVRTModelPOD(aCStack_f0);
  pcVar14 = (char *)NewByteBufferFromAndroidAsset(in_x1,(uint *)&local_108);
                    /* try { // try from 0054fb34 to 0064fb97 has its CatchHandler @ 0054fb34
                       catch() { ... } // from try @ 0054fb34 with catch @ 0054fb34
                       catch() { ... } // from try @ 0054fb9c with catch @ 0054fb34 */
  if ((pcVar14 == (char *)0x0) ||
     (iVar13 = CPVRTModelPOD::ReadFromMemory
                         (aCStack_f0,pcVar14,(ulong)local_108 & 0xffffffff,(char *)0x0,0,(char *)0x0
                          ,0), iVar13 != 0)) {
    *in_x8 = 0;
    in_x8[1] = 0;
    goto LAB_0054fb60;
  }
                    /* try { // try from 0054fb98 to 0064fb9b has its CatchHandler @ 0054fcb8 */
                    /* try { // try from 0054fb9c to 0064fccb has its CatchHandler @ 0054fb34 */
  operator_delete__(pcVar14);
  uVar25 = *(uint *)(param_1 + 0x20);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (long)(int)uVar25;
  uVar22 = (long)(int)uVar25 << 2;
  if (SUB168(auVar9 * ZEXT816(4),8) != 0) {
    uVar22 = 0xffffffffffffffff;
  }
  __s = operator_new__(uVar22);
  if (0 < (int)uVar25) {
    memset(__s,0xff,(ulong)uVar25 << 2);
  }
  puVar1 = PTR_DAT_007e5de8;
  if (local_a8 != 0) {
    uVar22 = 0;
    do {
      FUN_00666bb8(&local_108,*(undefined8 *)(local_a0 + uVar22 * 0x60 + 8),auStack_f8);
      psVar15 = (string *)
                std::
                _Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                ::find((_Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                        *)(param_1 + 0x70),(string *)&local_108);
      if (local_108 + -0x18 != (KeyframeAnimation *)puVar1) {
        pKVar16 = local_108 + -8;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar13 = *(int *)pKVar16;
          *(int *)pKVar16 = iVar13 + -1;
        }
        else {
          do {
            iVar13 = *(int *)pKVar16;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(pKVar16,0x10);
            if (bVar8) {
              *(int *)pKVar16 = iVar13 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        if (iVar13 < 1) {
          operator_delete(local_108 + -0x18);
        }
      }
      if (param_1 + 0x78 != psVar15) {
        *(int *)((long)__s + (long)*(int *)(psVar15 + 0x28) * 4) = (int)uVar22;
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < local_a8);
  }
  iVar13 = local_78;
  if (local_78 == 0) {
    iVar13 = 1;
  }
                    /* catch() { ... } // from try @ 0054fb98 with catch @ 0054fcb8 */
  pKVar16 = operator_new(0x28);
  puVar1 = PTR_DAT_007e5de8;
                    /* try { // try from 0054fccc to 0064fd0b has its CatchHandler @ 0054fccc
                       catch() { ... } // from try @ 0054fccc with catch @ 0054fccc
                       catch() { ... } // from try @ 0054fd98 with catch @ 0054fccc
                       catch() { ... } // from try @ 0054fe64 with catch @ 0054fccc */
  *(undefined8 *)(pKVar16 + 0x10) = 0;
  *(undefined8 *)(pKVar16 + 0x18) = 0;
  *(undefined **)pKVar16 = puVar1 + 0x18;
  *(undefined8 *)(pKVar16 + 8) = 0x41c0000000000000;
  plVar17 = operator_new(0x28);
  puVar1 = PTR_vtable_007e6ab8 + 0x10;
  plVar17[3] = 0;
  *(long **)(pKVar16 + 0x18) = plVar17;
  plVar17[2] = 1;
  plVar17[1] = 1;
  *plVar17 = (long)puVar1;
                    /* try { // try from 0054fd0c to 0064fd13 has its CatchHandler @ 0054fe70 */
  *(undefined4 *)(pKVar16 + 0x20) = 0;
  local_108 = pKVar16;
  boost::detail::shared_count::shared_count<Caver::KeyframeAnimation>
            ((shared_count *)&local_100,pKVar16);
  boost::detail::sp_enable_shared_from_this(&local_108,pKVar16,pKVar16);
  *(int *)(local_108 + 8) = iVar13;
  if (0.0 < *(float *)(local_108 + 0xc)) {
    *(float *)(local_108 + 0x20) = (float)(iVar13 + -1) / *(float *)(local_108 + 0xc);
  }
  uVar29 = (ulong)iVar13;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar29;
  *(undefined4 *)(local_108 + 0xc) = 0x41c00000;
                    /* try { // try from 0054fd70 to 0064fd97 has its CatchHandler @ 0054fe18 */
  *(float *)(local_108 + 0x20) = (float)(iVar13 + -1) / 24.0;
  uVar22 = (long)iVar13 * 0x10 + 8;
  if (SUB168(auVar10 * ZEXT816(0x10),8) != 0 || 0xfffffffffffffff7 < (ulong)((long)iVar13 * 0x10)) {
    uVar22 = 0xffffffffffffffff;
  }
  puVar18 = operator_new__(uVar22);
                    /* try { // try from 0054fd98 to 0064fe3b has its CatchHandler @ 0054fccc */
  puVar20 = puVar18 + 1;
  *puVar18 = uVar29;
  uVar22 = (uVar29 * 0x10 - 0x10 >> 4) + 1;
  puVar21 = puVar20;
  if (uVar22 < 2) {
LAB_0054fde8:
    do {
      *(undefined4 *)puVar21 = 0;
      puVar21[1] = 0;
      puVar21 = puVar21 + 2;
    } while (puVar21 != puVar20 + uVar29 * 2);
  }
  else {
    uVar23 = uVar22 & 0x1ffffffffffffffe;
    puVar21 = puVar20 + uVar23 * 2;
    uVar24 = uVar23;
    puVar12 = puVar18;
    do {
      *(undefined4 *)(puVar12 + 1) = 0;
      *(undefined4 *)(puVar12 + 3) = 0;
      puVar12[2] = 0;
      puVar12[4] = 0;
      uVar24 = uVar24 - 2;
      puVar12 = puVar12 + 4;
    } while (uVar24 != 0);
    if (uVar22 != uVar23) goto LAB_0054fde8;
  }
  boost::detail::shared_count::
  shared_count<Caver::FloatDataBuffer*,boost::checked_array_deleter<Caver::FloatDataBuffer>>
            ((shared_count *)&local_110);
  if (0 < iVar13) {
                    /* catch() { ... } // from try @ 0054fd70 with catch @ 0054fe18 */
    lVar31 = 0;
    lVar32 = 0;
    do {
      FloatDataBuffer::Resize
                ((FloatDataBuffer *)((long)puVar20 + lVar31),*(int *)(param_1 + 0x20) * 7);
      lVar32 = lVar32 + 1;
                    /* try { // try from 0054fe3c to 0064fe63 has its CatchHandler @ 0054fe6c */
      lVar31 = lVar31 + 0x10;
    } while (lVar32 < (long)uVar29);
  }
  pKVar16 = local_108;
  plVar17 = local_110;
  iVar5 = *(int *)(param_1 + 0x20);
  if (0 < iVar5) {
    lVar32 = 0;
                    /* try { // try from 0054fe64 to 0064fe7b has its CatchHandler @ 0054fccc */
    do {
                    /* catch() { ... } // from try @ 0054fe3c with catch @ 0054fe6c */
      iVar6 = *(int *)((long)__s + lVar32 * 4);
                    /* catch() { ... } // from try @ 0054fd0c with catch @ 0054fe70 */
      if (iVar6 < 0) {
        uVar25 = 0;
        uVar27 = 0;
        uVar26 = 0;
        puVar28 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar32 * 0xc);
        pfVar19 = (float *)(*(long *)(param_1 + 0x18) + (long)((int)lVar32 << 2) * 4);
      }
      else {
        lVar31 = local_a0 + (long)iVar6 * 0x60;
                    /* try { // try from 0054fe7c to 0064fe7f has its CatchHandler @ 0054fe80 */
        puVar28 = *(undefined8 **)(lVar31 + 0x28);
                    /* catch() { ... } // from try @ 0054fe7c with catch @ 0054fe80 */
        pfVar19 = *(float **)(lVar31 + 0x38);
                    /* try { // try from 0054fe84 to 0064fe87 has its CatchHandler @ 0054fe8c */
        uVar25 = *(uint *)(lVar31 + 0x18) & 1;
                    /* catch() { ... } // from try @ 0054fe84 with catch @ 0054fe8c */
        uVar26 = *(uint *)(lVar31 + 0x14) >> 0x1f ^ 1;
                    /* try { // try from 0054fe90 to 0064ff4b has its CatchHandler @ 0054fe90
                       catch() { ... } // from try @ 0054fe90 with catch @ 0054fe90
                       catch() { ... } // from try @ 0054ff58 with catch @ 0054fe90
                       catch() { ... } // from try @ 0054ffc0 with catch @ 0054fe90
                       catch() { ... } // from try @ 00550198 with catch @ 0054fe90
                       catch() { ... } // from try @ 005502d4 with catch @ 0054fe90
                       catch() { ... } // from try @ 0055034c with catch @ 0054fe90 */
        uVar27 = *(uint *)(lVar31 + 0x18) >> 1 & 1;
      }
      if (0 < iVar13) {
        lVar31 = 0;
        puVar21 = puVar18;
        do {
          puVar21 = puVar21 + 2;
          uVar22 = *puVar21;
          if (uVar26 == 0) {
            fVar34 = *(float *)(param_1 + 0xac);
            uVar33 = CONCAT44(((float)((ulong)*puVar28 >> 0x20) -
                              (float)((ulong)*(undefined8 *)(param_1 + 0xa0) >> 0x20)) * fVar34,
                              ((float)*puVar28 - (float)*(undefined8 *)(param_1 + 0xa0)) * fVar34);
            fVar34 = (*(float *)(puVar28 + 1) - *(float *)(param_1 + 0xa8)) * fVar34;
          }
          else {
            fVar34 = *(float *)(param_1 + 0xac);
            uVar33 = CONCAT44((float)((ulong)*puVar28 >> 0x20) * fVar34,(float)*puVar28 * fVar34);
            fVar34 = fVar34 * *(float *)(puVar28 + 1);
          }
          puVar2 = (undefined8 *)(uVar22 + lVar32 * 0x1c);
          *puVar2 = uVar33;
          *(float *)(puVar2 + 1) = fVar34;
          pfVar3 = (float *)(uVar22 + (lVar32 * 7 + 3) * 4);
          lVar31 = lVar31 + 1;
          *pfVar3 = pfVar19[3];
          puVar2 = (undefined8 *)((long)puVar28 + 0xc);
          if (uVar25 == 0) {
            puVar2 = puVar28;
          }
                    /* try { // try from 0054ff4c to 0064ff57 has its CatchHandler @ 00550288 */
          pfVar3[1] = -*pfVar19;
                    /* try { // try from 0054ff58 to 0064ffbb has its CatchHandler @ 0054fe90 */
          pfVar3[2] = -pfVar19[1];
          pfVar4 = pfVar19 + 4;
          if (uVar27 == 0) {
            pfVar4 = pfVar19;
          }
          pfVar3[3] = -pfVar19[2];
          pfVar19 = pfVar4;
          puVar28 = puVar2;
        } while (lVar31 < (long)uVar29);
      }
      lVar32 = lVar32 + 1;
    } while (lVar32 < iVar5);
  }
  if (local_110 != (long *)0x0) {
    local_110[1] = local_110[1] + 1;
  }
  plVar30 = *(long **)(local_108 + 0x18);
  *(ulong **)(local_108 + 0x10) = puVar20;
  if (local_110 != plVar30) {
    if (local_110 != (long *)0x0) {
      local_110[1] = local_110[1] + 1;
    }
                    /* try { // try from 0054ffbc to 0064ffbf has its CatchHandler @ 005502d8 */
                    /* try { // try from 0054ffc0 to 0064ffef has its CatchHandler @ 0054fe90 */
    if ((plVar30 != (long *)0x0) &&
       (lVar32 = plVar30[1], plVar30[1] = lVar32 + -1, lVar32 + -1 == 0)) {
      (**(code **)(*plVar30 + 0x10))(plVar30);
      lVar32 = plVar30[2];
      plVar30[2] = lVar32 + -1;
      if (lVar32 + -1 == 0) {
                    /* try { // try from 0054fff0 to 0064fffb has its CatchHandler @ 005502f0 */
        (**(code **)(*plVar30 + 0x18))(plVar30);
      }
    }
    *(long **)(pKVar16 + 0x18) = plVar17;
  }
  if ((plVar17 != (long *)0x0) && (lVar32 = plVar17[1], plVar17[1] = lVar32 + -1, lVar32 + -1 == 0))
  {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    lVar32 = plVar17[2];
    plVar17[2] = lVar32 + -1;
    if (lVar32 + -1 == 0) {
                    /* try { // try from 0055003c to 00650063 has its CatchHandler @ 00550238 */
      (**(code **)(*plVar17 + 0x18))(plVar17);
    }
  }
  *in_x8 = local_108;
  in_x8[1] = local_100;
  if (local_100 != (long *)0x0) {
    local_100[1] = local_100[1] + 1;
  }
  if ((local_110 != (long *)0x0) &&
     (lVar32 = local_110[1], local_110[1] = lVar32 + -1, lVar32 + -1 == 0)) {
                    /* try { // try from 00550084 to 006500ab has its CatchHandler @ 005502f0 */
    (**(code **)(*local_110 + 0x10))(local_110);
    lVar32 = local_110[2];
    local_110[2] = lVar32 + -1;
    if (lVar32 + -1 == 0) {
      (**(code **)(*local_110 + 0x18))(local_110);
    }
  }
                    /* try { // try from 005500b0 to 006500bb has its CatchHandler @ 005502ec */
  if ((local_100 != (long *)0x0) &&
     (lVar32 = local_100[1], local_100[1] = lVar32 + -1, lVar32 + -1 == 0)) {
    (**(code **)(*local_100 + 0x10))(local_100);
    lVar32 = local_100[2];
    local_100[2] = lVar32 + -1;
    if (lVar32 + -1 == 0) {
      (**(code **)(*local_100 + 0x18))(local_100);
    }
  }
  operator_delete__(__s);
LAB_0054fb60:
  CPVRTModelPOD::~CPVRTModelPOD(aCStack_f0);
  if (*(long *)(lVar11 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


