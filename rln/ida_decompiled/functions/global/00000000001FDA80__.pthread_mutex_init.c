/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDA80
 * Mangled: .pthread_mutex_init
 * Demangled: .pthread_mutex_init
 *
 * Callers: 3
 *   0x00000000004D7338  google::protobuf::internal::InitLogSilencerCount(void)
 *   0x00000000004D79E8  google::protobuf::internal::Mutex::Mutex(void)
 *   0x00000000004D7E58  google::protobuf::internal::InitShutdownFunctions(void)
 *
 * Callees: 1
 *   0x00000000006FEA10  pthread_mutex_init
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDA88 string=0x00000000001FDA8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int pthread_mutex_init(pthread_mutex_t *mutex, const pthread_mutexattr_t *mutexattr)
{
  return pthread_mutex_init(mutex, mutexattr);
}

