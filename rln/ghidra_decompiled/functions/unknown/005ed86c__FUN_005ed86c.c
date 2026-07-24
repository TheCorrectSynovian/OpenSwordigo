/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ed86c
 * Function: FUN_005ed86c
 * Signature: undefined FUN_005ed86c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_005ed86c(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  byte bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x20);
  lVar6 = 0;
  plVar1 = *(long **)(lVar7 + 0xb0);
  plVar2 = (long *)**(long **)(lVar7 + 0xb0);
  do {
    while( true ) {
      while( true ) {
        if (plVar2 == (long *)0x0) {
          return lVar6;
        }
        bVar4 = *(byte *)((long)plVar2 + 9);
                    /* try { // try from 005ed8b0 to 006ed8d7 has its CatchHandler @ 005eda44 */
        if (((bVar4 >> 3 & 1) == 0) && (param_2 != 0 || (bVar4 & 3) != 0)) break;
        plVar1 = plVar2;
        plVar2 = (long *)*plVar2;
      }
      lVar3 = plVar2[2];
      if ((lVar3 != 0) && ((*(byte *)(lVar3 + 10) >> 2 & 1) == 0)) break;
LAB_005ed928:
      *(byte *)((long)plVar2 + 9) = bVar4 | 8;
      plVar1 = plVar2;
      plVar2 = (long *)*plVar2;
    }
    lVar3 = FUN_005f4e8c(lVar3,2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x138));
    if (lVar3 == 0) {
      bVar4 = *(byte *)((long)plVar2 + 9);
      goto LAB_005ed928;
    }
    lVar3 = plVar2[4];
    *(byte *)((long)plVar2 + 9) = *(byte *)((long)plVar2 + 9) | 8;
    *plVar1 = *plVar2;
                    /* try { // try from 005ed8f8 to 006ed91f has its CatchHandler @ 005eda34 */
    lVar6 = lVar6 + lVar3 + 0x28;
    plVar5 = plVar2;
    if (*(undefined8 **)(lVar7 + 0x50) != (undefined8 *)0x0) {
      *plVar2 = **(undefined8 **)(lVar7 + 0x50);
      plVar5 = *(long **)(lVar7 + 0x50);
    }
    *plVar5 = (long)plVar2;
    *(long **)(lVar7 + 0x50) = plVar2;
    plVar2 = (long *)*plVar1;
  } while( true );
}


