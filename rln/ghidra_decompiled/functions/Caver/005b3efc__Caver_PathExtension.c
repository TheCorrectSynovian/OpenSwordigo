/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b3efc
 * Function: Caver::PathExtension
 * Signature: undefined __thiscall PathExtension(Caver * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PathExtension(std::string const&) */

void __thiscall Caver::PathExtension(Caver *this,string *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005b3f24 to 006b3f4b has its CatchHandler @ 005b41ec */
  uVar2 = FUN_00668098(this,0x2e,0xffffffffffffffff);
  if (uVar2 == 0xffffffff) {
    FUN_00666bb8();
  }
  else {
    if (*(ulong *)(*(long *)this + -0x18) <
        (ulong)((long)(((ulong)uVar2 << 0x20) + 0x100000000) >> 0x20)) {
                    /* WARNING: Subroutine does not return */
      FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)",&DAT_00695c42);
    }
    FUN_00666784();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* try { // try from 005b3f90 to 006b3fb7 has its CatchHandler @ 005b41e0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


