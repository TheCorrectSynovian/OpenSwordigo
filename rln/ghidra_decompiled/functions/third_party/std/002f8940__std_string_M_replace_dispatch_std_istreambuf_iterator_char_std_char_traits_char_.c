/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f8940
 * Function: std::string::_M_replace_dispatch<std::istreambuf_iterator<char,std::char_traits<char>>>
 * Signature: string * __cdecl _M_replace_dispatch<std::istreambuf_iterator<char,std::char_traits<char>>>(__normal_iterator param_1, __normal_iterator param_2, istreambuf_iterator param_3, istreambuf_iterator param_4, __false_type param_5)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


string * std::string::_M_replace_dispatch<std::istreambuf_iterator<char,std::char_traits<char>>>
                   (void)

{
  string *psVar1;
  
  psVar1 = (string *)
           (*(code *)
             PTR__M_replace_dispatch<std::istreambuf_iterator<char,std::char_traits<char>>>_007decd0
           )();
  return psVar1;
}


