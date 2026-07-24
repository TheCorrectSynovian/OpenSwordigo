/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e36e8
 * Function: google::protobuf::io::CodedInputStream::SetTotalBytesLimit
 * Signature: undefined __thiscall SetTotalBytesLimit(CodedInputStream * this, int param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedInputStream::SetTotalBytesLimit(int, int) */

void __thiscall
google::protobuf::io::CodedInputStream::SetTotalBytesLimit
          (CodedInputStream *this,int param_1,int param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(this + 0x18);
  lVar1 = *(long *)(this + 0x10) + (long)*(int *)(this + 0x2c);
  iVar3 = (iVar2 - *(int *)(this + 0x2c)) - ((int)*(long *)(this + 0x10) - *(int *)(this + 8));
  if (param_1 <= iVar3) {
    param_1 = iVar3;
  }
  *(int *)(this + 0x30) = param_1;
  *(int *)(this + 0x34) = param_2;
  if (*(int *)(this + 0x28) <= param_1) {
    param_1 = *(int *)(this + 0x28);
  }
  iVar3 = iVar2 - param_1;
  *(long *)(this + 0x10) = lVar1;
  if (iVar3 != 0 && param_1 <= iVar2) {
    *(int *)(this + 0x2c) = iVar3;
    *(long *)(this + 0x10) = lVar1 - iVar3;
    return;
  }
  *(undefined4 *)(this + 0x2c) = 0;
  return;
}


