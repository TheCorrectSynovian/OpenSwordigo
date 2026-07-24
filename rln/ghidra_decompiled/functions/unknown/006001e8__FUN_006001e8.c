/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006001e8
 * Function: FUN_006001e8
 * Signature: undefined FUN_006001e8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006001e8(long *param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
                    /* try { // try from 006001f4 to 0070020f has its CatchHandler @ 00600144 */
                    /* catch() { ... } // from try @ 006001cc with catch @ 006001fc */
                    /* catch() { ... } // from try @ 0060015c with catch @ 00600200 */
  lVar3 = *param_1;
                    /* try { // try from 00600210 to 0070021b has its CatchHandler @ 0060021c */
                    /* catch() { ... } // from try @ 00600210 with catch @ 0060021c */
  FUN_005fdedc(param_1,(int)param_1[7],(int)param_1[6],0xff,(int)param_1[6]);
                    /* try { // try from 00600220 to 00700223 has its CatchHandler @ 00600228 */
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
                    /* catch() { ... } // from try @ 00600220 with catch @ 00600228 */
  iVar2 = (int)param_1[6];
  if (iVar2 < *(int *)(lVar3 + 0x50)) {
    lVar1 = *(long *)(lVar3 + 0x18);
  }
  else {
                    /* catch() { ... } // from try @ 006002c0 with catch @ 00600250
                       catch() { ... } // from try @ 00600364 with catch @ 00600250 */
    lVar1 = FUN_005eec70(param_1[4],*(undefined8 *)(lVar3 + 0x18),(int *)(lVar3 + 0x50),4,0x7ffffffd
                         ,"code size overflow");
    *(long *)(lVar3 + 0x18) = lVar1;
    iVar2 = (int)param_1[6];
  }
  *(undefined4 *)(lVar1 + (long)iVar2 * 4) = param_2;
  iVar2 = (int)param_1[6];
  if (iVar2 < *(int *)(lVar3 + 0x54)) {
    lVar1 = *(long *)(lVar3 + 0x28);
  }
  else {
    lVar1 = FUN_005eec70(param_1[4],*(undefined8 *)(lVar3 + 0x28),(int *)(lVar3 + 0x54),4,0x7ffffffd
                         ,"code size overflow");
    *(long *)(lVar3 + 0x28) = lVar1;
    iVar2 = (int)param_1[6];
  }
  *(undefined4 *)(lVar1 + (long)iVar2 * 4) = param_3;
                    /* try { // try from 006002bc to 007002bf has its CatchHandler @ 0060031c */
                    /* try { // try from 006002c0 to 0070033b has its CatchHandler @ 00600250 */
  *(int *)(param_1 + 6) = (int)param_1[6] + 1;
  return;
}


