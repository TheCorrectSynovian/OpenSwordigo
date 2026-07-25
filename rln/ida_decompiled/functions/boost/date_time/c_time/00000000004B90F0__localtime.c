/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B90F0
 * Mangled: _ZN5boost9date_time6c_time9localtimeEPKlP2tm
 * Demangled: boost::date_time::c_time::localtime(long const*,tm *)
 *
 * Callers: 3
 *   0x00000000004B4B84  Caver::TimerCurrentSeconds(void)
 *   0x00000000004B4C08  sub_4B4C08
 *   0x00000000004B8E28  boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time(tm * (*)(long const*,tm *))
 *
 * Callees: 17
 *   0x00000000001F41F0  .__cxa_free_exception
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F75E0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(boost::exception_detail::error_info_injector<std::runtime_error> const&)
 *   0x00000000001F8280  .__cxa_call_unexpected
 *   0x00000000001F83F0  boost::throw_exception<std::runtime_error>(std::runtime_error const&)
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x0000000000200070  std::exception::~exception()
 *   0x00000000002009E0  .localtime
 *   0x00000000004B84EC  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl()
 *   0x000000000054A024  sub_54A024
 *   0x000000000054AB28  sub_54AB28
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 55
 *   insn=0x00000000004B90FC string=0x00000000004B9100 "S"
 *   insn=0x00000000004B9100 string=0x00000000004B9104 "h"
 *   insn=0x00000000004B9108 string=0x00000000004B910C "5"
 *   insn=0x00000000004B910C string=0x00000000004B9110 " "
 *   insn=0x00000000004B9110 string=0x00000000004B9114 "h"
 *   insn=0x00000000004B9120 string=0x00000000004B915C "]"
 *   insn=0x00000000004B9134 string=0x0000000000597529 "could not convert calendar time to local time"
 *   insn=0x00000000004B914C string=0x00000000004B9150 "vF"
 *   insn=0x00000000004B9158 string=0x00000000001F83F0 "0'"
 *   insn=0x00000000004B915C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004B9174 string=0x00000000004B9178 "i"
 *   insn=0x00000000004B9178 string=0x00000000004B917C ")"
 *   insn=0x00000000004B9188 string=0x00000000004B918C "I"
 *   insn=0x00000000004B918C string=0x00000000004B9190 ")=G"
 *   insn=0x00000000004B9190 string=0x00000000004B9194 "!"
 *   insn=0x00000000004B9194 string=0x00000000004B9198 "i"
 *   insn=0x00000000004B9198 string=0x00000000004B919C "\t"
 *   insn=0x00000000004B9198 string=0x00000000004B91C4 "\t"
 *   insn=0x00000000004B919C string=0x00000000004B91A0 "*"
 *   insn=0x00000000004B91A0 string=0x00000000004B91A4 "\n"
 *   insn=0x00000000004B91A8 string=0x00000000004B91AC "?"
 *   insn=0x00000000004B91AC string=0x00000000004B91B0 "l"
 *   insn=0x00000000004B91B4 string=0x00000000004B91B8 "{"
 *   insn=0x00000000004B91C4 string=0x00000000004B91C8 "*"
 *   insn=0x00000000004B91C8 string=0x00000000004B91CC "\n"
 *   insn=0x00000000004B91CC string=0x00000000004B91D0 "?"
 *   insn=0x00000000004B91D0 string=0x00000000004B91D4 ""
 *   insn=0x00000000004B91F8 string=0x00000000004B91FC "H"
 *   insn=0x00000000004B91F8 string=0x00000000001F9460 "0'"
 *   insn=0x00000000004B91FC string=0x00000000004B9200 "UE"
 *   insn=0x00000000004B9208 string=0x00000000004B920C " !"
 *   insn=0x00000000004B920C string=0x00000000004B9210 "A"
 *   insn=0x00000000004B9224 string=0x00000000004B9228 "i"
 *   insn=0x00000000004B9228 string=0x00000000004B922C "))E"
 *   insn=0x00000000004B922C string=0x00000000004B9230 ""
 *   insn=0x00000000004B9238 string=0x00000000004B923C "(A"
 *   insn=0x00000000004B923C string=0x00000000004B9240 ")"
 *   insn=0x00000000004B9254 string=0x00000000004B9258 "a"
 *   insn=0x00000000004B9254 string=0x00000000001F75E0 "0'"
 *   insn=0x00000000004B9258 string=0x00000000004B925C "b"
 *   insn=0x00000000004B925C string=0x00000000004B9260 "!$D"
 *   insn=0x00000000004B9260 string=0x00000000004B9264 "B"
 *   insn=0x00000000004B9270 string=0x00000000001FB4A0 "0'"
 *   insn=0x00000000004B9278 string=0x00000000004B927C "}"
 *   insn=0x00000000004B9284 string=0x00000000004B9288 "h"
 *   insn=0x00000000004B9288 string=0x00000000004B928C ""
 *   insn=0x00000000004B9290 string=0x00000000004B9294 "A"
 *   insn=0x00000000004B92A0 string=0x00000000004B92A4 "\t"
 *   insn=0x00000000004B92A4 string=0x00000000004B92A8 ")"
 *   insn=0x00000000004B92AC string=0x00000000004B92B0 " "
 *   insn=0x00000000004B92B4 string=0x00000000004B92B8 "[C"
 *   insn=0x00000000004B92BC string=0x00000000004B92C0 "h"
 *   insn=0x00000000004B92C8 string=0x00000000001F41F0 "P'"
 *   insn=0x00000000004B92CC string=0x00000000004B92D0 "}!"
 *   insn=0x00000000004B92D4 string=0x00000000001F8280 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

struct tm *__fastcall boost::date_time::c_time::localtime(const time_t *this, const __int64 *a2, tm *a3)
{
  struct tm *result; // x0
  __int64 v4; // [xsp+64h] [xbp-38h] BYREF
  _BYTE v5[16]; // [xsp+6Ch] [xbp-30h] BYREF
  __int64 v6; // [xsp+84h] [xbp-18h]

  v6 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = localtime(this);
  if ( !result )
  {
    sub_566BB8((int)&v4, "could not convert calendar time to local time");
    sub_54AB28(v5, &v4);
    boost::throw_exception<std::runtime_error>();
  }
  return result;
}

