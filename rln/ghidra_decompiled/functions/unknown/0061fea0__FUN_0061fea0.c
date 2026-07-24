/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061fea0
 * Function: FUN_0061fea0
 * Signature: undefined FUN_0061fea0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061fea0(long *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 auStack_100 [32];
  
  puVar4 = auStack_100;
  lVar6 = _DAT_0061ffc0;
  lVar7 = _UNK_0061ffc8;
  do {
    cVar1 = (char)lVar6;
    cVar2 = (char)lVar7;
    lVar6 = lVar6 + _DAT_0061ffd0;
    lVar7 = lVar7 + _UNK_0061ffd8;
                    /* try { // try from 0061ff58 to 0071ff5b has its CatchHandler @ 00620048 */
    puVar5 = puVar4 + 2;
    puVar4[1] = CONCAT17(cVar2 + (char)_LAB_00620048,
                         CONCAT16(cVar1 + (char)_DAT_00620040,
                                  CONCAT15(cVar2 + (char)_UNK_00620038,
                                           CONCAT14(cVar1 + (char)_DAT_00620030,
                                                    CONCAT13(cVar2 + (char)_LAB_00620028,
                                                             CONCAT12(cVar1 + (char)_DAT_00620020,
                                                                      CONCAT11(cVar2 + (char)
                                                  _UNK_00620018,cVar1 + (char)_DAT_00620010)))))));
    *puVar4 = CONCAT17(cVar2 + (char)_UNK_00620008,
                       CONCAT16(cVar1 + (char)_DAT_00620000,
                                CONCAT15(cVar2 + (char)_UNK_0061fff8,
                                         CONCAT14(cVar1 + (char)_DAT_0061fff0,
                                                  CONCAT13(cVar2 + (char)_UNK_0061ffe8,
                                                           CONCAT12(cVar1 + (char)_DAT_0061ffe0,
                                                                    CONCAT11(cVar2,cVar1)))))));
    puVar4 = puVar5;
  } while (puVar5 != (undefined8 *)&stack0x00000000);
                    /* try { // try from 0061ff7c to 00720027 has its CatchHandler @ 0062007c */
  (**(code **)(*param_1 + 0x38))
            (param_1,auStack_100,&stack0x00000000,(void *)((long)param_1 + 0x39));
  *(undefined1 *)(param_1 + 7) = 1;
  iVar3 = memcmp(auStack_100,(void *)((long)param_1 + 0x39),0x100);
  if (iVar3 != 0) {
    *(undefined1 *)(param_1 + 7) = 2;
  }
  return;
}


