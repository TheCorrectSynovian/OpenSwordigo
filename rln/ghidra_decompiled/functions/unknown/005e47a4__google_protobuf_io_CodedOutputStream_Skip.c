/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e47a4
 * Function: google::protobuf::io::CodedOutputStream::Skip
 * Signature: undefined __thiscall Skip(CodedOutputStream * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedOutputStream::Skip(int) */

void __thiscall google::protobuf::io::CodedOutputStream::Skip(CodedOutputStream *this,int param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  CodedOutputStream *pCVar4;
  int iVar5;
  int iVar6;
  long local_50;
  long local_48;
  
                    /* try { // try from 005e47a8 to 006e47b3 has its CatchHandler @ 005e48b8 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005e47d0 to 006e47f7 has its CatchHandler @ 005e49d8 */
  if (param_1 < 0) {
    uVar3 = 0;
  }
  else {
    pCVar4 = this + 0x10;
    iVar6 = *(int *)pCVar4;
    iVar5 = iVar6;
    if (iVar6 < param_1) {
      do {
                    /* try { // try from 005e47f8 to 006e489b has its CatchHandler @ 005e4378 */
        uVar2 = (**(code **)(**(long **)this + 0x10))(*(long **)this,&local_50,pCVar4);
        if ((uVar2 & 1) == 0) {
          uVar3 = 0;
          *(undefined8 *)(this + 8) = 0;
          *(undefined4 *)(this + 0x10) = 0;
          this[0x18] = (CodedOutputStream)0x1;
          goto LAB_005e486c;
        }
        iVar6 = *(int *)(this + 0x10);
        param_1 = param_1 - iVar5;
        *(long *)(this + 8) = local_50;
        *(int *)(this + 0x14) = *(int *)(this + 0x14) + iVar6;
        iVar5 = iVar6;
      } while (iVar6 < param_1);
    }
    else {
      local_50 = *(long *)(this + 8);
    }
    uVar3 = 1;
    *(long *)(this + 8) = local_50 + param_1;
    *(int *)pCVar4 = iVar6 - param_1;
  }
LAB_005e486c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


