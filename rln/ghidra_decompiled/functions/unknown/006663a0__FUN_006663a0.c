/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006663a0
 * Function: FUN_006663a0
 * Signature: undefined FUN_006663a0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_006663a0(char *param_1,long param_2,char *param_3,undefined8 *param_4)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  char *pcVar7;
  
                    /* try { // try from 006663a8 to 007663b3 has its CatchHandler @ 00665968 */
                    /* catch() { ... } // from try @ 006662c0 with catch @ 006663b0 */
  pcVar1 = param_1 + param_2 + -1;
  puVar8 = (undefined8 *)*param_4;
  lVar11 = param_4[1];
  iVar10 = *(int *)(param_4 + 3);
  pcVar6 = param_1;
LAB_006663e8:
  do {
    cVar3 = *param_3;
    while( true ) {
      if (cVar3 == '\0') {
        *pcVar6 = '\0';
        return (long)pcVar6 - (long)param_1;
      }
      puVar9 = puVar8;
      if (pcVar6 < pcVar1) break;
LAB_006664cc:
      while( true ) {
        FUN_00666294(param_1,pcVar6);
LAB_006664d8:
        iVar4 = iVar10 + 8;
        if (iVar4 < 1) {
          puVar8 = (undefined8 *)(lVar11 + iVar10);
          iVar10 = iVar4;
        }
        else {
          puVar8 = puVar9;
          puVar9 = (undefined8 *)((long)puVar9 + 0xfU & 0xfffffffffffffff8);
          iVar10 = iVar4;
        }
LAB_00666438:
        pcVar5 = (char *)*puVar8;
        cVar3 = *pcVar5;
        pcVar7 = pcVar6;
        if (cVar3 == '\0') break;
        do {
          pcVar6 = pcVar7 + 1;
          *pcVar7 = cVar3;
          pcVar5 = pcVar5 + 1;
          cVar3 = *pcVar5;
          if (cVar3 == '\0') goto LAB_0066645c;
          pcVar7 = pcVar6;
        } while (pcVar6 != pcVar1);
      }
LAB_0066645c:
      param_3 = param_3 + 2;
      cVar3 = *param_3;
      puVar8 = puVar9;
    }
    if (cVar3 != '%') {
LAB_006663dc:
      *pcVar6 = cVar3;
      param_3 = param_3 + 1;
      pcVar6 = pcVar6 + 1;
      goto LAB_006663e8;
    }
    cVar2 = param_3[1];
    if (cVar2 == 's') {
      if (iVar10 < 0) goto LAB_006664d8;
      puVar9 = (undefined8 *)((long)puVar8 + 0xfU & 0xfffffffffffffff8);
      goto LAB_00666438;
    }
    if (cVar2 != 'z') {
      param_3 = param_3 + (cVar2 == '%');
      goto LAB_006663dc;
    }
    if (param_3[2] != 'u') goto LAB_006663dc;
    if (iVar10 < 0) {
      iVar4 = iVar10 + 8;
      if (iVar4 < 1) {
        puVar9 = (undefined8 *)(lVar11 + iVar10);
        iVar10 = iVar4;
      }
      else {
        puVar8 = (undefined8 *)((long)puVar8 + 0xfU & 0xfffffffffffffff8);
        iVar10 = iVar4;
      }
    }
    else {
      puVar8 = (undefined8 *)((long)puVar8 + 0xfU & 0xfffffffffffffff8);
    }
    iVar4 = FUN_0066630c(pcVar6,(long)pcVar1 - (long)pcVar6,*puVar9);
    puVar9 = puVar8;
    if (iVar4 < 1) goto LAB_006664cc;
    pcVar6 = pcVar6 + iVar4;
    param_3 = param_3 + 3;
  } while( true );
}


