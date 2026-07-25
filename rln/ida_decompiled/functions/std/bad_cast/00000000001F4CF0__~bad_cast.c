/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4CF0
 * Mangled: ._ZNSt8bad_castD2Ev
 * Demangled: std::bad_cast::~bad_cast()
 *
 * Callers: 19
 *   0x000000000046AF3C  boost::detail::lexical_cast<int,std::string,false,char>(boost::call_traits<std::string>::param_type,char *,ulong)
 *   0x000000000046B060  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><int>(int &)
 *   0x000000000046B2E0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::~clone_impl()
 *   0x000000000046B328  boost::exception_detail::error_info_injector<boost::bad_lexical_cast>::~error_info_injector()
 *   0x000000000046B370  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::clone_impl(boost::exception_detail::error_info_injector<boost::bad_lexical_cast> const&)
 *   0x000000000046B4A0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::~clone_impl()
 *   0x000000000046B4FC  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::clone(void)
 *   0x000000000046B600  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::~clone_impl()
 *   0x000000000046B648  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::~clone_impl()
 *   0x000000000046B69C  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::clone(void)
 *   0x000000000046B7A4  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::~clone_impl()
 *   0x000000000046B7EC  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::~clone_impl()
 *   0x000000000046B840  boost::exception_detail::error_info_injector<boost::bad_lexical_cast>::~error_info_injector()
 *   0x000000000046B890  `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::bad_lexical_cast>::~error_info_injector()
 *   0x000000000046B8D8  `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::bad_lexical_cast>::~error_info_injector()
 *   0x000000000046B92C  boost::bad_lexical_cast::~bad_lexical_cast()
 *   0x000000000046B950  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>> const&)
 *   0x0000000000488B48  boost::detail::lexical_cast<uint,std::string,false,char>(boost::call_traits<std::string>::param_type,char *,ulong)
 *   0x0000000000488C6C  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><uint>(uint &)
 *
 * Callees: 1
 *   0x000000000051C984  std::bad_cast::~bad_cast()
 *
 * Referenced strings: 2
 *   insn=0x00000000001F4CF4 string=0x000000000051C984 "A"
 *   insn=0x00000000001F4CF8 string=0x00000000001F4CFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall std::bad_cast::~bad_cast(std::bad_cast *this)
{
  _ZNSt8bad_castD2Ev(this);
}

