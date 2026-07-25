/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D7394
 * Mangled: _ZN6google8protobuf8internal10OnShutdownEPFvvE
 * Demangled: google::protobuf::internal::OnShutdown(void (*)(void))
 *
 * Callers: 2
 *   0x00000000001F7D70  google::protobuf::internal::OnShutdown(void (*)(void))
 *   0x00000000004D7338  google::protobuf::internal::InitLogSilencerCount(void)
 *
 * Callees: 9
 *   0x00000000001F60A0  .pthread_once
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7870  google::protobuf::internal::Mutex::Lock(void)
 *   0x00000000001FB690  std::vector<void (*)(void),std::allocator<void (*)(void)>>::_M_insert_aux(__gnu_cxx::__normal_iterator<void (**)(void),std::vector<void (*)(void),std::allocator<void (*)(void)>>>,void (* const&)(void))
 *   0x00000000001FD430  google::protobuf::internal::Mutex::Unlock(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004D7338  google::protobuf::internal::InitLogSilencerCount(void)
 *   0x00000000004D7E58  google::protobuf::internal::InitShutdownFunctions(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 22
 *   insn=0x00000000004D73A4 string=0x00000000004D73A8 "U"
 *   insn=0x00000000004D73B0 string=0x00000000004D73B4 "`"
 *   insn=0x00000000004D73C4 string=0x00000000004D73C8 "!4G"
 *   insn=0x00000000004D73C8 string=0x00000000004D73CC "5{"
 *   insn=0x00000000004D73CC string=0x00000000004D73D0 "h"
 *   insn=0x00000000004D73CC string=0x00000000001F60A0 "0'"
 *   insn=0x00000000004D73D0 string=0x00000000004D73D4 ""
 *   insn=0x00000000004D73DC string=0x00000000004D73E0 "$"
 *   insn=0x00000000004D73E0 string=0x00000000001F7870 "0'"
 *   insn=0x00000000004D73E4 string=0x00000000004D73E8 "mE"
 *   insn=0x00000000004D73F0 string=0x00000000004D73F4 "?"
 *   insn=0x00000000004D73F8 string=0x00000000004D73FC "4"
 *   insn=0x00000000004D73FC string=0x00000000004D7400 ""
 *   insn=0x00000000004D7400 string=0x00000000004D7404 "!"
 *   insn=0x00000000004D7404 string=0x00000000004D7408 ""
 *   insn=0x00000000004D7414 string=0x00000000001FB690 "0'"
 *   insn=0x00000000004D741C string=0x00000000001FD430 "0'"
 *   insn=0x00000000004D7444 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004D7454 string=0x00000000004D7458 ""
 *   insn=0x00000000004D745C string=0x00000000004D7460 "`"
 *   insn=0x00000000004D7460 string=0x00000000004D7464 "a"
 *   insn=0x00000000004D7468 string=0x00000000004D746C "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::OnShutdown(google::protobuf::internal *this, void (*a2)(void))
{
  google::protobuf::internal::Mutex *v3; // x19
  __int64 v4; // x0
  _QWORD *v5; // x1

  _ReadStatusReg(TPIDR_EL0);
  pthread_once(
    google::protobuf::internal::shutdown_functions_init,
    (void (*)(void))google::protobuf::internal::InitShutdownFunctions);
  v3 = (google::protobuf::internal::Mutex *)google::protobuf::internal::shutdown_functions_mutex;
  google::protobuf::internal::Mutex::Lock((google::protobuf::internal::Mutex *)google::protobuf::internal::shutdown_functions_mutex);
  v4 = google::protobuf::internal::shutdown_functions;
  v5 = *(_QWORD **)(google::protobuf::internal::shutdown_functions + 8);
  if ( v5 == *(_QWORD **)(google::protobuf::internal::shutdown_functions + 16) )
  {
    std::vector<void (*)(void)>::_M_insert_aux(google::protobuf::internal::shutdown_functions, v5);
  }
  else
  {
    *v5 = this;
    *(_QWORD *)(v4 + 8) += 8LL;
  }
  return google::protobuf::internal::Mutex::Unlock(v3);
}

