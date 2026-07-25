/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D7338
 * Mangled: _ZN6google8protobuf8internal20InitLogSilencerCountEv
 * Demangled: google::protobuf::internal::InitLogSilencerCount(void)
 *
 * Callers: 9
 *   0x00000000004D6868  google::protobuf::internal::VerifyVersion(int,int,char const*)
 *   0x00000000004D7128  google::protobuf::internal::VersionString(int)
 *   0x00000000004D72E0  google::protobuf::internal::DeleteLogSilencerCount(void)
 *   0x00000000004D7394  google::protobuf::internal::OnShutdown(void (*)(void))
 *   0x00000000004D786C  google::protobuf::internal::LogMessage::Finish(void)
 *   0x00000000004D7938  google::protobuf::LogSilencer::LogSilencer(void)
 *   0x00000000004D7988  google::protobuf::LogSilencer::~LogSilencer()
 *   0x00000000004D7A4C  google::protobuf::internal::Mutex::Lock(void)
 *   0x00000000004D7C50  google::protobuf::internal::Mutex::Unlock(void)
 *
 * Callees: 7
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7D70  google::protobuf::internal::OnShutdown(void (*)(void))
 *   0x00000000001FDA80  .pthread_mutex_init
 *   0x00000000004D72E0  google::protobuf::internal::DeleteLogSilencerCount(void)
 *   0x00000000004D7394  google::protobuf::internal::OnShutdown(void (*)(void))
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x00000000004D7348 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004D7354 string=0x00000000004D7358 "`"
 *   insn=0x00000000004D7360 string=0x00000000001FDA80 "0'"
 *   insn=0x00000000004D7364 string=0x00000000004D7368 "`"
 *   insn=0x00000000004D7378 string=0x00000000004D737C "}"
 *   insn=0x00000000004D737C string=0x00000000001F7D70 "0'"
 *   insn=0x00000000004D7388 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004D738C string=0x00000000004D7390 "M"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::InitLogSilencerCount(google::protobuf::internal *this)
{
  pthread_mutex_t **v1; // x19
  pthread_mutex_t *v2; // x0
  void (*v3)(void); // x1

  v1 = (pthread_mutex_t **)operator new(8u);
  v2 = (pthread_mutex_t *)operator new(0x28u);
  *v1 = v2;
  pthread_mutex_init(v2, 0);
  qword_6EA058 = (__int64)v1;
  return google::protobuf::internal::OnShutdown(
           (google::protobuf::internal *)google::protobuf::internal::DeleteLogSilencerCount,
           v3);
}

