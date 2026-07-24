/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00543ba0
 * Function: Caver::FastVector<std::string>::Resize
 * Signature: undefined __thiscall Resize(FastVector<std::string> * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FastVector<std::string >::Resize(int) */

void __thiscall Caver::FastVector<std::string>::Resize(FastVector<std::string> *this,int param_1)

{
  ulong uVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  long lVar6;
  undefined *puVar7;
  ulong *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong *puVar11;
  int *piVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  ulong *puVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  
  lVar6 = tpidr_el0;
  lVar10 = *(long *)(lVar6 + 0x28);
  iVar16 = *(int *)this;
  if (param_1 < *(int *)this) {
    *(int *)this = param_1;
    iVar16 = param_1;
  }
  puVar7 = PTR_DAT_007e5de8;
  puVar2 = PTR_pthread_create_007e4e78;
  if (param_1 == 0) {
    plVar21 = *(long **)(this + 8);
                    /* try { // try from 00543d74 to 00643d7b has its CatchHandler @ 00544908 */
    if (plVar21 != (long *)0x0) {
                    /* try { // try from 00543d7c to 00643de3 has its CatchHandler @ 00544a54 */
      lVar22 = plVar21[-1];
      if (lVar22 != 0) {
        plVar19 = plVar21 + lVar22;
        do {
          while( true ) {
            plVar19 = plVar19 + -1;
            puVar9 = (undefined *)(*plVar19 + -0x18);
            if (puVar9 != puVar7) break;
LAB_00543da8:
            if (plVar19 == plVar21) goto LAB_00543df4;
          }
          piVar12 = (int *)(*plVar19 + -8);
          if (puVar2 == (undefined *)0x0) {
            iVar16 = *piVar12;
            *piVar12 = iVar16 + -1;
          }
          else {
            do {
              iVar16 = *piVar12;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
              if (bVar4) {
                *piVar12 = iVar16 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (0 < iVar16) goto LAB_00543da8;
          operator_delete(puVar9);
        } while (plVar19 != plVar21);
      }
LAB_00543df4:
                    /* try { // try from 00543df4 to 00643e07 has its CatchHandler @ 00544904 */
      operator_delete__(plVar21 + -1);
      *(undefined8 *)(this + 8) = 0;
    }
    *(undefined4 *)(this + 4) = 0;
    goto LAB_00543e04;
  }
  if (*(int *)(this + 4) == param_1) goto LAB_00543e04;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (long)param_1;
  uVar20 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)param_1 << 3;
  uVar1 = uVar20 + 8;
  if (SUB168(auVar5 * ZEXT816(8),8) != 0 || 0xfffffffffffffff7 < uVar20) {
    uVar1 = 0xffffffffffffffff;
  }
  puVar8 = operator_new__(uVar1);
  puVar18 = puVar8 + 1;
  *puVar8 = (long)param_1;
  uVar1 = (uVar20 - 8 >> 3) + 1;
  puVar11 = puVar18;
                    /* try { // try from 00543c40 to 00643c67 has its CatchHandler @ 00544700 */
  if (uVar1 < 4) {
LAB_00543c80:
                    /* try { // try from 00543c80 to 00643c8b has its CatchHandler @ 00544a04 */
    puVar11 = puVar11 + -1;
    puVar2 = PTR_DAT_007e5de8 + 0x18;
    do {
      puVar11 = puVar11 + 1;
      *puVar11 = (ulong)puVar2;
    } while ((ulong *)((long)puVar8 + uVar20) != puVar11);
  }
  else {
    uVar13 = uVar1 & 0x3ffffffffffffffc;
    puVar14 = puVar8 + 3;
    puVar11 = puVar18 + uVar13;
    puVar2 = PTR_DAT_007e5de8 + 0x18;
    uVar15 = uVar13;
    do {
      puVar14[-1] = (ulong)puVar2;
      puVar14[-2] = (ulong)puVar2;
      puVar14[1] = (ulong)puVar2;
      *puVar14 = (ulong)puVar2;
                    /* try { // try from 00543c6c to 00643c77 has its CatchHandler @ 00544a04 */
      uVar15 = uVar15 - 4;
      puVar14 = puVar14 + 4;
    } while (uVar15 != 0);
                    /* try { // try from 00543c78 to 00643c7f has its CatchHandler @ 00544970 */
    if (uVar1 != uVar13) goto LAB_00543c80;
  }
  plVar21 = *(long **)(this + 8);
  if (plVar21 != (long *)0x0) {
    if (0 < iVar16) {
      lVar17 = 0;
      lVar22 = 0;
      do {
                    /* try { // try from 00543cb8 to 00643cbf has its CatchHandler @ 00544920 */
        FUN_0066a6a8((long)puVar18 + lVar17,(long)plVar21 + lVar17);
        plVar21 = *(long **)(this + 8);
        lVar22 = lVar22 + 1;
        lVar17 = lVar17 + 8;
      } while (lVar22 < *(int *)this);
      if (plVar21 == (long *)0x0) goto LAB_00543d64;
    }
                    /* try { // try from 00543ce0 to 00643d07 has its CatchHandler @ 005446fc */
    puVar7 = PTR_DAT_007e5de8;
    puVar2 = PTR_pthread_create_007e4e78;
    lVar22 = plVar21[-1];
    if (lVar22 != 0) {
      plVar19 = plVar21 + lVar22;
      do {
        while( true ) {
          plVar19 = plVar19 + -1;
          puVar9 = (undefined *)(*plVar19 + -0x18);
          if (puVar9 != puVar7) break;
LAB_00543d10:
          if (plVar19 == plVar21) goto LAB_00543d5c;
        }
        piVar12 = (int *)(*plVar19 + -8);
        if (puVar2 == (undefined *)0x0) {
          iVar16 = *piVar12;
                    /* try { // try from 00543d40 to 00643d73 has its CatchHandler @ 00544a54 */
          *piVar12 = iVar16 + -1;
        }
        else {
          do {
            iVar16 = *piVar12;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar4) {
              *piVar12 = iVar16 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (0 < iVar16) goto LAB_00543d10;
        operator_delete(puVar9);
      } while (plVar19 != plVar21);
    }
LAB_00543d5c:
    operator_delete__(plVar21 + -1);
  }
LAB_00543d64:
  *(int *)(this + 4) = param_1;
  *(ulong **)(this + 8) = puVar18;
LAB_00543e04:
  if (*(long *)(lVar6 + 0x28) != lVar10) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00543e34 to 00643e43 has its CatchHandler @ 00544998 */
    __stack_chk_fail();
  }
  return;
}


