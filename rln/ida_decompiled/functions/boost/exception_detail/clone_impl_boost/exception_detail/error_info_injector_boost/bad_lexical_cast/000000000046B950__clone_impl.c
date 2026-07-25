/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046B950
 * Mangled: _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEEC2ERKS5_
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>> const&)
 *
 * Callers: 1
 *   0x00000000001F7590  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>> const&)
 *
 * Callees: 3
 *   0x00000000001F4CF0  std::bad_cast::~bad_cast()
 *   0x000000000046B9F4  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::find(std::string const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 20
 *   insn=0x000000000046B95C string=0x000000000046B960 ""
 *   insn=0x000000000046B968 string=0x000000000046B96C "A"
 *   insn=0x000000000046B96C string=0x000000000046B970 "h"
 *   insn=0x000000000046B978 string=0x000000000046B97C ""
 *   insn=0x000000000046B97C string=0x000000000046B980 "`"
 *   insn=0x000000000046B980 string=0x000000000046B984 "A"
 *   insn=0x000000000046B984 string=0x000000000046B988 "h"
 *   insn=0x000000000046B98C string=0x000000000046B990 "`"
 *   insn=0x000000000046B994 string=0x000000000046B998 ""
 *   insn=0x000000000046B998 string=0x000000000046B99C "@"
 *   insn=0x000000000046B9A8 string=0x000000000046B9AC ")"
 *   insn=0x000000000046B9AC string=0x000000000046B9B0 "h:"
 *   insn=0x000000000046B9B4 string=0x000000000046B9B8 "*A"
 *   insn=0x000000000046B9B8 string=0x000000000046B9BC "+!"
 *   insn=0x000000000046B9BC string=0x000000000046B9C0 "("
 *   insn=0x000000000046B9C0 string=0x000000000046B9C4 "j"
 *   insn=0x000000000046B9C4 string=0x000000000046B9C8 "k"
 *   insn=0x000000000046B9C8 string=0x000000000046B9CC "`"
 *   insn=0x000000000046B9CC string=0x000000000046B9D0 "h""
 *   insn=0x000000000046B9E8 string=0x00000000001F4CF0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::clone_impl(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // x0
  long double result; // q0

  *(_QWORD *)a1 = off_6D4C58;
  *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 24) = off_6BC9E0;
  v4 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 32) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  result = *(long double *)(a2 + 40);
  *(_QWORD *)a1 = off_6D4B88;
  *(_QWORD *)(a1 + 24) = off_6D4BC0;
  *(long double *)(a1 + 40) = result;
  *(_QWORD *)(a1 + 64) = &off_6D4BE0;
  return result;
}

