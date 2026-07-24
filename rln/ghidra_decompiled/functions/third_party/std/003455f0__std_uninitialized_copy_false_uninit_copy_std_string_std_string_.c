/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003455f0
 * Function: std::__uninitialized_copy<false>::__uninit_copy<std::string*,std::string*>
 * Signature: string * __cdecl __uninit_copy<std::string*,std::string*>(string * param_1, string * param_2, string * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::string* std::__uninitialized_copy<false>::__uninit_copy<std::string*,
   std::string*>(std::string*, std::string*, std::string*) */

string * std::__uninitialized_copy<false>::__uninit_copy<std::string*,std::string*>
                   (string *param_1,string *param_2,string *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    FUN_0066a528(param_3,param_1);
    param_3 = param_3 + 8;
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


