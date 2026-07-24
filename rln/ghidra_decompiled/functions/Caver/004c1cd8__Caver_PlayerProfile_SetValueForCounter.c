/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c1cd8
 * Function: Caver::PlayerProfile::SetValueForCounter
 * Signature: undefined __thiscall SetValueForCounter(PlayerProfile * this, string * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PlayerProfile::SetValueForCounter(std::string const&, int) */

void __thiscall
Caver::PlayerProfile::SetValueForCounter(PlayerProfile *this,string *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  long *plVar4;
  
  puVar2 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)(this + 0x90),param_1);
  uVar1 = *puVar2;
                    /* catch() { ... } // from try @ 004c1e74 with catch @ 004c1d0c
                       catch() { ... } // from try @ 004c2060 with catch @ 004c1d0c */
  piVar3 = (int *)std::
                  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                  ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                *)(this + 0x90),param_1);
  *piVar3 = param_2;
  plVar4 = *(long **)this;
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004c1d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 8))(plVar4,this,param_1,uVar1,param_2);
    return;
  }
  return;
}


