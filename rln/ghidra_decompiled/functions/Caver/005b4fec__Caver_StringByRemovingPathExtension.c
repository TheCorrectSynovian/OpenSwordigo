/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b4fec
 * Function: Caver::StringByRemovingPathExtension
 * Signature: undefined __thiscall StringByRemovingPathExtension(Caver * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StringByRemovingPathExtension(std::string const&) */

void __thiscall Caver::StringByRemovingPathExtension(Caver *this,string *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00668098(this,0x2e,0xffffffffffffffff);
  if (iVar1 == -1) {
    FUN_0066a528();
    return;
  }
  FUN_00666784();
  return;
}


