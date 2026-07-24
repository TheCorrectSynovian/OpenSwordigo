/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003020e0
 * Function: std::__uninitialized_copy<false>::__uninit_copy<std::string*,std::string*>
 * Signature: string * __cdecl __uninit_copy<std::string*,std::string*>(string * param_1, string * param_2, string * param_3)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


string * std::__uninitialized_copy<false>::__uninit_copy<std::string*,std::string*>
                   (string *param_1,string *param_2,string *param_3)

{
  string *psVar1;
  
  psVar1 = (string *)(*(code *)PTR___uninit_copy<std::string*,std::string*>_007e38a0)();
  return psVar1;
}


