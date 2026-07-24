/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00672000
 * Function: FUN_00672000
 * Signature: undefined FUN_00672000(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00672000(long param_1,long *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  long *plVar7;
  
                    /* try { // try from 00672010 to 00772037 has its CatchHandler @ 0067203c */
  pcVar4 = *(char **)(param_1 + 0x18);
                    /* try { // try from 00672038 to 00772103 has its CatchHandler @ 00671ae8 */
                    /* catch() { ... } // from try @ 00672010 with catch @ 0067203c */
                    /* catch() { ... } // from try @ 00671c74 with catch @ 00672040 */
                    /* catch() { ... } // from try @ 00671b2c with catch @ 00672044 */
  cVar2 = *pcVar4;
  plVar7 = param_2;
  do {
                    /* catch() { ... } // from try @ 00671b40 with catch @ 00672050
                       catch() { ... } // from try @ 00671c28 with catch @ 00672050 */
    if ((cVar2 == 'V') || (cVar2 == 'r')) {
      *(char **)(param_1 + 0x18) = pcVar4 + 1;
      if (cVar2 != 'r') {
        if (cVar2 != 'V') goto LAB_00672064;
        uVar6 = 0x1d;
        if (param_3 == 0) {
          uVar6 = 0x1a;
        }
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 9;
        goto LAB_00672078;
      }
                    /* catch() { ... } // from try @ 00671e6c with catch @ 006720bc */
      uVar6 = 0x1c;
      if (param_3 == 0) {
        uVar6 = 0x19;
      }
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 9;
      lVar3 = FUN_00671f00(param_1,uVar6,0,0);
                    /* catch() { ... } // from try @ 00671db4 with catch @ 006720e0 */
      *plVar7 = lVar3;
    }
    else {
      if (cVar2 != 'K') {
        if ((param_3 == 0) && (cVar2 == 'F')) {
                    /* catch() { ... } // from try @ 00672104 with catch @ 00672130 */
                    /* catch() { ... } // from try @ 00671d88 with catch @ 00672134 */
          while (param_2 != plVar7) {
            piVar5 = (int *)*param_2;
            iVar1 = *piVar5;
            if (iVar1 == 0x1a) {
              *piVar5 = 0x1d;
            }
            else if (iVar1 == 0x1b) {
              *piVar5 = 0x1e;
            }
            else if (iVar1 == 0x19) {
                    /* try { // try from 00672158 to 0077217f has its CatchHandler @ 006721cc */
              *piVar5 = 0x1c;
            }
            param_2 = (long *)(piVar5 + 2);
          }
        }
                    /* try { // try from 006721a0 to 007721c7 has its CatchHandler @ 00672220 */
        return plVar7;
      }
      *(char **)(param_1 + 0x18) = pcVar4 + 1;
LAB_00672064:
      uVar6 = 0x1e;
      if (param_3 == 0) {
        uVar6 = 0x1b;
      }
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 6;
LAB_00672078:
      lVar3 = FUN_00671f00(param_1,uVar6,0,0);
      *plVar7 = lVar3;
    }
    if (lVar3 == 0) {
                    /* try { // try from 00672104 to 0077212b has its CatchHandler @ 00672130 */
      return (long *)0x0;
    }
    pcVar4 = *(char **)(param_1 + 0x18);
    plVar7 = (long *)(lVar3 + 8);
    cVar2 = *pcVar4;
  } while( true );
}


