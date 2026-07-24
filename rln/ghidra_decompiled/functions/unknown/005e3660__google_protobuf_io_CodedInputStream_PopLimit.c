/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e3660
 * Function: google::protobuf::io::CodedInputStream::PopLimit
 * Signature: undefined __thiscall PopLimit(CodedInputStream * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedInputStream::PopLimit(int) */

void __thiscall google::protobuf::io::CodedInputStream::PopLimit(CodedInputStream *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  iVar2 = *(int *)(this + 0x2c);
  lVar4 = *(long *)(this + 0x10);
  *(int *)(this + 0x28) = param_1;
  iVar1 = *(int *)(this + 0x30);
  if (param_1 <= *(int *)(this + 0x30)) {
    iVar1 = param_1;
  }
  iVar3 = *(int *)(this + 0x18) - iVar1;
  *(long *)(this + 0x10) = lVar4 + iVar2;
  if (iVar3 != 0 && iVar1 <= *(int *)(this + 0x18)) {
    *(int *)(this + 0x2c) = iVar3;
    *(long *)(this + 0x10) = (lVar4 + iVar2) - (long)iVar3;
    this[0x24] = (CodedInputStream)0x0;
    return;
  }
  *(undefined4 *)(this + 0x2c) = 0;
  this[0x24] = (CodedInputStream)0x0;
  return;
}


