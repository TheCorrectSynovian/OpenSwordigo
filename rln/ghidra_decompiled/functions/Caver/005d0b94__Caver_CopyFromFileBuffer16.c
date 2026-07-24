/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d0b94
 * Function: Caver::CopyFromFileBuffer16
 * Signature: undefined __cdecl CopyFromFileBuffer16(uchar * param_1, uchar * param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CopyFromFileBuffer16(unsigned char*, unsigned char const*, int) */

void Caver::CopyFromFileBuffer16(uchar *param_1,uchar *param_2,int param_3)

{
  ulong uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  uchar *puVar4;
  uchar *puVar5;
  uchar *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  
  if (0 < param_3) {
    uVar1 = (ulong)(param_3 - 1) + 1;
                    /* try { // try from 005d0bc0 to 006d0be7 has its CatchHandler @ 005d329c */
    if ((uVar1 < 8) ||
       ((lVar8 = (ulong)(param_3 - 1) * 2 + 2, param_1 < param_2 + lVar8 &&
        (param_2 < param_1 + lVar8)))) {
      lVar8 = 0;
      puVar5 = param_1;
      puVar6 = param_2;
    }
    else {
      lVar8 = uVar1 - (param_3 & 7U);
      puVar5 = param_1 + lVar8 * 2;
                    /* try { // try from 005d0c08 to 006d0c0b has its CatchHandler @ 005d2948 */
      puVar6 = param_2 + lVar8 * 2;
      lVar9 = lVar8;
      do {
        uVar3 = *(undefined8 *)param_2;
        puVar4 = param_2 + 8;
        param_2 = param_2 + 0x10;
        lVar9 = lVar9 + -8;
                    /* try { // try from 005d0c18 to 006d0c23 has its CatchHandler @ 005d3534 */
                    /* try { // try from 005d0c24 to 006d0c2b has its CatchHandler @ 005d3220 */
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)puVar4;
        *(undefined8 *)param_1 = uVar3;
        param_1 = param_1 + 0x10;
      } while (lVar9 != 0);
                    /* try { // try from 005d0c2c to 006d0c9f has its CatchHandler @ 005d3534 */
      if ((param_3 & 7U) == 0) {
        return;
      }
    }
    iVar7 = param_3 - (int)lVar8;
    do {
      uVar2 = *(undefined2 *)puVar6;
      iVar7 = iVar7 + -1;
      puVar6 = puVar6 + 2;
      *(undefined2 *)puVar5 = uVar2;
      puVar5 = puVar5 + 2;
    } while (iVar7 != 0);
  }
  return;
}


