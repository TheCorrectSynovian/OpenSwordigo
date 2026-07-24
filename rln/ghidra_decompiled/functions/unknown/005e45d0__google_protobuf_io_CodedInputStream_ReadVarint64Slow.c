/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e45d0
 * Function: google::protobuf::io::CodedInputStream::ReadVarint64Slow
 * Signature: undefined __thiscall ReadVarint64Slow(CodedInputStream * this, ulong * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedInputStream::ReadVarint64Slow(unsigned long*) */

undefined8 __thiscall
google::protobuf::io::CodedInputStream::ReadVarint64Slow(CodedInputStream *this,ulong *param_1)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = 0;
  uVar4 = 0;
  do {
    if (lVar5 == 10) {
      return 0;
    }
    while (pbVar1 = *(byte **)(this + 8), pbVar1 == *(byte **)(this + 0x10)) {
      uVar3 = Refresh(this);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
    }
    bVar2 = *pbVar1;
    uVar3 = lVar5 * 7;
    lVar5 = lVar5 + 1;
    *(byte **)(this + 8) = pbVar1 + 1;
    uVar4 = (ulong)(bVar2 & 0x7f) << (uVar3 & 0x3f) | uVar4;
  } while ((char)bVar2 < '\0');
  *param_1 = uVar4;
  return 1;
}


