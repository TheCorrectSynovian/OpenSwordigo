/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00300350
 * Function: boost::detail::lexical_cast<int,std::string,false,char>
 * Signature: int __cdecl lexical_cast<int,std::string,false,char>(param_type param_1, char * param_2, ulong param_3)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int boost::detail::lexical_cast<int,std::string,false,char>(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_lexical_cast<int,std::string,false,char>_007e29d8)();
  return iVar1;
}


