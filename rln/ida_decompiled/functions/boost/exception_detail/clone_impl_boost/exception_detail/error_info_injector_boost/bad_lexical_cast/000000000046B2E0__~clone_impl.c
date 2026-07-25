/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046B2E0
 * Mangled: _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEED2Ev
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::~clone_impl()
 *
 * Callers: 3
 *   0x000000000046B060  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><int>(int &)
 *   0x000000000046B5B0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::rethrow(void)
 *   0x000000000046B754  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::rethrow(void)
 *
 * Callees: 1
 *   0x00000000001F4CF0  std::bad_cast::~bad_cast()
 *
 * Referenced strings: 8
 *   insn=0x000000000046B2F0 string=0x000000000046B2F4 "`"
 *   insn=0x000000000046B2F4 string=0x000000000046B2F8 ""
 *   insn=0x000000000046B2F8 string=0x000000000046B2FC "A"
 *   insn=0x000000000046B2FC string=0x000000000046B300 "h"
 *   insn=0x000000000046B304 string=0x000000000046B308 ""
 *   insn=0x000000000046B308 string=0x000000000046B30C ""
 *   insn=0x000000000046B31C string=0x000000000046B320 "t&"
 *   insn=0x000000000046B320 string=0x00000000001F4CF0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::~clone_impl(
        std::bad_cast *this)
{
  __int64 v2; // x0

  v2 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 3) = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  std::bad_cast::~bad_cast(this);
}

