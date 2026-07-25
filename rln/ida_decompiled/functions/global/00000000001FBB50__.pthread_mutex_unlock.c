/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBB50
 * Mangled: .pthread_mutex_unlock
 * Demangled: .pthread_mutex_unlock
 *
 * Callers: 12
 *   0x00000000004D7C50  google::protobuf::internal::Mutex::Unlock(void)
 *   0x000000000051CEB0  __cxa_allocate_exception
 *   0x000000000051CFA8  __cxa_free_exception
 *   0x000000000051D074  __cxa_allocate_dependent_exception
 *   0x000000000051D15C  __cxa_free_dependent_exception
 *   0x000000000053C340  sub_53C340
 *   0x000000000053D830  sub_53D830
 *   0x000000000053DB28  sub_53DB28
 *   0x0000000000582F6C  sub_582F6C
 *   0x0000000000583054  sub_583054
 *   0x0000000000583120  sub_583120
 *   0x0000000000583248  sub_583248
 *
 * Callees: 1
 *   0x00000000006FE910  pthread_mutex_unlock
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBB58 string=0x00000000001FBB5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int pthread_mutex_unlock(pthread_mutex_t *mutex)
{
  return pthread_mutex_unlock(mutex);
}

