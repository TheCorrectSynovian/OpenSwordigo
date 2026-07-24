/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e4d54
 * Function: google::protobuf::io::CodedOutputStream::WriteVarint32
 * Signature: undefined __thiscall WriteVarint32(CodedOutputStream * this, uint param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedOutputStream::WriteVarint32(unsigned int) */

void __thiscall
google::protobuf::io::CodedOutputStream::WriteVarint32(CodedOutputStream *this,uint param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  void *local_58;
  byte local_50 [8];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar5 = *(int *)(this + 0x10);
  if (iVar5 < 5) {
                    /* try { // try from 005e4dec to 006e4ea7 has its CatchHandler @ 005e4ec8 */
    if (param_1 < 0x80) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
                    /* catch() { ... } // from try @ 005e4d04 with catch @ 005e4df4 */
      do {
        uVar1 = param_1 >> 0xe;
        local_50[lVar7] = (byte)param_1 | 0x80;
                    /* catch() { ... } // from try @ 005e4cfc with catch @ 005e4e04 */
        lVar7 = lVar7 + 1;
        param_1 = param_1 >> 7;
      } while (uVar1 != 0);
    }
    pbVar6 = local_50;
    iVar8 = (int)lVar7;
    pbVar6[iVar8] = (byte)param_1 & 0x7f;
    iVar9 = iVar8 + 1;
    pvVar4 = *(void **)(this + 8);
    if (iVar5 <= iVar8) {
      pbVar6 = local_50;
      do {
        memcpy(pvVar4,pbVar6,(long)iVar5);
        iVar8 = *(int *)(this + 0x10);
        uVar3 = (**(code **)(**(long **)this + 0x10))(*(long **)this,&local_58,this + 0x10);
        if ((uVar3 & 1) == 0) {
                    /* catch() { ... } // from try @ 005e4dec with catch @ 005e4ec8 */
          *(undefined8 *)(this + 8) = 0;
                    /* catch() { ... } // from try @ 005e4ee0 with catch @ 005e4ecc */
          *(undefined4 *)(this + 0x10) = 0;
          this[0x18] = (CodedOutputStream)0x1;
          goto LAB_005e4f1c;
        }
        iVar5 = *(int *)(this + 0x10);
        iVar9 = iVar9 - iVar8;
        pbVar6 = pbVar6 + iVar8;
        *(void **)(this + 8) = local_58;
        *(int *)(this + 0x14) = *(int *)(this + 0x14) + iVar5;
        pvVar4 = local_58;
      } while (iVar5 < iVar9);
    }
    memcpy(pvVar4,pbVar6,(long)iVar9);
                    /* try { // try from 005e4ea8 to 006e4ecb has its CatchHandler @ 005e4c7c */
    *(long *)(this + 8) = *(long *)(this + 8) + (long)iVar9;
    *(int *)(this + 0x10) = *(int *)(this + 0x10) - iVar9;
  }
  else {
    pbVar6 = *(byte **)(this + 8);
    *pbVar6 = (byte)param_1 | 0x80;
    if (param_1 < 0x80) {
      *pbVar6 = (byte)param_1 & 0x7f;
      lVar7 = 1;
    }
    else {
      pbVar6[1] = (byte)(param_1 >> 7) | 0x80;
      if (param_1 < 0x4000) {
                    /* try { // try from 005e4edc to 006e4edf has its CatchHandler @ 005e4ef0 */
        pbVar6[1] = (byte)(param_1 >> 7) & 0x7f;
                    /* try { // try from 005e4ee0 to 006e4f03 has its CatchHandler @ 005e4ecc */
        lVar7 = 2;
      }
      else {
        pbVar6[2] = (byte)(param_1 >> 0xe) | 0x80;
        if (param_1 < 0x200000) {
          pbVar6[2] = (byte)(param_1 >> 0xe) & 0x7f;
                    /* catch() { ... } // from try @ 005e4edc with catch @ 005e4ef0 */
          lVar7 = 3;
        }
        else {
          pbVar6[3] = (byte)(param_1 >> 0x15) | 0x80;
          if (param_1 >> 0x1c == 0) {
            pbVar6[3] = (byte)(param_1 >> 0x15) & 0x7f;
            lVar7 = 4;
          }
          else {
                    /* catch() { ... } // from try @ 005e4d28 with catch @ 005e4ddc */
            pbVar6[4] = (byte)(param_1 >> 0x1c);
            lVar7 = 5;
                    /* catch() { ... } // from try @ 005e4cd0 with catch @ 005e4de4 */
          }
        }
      }
    }
    *(long *)(this + 8) = *(long *)(this + 8) + lVar7;
    *(int *)(this + 0x10) = *(int *)(this + 0x10) - (int)lVar7;
  }
LAB_005e4f1c:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


