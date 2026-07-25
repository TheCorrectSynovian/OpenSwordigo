/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D72E0
 * Mangled: _ZN6google8protobuf8internal22DeleteLogSilencerCountEv
 * Demangled: google::protobuf::internal::DeleteLogSilencerCount(void)
 *
 * Callers: 1
 *   0x00000000004D7338  google::protobuf::internal::InitLogSilencerCount(void)
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200080  .pthread_mutex_destroy
 *   0x00000000004D7338  google::protobuf::internal::InitLogSilencerCount(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x00000000004D72F4 string=0x00000000004D72F8 "`"
 *   insn=0x00000000004D72F8 string=0x00000000004D72FC "a"
 *   insn=0x00000000004D72FC string=0x00000000004D7300 "`"
 *   insn=0x00000000004D7300 string=0x00000000004D7304 "@"
 *   insn=0x00000000004D7308 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004D7330 string=0x00000000004D7334 "d"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::internal::DeleteLogSilencerCount(google::protobuf::internal *this)
{
  void **v1; // x19

  v1 = (void **)qword_6EA058;
  if ( qword_6EA058 )
  {
    pthread_mutex_destroy(*(pthread_mutex_t **)qword_6EA058);
    if ( *v1 )
      operator delete(*v1);
    operator delete(v1);
  }
  qword_6EA058 = 0;
}

