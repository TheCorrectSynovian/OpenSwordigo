/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057da4c
 * Function: Caver::FWShell::AddArgument
 * Signature: undefined __thiscall AddArgument(FWShell * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FWShell::AddArgument(std::string const&) */

void __thiscall Caver::FWShell::AddArgument(FWShell *this,string *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x10);
  if (lVar1 != *(long *)(this + 0x18)) {
    FUN_0066a528(lVar1,param_1);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
    return;
  }
  std::vector<std::string,std::allocator<std::string>>::_M_insert_aux
            ((vector<std::string,std::allocator<std::string>> *)(this + 8),lVar1,param_1);
  return;
}


