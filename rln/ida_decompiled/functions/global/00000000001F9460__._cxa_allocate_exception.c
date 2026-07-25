/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9460
 * Mangled: .__cxa_allocate_exception
 * Demangled: .__cxa_allocate_exception
 *
 * Callers: 53
 *   0x0000000000245834  boost::throw_exception<boost::bad_function_call>(boost::bad_function_call const&)
 *   0x0000000000245CEC  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::rethrow(void)
 *   0x0000000000245EB0  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::rethrow(void)
 *   0x0000000000368140  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GuidePurchaseView,Caver::GuidePurchaseView>(boost::shared_ptr<Caver::GuidePurchaseView> const*,Caver::GuidePurchaseView *)
 *   0x00000000003685F4  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::rethrow(void)
 *   0x0000000000368798  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::rethrow(void)
 *   0x000000000046B060  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><int>(int &)
 *   0x000000000046B5B0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::rethrow(void)
 *   0x000000000046B754  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::rethrow(void)
 *   0x00000000004B5548  Caver::SHA1HashForBytes(uchar const*,ulong)
 *   0x00000000004B5A58  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::rethrow(void)
 *   0x00000000004B5C1C  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::rethrow(void)
 *   0x00000000004B5EE0  boost::throw_exception<boost::gregorian::bad_year>(boost::gregorian::bad_year const&)
 *   0x00000000004B6398  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::rethrow(void)
 *   0x00000000004B655C  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::rethrow(void)
 *   0x00000000004B6820  boost::throw_exception<boost::gregorian::bad_day_of_month>(boost::gregorian::bad_day_of_month const&)
 *   0x00000000004B6CD8  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::rethrow(void)
 *   0x00000000004B6E9C  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::rethrow(void)
 *   0x00000000004B71F4  boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>::seed<boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>>(boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng> &,boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>)
 *   0x00000000004B7D10  boost::uuids::detail::sha1::process_byte(uchar)
 *   0x00000000004B8710  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::rethrow(void)
 *   0x00000000004B88C4  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::rethrow(void)
 *   0x00000000004B90F0  boost::date_time::c_time::localtime(long const*,tm *)
 *   0x00000000004C0C6C  Caver::Program::LoadIntoState(lua_State *)
 *   0x00000000004EB814  sub_4EB814
 *   0x000000000051CE50  sub_51CE50
 *   0x000000000051CE80  sub_51CE80
 *   0x000000000051DEF0  __cxa_call_unexpected
 *   0x000000000051E27C  __cxa_guard_acquire
 *   0x000000000051E520  operator new(ulong)
 *   0x000000000053C340  sub_53C340
 *   0x0000000000565260  sub_565260
 *   0x0000000000565294  sub_565294
 *   0x00000000005652C8  sub_5652C8
 *   0x00000000005652FC  sub_5652FC
 *   0x0000000000565330  sub_565330
 *   0x00000000005653E4  sub_5653E4
 *   0x0000000000565498  sub_565498
 *   0x000000000056554C  sub_56554C
 *   0x0000000000565600  sub_565600
 *   0x00000000005656B4  sub_5656B4
 *   0x0000000000565808  sub_565808
 *   0x00000000005658BC  sub_5658BC
 *   0x0000000000565970  sub_565970
 *   0x0000000000565A24  sub_565A24
 *   0x0000000000565AD8  sub_565AD8
 *   0x0000000000565C40  sub_565C40
 *   0x0000000000565D1C  sub_565D1C
 *   0x0000000000565D50  sub_565D50
 *   0x000000000056FC2C  __cxa_bad_cast
 *   0x000000000056FC60  __cxa_bad_typeid
 *   0x000000000056FC94  __cxa_throw_bad_array_new_length
 *   0x000000000056FCC8  __cxa_throw_bad_array_length
 *
 * Callees: 1
 *   0x000000000051CEB0  __cxa_allocate_exception
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9468 string=0x00000000001F946C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void *__cxa_allocate_exception(size_t thrown_size)
{
  return _cxa_allocate_exception(thrown_size);
}

