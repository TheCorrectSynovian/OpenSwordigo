/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e35e0
 * Function: google::protobuf::io::CodedInputStream::PushLimit
 * Signature: undefined __thiscall PushLimit(CodedInputStream * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedInputStream::PushLimit(int) */

int __thiscall google::protobuf::io::CodedInputStream::PushLimit(CodedInputStream *this,int param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(this + 0x28);
  iVar4 = *(int *)(this + 0x18);
                    /* try { // try from 005e35f0 to 006e3603 has its CatchHandler @ 005e3e64 */
  lVar1 = *(long *)(this + 0x10) + (long)*(int *)(this + 0x2c);
                    /* try { // try from 005e3608 to 006e361b has its CatchHandler @ 005e3e2c */
  iVar5 = (iVar4 - *(int *)(this + 0x2c)) - ((int)*(long *)(this + 0x10) - *(int *)(this + 8));
  iVar2 = 0x7fffffff;
                    /* try { // try from 005e361c to 006e3773 has its CatchHandler @ 005e3474 */
  if (param_1 <= 0x7fffffff - iVar5 && -1 < param_1) {
    iVar2 = iVar5 + param_1;
  }
  iVar5 = iVar3;
  if (iVar2 <= iVar3) {
    iVar5 = iVar2;
  }
  *(int *)(this + 0x28) = iVar5;
  iVar2 = *(int *)(this + 0x30);
  if (iVar5 <= *(int *)(this + 0x30)) {
    iVar2 = iVar5;
  }
  iVar5 = iVar4 - iVar2;
  *(long *)(this + 0x10) = lVar1;
  if (iVar5 != 0 && iVar2 <= iVar4) {
    *(int *)(this + 0x2c) = iVar5;
    *(long *)(this + 0x10) = lVar1 - iVar5;
    return iVar3;
  }
  *(undefined4 *)(this + 0x2c) = 0;
  return iVar3;
}


