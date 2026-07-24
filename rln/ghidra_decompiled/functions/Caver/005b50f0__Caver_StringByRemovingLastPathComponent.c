/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b50f0
 * Function: Caver::StringByRemovingLastPathComponent
 * Signature: undefined __thiscall StringByRemovingLastPathComponent(Caver * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StringByRemovingLastPathComponent(std::string const&) */

void __thiscall Caver::StringByRemovingLastPathComponent(Caver *this,string *param_1)

{
  int iVar1;
  int iVar2;
  long *in_x8;
  
                    /* try { // try from 005b5114 to 006b5367 has its CatchHandler @ 005b4fc0 */
  iVar2 = *(int *)(*(long *)this + -0x18);
  iVar1 = iVar2 + -1;
  if (*(char *)(*(long *)this + (long)iVar1) != '/') {
    iVar2 = iVar1;
  }
  iVar2 = FUN_00668288(this,&DAT_00693eee,(long)iVar2,1);
  if (iVar2 == -1) {
    *in_x8 = (long)(PTR_DAT_007e5de8 + 0x18);
    return;
  }
  FUN_00666784();
  return;
}


