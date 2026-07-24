/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00681080
 * Function: FUN_00681080
 * Signature: undefined FUN_00681080(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00681080(void *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined1 auStack_3d0 [8];
  long local_3c8;
  long alStack_3c0 [31];
  long local_2c8;
  ulong local_80;
  char acStack_68 [31];
  char local_49;
  
  memcpy(alStack_3c0,param_1,0x3c0);
                    /* catch() { ... } // from try @ 00680f78 with catch @ 006810c8 */
  if ((((local_80 >> 0x3e & 1) == 0) || (local_49 == '\0')) && (local_2c8 == 0)) {
                    /* catch() { ... } // from try @ 00680ff8 with catch @ 006810dc */
    FUN_0067fecc(alStack_3c0,*(undefined8 *)((long)param_1 + 0x310),auStack_3d0);
  }
  if ((*(ulong *)((long)param_1 + 0x340) >> 0x3e & 1) != 0) {
    *(undefined1 *)((long)param_1 + 0x377) = 0;
  }
  lVar2 = param_2[200];
  *(undefined8 *)((long)param_1 + 0xf8) = 0;
  if ((int)lVar2 == 1) {
    lVar2 = FUN_0067ff08(alStack_3c0,(int)param_2[0xc6]);
    lVar2 = lVar2 + param_2[0xc5];
  }
  else {
    if ((int)lVar2 != 2) {
LAB_006811c8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = FUN_0067fc60(param_2[199],&local_3c8);
    lVar2 = FUN_00680acc(lVar2,lVar2 + local_3c8,alStack_3c0,0);
  }
                    /* catch() { ... } // from try @ 00680f68 with catch @ 00681148
                       catch() { ... } // from try @ 00680f80 with catch @ 00681148 */
  *(long *)((long)param_1 + 0x310) = lVar2;
  puVar5 = (undefined1 *)((long)param_1 + 0x358);
  lVar4 = 0;
                    /* try { // try from 0068116c to 00781193 has its CatchHandler @ 0068119c */
  plVar6 = param_2;
  do {
    switch((int)plVar6[1]) {
    case 1:
                    /* try { // try from 00681194 to 0078119f has its CatchHandler @ 00680f14 */
      lVar3 = lVar2 + *plVar6;
                    /* catch() { ... } // from try @ 0068116c with catch @ 0068119c */
      break;
    case 2:
                    /* try { // try from 006811a0 to 00781233 has its CatchHandler @ 006811a0
                       catch() { ... } // from try @ 006811a0 with catch @ 006811a0
                       catch() { ... } // from try @ 00681364 with catch @ 006811a0
                       catch() { ... } // from try @ 0068149c with catch @ 006811a0 */
      if (acStack_68[(int)*plVar6] != '\0') {
        lVar3 = FUN_0067ff08(alStack_3c0);
        goto LAB_006811b8;
      }
      lVar3 = alStack_3c0[(int)*plVar6];
      break;
    case 3:
      lVar3 = FUN_0067fc60(*plVar6,&local_3c8);
      lVar3 = FUN_00680acc(lVar3,lVar3 + local_3c8,alStack_3c0,lVar2);
      break;
    case 4:
      lVar3 = lVar2 + *plVar6;
      goto LAB_006811b8;
    case 5:
      lVar3 = FUN_0067fc60(*plVar6,&local_3c8);
      lVar3 = FUN_00680acc(lVar3,lVar3 + local_3c8,alStack_3c0,lVar2);
LAB_006811b8:
      if ((byte)(&DAT_007fe360)[lVar4] < 9) {
                    /* try { // try from 00681234 to 0078129f has its CatchHandler @ 00681454 */
        *puVar5 = 1;
        goto LAB_00681238;
      }
      goto LAB_006811c8;
    default:
      goto switchD_00681190_default;
    }
    if ((*(ulong *)((long)param_1 + 0x340) >> 0x3e & 1) != 0) {
      *puVar5 = 0;
    }
LAB_00681238:
    *(long *)((long)param_1 + lVar4 * 8) = lVar3;
switchD_00681190_default:
    lVar4 = lVar4 + 1;
    plVar6 = plVar6 + 2;
    puVar5 = puVar5 + 1;
    if (lVar4 == 0x62) {
      uVar1 = *(ulong *)((long)param_1 + 0x340) & 0x7fffffffffffffff;
      if (*(char *)((long)param_2 + 0x673) != '\0') {
        uVar1 = *(ulong *)((long)param_1 + 0x340) | 0x8000000000000000;
      }
      *(ulong *)((long)param_1 + 0x340) = uVar1;
      return;
    }
  } while( true );
}


