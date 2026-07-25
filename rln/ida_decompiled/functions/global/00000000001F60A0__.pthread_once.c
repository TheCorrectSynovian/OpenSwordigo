/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F60A0
 * Mangled: .pthread_once
 * Demangled: .pthread_once
 *
 * Callers: 15
 *   0x00000000004D6868  google::protobuf::internal::VerifyVersion(int,int,char const*)
 *   0x00000000004D7128  google::protobuf::internal::VersionString(int)
 *   0x00000000004D7394  google::protobuf::internal::OnShutdown(void (*)(void))
 *   0x00000000004D786C  google::protobuf::internal::LogMessage::Finish(void)
 *   0x00000000004D7938  google::protobuf::LogSilencer::LogSilencer(void)
 *   0x00000000004D7988  google::protobuf::LogSilencer::~LogSilencer()
 *   0x00000000004D7A4C  google::protobuf::internal::Mutex::Lock(void)
 *   0x00000000004D7C50  google::protobuf::internal::Mutex::Unlock(void)
 *   0x00000000004D7ECC  google::protobuf::ShutdownProtobufLibrary(void)
 *   0x00000000004D81CC  google::protobuf::internal::ExtensionSet::RegisterExtension(google::protobuf::MessageLite const*,int,uchar,bool,bool)
 *   0x000000000053BE10  sub_53BE10
 *   0x000000000053D7B8  sub_53D7B8
 *   0x000000000053DA84  sub_53DA84
 *   0x000000000053DB28  sub_53DB28
 *   0x000000000058128C  sub_58128C
 *
 * Callees: 1
 *   0x00000000006FE6F0  pthread_once
 *
 * Referenced strings: 1
 *   insn=0x00000000001F60A8 string=0x00000000001F60AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int pthread_once(pthread_once_t *once_control, void (*init_routine)(void))
{
  return pthread_once(once_control, init_routine);
}

