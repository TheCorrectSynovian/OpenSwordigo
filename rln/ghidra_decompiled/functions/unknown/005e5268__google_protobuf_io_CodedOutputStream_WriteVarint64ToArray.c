/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e5268
 * Function: google::protobuf::io::CodedOutputStream::WriteVarint64ToArray
 * Signature: undefined __cdecl WriteVarint64ToArray(ulong param_1, uchar * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(unsigned long, unsigned char*) */

void google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong param_1,uchar *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  bVar1 = (byte)(param_1 >> 0x38);
  uVar3 = (uint)param_1;
  uVar5 = (uint)(param_1 >> 0x1c);
  uVar2 = (uint)(param_1 >> 0x20);
  if (bVar1 == 0) {
    if (uVar5 != 0) {
      if (uVar5 >> 0xe != 0) {
                    /* try { // try from 005e5340 to 006e5367 has its CatchHandler @ 005e59bc */
        if (0x1fffff < uVar5) {
          iVar4 = 8;
          goto LAB_005e52b8;
        }
        iVar4 = 7;
        goto LAB_005e52c4;
      }
                    /* try { // try from 005e5290 to 006e52a3 has its CatchHandler @ 005e5bf8 */
      if (0x7f < uVar5) {
        iVar4 = 6;
        goto LAB_005e52d0;
      }
      iVar4 = 5;
      goto LAB_005e52dc;
    }
    if (uVar3 >> 0xe != 0) {
      if (0x1fffff < uVar3) {
        iVar4 = 4;
        goto LAB_005e52e4;
      }
      iVar4 = 3;
      goto LAB_005e52f0;
    }
    if (uVar3 < 0x80) {
      iVar4 = 1;
      goto LAB_005e5308;
    }
    iVar4 = 2;
  }
  else {
                    /* try { // try from 005e5274 to 006e527b has its CatchHandler @ 005e5d30 */
    if (bVar1 < 0x80) {
                    /* try { // try from 005e527c to 006e528f has its CatchHandler @ 005e5c50 */
      iVar4 = 9;
    }
    else {
      param_2[9] = bVar1 >> 7 | 0x80;
      iVar4 = 10;
    }
                    /* try { // try from 005e52b4 to 006e52bb has its CatchHandler @ 005e5d20 */
    param_2[8] = bVar1 | 0x80;
LAB_005e52b8:
                    /* try { // try from 005e52bc to 006e52cf has its CatchHandler @ 005e5bf4 */
    param_2[7] = (byte)(uVar2 >> 0x11) | 0x80;
LAB_005e52c4:
    param_2[6] = (byte)(uVar2 >> 10) | 0x80;
LAB_005e52d0:
                    /* try { // try from 005e52d0 to 006e52e3 has its CatchHandler @ 005e5b90 */
    param_2[5] = (byte)(uVar2 >> 3) | 0x80;
LAB_005e52dc:
    param_2[4] = (byte)(param_1 >> 0x1c) | 0x80;
LAB_005e52e4:
    param_2[3] = (byte)(uVar3 >> 0x15) | 0x80;
LAB_005e52f0:
                    /* try { // try from 005e52f8 to 006e5307 has its CatchHandler @ 005e5e38 */
    param_2[2] = (byte)(uVar3 >> 0xe) | 0x80;
  }
  param_2[1] = (byte)(uVar3 >> 7) | 0x80;
LAB_005e5308:
  *param_2 = (byte)param_1 | 0x80;
  param_2[(long)iVar4 + -1] = param_2[(long)iVar4 + -1] & 0x7f;
  return;
}


