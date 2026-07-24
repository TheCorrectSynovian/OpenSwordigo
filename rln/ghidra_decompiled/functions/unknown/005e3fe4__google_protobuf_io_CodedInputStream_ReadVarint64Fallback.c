/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e3fe4
 * Function: google::protobuf::io::CodedInputStream::ReadVarint64Fallback
 * Signature: undefined __thiscall ReadVarint64Fallback(CodedInputStream * this, ulong * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedInputStream::ReadVarint64Fallback(unsigned long*) */

undefined8 __thiscall
google::protobuf::io::CodedInputStream::ReadVarint64Fallback(CodedInputStream *this,ulong *param_1)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  
  pbVar5 = *(byte **)(this + 8);
  pbVar7 = *(byte **)(this + 0x10);
  iVar4 = (int)pbVar5;
  if (((int)pbVar7 - iVar4 < 10) && (pbVar7 <= pbVar5)) {
    lVar11 = 0;
    uVar9 = 0;
    do {
      if (lVar11 == 10) {
        return 0;
      }
      while (pbVar5 == pbVar7) {
                    /* try { // try from 005e4058 to 006e406b has its CatchHandler @ 005e41d0 */
        uVar3 = Refresh(this);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
                    /* try { // try from 005e404c to 006e4057 has its CatchHandler @ 005e422c */
        pbVar7 = *(byte **)(this + 0x10);
        pbVar5 = *(byte **)(this + 8);
      }
      bVar2 = *pbVar5;
                    /* try { // try from 005e4070 to 006e4083 has its CatchHandler @ 005e4198 */
      uVar3 = lVar11 * 7;
      lVar11 = lVar11 + 1;
      uVar9 = (ulong)(bVar2 & 0x7f) << (uVar3 & 0x3f) | uVar9;
                    /* try { // try from 005e4084 to 006e42ef has its CatchHandler @ 005e3fac */
      *(byte **)(this + 8) = pbVar5 + 1;
      pbVar5 = pbVar5 + 1;
    } while ((char)bVar2 < '\0');
    *param_1 = uVar9;
  }
  else {
    iVar10 = iVar4 + 1;
    uVar6 = *pbVar5 & 0x7f;
    if ((char)*pbVar5 < '\0') {
      uVar6 = (pbVar5[1] & 0x7f) << 7 | uVar6;
      if ((char)pbVar5[1] < '\0') {
        uVar6 = (pbVar5[2] & 0x7f) << 0xe | uVar6;
        if ((char)pbVar5[2] < '\0') {
          uVar6 = (pbVar5[3] & 0x7f) << 0x15 | uVar6;
          if ((char)pbVar5[3] < '\0') {
            uVar8 = pbVar5[4] & 0x7f;
            if ((char)pbVar5[4] < '\0') {
              uVar8 = (pbVar5[5] & 0x7f) << 7 | uVar8;
              if ((char)pbVar5[5] < '\0') {
                uVar8 = (pbVar5[6] & 0x7f) << 0xe | uVar8;
                if ((char)pbVar5[6] < '\0') {
                  uVar8 = (pbVar5[7] & 0x7f) << 0x15 | uVar8;
                  if ((char)pbVar5[7] < '\0') {
                    uVar1 = pbVar5[8] & 0x7f;
                    uVar9 = (ulong)uVar1;
                    if ((char)pbVar5[8] < '\0') {
                      if ((char)pbVar5[9] < '\0') {
                        return 0;
                      }
                      iVar10 = iVar4 + 10;
                      uVar9 = (ulong)((pbVar5[9] & 0x7f) << 7 | uVar1);
                    }
                    else {
                      iVar10 = iVar4 + 9;
                    }
                  }
                  else {
                    uVar9 = 0;
                    iVar10 = iVar4 + 8;
                  }
                }
                else {
                  uVar9 = 0;
                  iVar10 = iVar4 + 7;
                }
              }
              else {
                uVar9 = 0;
                iVar10 = iVar4 + 6;
              }
            }
            else {
              uVar9 = 0;
              iVar10 = iVar4 + 5;
            }
          }
          else {
            uVar8 = 0;
            uVar9 = 0;
            iVar10 = iVar4 + 4;
          }
        }
        else {
          uVar8 = 0;
          uVar9 = 0;
          iVar10 = iVar4 + 3;
        }
      }
      else {
        uVar8 = 0;
        uVar9 = 0;
        iVar10 = iVar4 + 2;
      }
    }
    else {
      uVar8 = 0;
      uVar9 = 0;
    }
                    /* catch() { ... } // from try @ 005e4070 with catch @ 005e4198 */
    *(byte **)(this + 8) = pbVar5 + (iVar10 - iVar4);
    *param_1 = (ulong)uVar6 | (ulong)uVar8 << 0x1c | uVar9 << 0x38;
  }
  return 1;
}


