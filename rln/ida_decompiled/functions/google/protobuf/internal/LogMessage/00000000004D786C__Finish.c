/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D786C
 * Mangled: _ZN6google8protobuf8internal10LogMessage6FinishEv
 * Demangled: google::protobuf::internal::LogMessage::Finish(void)
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F60A0  .pthread_once
 *   0x00000000001F7870  google::protobuf::internal::Mutex::Lock(void)
 *   0x00000000001FD430  google::protobuf::internal::Mutex::Unlock(void)
 *   0x00000000001FE620  .abort
 *   0x00000000004D7284  google::protobuf::internal::DefaultLogHandler(google::protobuf::LogLevel,char const*,int,std::string const&)
 *   0x00000000004D7338  google::protobuf::internal::InitLogSilencerCount(void)
 *
 * Referenced strings: 15
 *   insn=0x00000000004D787C string=0x00000000004D7880 "h"
 *   insn=0x00000000004D7884 string=0x00000000004D7888 "a"
 *   insn=0x00000000004D7888 string=0x00000000004D7894 "`"
 *   insn=0x00000000004D7894 string=0x00000000004D7898 "a"
 *   insn=0x00000000004D789C string=0x00000000004D78A0 "!"
 *   insn=0x00000000004D78A4 string=0x00000000001F60A0 "0'"
 *   insn=0x00000000004D78B4 string=0x00000000001F7870 "0'"
 *   insn=0x00000000004D78C4 string=0x00000000001FD430 "0'"
 *   insn=0x00000000004D78CC string=0x00000000004D78D0 "`"
 *   insn=0x00000000004D78CC string=0x00000000004D78EC "h"
 *   insn=0x00000000004D78D4 string=0x00000000004D78D8 "a"
 *   insn=0x00000000004D78D8 string=0x00000000004D78DC ""
 *   insn=0x00000000004D78DC string=0x00000000004D78E0 "b"
 *   insn=0x00000000004D78E0 string=0x00000000004D78E4 "cb"
 *   insn=0x00000000004D78F4 string=0x00000000004D7908 "F"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::LogMessage::Finish(google::protobuf::internal::LogMessage *this)
{
  __int64 v2; // x0
  google::protobuf::internal::Mutex *v3; // x20
  int v4; // w21
  __int64 result; // x0

  if ( *(_DWORD *)this == 3 )
  {
    v2 = 3;
  }
  else
  {
    pthread_once(
      google::protobuf::internal::log_silencer_count_init_,
      (void (*)(void))google::protobuf::internal::InitLogSilencerCount);
    v3 = (google::protobuf::internal::Mutex *)qword_6EA058;
    google::protobuf::internal::Mutex::Lock((google::protobuf::internal::Mutex *)qword_6EA058);
    v4 = dword_6EA060;
    result = google::protobuf::internal::Mutex::Unlock(v3);
    if ( v4 > 0 )
      goto LABEL_6;
    v2 = *(unsigned int *)this;
  }
  result = off_6E8900(v2, *((_QWORD *)this + 1), *((unsigned int *)this + 4), (char *)this + 24);
LABEL_6:
  if ( *(_DWORD *)this == 3 )
    abort();
  return result;
}

