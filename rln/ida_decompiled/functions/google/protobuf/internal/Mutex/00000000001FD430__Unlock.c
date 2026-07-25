/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD430
 * Mangled: ._ZN6google8protobuf8internal5Mutex6UnlockEv
 * Demangled: google::protobuf::internal::Mutex::Unlock(void)
 *
 * Callers: 7
 *   0x00000000004D6868  google::protobuf::internal::VerifyVersion(int,int,char const*)
 *   0x00000000004D7128  google::protobuf::internal::VersionString(int)
 *   0x00000000004D7394  google::protobuf::internal::OnShutdown(void (*)(void))
 *   0x00000000004D786C  google::protobuf::internal::LogMessage::Finish(void)
 *   0x00000000004D7938  google::protobuf::LogSilencer::LogSilencer(void)
 *   0x00000000004D7988  google::protobuf::LogSilencer::~LogSilencer()
 *   0x00000000004D7A4C  google::protobuf::internal::Mutex::Lock(void)
 *
 * Callees: 1
 *   0x00000000004D7C50  google::protobuf::internal::Mutex::Unlock(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD438 string=0x00000000001FD43C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::Mutex::Unlock(google::protobuf::internal::Mutex *this)
{
  return _ZN6google8protobuf8internal5Mutex6UnlockEv(this);
}

