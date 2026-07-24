/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e4ff4
 * Function: google::protobuf::io::CodedOutputStream::WriteVarint64
 * Signature: undefined __thiscall WriteVarint64(CodedOutputStream * this, ulong param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedOutputStream::WriteVarint64(unsigned long) */

void __thiscall
google::protobuf::io::CodedOutputStream::WriteVarint64(CodedOutputStream *this,ulong param_1)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  void *local_60;
  byte local_54 [12];
  long local_48;
  
                    /* try { // try from 005e5004 to 006e5017 has its CatchHandler @ 005e5d0c */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar7 = *(int *)(this + 0x10);
  if (iVar7 < 10) {
    if (param_1 < 0x80) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      uVar4 = param_1;
      do {
        param_1 = uVar4 >> 7;
        uVar12 = uVar4 >> 0xe;
        local_54[lVar11] = (byte)uVar4 | 0x80;
        lVar11 = lVar11 + 1;
                    /* try { // try from 005e5078 to 006e509f has its CatchHandler @ 005e5a14 */
        uVar4 = param_1;
      } while (uVar12 != 0);
    }
    pbVar8 = local_54;
    iVar9 = (int)lVar11;
    pbVar8[iVar9] = (byte)param_1 & 0x7f;
    iVar13 = iVar9 + 1;
    pvVar5 = *(void **)(this + 8);
    if (iVar7 <= iVar9) {
      pbVar8 = local_54;
      do {
        memcpy(pvVar5,pbVar8,(long)iVar7);
        iVar9 = *(int *)(this + 0x10);
                    /* try { // try from 005e50c0 to 006e50e7 has its CatchHandler @ 005e5e88 */
        uVar4 = (**(code **)(**(long **)this + 0x10))(*(long **)this,&local_60,this + 0x10);
        if ((uVar4 & 1) == 0) {
          *(undefined8 *)(this + 8) = 0;
          *(undefined4 *)(this + 0x10) = 0;
          this[0x18] = (CodedOutputStream)0x1;
          goto LAB_005e51d0;
        }
        iVar7 = *(int *)(this + 0x10);
        iVar13 = iVar13 - iVar9;
        pbVar8 = pbVar8 + iVar9;
        *(void **)(this + 8) = local_60;
        *(int *)(this + 0x14) = *(int *)(this + 0x14) + iVar7;
        pvVar5 = local_60;
      } while (iVar7 < iVar13);
    }
    memcpy(pvVar5,pbVar8,(long)iVar13);
    lVar11 = *(long *)(this + 8) + (long)iVar13;
    iVar13 = *(int *)(this + 0x10) - iVar13;
    goto LAB_005e51c8;
  }
                    /* try { // try from 005e502c to 006e503f has its CatchHandler @ 005e5e88 */
  pbVar8 = *(byte **)(this + 8);
  bVar2 = (byte)(param_1 >> 0x38);
  uVar6 = (uint)param_1;
  uVar10 = (uint)(param_1 >> 0x1c);
  uVar3 = (uint)(param_1 >> 0x20);
  if (bVar2 == 0) {
    if (uVar10 != 0) {
      if (uVar10 >> 0xe != 0) {
        if (0x1fffff < uVar10) {
                    /* try { // try from 005e524c to 006e5273 has its CatchHandler @ 005e5a0c */
          iVar13 = 8;
          goto LAB_005e514c;
        }
        iVar13 = 7;
        goto LAB_005e5158;
      }
                    /* try { // try from 005e5128 to 006e5133 has its CatchHandler @ 005e5cbc */
      if (0x7f < uVar10) {
        iVar13 = 6;
        goto LAB_005e5164;
      }
      iVar13 = 5;
      goto LAB_005e5170;
    }
    if (uVar6 >> 0xe != 0) {
      if (0x1fffff < uVar6) {
        iVar13 = 4;
        goto LAB_005e5178;
      }
      iVar13 = 3;
      goto LAB_005e5184;
    }
    if (0x7f < uVar6) {
      iVar13 = 2;
      goto LAB_005e5190;
    }
    iVar13 = 1;
                    /* try { // try from 005e5220 to 006e522b has its CatchHandler @ 005e5c54 */
  }
  else {
    if (bVar2 < 0x80) {
      iVar13 = 9;
    }
    else {
      pbVar8[9] = bVar2 >> 7 | 0x80;
      iVar13 = 10;
    }
    pbVar8[8] = bVar2 | 0x80;
LAB_005e514c:
                    /* try { // try from 005e5154 to 006e517b has its CatchHandler @ 005e5a10 */
    pbVar8[7] = (byte)(uVar3 >> 0x11) | 0x80;
LAB_005e5158:
    pbVar8[6] = (byte)(uVar3 >> 10) | 0x80;
LAB_005e5164:
    pbVar8[5] = (byte)(uVar3 >> 3) | 0x80;
LAB_005e5170:
    pbVar8[4] = (byte)(param_1 >> 0x1c) | 0x80;
LAB_005e5178:
                    /* try { // try from 005e517c to 006e5187 has its CatchHandler @ 005e5ef0 */
    pbVar8[3] = (byte)(uVar6 >> 0x15) | 0x80;
LAB_005e5184:
                    /* try { // try from 005e5188 to 006e518f has its CatchHandler @ 005e5ca4 */
    pbVar8[2] = (byte)(uVar6 >> 0xe) | 0x80;
LAB_005e5190:
                    /* try { // try from 005e5190 to 006e51f7 has its CatchHandler @ 005e5ef0 */
    pbVar8[1] = (byte)(uVar6 >> 7) | 0x80;
  }
  lVar11 = (long)iVar13;
  *pbVar8 = (byte)param_1 | 0x80;
  pbVar8[lVar11 + -1] = pbVar8[lVar11 + -1] & 0x7f;
  lVar11 = *(long *)(this + 8) + lVar11;
  iVar13 = *(int *)(this + 0x10) - iVar13;
LAB_005e51c8:
  *(long *)(this + 8) = lVar11;
  *(int *)(this + 0x10) = iVar13;
LAB_005e51d0:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


