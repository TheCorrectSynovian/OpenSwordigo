/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200080
 * Mangled: .pthread_mutex_destroy
 * Demangled: .pthread_mutex_destroy
 *
 * Callers: 3
 *   0x00000000004D72E0  google::protobuf::internal::DeleteLogSilencerCount(void)
 *   0x00000000004D7A14  google::protobuf::internal::Mutex::~Mutex()
 *   0x00000000004D7ECC  google::protobuf::ShutdownProtobufLibrary(void)
 *
 * Callees: 1
 *   0x00000000006FEB18  pthread_mutex_destroy
 *
 * Referenced strings: 1
 *   insn=0x0000000000200088 string=0x000000000020008C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int pthread_mutex_destroy(pthread_mutex_t *mutex)
{
  return pthread_mutex_destroy(mutex);
}

