/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ebeb4
 * Function: std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string*>
 * Signature: string * __cdecl __uninit_copy<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string*>(__normal_iterator param_1, __normal_iterator param_2, string * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::string*
   std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,
   std::vector<std::string, std::allocator<std::string > > >,
   std::string*>(__gnu_cxx::__normal_iterator<std::string const*, std::vector<std::string,
   std::allocator<std::string > > >, __gnu_cxx::__normal_iterator<std::string const*,
   std::vector<std::string, std::allocator<std::string > > >, std::string*) */

string * std::__uninitialized_copy<false>::
         __uninit_copy<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string*>
                   (long param_1,long param_2,string *param_3)

{
  long lVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 004ebefc with catch @ 004ebecc */
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 004ebee8 to 005ebefb has its CatchHandler @ 004ebf20 */
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    FUN_0066a528(param_3,param_1);
    param_3 = param_3 + 8;
                    /* try { // try from 004ebefc to 005ebf23 has its CatchHandler @ 004ebecc */
  }
                    /* catch() { ... } // from try @ 004ebee8 with catch @ 004ebf20 */
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


