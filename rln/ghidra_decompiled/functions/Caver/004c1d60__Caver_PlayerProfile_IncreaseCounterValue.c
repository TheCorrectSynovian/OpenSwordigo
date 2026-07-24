/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c1d60
 * Function: Caver::PlayerProfile::IncreaseCounterValue
 * Signature: undefined __thiscall IncreaseCounterValue(PlayerProfile * this, string * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PlayerProfile::IncreaseCounterValue(std::string const&, int) */

int __thiscall
Caver::PlayerProfile::IncreaseCounterValue(PlayerProfile *this,string *param_1,int param_2)

{
  PlayerProfile *pPVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  
  pPVar1 = (PlayerProfile *)
           std::
           _Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::find((_Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                   *)(this + 0x90),param_1);
  if (this + 0x98 == pPVar1) {
    piVar3 = (int *)std::
                    map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                    ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                  *)(this + 0x90),param_1);
    iVar4 = 0;
    *piVar3 = param_2;
                    /* try { // try from 004c1de4 to 005c1deb has its CatchHandler @ 004c1ffc */
    if (param_2 == 0) {
      return 0;
    }
  }
  else {
    iVar4 = *(int *)(pPVar1 + 0x28);
    param_2 = iVar4 + param_2;
    *(int *)(pPVar1 + 0x28) = param_2;
    if (param_2 == iVar4) {
      return param_2;
    }
  }
  plVar2 = *(long **)this;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2,this,param_1,iVar4,param_2);
  }
  return param_2;
}


