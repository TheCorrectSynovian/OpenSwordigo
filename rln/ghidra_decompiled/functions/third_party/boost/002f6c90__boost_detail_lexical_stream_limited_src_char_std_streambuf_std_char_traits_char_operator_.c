/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f6c90
 * Function: boost::detail::lexical_stream_limited_src<char,std::streambuf,std::char_traits<char>>::operator>>
 * Signature: bool __thiscall operator>>(lexical_stream_limited_src<char,std::streambuf,std::char_traits<char>> * this, uint * param_1)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool __thiscall
boost::detail::lexical_stream_limited_src<char,std::streambuf,std::char_traits<char>>::operator>>
          (lexical_stream_limited_src<char,std::streambuf,std::char_traits<char>> *this,
          uint *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(*(code *)PTR_operator>>_007dde78)((char)this);
  return bVar1;
}


