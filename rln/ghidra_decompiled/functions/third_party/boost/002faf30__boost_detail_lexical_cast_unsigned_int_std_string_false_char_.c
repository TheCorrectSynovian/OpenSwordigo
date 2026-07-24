/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002faf30
 * Function: boost::detail::lexical_cast<unsigned_int,std::string,false,char>
 * Signature: uint __cdecl lexical_cast<unsigned_int,std::string,false,char>(param_type param_1, char * param_2, ulong param_3)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


uint boost::detail::lexical_cast<unsigned_int,std::string,false,char>(void)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_lexical_cast<unsigned_int,std::string,false,char>_007dffc8)();
  return uVar1;
}


