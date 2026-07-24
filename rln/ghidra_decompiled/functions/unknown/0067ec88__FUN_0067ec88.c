/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0067ec88
 * Function: FUN_0067ec88
 * Signature: undefined FUN_0067ec88(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0067ec88(undefined1 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
                    /* catch() { ... } // from try @ 0067eb78 with catch @ 0067ec90 */
                    /* catch() { ... } // from try @ 0067eb54 with catch @ 0067ec94 */
  plVar1 = param_4;
  if (param_4 != (long *)0x0) {
    do {
      if ((int)plVar1[2] == 0) {
                    /* try { // try from 0067ed50 to 0077ed93 has its CatchHandler @ 0067ed50
                       catch() { ... } // from try @ 0067ed50 with catch @ 0067ed50
                       catch() { ... } // from try @ 0067edac with catch @ 0067ed50
                       catch() { ... } // from try @ 0067ede4 with catch @ 0067ed50 */
        if (*(int *)plVar1[1] == 0x2a) {
                    /* try { // try from 0067ede0 to 0077ede3 has its CatchHandler @ 0067eebc */
                    /* try { // try from 0067ede4 to 0077ef73 has its CatchHandler @ 0067ed50 */
          FUN_0067e974(param_1,param_2,param_4,0);
          lVar3 = *(long *)(param_1 + 0x100);
          goto joined_r0x0067edf0;
        }
        lVar3 = *(long *)(param_1 + 0x100);
        if (lVar3 == 0xff) {
                    /* catch() { ... } // from try @ 0067edcc with catch @ 0067eef4 */
          param_1[0xff] = 0;
                    /* catch() { ... } // from try @ 0067eda8 with catch @ 0067eef8 */
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar2 = 1;
          *param_1 = 0x20;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
LAB_0067ed8c:
          lVar3 = lVar2 + 1;
        }
        else {
          lVar2 = lVar3 + 1;
          *(long *)(param_1 + 0x100) = lVar2;
          param_1[lVar3] = 0x20;
          param_1[0x108] = 0x20;
          if (lVar2 != 0xff) goto LAB_0067ed8c;
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar3 = 1;
          lVar2 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        *(long *)(param_1 + 0x100) = lVar3;
                    /* try { // try from 0067ed94 to 0077eda7 has its CatchHandler @ 0067ef68 */
        param_1[lVar2] = 0x28;
        param_1[0x108] = 0x28;
                    /* try { // try from 0067eda8 to 0077edab has its CatchHandler @ 0067eef8 */
                    /* try { // try from 0067edac to 0077edcb has its CatchHandler @ 0067ed50 */
        FUN_0067e974(param_1,param_2,param_4,0);
        lVar3 = *(long *)(param_1 + 0x100);
        lVar2 = lVar3 + 1;
        if (lVar3 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar2 = 1;
          lVar3 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        *(long *)(param_1 + 0x100) = lVar2;
        param_1[lVar3] = 0x29;
                    /* try { // try from 0067edcc to 0077eddf has its CatchHandler @ 0067eef4 */
        param_1[0x108] = 0x29;
        goto LAB_0067ecd4;
      }
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
    FUN_0067e974(param_1,param_2,param_4,0);
  }
  lVar2 = *(long *)(param_1 + 0x100);
LAB_0067ecd4:
  if (lVar2 == 0xff) {
                    /* catch() { ... } // from try @ 0067ede0 with catch @ 0067eebc */
    param_1[0xff] = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    lVar3 = 1;
    lVar2 = 0;
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
  }
  else {
    lVar3 = lVar2 + 1;
  }
  *(long *)(param_1 + 0x100) = lVar3;
  param_1[lVar2] = 0x20;
  param_1[0x108] = 0x20;
joined_r0x0067edf0:
  if (lVar3 == 0xff) {
    param_1[0xff] = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *param_1 = 0x5b;
    param_1[0x108] = 0x5b;
    lVar2 = 1;
    lVar3 = *param_3;
    *(undefined8 *)(param_1 + 0x100) = 1;
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    if (lVar3 == 0) goto LAB_0067ed2c;
LAB_0067ed14:
    FUN_0067a6e8(param_1,param_2);
    lVar2 = *(long *)(param_1 + 0x100);
  }
  else {
    lVar2 = lVar3 + 1;
    *(long *)(param_1 + 0x100) = lVar2;
                    /* catch() { ... } // from try @ 0067eb40 with catch @ 0067ed04 */
    param_1[lVar3] = 0x5b;
    param_1[0x108] = 0x5b;
    if (*param_3 != 0) goto LAB_0067ed14;
  }
  if (lVar2 == 0xff) {
    param_1[0xff] = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *(undefined8 *)(param_1 + 0x100) = 1;
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    *param_1 = 0x5d;
    param_1[0x108] = 0x5d;
    return;
  }
LAB_0067ed2c:
  *(long *)(param_1 + 0x100) = lVar2 + 1;
  param_1[lVar2] = 0x5d;
  param_1[0x108] = 0x5d;
  return;
}


