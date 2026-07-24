/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00528df4
 * Function: std::vector<std::string,std::allocator<std::string>>::operator=
 * Signature: undefined __thiscall operator=(vector<std::string,std::allocator<std::string>> * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00528e58 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* std::vector<std::string, std::allocator<std::string >
   >::TEMPNAMEPLACEHOLDERVALUE(std::vector<std::string, std::allocator<std::string > > const&) */

vector<std::string,std::allocator<std::string>> * __thiscall
std::vector<std::string,std::allocator<std::string>>::operator=
          (vector<std::string,std::allocator<std::string>> *this,vector *param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  string *psVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  string *psVar18;
  long lVar19;
  long *plVar20;
  string *psVar21;
  long lVar22;
  
                    /* catch() { ... } // from try @ 00528e44 with catch @ 00528e04 */
  lVar3 = tpidr_el0;
  lVar11 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00528e28 to 00628e2b has its CatchHandler @ 00528e38 */
  if (param_1 != (vector *)this) {
    lVar19 = *(long *)param_1;
    psVar10 = *(string **)(param_1 + 8);
    psVar18 = *(string **)this;
                    /* catch() { ... } // from try @ 00528e28 with catch @ 00528e38 */
    uVar15 = (long)psVar10 - lVar19;
                    /* try { // try from 00528e3c to 00628e43 has its CatchHandler @ 00528e4c */
    uVar17 = (long)uVar15 >> 3;
                    /* try { // try from 00528e44 to 00628e4f has its CatchHandler @ 00528e04 */
    if ((ulong)(*(long *)(this + 0x10) - (long)psVar18 >> 3) < uVar17) {
                    /* catch() { ... } // from try @ 00528e3c with catch @ 00528e4c */
                    /* try { // try from 00528e50 to 00628ed3 has its CatchHandler @ 00528e50
                       catch(type#1 @ 00000000) { ... } // from try @ 00528e50 with catch @ 00528e50
                       catch(type#1 @ 00000000) { ... } // from try @ 00528ef0 with catch @ 00528e50
                       catch(type#1 @ 00000000) { ... } // from try @ 00528f14 with catch @ 00528e50
                        */
      psVar18 = _M_allocate_and_copy<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>>
                          (this,uVar17,lVar19);
      puVar6 = PTR_DAT_007e5de8;
      puVar5 = PTR_pthread_create_007e4e78;
      plVar20 = *(long **)this;
      plVar1 = *(long **)(this + 8);
      if (plVar20 != plVar1) {
        do {
          puVar8 = (undefined *)(*plVar20 + -0x18);
          if (puVar8 != puVar6) {
                    /* catch() { ... } // from try @ 00528f5c with catch @ 00528f38 */
            piVar13 = (int *)(*plVar20 + -8);
            if (puVar5 == (undefined *)0x0) {
              iVar14 = *piVar13;
                    /* try { // try from 00528f58 to 00628f5b has its CatchHandler @ 00528f6c */
                    /* try { // try from 00528f5c to 00628f7f has its CatchHandler @ 00528f38 */
              *piVar13 = iVar14 + -1;
            }
            else {
              do {
                iVar14 = *piVar13;
                cVar2 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar13,0x10);
                if (bVar7) {
                  *piVar13 = iVar14 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            if (iVar14 < 1) {
                    /* catch() { ... } // from try @ 00528f58 with catch @ 00528f6c */
              operator_delete(puVar8);
            }
          }
          plVar20 = plVar20 + 1;
        } while (plVar20 != plVar1);
        plVar20 = *(long **)this;
      }
      if (plVar20 != (long *)0x0) {
        operator_delete(plVar20);
      }
      *(string **)this = psVar18;
      *(string **)(this + 0x10) = psVar18 + uVar17 * 8;
      puVar5 = PTR_pthread_create_007e4e78;
      puVar6 = PTR_DAT_007e5de8;
    }
    else {
      psVar21 = *(string **)(this + 8);
      uVar16 = (long)psVar21 - (long)psVar18;
      uVar12 = (long)uVar16 >> 3;
      if (uVar12 < uVar17) {
        if (0 < (long)uVar16) {
          lVar22 = (uVar16 >> 3) + 1;
          do {
            FUN_0066a6a8(psVar18,lVar19);
            lVar22 = lVar22 + -1;
            lVar19 = lVar19 + 8;
            psVar18 = psVar18 + 8;
          } while (1 < lVar22);
          psVar21 = *(string **)(this + 8);
          lVar19 = *(long *)param_1;
          psVar10 = *(string **)(param_1 + 8);
          uVar12 = (long)psVar21 - *(long *)this >> 3;
        }
                    /* try { // try from 00528ed4 to 00628eef has its CatchHandler @ 00528f08 */
        __uninitialized_copy<false>::__uninit_copy<std::string*,std::string*>
                  ((string *)(lVar19 + uVar12 * 8),psVar10,psVar21);
        puVar5 = PTR_pthread_create_007e4e78;
        puVar6 = PTR_DAT_007e5de8;
      }
      else {
        puVar5 = PTR_pthread_create_007e4e78;
        puVar6 = PTR_DAT_007e5de8;
        if (0 < (long)uVar15) {
                    /* try { // try from 00528ef0 to 00628f0b has its CatchHandler @ 00528e50 */
          lVar22 = (uVar15 >> 3) + 1;
          do {
            FUN_0066a6a8(psVar18,lVar19);
            lVar22 = lVar22 + -1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00528ed4 with catch @ 00528f08
                        */
            lVar19 = lVar19 + 8;
                    /* try { // try from 00528f0c to 00628f13 has its CatchHandler @ 00528f1c */
            psVar18 = psVar18 + 8;
                    /* try { // try from 00528f14 to 00628f1f has its CatchHandler @ 00528e50 */
          } while (1 < lVar22);
          psVar21 = *(string **)(this + 8);
          puVar5 = PTR_pthread_create_007e4e78;
          puVar6 = PTR_DAT_007e5de8;
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00528f0c with catch @ 00528f1c
                        */
        for (; puVar4 = PTR_DAT_007e5de8, puVar8 = PTR_pthread_create_007e4e78, psVar18 != psVar21;
            psVar18 = psVar18 + 8) {
          puVar9 = (undefined *)(*(long *)psVar18 + -0x18);
          bVar7 = puVar9 != PTR_DAT_007e5de8;
          PTR_DAT_007e5de8 = puVar6;
          if (bVar7) {
            piVar13 = (int *)(*(long *)psVar18 + -8);
            bVar7 = PTR_pthread_create_007e4e78 == (undefined *)0x0;
            PTR_pthread_create_007e4e78 = puVar5;
            if (bVar7) {
              iVar14 = *piVar13;
              *piVar13 = iVar14 + -1;
            }
            else {
              do {
                iVar14 = *piVar13;
                cVar2 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar13,0x10);
                if (bVar7) {
                  *piVar13 = iVar14 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            puVar5 = PTR_pthread_create_007e4e78;
            if (iVar14 < 1) {
              operator_delete(puVar9);
              puVar5 = PTR_pthread_create_007e4e78;
            }
          }
          PTR_pthread_create_007e4e78 = puVar5;
          puVar5 = PTR_pthread_create_007e4e78;
          puVar6 = PTR_DAT_007e5de8;
          PTR_DAT_007e5de8 = puVar4;
          PTR_pthread_create_007e4e78 = puVar8;
        }
      }
    }
    PTR_DAT_007e5de8 = puVar6;
    PTR_pthread_create_007e4e78 = puVar5;
    *(ulong *)(this + 8) = *(long *)this + uVar17 * 8;
  }
  if (*(long *)(lVar3 + 0x28) != lVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}


