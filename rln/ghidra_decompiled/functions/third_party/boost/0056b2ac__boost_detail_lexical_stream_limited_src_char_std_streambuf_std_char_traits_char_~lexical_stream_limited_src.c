/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056b2ac
 * Function: boost::detail::lexical_stream_limited_src<char,std::streambuf,std::char_traits<char>>::~lexical_stream_limited_src
 * Signature: undefined __thiscall ~lexical_stream_limited_src(lexical_stream_limited_src<char,std::streambuf,std::char_traits<char>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::lexical_stream_limited_src<char, std::streambuf, std::char_traits<char>
   >::~lexical_stream_limited_src() */

void __thiscall
boost::detail::lexical_stream_limited_src<char,std::streambuf,std::char_traits<char>>::
~lexical_stream_limited_src
          (lexical_stream_limited_src<char,std::streambuf,std::char_traits<char>> *this)

{
  *(undefined **)this = PTR_DAT_007e6a48 + 0x10;
  FUN_0063c0c8(this + 0x38);
  operator_delete(this);
  return;
}


