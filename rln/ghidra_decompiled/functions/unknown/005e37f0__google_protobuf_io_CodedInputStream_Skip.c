/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e37f0
 * Function: google::protobuf::io::CodedInputStream::Skip
 * Signature: undefined __thiscall Skip(CodedInputStream * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedInputStream::Skip(int) */

undefined8 __thiscall
google::protobuf::io::CodedInputStream::Skip(CodedInputStream *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  CodedInputStream *pCVar4;
  int iVar5;
  long lVar6;
  
  if (param_1 < 0) {
                    /* try { // try from 005e3828 to 006e388b has its CatchHandler @ 005e3474 */
    return 0;
  }
  pCVar4 = this + 8;
  lVar6 = *(long *)pCVar4;
                    /* try { // try from 005e3800 to 006e3827 has its CatchHandler @ 005e3be4 */
  iVar5 = (int)*(undefined8 *)(this + 0x10) - (int)lVar6;
  if (param_1 <= iVar5) {
    *(long *)pCVar4 = lVar6 + param_1;
    return 1;
  }
  if (0 < *(int *)(this + 0x2c)) {
    *(long *)pCVar4 = lVar6 + iVar5;
    return 0;
  }
  *(long *)pCVar4 = 0;
  *(undefined8 *)(this + 0x10) = 0;
  iVar5 = param_1 - iVar5;
  iVar1 = *(int *)(this + 0x30);
  if (*(int *)(this + 0x28) <= *(int *)(this + 0x30)) {
    iVar1 = *(int *)(this + 0x28);
  }
  iVar2 = iVar1 - *(int *)(this + 0x18);
  if (iVar2 < iVar5) {
    if (0 < iVar2) {
      *(int *)(this + 0x18) = iVar1;
                    /* try { // try from 005e388c to 006e38b3 has its CatchHandler @ 005e3b94 */
      (**(code **)(**(long **)this + 0x20))(*(long **)this);
      return 0;
    }
    return 0;
  }
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + iVar5;
                    /* try { // try from 005e38b4 to 006e390b has its CatchHandler @ 005e3474 */
                    /* WARNING: Could not recover jumptable at 0x005e38b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(**(long **)this + 0x20))(*(long **)this,iVar5);
  return uVar3;
}


