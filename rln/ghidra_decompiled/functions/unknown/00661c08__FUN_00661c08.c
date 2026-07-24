/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00661c08
 * Function: FUN_00661c08
 * Signature: undefined FUN_00661c08(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00661c08(long *param_1,undefined8 *param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = param_1 + 0x21;
  FUN_00621e3c(plVar1);
  param_1[0x3c] = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)((long)param_1 + 0x1e9) = 0;
                    /* catch() { ... } // from try @ 006617fc with catch @ 00661c44 */
                    /* catch() { ... } // from try @ 006613e8 with catch @ 00661c48 */
  param_1[0x3e] = 0;
                    /* catch() { ... } // from try @ 00661658 with catch @ 00661c4c */
                    /* catch() { ... } // from try @ 00661ae4 with catch @ 00661c50 */
  param_1[0x3f] = 0;
                    /* catch() { ... } // from try @ 00661bd4 with catch @ 00661c54 */
                    /* catch() { ... } // from try @ 00661a40 with catch @ 00661c58 */
  param_1[0x40] = 0;
                    /* catch() { ... } // from try @ 00661994 with catch @ 00661c5c */
  param_1[0x41] = 0;
  *param_1 = (long)&DAT_007db588;
  param_1[1] = 0;
                    /* catch() { ... } // from try @ 00661718 with catch @ 00661c70 */
  param_1[0x21] = (long)&DAT_007db5b0;
  FUN_006210e8(plVar1,0);
  param_1[2] = (long)&DAT_007db538;
  param_1[0x21] = (long)&DAT_007db560;
                    /* try { // try from 00661c98 to 00761cbf has its CatchHandler @ 00661cc4 */
  FUN_006210e8(plVar1,0);
  plVar2 = param_1 + 3;
  *param_1 = (long)&PTR_FUN_007b7dd8;
  param_1[0x21] = (long)&PTR_FUN_007b7e28;
                    /* try { // try from 00661cc0 to 00761cf7 has its CatchHandler @ 006612d4 */
                    /* catch() { ... } // from try @ 00661c98 with catch @ 00661cc4 */
  param_1[2] = (long)&PTR_FUN_007b7e00;
                    /* catch() { ... } // from try @ 00661390 with catch @ 00661cc8 */
  FUN_0065edec(plVar2);
  FUN_006210e8(plVar1,plVar2);
                    /* catch() { ... } // from try @ 006616cc with catch @ 00661cd8
                       catch() { ... } // from try @ 006617c4 with catch @ 00661cd8 */
  lVar3 = FUN_0065f8c0(plVar2,*param_2,param_3);
  if (lVar3 != 0) {
    FUN_00620c14((long)param_1 + *(long *)(*param_1 + -0x18),0);
    return;
  }
  lVar3 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00620c14(lVar3,*(uint *)(lVar3 + 0x20) | 4);
  return;
}


