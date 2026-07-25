/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054A3F8
 * Mangled: sub_54A3F8
 * Demangled: sub_54A3F8
 *
 * Callers: 49
 *   0x00000000004B4DD4  boost::gregorian::date::date(boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day)
 *   0x00000000004B5548  Caver::SHA1HashForBytes(uchar const*,ulong)
 *   0x00000000004B5698  boost::gregorian::bad_month::bad_month(void)
 *   0x00000000004B5824  boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::~error_info_injector()
 *   0x00000000004B586C  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(boost::exception_detail::error_info_injector<boost::gregorian::bad_month> const&)
 *   0x00000000004B59C0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl()
 *   0x00000000004B5AA8  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl()
 *   0x00000000004B5AF0  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl()
 *   0x00000000004B5B44  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone(void)
 *   0x00000000004B5C6C  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl()
 *   0x00000000004B5CB4  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl()
 *   0x00000000004B5D08  boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::~error_info_injector()
 *   0x00000000004B5D58  `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::~error_info_injector()
 *   0x00000000004B5DA0  `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::~error_info_injector()
 *   0x00000000004B5DF4  boost::gregorian::bad_month::~bad_month()
 *   0x00000000004B5E18  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>> const&)
 *   0x00000000004B5EE0  boost::throw_exception<boost::gregorian::bad_year>(boost::gregorian::bad_year const&)
 *   0x00000000004B5FD8  boost::gregorian::bad_year::bad_year(void)
 *   0x00000000004B6164  boost::exception_detail::error_info_injector<boost::gregorian::bad_year>::~error_info_injector()
 *   0x00000000004B61AC  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(boost::exception_detail::error_info_injector<boost::gregorian::bad_year> const&)
 *   0x00000000004B6300  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl()
 *   0x00000000004B63E8  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl()
 *   0x00000000004B6430  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl()
 *   0x00000000004B6484  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone(void)
 *   0x00000000004B65AC  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl()
 *   0x00000000004B65F4  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl()
 *   0x00000000004B6648  boost::exception_detail::error_info_injector<boost::gregorian::bad_year>::~error_info_injector()
 *   0x00000000004B6698  `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::gregorian::bad_year>::~error_info_injector()
 *   0x00000000004B66E0  `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::gregorian::bad_year>::~error_info_injector()
 *   0x00000000004B6734  boost::gregorian::bad_year::~bad_year()
 *   0x00000000004B6758  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>> const&)
 *   0x00000000004B6820  boost::throw_exception<boost::gregorian::bad_day_of_month>(boost::gregorian::bad_day_of_month const&)
 *   0x00000000004B6918  boost::gregorian::bad_day_of_month::bad_day_of_month(void)
 *   0x00000000004B6AA4  boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::~error_info_injector()
 *   0x00000000004B6AEC  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> const&)
 *   0x00000000004B6C40  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl()
 *   0x00000000004B6D28  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl()
 *   0x00000000004B6D70  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl()
 *   0x00000000004B6DC4  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone(void)
 *   0x00000000004B6EEC  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl()
 *   0x00000000004B6F34  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl()
 *   0x00000000004B6F88  boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::~error_info_injector()
 *   0x00000000004B6FD8  `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::~error_info_injector()
 *   0x00000000004B7020  `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::~error_info_injector()
 *   0x00000000004B7074  boost::gregorian::bad_day_of_month::~bad_day_of_month()
 *   0x00000000004B7098  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>> const&)
 *   0x00000000004B8E28  boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time(tm * (*)(long const*,tm *))
 *   0x0000000000565600  sub_565600
 *   0x00000000005656B4  sub_5656B4
 *
 * Callees: 3
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 16
 *   insn=0x000000000054A408 string=0x000000000054A40C "`"
 *   insn=0x000000000054A40C string=0x000000000054A414 "`"
 *   insn=0x000000000054A414 string=0x000000000054A418 "b"
 *   insn=0x000000000054A418 string=0x000000000054A41C "!"
 *   insn=0x000000000054A41C string=0x000000000054A420 "@`"
 *   insn=0x000000000054A440 string=0x000000000054A444 "!<G"
 *   insn=0x000000000054A444 string=0x000000000054A448 "a"
 *   insn=0x000000000054A448 string=0x000000000054A44C "B "
 *   insn=0x000000000054A448 string=0x000000000054A474 "A"
 *   insn=0x000000000054A44C string=0x000000000054A450 "A"
 *   insn=0x000000000054A450 string=0x000000000054A454 "#"
 *   insn=0x000000000054A454 string=0x000000000054A458 "C"
 *   insn=0x000000000054A45C string=0x000000000054A460 "?"
 *   insn=0x000000000054A460 string=0x000000000054A464 "L"
 *   insn=0x000000000054A474 string=0x000000000054A478 "#"
 *   insn=0x000000000054A478 string=0x000000000054A47C "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54A3F8(std::exception *this)
{
  __int64 v2; // x2
  void *v3; // x0
  unsigned int *v4; // x2
  int v5; // w1

  *(_QWORD *)this = off_6B7560;
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

