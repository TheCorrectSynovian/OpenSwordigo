/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8280
 * Mangled: .__cxa_call_unexpected
 * Demangled: .__cxa_call_unexpected
 *
 * Callers: 98
 *   0x0000000000245834  boost::throw_exception<boost::bad_function_call>(boost::bad_function_call const&)
 *   0x0000000000245AB4  j_.__cxa_call_unexpected
 *   0x0000000000245AFC  j_.__cxa_call_unexpected_0
 *   0x0000000000245B00  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl(boost::exception_detail::error_info_injector<boost::bad_function_call> const&)
 *   0x0000000000245CA0  j_.__cxa_call_unexpected_1
 *   0x0000000000245D80  j_.__cxa_call_unexpected_2
 *   0x0000000000245DD4  j_.__cxa_call_unexpected_3
 *   0x0000000000245F44  j_.__cxa_call_unexpected_4
 *   0x0000000000245F98  j_.__cxa_call_unexpected_5
 *   0x0000000000245FE8  j_.__cxa_call_unexpected_6
 *   0x0000000000245FEC  `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::bad_function_call>::~error_info_injector()
 *   0x0000000000247084  j_.__cxa_call_unexpected_7
 *   0x0000000000368140  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GuidePurchaseView,Caver::GuidePurchaseView>(boost::shared_ptr<Caver::GuidePurchaseView> const*,Caver::GuidePurchaseView *)
 *   0x0000000000368364  j_.__cxa_call_unexpected_8
 *   0x00000000003683AC  j_.__cxa_call_unexpected_9
 *   0x00000000003683B0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::clone_impl(boost::exception_detail::error_info_injector<boost::bad_weak_ptr> const&)
 *   0x000000000036852C  j_.__cxa_call_unexpected_10
 *   0x0000000000368688  j_.__cxa_call_unexpected_11
 *   0x00000000003686DC  j_.__cxa_call_unexpected_12
 *   0x000000000036882C  j_.__cxa_call_unexpected_13
 *   0x0000000000368880  j_.__cxa_call_unexpected_14
 *   0x00000000003688D0  j_.__cxa_call_unexpected_15
 *   0x0000000000368918  j_.__cxa_call_unexpected_16
 *   0x000000000036896C  j_.__cxa_call_unexpected_17
 *   0x000000000046B060  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><int>(int &)
 *   0x000000000046B324  j_.__cxa_call_unexpected_18
 *   0x000000000046B36C  j_.__cxa_call_unexpected_19
 *   0x000000000046B370  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::clone_impl(boost::exception_detail::error_info_injector<boost::bad_lexical_cast> const&)
 *   0x000000000046B4EC  j_.__cxa_call_unexpected_20
 *   0x000000000046B644  j_.__cxa_call_unexpected_21
 *   0x000000000046B698  j_.__cxa_call_unexpected_22
 *   0x000000000046B7E8  j_.__cxa_call_unexpected_23
 *   0x000000000046B83C  j_.__cxa_call_unexpected_24
 *   0x000000000046B88C  j_.__cxa_call_unexpected_25
 *   0x000000000046B8D4  j_.__cxa_call_unexpected_26
 *   0x000000000046B928  j_.__cxa_call_unexpected_27
 *   0x00000000004B5548  Caver::SHA1HashForBytes(uchar const*,ulong)
 *   0x00000000004B5820  j_.__cxa_call_unexpected_28
 *   0x00000000004B5868  j_.__cxa_call_unexpected_29
 *   0x00000000004B586C  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(boost::exception_detail::error_info_injector<boost::gregorian::bad_month> const&)
 *   0x00000000004B5A0C  j_.__cxa_call_unexpected_30
 *   0x00000000004B5AEC  j_.__cxa_call_unexpected_31
 *   0x00000000004B5B40  j_.__cxa_call_unexpected_32
 *   0x00000000004B5CB0  j_.__cxa_call_unexpected_33
 *   0x00000000004B5D04  j_.__cxa_call_unexpected_34
 *   0x00000000004B5D54  j_.__cxa_call_unexpected_35
 *   0x00000000004B5D9C  j_.__cxa_call_unexpected_36
 *   0x00000000004B5DF0  j_.__cxa_call_unexpected_37
 *   0x00000000004B5EE0  boost::throw_exception<boost::gregorian::bad_year>(boost::gregorian::bad_year const&)
 *   0x00000000004B6160  j_.__cxa_call_unexpected_38
 *   0x00000000004B61A8  j_.__cxa_call_unexpected_39
 *   0x00000000004B61AC  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(boost::exception_detail::error_info_injector<boost::gregorian::bad_year> const&)
 *   0x00000000004B634C  j_.__cxa_call_unexpected_40
 *   0x00000000004B642C  j_.__cxa_call_unexpected_41
 *   0x00000000004B6480  j_.__cxa_call_unexpected_42
 *   0x00000000004B65F0  j_.__cxa_call_unexpected_43
 *   0x00000000004B6644  j_.__cxa_call_unexpected_44
 *   0x00000000004B6694  j_.__cxa_call_unexpected_45
 *   0x00000000004B66DC  j_.__cxa_call_unexpected_46
 *   0x00000000004B6730  j_.__cxa_call_unexpected_47
 *   0x00000000004B6820  boost::throw_exception<boost::gregorian::bad_day_of_month>(boost::gregorian::bad_day_of_month const&)
 *   0x00000000004B6AA0  j_.__cxa_call_unexpected_48
 *   0x00000000004B6AE8  j_.__cxa_call_unexpected_49
 *   0x00000000004B6AEC  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> const&)
 *   0x00000000004B6C8C  j_.__cxa_call_unexpected_50
 *   0x00000000004B6D6C  j_.__cxa_call_unexpected_51
 *   0x00000000004B6DC0  j_.__cxa_call_unexpected_52
 *   0x00000000004B6F30  j_.__cxa_call_unexpected_53
 *   0x00000000004B6F84  j_.__cxa_call_unexpected_54
 *   0x00000000004B6FD4  j_.__cxa_call_unexpected_55
 *   0x00000000004B701C  j_.__cxa_call_unexpected_56
 *   0x00000000004B7070  j_.__cxa_call_unexpected_57
 *   0x00000000004B7D10  boost::uuids::detail::sha1::process_byte(uchar)
 *   0x00000000004B807C  j_.__cxa_call_unexpected_58
 *   0x00000000004B8530  j_.__cxa_call_unexpected_59
 *   0x00000000004B8534  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(boost::exception_detail::error_info_injector<std::runtime_error> const&)
 *   0x00000000004B86C4  j_.__cxa_call_unexpected_60
 *   0x00000000004B87A4  j_.__cxa_call_unexpected_61
 *   0x00000000004B87F8  j_.__cxa_call_unexpected_62
 *   0x00000000004B8958  j_.__cxa_call_unexpected_63
 *   0x00000000004B89AC  j_.__cxa_call_unexpected_64
 *   0x00000000004B89FC  j_.__cxa_call_unexpected_65
 *   0x00000000004B8A44  j_.__cxa_call_unexpected_66
 *   0x00000000004B8A98  j_.__cxa_call_unexpected_67
 *   0x00000000004B90F0  boost::date_time::c_time::localtime(long const*,tm *)
 *   0x000000000051CEB0  __cxa_allocate_exception
 *   0x000000000051CFA8  __cxa_free_exception
 *   0x000000000051D074  __cxa_allocate_dependent_exception
 *   0x000000000051D15C  __cxa_free_dependent_exception
 *   0x000000000051DFE0  __cxxabiv1::__terminate(void (*)(void))
 *   0x000000000051E590  operator new[](ulong)
 *   0x000000000053BB48  sub_53BB48
 *   0x000000000053C340  sub_53C340
 *   0x000000000053C520  sub_53C520
 *   0x000000000053CB20  sub_53CB20
 *   0x000000000053D830  sub_53D830
 *   0x000000000053DB28  sub_53DB28
 *   0x0000000000571664  sub_571664
 *
 * Callees: 1
 *   0x000000000051DEF0  __cxa_call_unexpected
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8288 string=0x00000000001F828C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __noreturn __cxa_call_unexpected(void *a1)
{
  _cxa_call_unexpected(a1);
}

