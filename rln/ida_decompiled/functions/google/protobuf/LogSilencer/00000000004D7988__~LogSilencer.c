/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D7988
 * Mangled: _ZN6google8protobuf11LogSilencerD2Ev
 * Demangled: google::protobuf::LogSilencer::~LogSilencer()
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
 *   insn=0x00000000004D7990 string=0x00000000004D7994 "`"
 *   insn=0x00000000004D7994 string=0x00000000004D7998 "a"
 *   insn=0x00000000004D799C string=0x00000000004D79A0 "!"
 *   insn=0x00000000004D79A4 string=0x00000000001F60A0 "0'"
 *   insn=0x00000000004D79B4 string=0x00000000001F7870 "0'"
 *   insn=0x00000000004D79B8 string=0x00000000004D79BC "\ta@"
 *   insn=0x00000000004D79C0 string=0x00000000004D79C4 ")"
 *   insn=0x00000000004D79C4 string=0x00000000004D79C8 "\ta"
 *   insn=0x00000000004D79D4 string=0x00000000001FD430 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::LogSilencer::~LogSilencer(google::protobuf::LogSilencer *this)
{
  google::protobuf::internal::Mutex *v1; // x19

  pthread_once(
    google::protobuf::internal::log_silencer_count_init_,
    (void (*)(void))google::protobuf::internal::InitLogSilencerCount);
  v1 = (google::protobuf::internal::Mutex *)qword_6EA058;
  google::protobuf::internal::Mutex::Lock((google::protobuf::internal::Mutex *)qword_6EA058);
  --dword_6EA060;
  google::protobuf::internal::Mutex::Unlock(v1);
}

