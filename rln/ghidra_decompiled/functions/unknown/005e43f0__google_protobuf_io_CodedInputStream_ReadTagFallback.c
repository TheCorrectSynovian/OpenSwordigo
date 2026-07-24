/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e43f0
 * Function: google::protobuf::io::CodedInputStream::ReadTagFallback
 * Signature: undefined __thiscall ReadTagFallback(CodedInputStream * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedInputStream::ReadTagFallback() */

void __thiscall google::protobuf::io::CodedInputStream::ReadTagFallback(CodedInputStream *this)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong local_30;
  long local_28;
  
                    /* try { // try from 005e43f4 to 006e43f7 has its CatchHandler @ 005e49e0 */
                    /* try { // try from 005e43f8 to 006e44db has its CatchHandler @ 005e4378 */
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  pbVar5 = *(byte **)(this + 8);
  pbVar6 = *(byte **)(this + 0x10);
  if (((int)pbVar6 - (int)pbVar5 < 10) && (pbVar6 <= pbVar5)) {
    if (pbVar5 == pbVar6) {
      if ((*(int *)(this + 0x2c) < 1) ||
         (*(int *)(this + 0x30) <= *(int *)(this + 0x18) - *(int *)(this + 0x2c))) {
        uVar3 = Refresh(this);
        if ((uVar3 & 1) != 0) {
          pbVar5 = *(byte **)(this + 8);
          if (pbVar5 < *(byte **)(this + 0x10)) goto LAB_005e4468;
          goto LAB_005e44d4;
        }
                    /* try { // try from 005e4504 to 006e459b has its CatchHandler @ 005e4378 */
        if (*(int *)(this + 0x30) <= *(int *)(this + 0x18) - *(int *)(this + 0x2c)) {
          this[0x24] = (CodedInputStream)(*(int *)(this + 0x28) == *(int *)(this + 0x30));
          uVar3 = 0;
          goto LAB_005e45a4;
        }
      }
      this[0x24] = (CodedInputStream)0x1;
      uVar3 = 0;
      goto LAB_005e45a4;
    }
    if (pbVar5 < pbVar6) {
LAB_005e4468:
      if (-1 < (char)*pbVar5) {
        local_30 = (ulong)*pbVar5;
        *(byte **)(this + 8) = pbVar5 + 1;
        uVar3 = local_30;
        goto LAB_005e45a4;
      }
    }
LAB_005e44d4:
                    /* try { // try from 005e44dc to 006e4503 has its CatchHandler @ 005e4988 */
    uVar4 = ReadVarint64Fallback(this,&local_30);
    uVar3 = local_30;
    if ((uVar4 & 1) != 0) goto LAB_005e45a4;
LAB_005e45c4:
                    /* try { // try from 005e45c4 to 006e46bb has its CatchHandler @ 005e4378 */
    uVar3 = 0;
  }
  else {
    pbVar6 = pbVar5 + 1;
    uVar1 = *pbVar5 & 0x7f;
    uVar3 = (ulong)uVar1;
    if ((char)*pbVar5 < '\0') {
      uVar1 = (pbVar5[1] & 0x7f) << 7 | uVar1;
      uVar3 = (ulong)uVar1;
      if ((char)pbVar5[1] < '\0') {
        uVar1 = (pbVar5[2] & 0x7f) << 0xe | uVar1;
        uVar3 = (ulong)uVar1;
        if ((char)pbVar5[2] < '\0') {
          uVar1 = (pbVar5[3] & 0x7f) << 0x15 | uVar1;
          uVar3 = (ulong)uVar1;
          if ((char)pbVar5[3] < '\0') {
            uVar3 = (ulong)(uVar1 | (uint)pbVar5[4] << 0x1c);
            if ((char)pbVar5[4] < '\0') {
              if ((char)pbVar5[5] < '\0') {
                if ((char)pbVar5[6] < '\0') {
                  if ((char)pbVar5[7] < '\0') {
                    if ((char)pbVar5[8] < '\0') {
                      if ((char)pbVar5[9] < '\0') goto LAB_005e45c4;
                    /* try { // try from 005e459c to 006e45c3 has its CatchHandler @ 005e4938 */
                      pbVar6 = pbVar5 + 10;
                    }
                    else {
                      pbVar6 = pbVar5 + 9;
                    }
                  }
                  else {
                    pbVar6 = pbVar5 + 8;
                  }
                }
                else {
                  pbVar6 = pbVar5 + 7;
                }
              }
              else {
                pbVar6 = pbVar5 + 6;
              }
            }
            else {
              pbVar6 = pbVar5 + 5;
            }
          }
          else {
            pbVar6 = pbVar5 + 4;
          }
        }
        else {
          pbVar6 = pbVar5 + 3;
        }
      }
      else {
        pbVar6 = pbVar5 + 2;
      }
    }
    *(byte **)(this + 8) = pbVar6;
  }
LAB_005e45a4:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


