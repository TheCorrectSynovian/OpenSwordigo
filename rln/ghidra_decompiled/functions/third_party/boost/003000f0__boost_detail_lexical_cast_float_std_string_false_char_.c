/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003000f0
 * Function: boost::detail::lexical_cast<float,std::string,false,char>
 * Signature: float __cdecl lexical_cast<float,std::string,false,char>(param_type param_1, char * param_2, ulong param_3)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


float boost::detail::lexical_cast<float,std::string,false,char>(void)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_lexical_cast<float,std::string,false,char>_007e28a8)();
  return fVar1;
}


