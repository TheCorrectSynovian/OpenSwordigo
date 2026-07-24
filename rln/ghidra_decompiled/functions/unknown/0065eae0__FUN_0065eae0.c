/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065eae0
 * Function: FUN_0065eae0
 * Signature: undefined FUN_0065eae0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_0065eae0(long *param_1,undefined1 *param_2,long param_3)

{
  uint uVar1;
  size_t __n;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  
  if ((char)param_1[0x18] == '\0') {
    lVar7 = 0;
    if (*(char *)((long)param_1 + 0xaa) != '\0') {
                    /* try { // try from 0065ec20 to 0075ec2b has its CatchHandler @ 0065e850 */
      iVar3 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065ebf8 with catch @ 0065ec28
                        */
      if (iVar3 == -1) {
        return 0;
      }
      lVar6 = param_1[0x13];
      param_1[1] = lVar6;
      param_1[2] = lVar6;
      param_1[3] = lVar6;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[6] = 0;
      *(undefined1 *)((long)param_1 + 0xaa) = 0;
    }
  }
  else {
    puVar4 = (undefined1 *)param_1[2];
    if (param_3 < 1) {
      lVar7 = 0;
      puVar5 = (undefined1 *)param_1[1];
    }
    else {
      puVar5 = (undefined1 *)param_1[1];
      if (puVar4 == puVar5) {
        lVar7 = 1;
        *param_2 = *puVar4;
        param_3 = param_3 + -1;
        param_2 = param_2 + 1;
        puVar4 = (undefined1 *)(param_1[2] + 1);
        param_1[2] = (long)puVar4;
        if ((char)param_1[0x18] == '\0') goto LAB_0065eb4c;
        puVar5 = (undefined1 *)param_1[1];
      }
      else {
        lVar7 = 0;
      }
    }
    lVar6 = param_1[0x16];
    if (puVar4 != puVar5) {
      lVar6 = lVar6 + 1;
    }
    param_1[1] = param_1[0x13];
    param_1[0x16] = lVar6;
    param_1[2] = lVar6;
    param_1[3] = param_1[0x17];
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
LAB_0065eb4c:
  uVar1 = *(uint *)(param_1 + 0xf);
  if ((ulong)param_1[0x14] < 2) {
    lVar6 = 1;
  }
  else {
    lVar6 = param_1[0x14] - 1;
  }
  if (param_3 <= lVar6) {
LAB_0065ec50:
    lVar6 = FUN_0064ad98(param_1,param_2,param_3);
    return lVar7 + lVar6;
  }
  if ((long *)param_1[0x19] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_006652c8();
  }
  cVar2 = (**(code **)(*(long *)param_1[0x19] + 0x30))();
  if ((cVar2 == '\0') || ((uVar1 >> 3 & 1) == 0)) goto LAB_0065ec50;
  __n = param_1[3] - param_1[2];
  puVar4 = param_2;
  if (__n != 0) {
    puVar4 = param_2 + __n;
    lVar7 = lVar7 + __n;
    memcpy(param_2,(void *)param_1[2],__n);
    param_3 = param_3 - __n;
    param_1[2] = param_1[2] + __n;
  }
  while( true ) {
    lVar6 = FUN_0061f714(param_1 + 0xd,puVar4,param_3);
    if (lVar6 == -1) {
                    /* try { // try from 0065ed68 to 0075ed6f has its CatchHandler @ 0065eda0 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0065ed70 to 0075eda7 has its CatchHandler @ 0065ed50 */
      FUN_00665ad8("basic_filebuf::xsgetn error reading the file");
    }
    if (lVar6 == 0) break;
    param_3 = param_3 - lVar6;
    lVar7 = lVar7 + lVar6;
    if (param_3 == 0) goto LAB_0065ece8;
    puVar4 = puVar4 + lVar6;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065e97c with catch @ 0065ebcc
                        */
  if (param_3 != 0) {
    lVar6 = param_1[0x13];
    param_1[1] = lVar6;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065e910 with catch @ 0065ebd8
                        */
    param_1[2] = lVar6;
    param_1[3] = lVar6;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[6] = 0;
    *(undefined1 *)((long)param_1 + 0xa9) = 0;
                    /* try { // try from 0065ebf8 to 0075ec1f has its CatchHandler @ 0065ec28 */
    return lVar7;
  }
LAB_0065ece8:
  if ((*(uint *)(param_1 + 0xf) & 0x11) == 0) {
    lVar6 = param_1[0x13];
    param_1[1] = lVar6;
    param_1[2] = lVar6;
    param_1[3] = lVar6;
  }
  else {
    lVar6 = param_1[0x13];
    param_1[1] = lVar6;
    param_1[2] = lVar6;
    param_1[3] = lVar6;
    if (1 < (ulong)param_1[0x14]) {
                    /* catch() { ... } // from try @ 0065ed70 with catch @ 0065ed50
                       catch() { ... } // from try @ 0065edd4 with catch @ 0065ed50 */
      param_1[5] = lVar6;
      param_1[4] = lVar6;
      param_1[6] = lVar6 + (param_1[0x14] - 1U);
      goto LAB_0065ed14;
    }
  }
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
LAB_0065ed14:
  *(undefined1 *)((long)param_1 + 0xa9) = 1;
  return lVar7;
}


