/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0067ef50
 * Function: FUN_0067ef50
 * Signature: undefined FUN_0067ef50(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0067ef50(undefined1 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  int iVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
                    /* catch() { ... } // from try @ 0067ed94 with catch @ 0067ef68 */
  if (param_4 != (long *)0x0) {
    iVar1 = (int)param_4[2];
    plVar3 = param_4;
joined_r0x0067ef7c:
    if (iVar1 == 0) {
      switch(*(undefined4 *)plVar3[1]) {
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x21:
      case 0x25:
      case 0x26:
      case 0x2b:
        bVar2 = param_1[0x108];
LAB_0067f060:
                    /* try { // try from 0067f064 to 0077f077 has its CatchHandler @ 0067f27c */
        if (bVar2 == 0x20) goto LAB_0067f0cc;
        lVar5 = *(long *)(param_1 + 0x100);
        if (lVar5 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar4 = 1;
          lVar5 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        else {
          lVar4 = lVar5 + 1;
        }
                    /* try { // try from 0067f078 to 0077f07b has its CatchHandler @ 0067f244 */
        *(long *)(param_1 + 0x100) = lVar4;
                    /* try { // try from 0067f07c to 0077f093 has its CatchHandler @ 0067efbc */
        param_1[lVar5] = 0x20;
        param_1[0x108] = 0x20;
        if (lVar4 != 0xff) goto LAB_0067f0d8;
LAB_0067f090:
                    /* try { // try from 0067f094 to 0077f0a7 has its CatchHandler @ 0067f240 */
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,lVar4,*(undefined8 *)(param_1 + 0x118));
                    /* try { // try from 0067f0a8 to 0077f0ab has its CatchHandler @ 0067f208 */
        lVar5 = 1;
                    /* try { // try from 0067f0ac to 0077f337 has its CatchHandler @ 0067efbc */
        lVar4 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        break;
      default:
        plVar3 = (long *)*plVar3;
        if (plVar3 != (long *)0x0) goto code_r0x0067efb8;
        goto LAB_0067efc0;
      case 0x22:
      case 0x23:
      case 0x24:
        bVar2 = param_1[0x108];
        if ((bVar2 & 0xfd) != 0x28) goto LAB_0067f060;
LAB_0067f0cc:
        lVar4 = *(long *)(param_1 + 0x100);
        if (lVar4 == 0xff) goto LAB_0067f090;
LAB_0067f0d8:
        lVar5 = lVar4 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar5;
      param_1[lVar4] = 0x28;
      param_1[0x108] = 0x28;
      uVar6 = *(undefined8 *)(param_1 + 0x128);
      *(undefined8 *)(param_1 + 0x128) = 0;
      FUN_0067e974(param_1,param_2,param_4,0);
      lVar4 = *(long *)(param_1 + 0x100);
      if (lVar4 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar5 = 1;
        lVar4 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar5 = lVar4 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar5;
      param_1[lVar4] = 0x29;
      param_1[0x108] = 0x29;
      goto joined_r0x0067efe4;
    }
  }
LAB_0067efc0:
  uVar6 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_0067e974(param_1,param_2,param_4,0);
  lVar5 = *(long *)(param_1 + 0x100);
joined_r0x0067efe4:
  if (lVar5 == 0xff) {
    param_1[0xff] = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *param_1 = 0x28;
    param_1[0x108] = 0x28;
    lVar4 = 1;
    lVar5 = *param_3;
    *(undefined8 *)(param_1 + 0x100) = 1;
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    if (lVar5 != 0) goto LAB_0067f004;
  }
  else {
    lVar4 = lVar5 + 1;
                    /* try { // try from 0067efec to 0077efff has its CatchHandler @ 0067f32c */
    *(long *)(param_1 + 0x100) = lVar4;
    param_1[lVar5] = 0x28;
    param_1[0x108] = 0x28;
                    /* try { // try from 0067f000 to 0077f003 has its CatchHandler @ 0067f2bc */
    if (*param_3 != 0) {
LAB_0067f004:
                    /* try { // try from 0067f004 to 0077f02f has its CatchHandler @ 0067efbc */
      FUN_0067a6e8(param_1,param_2);
      lVar4 = *(long *)(param_1 + 0x100);
    }
    if (lVar4 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar5 = 1;
      lVar4 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      goto LAB_0067f020;
    }
  }
  lVar5 = lVar4 + 1;
LAB_0067f020:
  *(long *)(param_1 + 0x100) = lVar5;
  param_1[lVar4] = 0x29;
                    /* try { // try from 0067f030 to 0077f043 has its CatchHandler @ 0067f2b8 */
  param_1[0x108] = 0x29;
  FUN_0067e974(param_1,param_2,param_4,1);
                    /* try { // try from 0067f044 to 0077f047 has its CatchHandler @ 0067f280 */
  *(undefined8 *)(param_1 + 0x128) = uVar6;
                    /* try { // try from 0067f048 to 0077f063 has its CatchHandler @ 0067efbc */
  return;
code_r0x0067efb8:
  iVar1 = *(int *)(plVar3 + 2);
                    /* try { // try from 0067efbc to 0077efeb has its CatchHandler @ 0067efbc
                       catch() { ... } // from try @ 0067efbc with catch @ 0067efbc
                       catch() { ... } // from try @ 0067f004 with catch @ 0067efbc
                       catch() { ... } // from try @ 0067f048 with catch @ 0067efbc
                       catch() { ... } // from try @ 0067f07c with catch @ 0067efbc
                       catch() { ... } // from try @ 0067f0ac with catch @ 0067efbc */
  goto joined_r0x0067ef7c;
}


