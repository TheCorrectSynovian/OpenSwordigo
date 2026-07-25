/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D79E8
 * Mangled: _ZN6google8protobuf8internal5MutexC2Ev
 * Demangled: google::protobuf::internal::Mutex::Mutex(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FDA80  .pthread_mutex_init
 *
 * Referenced strings: 3
 *   insn=0x00000000004D79FC string=0x00000000004D7A00 "`"
 *   insn=0x00000000004D79FC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004D7A10 string=0x00000000001FDA80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::Mutex::Mutex(google::protobuf::internal::Mutex *this)
{
  pthread_mutex_t *v2; // x0

  v2 = (pthread_mutex_t *)operator new(0x28u);
  *(_QWORD *)this = v2;
  return pthread_mutex_init(v2, 0);
}

