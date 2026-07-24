/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f4e70
 * Function: std::string::_S_construct<std::istreambuf_iterator<char,std::char_traits<char>>>
 * Signature: char * __thiscall _S_construct<std::istreambuf_iterator<char,std::char_traits<char>>>(string * this, istreambuf_iterator param_1, istreambuf_iterator param_2, allocator * param_3, input_iterator_tag param_4)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


char * __thiscall
std::string::_S_construct<std::istreambuf_iterator<char,std::char_traits<char>>>(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)
                     PTR__S_construct<std::istreambuf_iterator<char,std::char_traits<char>>>_007dcf68
                   )();
  return pcVar1;
}


