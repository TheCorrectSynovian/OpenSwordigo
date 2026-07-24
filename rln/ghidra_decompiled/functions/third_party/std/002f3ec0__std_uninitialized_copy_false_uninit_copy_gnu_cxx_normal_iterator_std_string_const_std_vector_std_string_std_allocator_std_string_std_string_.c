/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f3ec0
 * Function: std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string*>
 * Signature: string * __cdecl __uninit_copy<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string*>(__normal_iterator param_1, __normal_iterator param_2, string * param_3)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


string * std::__uninitialized_copy<false>::
         __uninit_copy<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string*>
                   (void)

{
  string *psVar1;
  
  psVar1 = (string *)
           (*(code *)
             PTR___uninit_copy<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string*>_007dc790
           )();
  return psVar1;
}


