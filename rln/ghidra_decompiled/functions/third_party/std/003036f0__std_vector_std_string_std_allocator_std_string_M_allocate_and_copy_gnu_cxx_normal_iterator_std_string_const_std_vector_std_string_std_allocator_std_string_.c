/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003036f0
 * Function: std::vector<std::string,std::allocator<std::string>>::_M_allocate_and_copy<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>>
 * Signature: string * __thiscall _M_allocate_and_copy<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>>(vector<std::string,std::allocator<std::string>> * this, ulong param_1, __normal_iterator param_2, __normal_iterator param_3)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


string * __thiscall
std::vector<std::string,std::allocator<std::string>>::
_M_allocate_and_copy<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>>
          (void)

{
  string *psVar1;
  
  psVar1 = (string *)
           (*(code *)
             PTR__M_allocate_and_copy<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>>_007e43a8
           )();
  return psVar1;
}


