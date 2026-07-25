/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D7A14
 * Mangled: _ZN6google8protobuf8internal5MutexD2Ev
 * Demangled: google::protobuf::internal::Mutex::~Mutex()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200080  .pthread_mutex_destroy
 *
 * Referenced strings: 3
 *   insn=0x00000000004D7A20 string=0x00000000004D7A24 "`"
 *   insn=0x00000000004D7A28 string=0x00000000004D7A2C "`"
 *   insn=0x00000000004D7A3C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::internal::Mutex::~Mutex(pthread_mutex_t **this)
{
  pthread_mutex_destroy(*this);
  if ( *this )
    operator delete(*this);
}

