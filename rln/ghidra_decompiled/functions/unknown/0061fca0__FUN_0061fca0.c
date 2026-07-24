/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061fca0
 * Function: FUN_0061fca0
 * Signature: undefined FUN_0061fca0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061fca0(long *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  char local_101;
  undefined8 uStack_100;
  undefined8 auStack_f8 [31];
  
                    /* try { // try from 0061fcbc to 0071fcbf has its CatchHandler @ 0061fdd8 */
                    /* try { // try from 0061fce0 to 0071fce3 has its CatchHandler @ 0061fdc8 */
                    /* try { // try from 0061fd04 to 0071fd2b has its CatchHandler @ 0061fe0c */
  puVar4 = &uStack_100;
  lVar6 = _LAB_0061fe10;
  lVar7 = _UNK_0061fe18;
  do {
    cVar1 = (char)lVar6;
    cVar2 = (char)lVar7;
                    /* try { // try from 0061fd2c to 0071fdfb has its CatchHandler @ 0061fb28 */
    lVar6 = lVar6 + _DAT_0061fe20;
    lVar7 = lVar7 + _UNK_0061fe28;
    puVar5 = puVar4 + 2;
    puVar4[1] = CONCAT17(cVar2 + (char)_UNK_0061fe98,
                         CONCAT16(cVar1 + (char)_DAT_0061fe90,
                                  CONCAT15(cVar2 + (char)_UNK_0061fe88,
                                           CONCAT14(cVar1 + (char)_DAT_0061fe80,
                                                    CONCAT13(cVar2 + (char)_UNK_0061fe78,
                                                             CONCAT12(cVar1 + (char)_DAT_0061fe70,
                                                                      CONCAT11(cVar2 + (char)
                                                  _LAB_0061fe68,cVar1 + (char)_DAT_0061fe60)))))));
    *puVar4 = CONCAT17(cVar2 + (char)_UNK_0061fe58,
                       CONCAT16(cVar1 + (char)_DAT_0061fe50,
                                CONCAT15(cVar2 + (char)_UNK_0061fe48,
                                         CONCAT14(cVar1 + (char)_DAT_0061fe40,
                                                  CONCAT13(cVar2 + (char)_UNK_0061fe38,
                                                           CONCAT12(cVar1 + (char)_DAT_0061fe30,
                                                                    CONCAT11(cVar2,cVar1)))))));
    puVar4 = puVar5;
  } while (puVar5 != (undefined8 *)&stack0x00000000);
  (**(code **)(*param_1 + 0x48))
            (param_1,&uStack_100,&stack0x00000000,0,(void *)((long)param_1 + 0x139));
  *(undefined1 *)((long)param_1 + 0x239) = 1;
  iVar3 = memcmp(&uStack_100,(void *)((long)param_1 + 0x139),0x100);
                    /* catch() { ... } // from try @ 0061fce0 with catch @ 0061fdc8 */
                    /* catch() { ... } // from try @ 0061fcbc with catch @ 0061fdd8 */
  if ((iVar3 == 0) &&
     ((**(code **)(*param_1 + 0x48))(param_1,&uStack_100,(long)&uStack_100 + 1,1,&local_101),
     local_101 != '\x01')) {
                    /* try { // try from 0061fdfc to 0071fe03 has its CatchHandler @ 0061fe08 */
    return;
  }
  *(undefined1 *)((long)param_1 + 0x239) = 2;
  return;
}


