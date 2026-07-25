/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D7938
 * Mangled: _ZN6google8protobuf11LogSilencerC2Ev
 * Demangled: google::protobuf::LogSilencer::LogSilencer(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F60A0  .pthread_once
 *   0x00000000001F7870  google::protobuf::internal::Mutex::Lock(void)
 *   0x00000000001FD430  google::protobuf::internal::Mutex::Unlock(void)
 *   0x00000000004D7338  google::protobuf::internal::InitLogSilencerCount(void)
 *
 * Referenced strings: 9
 *   insn=0x00000000004D7940 string=0x00000000004D7944 "`"
 *   insn=0x00000000004D7944 string=0x00000000004D7948 "a"
 *   insn=0x00000000004D794C string=0x00000000004D7950 "!"
 *   insn=0x00000000004D7954 string=0x00000000001F60A0 "0'"
 *   insn=0x00000000004D7964 string=0x00000000001F7870 "0'"
 *   insn=0x00000000004D7968 string=0x00000000004D796C "\ta@"
 *   insn=0x00000000004D7970 string=0x00000000004D7974 ")"
 *   insn=0x00000000004D7974 string=0x00000000004D7978 "\ta"
 *   insn=0x00000000004D7984 string=0x00000000001FD430 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::LogSilencer::LogSilencer(google::protobuf::LogSilencer *this)
{
  google::protobuf::internal::Mutex *v1; // x19

  pthread_once(
    google::protobuf::internal::log_silencer_count_init_,
    (void (*)(void))google::protobuf::internal::InitLogSilencerCount);
  v1 = (google::protobuf::internal::Mutex *)qword_6EA058;
  google::protobuf::internal::Mutex::Lock((google::protobuf::internal::Mutex *)qword_6EA058);
  ++dword_6EA060;
  return google::protobuf::internal::Mutex::Unlock(v1);
}

