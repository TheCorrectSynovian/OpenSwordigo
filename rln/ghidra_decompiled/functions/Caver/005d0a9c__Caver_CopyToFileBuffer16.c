/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d0a9c
 * Function: Caver::CopyToFileBuffer16
 * Signature: undefined __cdecl CopyToFileBuffer16(uchar * param_1, uchar * param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CopyToFileBuffer16(unsigned char*, unsigned char const*, int) */

void Caver::CopyToFileBuffer16(uchar *param_1,uchar *param_2,int param_3)

{
  ulong uVar1;
  undefined2 uVar2;
  uchar *puVar3;
  int iVar4;
  long lVar5;
  uchar *puVar6;
  uchar *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (0 < param_3) {
    uVar1 = (ulong)(param_3 - 1) + 1;
                    /* try { // try from 005d0ac8 to 006d0aef has its CatchHandler @ 005d32c8 */
    if ((uVar1 < 0x10) ||
       ((lVar5 = (ulong)(param_3 - 1) * 2 + 2, param_1 < param_2 + lVar5 &&
        (param_2 < param_1 + lVar5)))) {
      lVar5 = 0;
      puVar3 = param_1;
    }
    else {
      lVar5 = uVar1 - (param_3 & 0xfU);
      puVar6 = param_2 + 0x10;
      puVar3 = param_1 + lVar5 * 2;
                    /* try { // try from 005d0b10 to 006d0b13 has its CatchHandler @ 005d3274 */
      param_2 = param_2 + lVar5 * 2;
      puVar7 = param_1 + 0x10;
      lVar8 = lVar5;
      do {
        uVar10 = *(undefined8 *)(puVar6 + -8);
        uVar9 = *(undefined8 *)(puVar6 + -0x10);
        uVar12 = *(undefined8 *)(puVar6 + 8);
        uVar11 = *(undefined8 *)puVar6;
        puVar6 = puVar6 + 0x20;
        lVar8 = lVar8 + -0x10;
                    /* try { // try from 005d0b34 to 006d0b3f has its CatchHandler @ 005d329c */
        puVar7[-0x10] = (uchar)uVar9;
        puVar7[-0xf] = (uchar)((ulong)uVar9 >> 8);
        puVar7[-0xe] = (uchar)((ulong)uVar9 >> 0x10);
        puVar7[-0xd] = (uchar)((ulong)uVar9 >> 0x18);
        puVar7[-0xc] = (uchar)((ulong)uVar9 >> 0x20);
        puVar7[-0xb] = (uchar)((ulong)uVar9 >> 0x28);
        puVar7[-10] = (uchar)((ulong)uVar9 >> 0x30);
        puVar7[-9] = (uchar)((ulong)uVar9 >> 0x38);
        puVar7[-8] = (uchar)uVar10;
        puVar7[-7] = (uchar)((ulong)uVar10 >> 8);
        puVar7[-6] = (uchar)((ulong)uVar10 >> 0x10);
        puVar7[-5] = (uchar)((ulong)uVar10 >> 0x18);
        puVar7[-4] = (uchar)((ulong)uVar10 >> 0x20);
        puVar7[-3] = (uchar)((ulong)uVar10 >> 0x28);
        puVar7[-2] = (uchar)((ulong)uVar10 >> 0x30);
        puVar7[-1] = (uchar)((ulong)uVar10 >> 0x38);
        *puVar7 = (uchar)uVar11;
        puVar7[1] = (uchar)((ulong)uVar11 >> 8);
        puVar7[2] = (uchar)((ulong)uVar11 >> 0x10);
        puVar7[3] = (uchar)((ulong)uVar11 >> 0x18);
        puVar7[4] = (uchar)((ulong)uVar11 >> 0x20);
        puVar7[5] = (uchar)((ulong)uVar11 >> 0x28);
        puVar7[6] = (uchar)((ulong)uVar11 >> 0x30);
        puVar7[7] = (uchar)((ulong)uVar11 >> 0x38);
        puVar7[8] = (uchar)uVar12;
        puVar7[9] = (uchar)((ulong)uVar12 >> 8);
        puVar7[10] = (uchar)((ulong)uVar12 >> 0x10);
        puVar7[0xb] = (uchar)((ulong)uVar12 >> 0x18);
        puVar7[0xc] = (uchar)((ulong)uVar12 >> 0x20);
        puVar7[0xd] = (uchar)((ulong)uVar12 >> 0x28);
        puVar7[0xe] = (uchar)((ulong)uVar12 >> 0x30);
        puVar7[0xf] = (uchar)((ulong)uVar12 >> 0x38);
        puVar7 = puVar7 + 0x20;
      } while (lVar8 != 0);
      if ((param_3 & 0xfU) == 0) {
        return;
      }
    }
    iVar4 = param_3 - (int)lVar5;
    do {
      uVar2 = *(undefined2 *)param_2;
      iVar4 = iVar4 + -1;
      *puVar3 = (uchar)uVar2;
      puVar3[1] = (uchar)((ushort)uVar2 >> 8);
      puVar3 = puVar3 + 2;
      param_2 = param_2 + 2;
    } while (iVar4 != 0);
  }
  return;
}


