/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00529048
 * Function: std::vector<std::string,std::allocator<std::string>>::_M_allocate_and_copy<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>>
 * Signature: string * __thiscall _M_allocate_and_copy<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>>(vector<std::string,std::allocator<std::string>> * this, ulong param_1, __normal_iterator param_2, __normal_iterator param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0052908c */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* std::string* std::vector<std::string, std::allocator<std::string >
   >::_M_allocate_and_copy<__gnu_cxx::__normal_iterator<std::string const*, std::vector<std::string,
   std::allocator<std::string > > > >(unsigned long, __gnu_cxx::__normal_iterator<std::string
   const*, std::vector<std::string, std::allocator<std::string > > >,
   __gnu_cxx::__normal_iterator<std::string const*, std::vector<std::string,
   std::allocator<std::string > > >) */

string * __thiscall
std::vector<std::string,std::allocator<std::string>>::
_M_allocate_and_copy<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>>
          (vector<std::string,std::allocator<std::string>> *this,ulong param_1,undefined8 param_3,
          undefined8 param_4)

{
  vector<std::string,std::allocator<std::string>> *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = (vector<std::string,std::allocator<std::string>> *)0x0;
  }
  else {
    if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00665294();
    }
    pvVar1 = operator_new(param_1 << 3);
    this = pvVar1;
  }
  __uninitialized_copy<false>::
  __uninit_copy<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string*>
            (this,param_4,pvVar1);
  return (string *)pvVar1;
}


