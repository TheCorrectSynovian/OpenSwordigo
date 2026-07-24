/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e41c8
 * Function: google::protobuf::io::CodedInputStream::ReadVarint32Fallback
 * Signature: undefined __thiscall ReadVarint32Fallback(CodedInputStream * this, uint * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedInputStream::ReadVarint32Fallback(unsigned int*) */

void __thiscall
google::protobuf::io::CodedInputStream::ReadVarint32Fallback(CodedInputStream *this,uint *param_1)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  byte *pbVar6;
  uint local_30 [2];
  long local_28;
  
                    /* catch() { ... } // from try @ 005e4058 with catch @ 005e41d0 */
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  pbVar1 = *(byte **)(this + 8);
  if (((int)*(byte **)(this + 0x10) - (int)pbVar1 < 10) && (*(byte **)(this + 0x10) <= pbVar1)) {
    uVar3 = ReadVarint64Fallback(this,(ulong *)local_30);
    if ((uVar3 & 1) == 0) {
LAB_005e4304:
      uVar4 = 0;
      goto LAB_005e42e4;
    }
    *param_1 = local_30[0];
  }
  else {
    pbVar6 = pbVar1 + 1;
    uVar5 = *pbVar1 & 0x7f;
    if ((char)*pbVar1 < '\0') {
      uVar5 = (pbVar1[1] & 0x7f) << 7 | uVar5;
      if ((char)pbVar1[1] < '\0') {
        uVar5 = (pbVar1[2] & 0x7f) << 0xe | uVar5;
        if ((char)pbVar1[2] < '\0') {
          uVar5 = (pbVar1[3] & 0x7f) << 0x15 | uVar5;
          if ((char)pbVar1[3] < '\0') {
            uVar5 = uVar5 | (uint)pbVar1[4] << 0x1c;
            if ((char)pbVar1[4] < '\0') {
              if ((char)pbVar1[5] < '\0') {
                if ((char)pbVar1[6] < '\0') {
                  if ((char)pbVar1[7] < '\0') {
                    if ((char)pbVar1[8] < '\0') {
                      if ((char)pbVar1[9] < '\0') goto LAB_005e4304;
                      pbVar6 = pbVar1 + 10;
                    }
                    else {
                      pbVar6 = pbVar1 + 9;
                    }
                  }
                  else {
                    pbVar6 = pbVar1 + 8;
                  }
                }
                else {
                  pbVar6 = pbVar1 + 7;
                }
              }
              else {
                pbVar6 = pbVar1 + 6;
              }
            }
            else {
              pbVar6 = pbVar1 + 5;
                    /* catch() { ... } // from try @ 005e4018 with catch @ 005e4288 */
            }
          }
          else {
            pbVar6 = pbVar1 + 4;
          }
        }
        else {
          pbVar6 = pbVar1 + 3;
        }
      }
      else {
        pbVar6 = pbVar1 + 2;
                    /* catch() { ... } // from try @ 005e404c with catch @ 005e422c */
      }
    }
    *param_1 = uVar5;
    *(byte **)(this + 8) = pbVar6;
  }
  uVar4 = 1;
LAB_005e42e4:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


