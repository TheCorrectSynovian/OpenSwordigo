/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00622158
 * Function: FUN_00622158
 * Signature: undefined FUN_00622158(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00622158(long param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  if (puVar4 != (undefined8 *)0x0) {
                    /* catch() { ... } // from try @ 00620b4c with catch @ 0062217c */
    piVar3 = (int *)((long)puVar4 + 0x14);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_006221cc;
    do {
      do {
        iVar6 = *piVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        puVar5 = puVar4;
      } while (cVar1 != '\0');
      while( true ) {
        if (iVar6 != 0) goto LAB_0062219c;
        puVar4 = (undefined8 *)*puVar5;
        operator_delete(puVar5);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0062219c;
        piVar3 = (int *)((long)puVar4 + 0x14);
        if (PTR_pthread_create_007e4e78 != (undefined *)0x0) break;
LAB_006221cc:
        iVar6 = *(int *)((long)puVar4 + 0x14);
        *(int *)((long)puVar4 + 0x14) = iVar6 + -1;
        puVar5 = puVar4;
      }
    } while( true );
  }
LAB_0062219c:
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* catch() { ... } // from try @ 00620aa0 with catch @ 006221ac */
  return;
}


