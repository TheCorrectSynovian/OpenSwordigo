/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b504c
 * Function: Caver::LastPathComponent
 * Signature: undefined __thiscall LastPathComponent(Caver * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LastPathComponent(std::string const&) */

void __thiscall Caver::LastPathComponent(Caver *this,string *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(*(long *)this + -0x18);
  iVar2 = iVar1 + -1;
                    /* try { // try from 005b5080 to 006b50a7 has its CatchHandler @ 005b5348 */
  if (*(char *)(*(long *)this + (long)iVar2) != '/') {
    iVar1 = iVar2;
  }
  uVar3 = FUN_00668288(this,&DAT_00693eee,(long)iVar1,1);
  if (uVar3 == 0xffffffff) {
    FUN_0066a528();
    return;
  }
  if ((ulong)((long)(((ulong)uVar3 << 0x20) + 0x100000000) >> 0x20) <=
      *(ulong *)(*(long *)this + -0x18)) {
    FUN_00666784();
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005b50ec to 006b5113 has its CatchHandler @ 005b533c */
  FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)",&DAT_00695c42);
}


