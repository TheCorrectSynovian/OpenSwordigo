/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00300f70
 * Function: boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
 * Signature: char * __cdecl lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>(uint param_1, char * param_2)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


char * boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                 (uint param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)
                     PTR_lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>_007e2fe8)
                             (param_1);
  return pcVar1;
}


