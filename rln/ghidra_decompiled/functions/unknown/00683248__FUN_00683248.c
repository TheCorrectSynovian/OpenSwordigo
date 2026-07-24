/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00683248
 * Function: FUN_00683248
 * Signature: undefined FUN_00683248(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_00683248(ulong param_1,ulong *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  long local_10;
  undefined4 local_8;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00683268 with catch @ 00683248
                       catch(type#1 @ 00000000) { ... } // from try @ 006832c8 with catch @ 00683248
                        */
                    /* try { // try from 00683260 to 00783267 has its CatchHandler @ 006832a4 */
                    /* try { // try from 00683268 to 007832b3 has its CatchHandler @ 00683248 */
  puVar8 = DAT_007fe598;
  if (PTR_pthread_create_007e4e78 != (undefined *)0x0) {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_007fe568);
    puVar8 = DAT_007fe598;
  }
  for (; puVar8 != (ulong *)0x0; puVar8 = (ulong *)puVar8[5]) {
    if (*puVar8 <= param_1) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00683260 with catch @ 006832a4
                        */
      lVar4 = FUN_006829fc(puVar8,param_1);
      if (lVar4 != 0) goto LAB_006833e4;
      break;
    }
                    /* try { // try from 006832b4 to 007832bf has its CatchHandler @ 006832c0 */
  }
  do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 006832b4 with catch @ 006832c0
                        */
    puVar8 = DAT_007fe590;
                    /* try { // try from 006832c4 to 007832c7 has its CatchHandler @ 006832d0 */
    if (DAT_007fe590 == (ulong *)0x0) {
                    /* try { // try from 0068331c to 007833d7 has its CatchHandler @ 0068331c
                       catch() { ... } // from try @ 0068331c with catch @ 0068331c
                       catch() { ... } // from try @ 00683438 with catch @ 0068331c */
      lVar4 = 0;
      if (PTR_pthread_create_007e4e78 != (undefined *)0x0) goto LAB_00683324;
      goto LAB_00683388;
    }
                    /* try { // try from 006832c8 to 007832d3 has its CatchHandler @ 00683248 */
    DAT_007fe590 = (ulong *)DAT_007fe590[5];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 006832c4 with catch @ 006832d0
                        */
    lVar4 = FUN_006829fc(puVar8,param_1);
    puVar7 = (ulong *)&DAT_007fe598;
    for (puVar6 = DAT_007fe598; (puVar6 != (ulong *)0x0 && (*puVar8 <= *puVar6));
        puVar6 = (ulong *)puVar6[5]) {
      puVar7 = puVar6 + 5;
    }
    puVar8[5] = (ulong)puVar6;
    *puVar7 = (ulong)puVar8;
  } while (lVar4 == 0);
LAB_006833e4:
  if (PTR_pthread_create_007e4e78 != (undefined *)0x0) {
LAB_00683324:
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_007fe568);
    if (lVar4 == 0) {
LAB_00683388:
      local_8 = 1;
      local_28 = 0;
      local_20 = 0;
      local_18 = 0;
      local_10 = 0;
      local_30 = param_1;
      iVar3 = dl_iterate_phdr(FUN_006822b0,&local_30);
      if (iVar3 < 0) {
        return 0;
      }
      if (local_10 == 0) {
        return 0;
      }
      *param_2 = local_28;
      param_2[1] = local_20;
                    /* try { // try from 006833d8 to 00783437 has its CatchHandler @ 0068348c */
      local_30 = local_18;
      goto LAB_006833dc;
    }
  }
  *param_2 = puVar8[1];
  uVar1 = puVar8[4];
  param_2[1] = puVar8[2];
  uVar2 = (undefined1)((ushort)puVar8[4] >> 3);
  if (((byte)uVar1 >> 2 & 1) != 0) {
    uVar2 = FUN_006822a0(lVar4);
  }
  uVar5 = FUN_00681e04(uVar2,puVar8);
  FUN_00681ec4(uVar2,uVar5,lVar4 + 8,&local_30);
  local_10 = lVar4;
LAB_006833dc:
  param_2[2] = local_30;
  return local_10;
}


