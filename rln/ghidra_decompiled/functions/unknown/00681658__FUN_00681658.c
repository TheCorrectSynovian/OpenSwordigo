/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00681658
 * Function: FUN_00681658
 * Signature: undefined FUN_00681658(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16] FUN_00681658(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  long lVar3;
  undefined1 auStack_e00 [960];
  undefined1 auStack_a40 [784];
  undefined8 local_730;
  undefined8 local_728;
  long local_700;
  undefined1 auStack_680 [1616];
  code *local_30;
  
  FUN_0068128c(auStack_e00,&stack0x00000000);
  memcpy(auStack_a40,auStack_e00,0x3c0);
  do {
    iVar2 = FUN_006806a8(auStack_a40,auStack_680);
    if ((iVar2 == 5) || (iVar2 != 0)) goto LAB_00681790;
                    /* try { // try from 006816e0 to 007816eb has its CatchHandler @ 00681c78 */
    if (local_30 != (code *)0x0) {
                    /* try { // try from 00681700 to 0078170f has its CatchHandler @ 00681bb8 */
      iVar2 = (*local_30)(1,1,*param_1,param_1,auStack_a40);
                    /* try { // try from 00681710 to 0078171f has its CatchHandler @ 00681b54 */
      if (iVar2 == 6) {
        param_1[2] = 0;
        lVar3 = FUN_0068006c(auStack_a40);
        param_1[3] = lVar3 + (local_700 >> 0x3f);
        memcpy(auStack_a40,auStack_e00,0x3c0);
        iVar2 = FUN_006813b4(param_1,auStack_a40);
        if (iVar2 == 7) {
                    /* try { // try from 00681768 to 00781773 has its CatchHandler @ 00681b50 */
          FUN_0067ff60(auStack_e00,auStack_a40);
                    /* try { // try from 00681774 to 00781787 has its CatchHandler @ 00681b18 */
          FUN_00681654(local_730,local_728);
                    /* try { // try from 00681788 to 00781797 has its CatchHandler @ 00681ac0 */
        }
LAB_00681790:
        auVar1._8_8_ = param_2;
        auVar1._0_8_ = param_1;
                    /* try { // try from 00681798 to 007817a7 has its CatchHandler @ 00681a64 */
        return auVar1;
      }
      if (iVar2 != 8) goto LAB_00681790;
    }
                    /* try { // try from 006816ec to 007816ff has its CatchHandler @ 00681c18 */
    FUN_00681368(auStack_a40,auStack_680);
  } while( true );
}


