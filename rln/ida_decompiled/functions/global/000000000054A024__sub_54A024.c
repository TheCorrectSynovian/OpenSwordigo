/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054A024
 * Mangled: sub_54A024
 * Demangled: sub_54A024
 *
 * Callers: 42
 *   0x0000000000244834  boost::function<Caver::Component * ()(void)>::operator=(boost::function<Caver::Component * ()(void)> const&)
 *   0x0000000000245834  boost::throw_exception<boost::bad_function_call>(boost::bad_function_call const&)
 *   0x000000000024592C  boost::bad_function_call::bad_function_call(void)
 *   0x0000000000245AB8  boost::exception_detail::error_info_injector<boost::bad_function_call>::~error_info_injector()
 *   0x0000000000245B00  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl(boost::exception_detail::error_info_injector<boost::bad_function_call> const&)
 *   0x0000000000245C54  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::~clone_impl()
 *   0x0000000000245D3C  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::~clone_impl()
 *   0x0000000000245D84  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::~clone_impl()
 *   0x0000000000245DD8  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone(void)
 *   0x0000000000245F00  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::~clone_impl()
 *   0x0000000000245F48  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::~clone_impl()
 *   0x0000000000245F9C  boost::exception_detail::error_info_injector<boost::bad_function_call>::~error_info_injector()
 *   0x0000000000245FEC  `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::bad_function_call>::~error_info_injector()
 *   0x0000000000247034  `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::bad_function_call>::~error_info_injector()
 *   0x0000000000247088  boost::bad_function_call::~bad_function_call()
 *   0x00000000002470AC  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>> const&)
 *   0x0000000000493308  Caver::GUIApplication::DispatchEvents(void)
 *   0x0000000000496990  Caver::GUIControl::SendActionsForControlEvent(Caver::GUIControl::Event,uint)
 *   0x00000000004A5E88  Caver::GUIAnimation::AlphaAnimation(float,float,float)
 *   0x00000000004B7D10  boost::uuids::detail::sha1::process_byte(uchar)
 *   0x00000000004B8038  boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector()
 *   0x00000000004B84EC  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl()
 *   0x00000000004B8534  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(boost::exception_detail::error_info_injector<std::runtime_error> const&)
 *   0x00000000004B8678  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl()
 *   0x00000000004B8760  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl()
 *   0x00000000004B87A8  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl()
 *   0x00000000004B87FC  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone(void)
 *   0x00000000004B8914  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl()
 *   0x00000000004B895C  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl()
 *   0x00000000004B89B0  boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector()
 *   0x00000000004B8A00  `non-virtual thunk to'boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector()
 *   0x00000000004B8A48  `non-virtual thunk to'boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector()
 *   0x00000000004B8A9C  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>> const&)
 *   0x00000000004B90F0  boost::date_time::c_time::localtime(long const*,tm *)
 *   0x00000000004BAE14  Caver::OnlineController_Android::HandleGoogleSignInCompleted(bool)
 *   0x00000000004BE34C  Caver::StoreController_Android::HandleProductFetch(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)
 *   0x00000000004BE6D8  Caver::StoreController_Android::HandleProductPurchase(std::string const&,bool,std::string const&)
 *   0x0000000000565808  sub_565808
 *   0x0000000000566134  sub_566134
 *   0x0000000000566144  sub_566144
 *   0x000000000056B138  sub_56B138
 *   0x000000000056B148  sub_56B148
 *
 * Callees: 3
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 16
 *   insn=0x000000000054A034 string=0x000000000054A038 "`"
 *   insn=0x000000000054A038 string=0x000000000054A040 "`"
 *   insn=0x000000000054A040 string=0x000000000054A044 "b"
 *   insn=0x000000000054A044 string=0x000000000054A048 "!"
 *   insn=0x000000000054A048 string=0x000000000054A04C "@`"
 *   insn=0x000000000054A06C string=0x000000000054A070 "!<G"
 *   insn=0x000000000054A070 string=0x000000000054A074 "a"
 *   insn=0x000000000054A074 string=0x000000000054A078 "B "
 *   insn=0x000000000054A074 string=0x000000000054A0A0 "A"
 *   insn=0x000000000054A078 string=0x000000000054A07C "A"
 *   insn=0x000000000054A07C string=0x000000000054A080 "#"
 *   insn=0x000000000054A080 string=0x000000000054A084 "C"
 *   insn=0x000000000054A088 string=0x000000000054A08C "?"
 *   insn=0x000000000054A08C string=0x000000000054A090 "L"
 *   insn=0x000000000054A0A0 string=0x000000000054A0A4 "#"
 *   insn=0x000000000054A0A4 string=0x000000000054A0A8 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54A024(std::exception *this)
{
  __int64 v2; // x2
  void *v3; // x0
  unsigned int *v4; // x2
  int v5; // w1

  *(_QWORD *)this = off_6B7650;
  v2 = *((_QWORD *)this + 1);
  v3 = (void *)(v2 - 24);
  if ( (__int64 *)(v2 - 24) != &qword_6FD2E0 )
  {
    if ( &pthread_create )
    {
      v4 = (unsigned int *)(v2 - 8);
      do
        v5 = __ldaxr(v4);
      while ( __stlxr(v5 - 1, v4) );
    }
    else
    {
      v5 = *(_DWORD *)(v2 - 8);
      *(_DWORD *)(v2 - 8) = v5 - 1;
    }
    if ( v5 <= 0 )
      operator delete(v3);
  }
  std::exception::~exception(this);
}

