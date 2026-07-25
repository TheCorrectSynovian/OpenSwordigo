/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D7A4C
 * Mangled: _ZN6google8protobuf8internal5Mutex4LockEv
 * Demangled: google::protobuf::internal::Mutex::Lock(void)
 *
 * Callers: 2
 *   0x00000000001F7870  google::protobuf::internal::Mutex::Lock(void)
 *   0x00000000004D7A4C  google::protobuf::internal::Mutex::Lock(void)
 *
 * Callees: 13
 *   0x00000000001F60A0  .pthread_once
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD430  google::protobuf::internal::Mutex::Unlock(void)
 *   0x00000000001FE620  .abort
 *   0x00000000001FFA70  .pthread_mutex_lock
 *   0x00000000002031D0  .strerror
 *   0x0000000000203230  .strlen
 *   0x00000000004D7284  google::protobuf::internal::DefaultLogHandler(google::protobuf::LogLevel,char const*,int,std::string const&)
 *   0x00000000004D7338  google::protobuf::internal::InitLogSilencerCount(void)
 *   0x00000000005677D4  sub_5677D4
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 45
 *   insn=0x00000000004D7A60 string=0x00000000004D7A64 "U"
 *   insn=0x00000000004D7A7C string=0x00000000004D7A80 "v"
 *   insn=0x00000000004D7A88 string=0x00000000004D7A8C "\t"
 *   insn=0x00000000004D7A8C string=0x0000000000598281 "./../../../../Dependencies/protobuf/src/google/protobuf/stubs/common.cc"
 *   insn=0x00000000004D7A90 string=0x00000000004D7A94 ")"
 *   insn=0x00000000004D7A9C string=0x00000000004D7AA0 "sa"
 *   insn=0x00000000004D7AB4 string=0x00000000005985AE "pthread_mutex_lock: "
 *   insn=0x00000000004D7AC0 string=0x00000000004D7AC4 "D?"
 *   insn=0x00000000004D7AE4 string=0x00000000004D7AE8 ";?"
 *   insn=0x00000000004D7AF0 string=0x00000000004D7AF4 "a"
 *   insn=0x00000000004D7AF4 string=0x00000000004D7B00 "`"
 *   insn=0x00000000004D7B00 string=0x00000000004D7B04 "a"
 *   insn=0x00000000004D7B08 string=0x00000000004D7B0C "!"
 *   insn=0x00000000004D7B0C string=0x00000000004D7B10 "dy"
 *   insn=0x00000000004D7B10 string=0x00000000001F60A0 "0'"
 *   insn=0x00000000004D7B2C string=0x00000000004D7B30 "@"
 *   insn=0x00000000004D7B30 string=0x00000000001FD430 "0'"
 *   insn=0x00000000004D7B44 string=0x00000000004D7B48 ""
 *   insn=0x00000000004D7B5C string=0x00000000004D7B60 " "
 *   insn=0x00000000004D7B6C string=0x00000000004D7B70 "a"
 *   insn=0x00000000004D7B70 string=0x00000000004D7B9C "i"
 *   insn=0x00000000004D7B9C string=0x00000000004D7BA0 ")=G"
 *   insn=0x00000000004D7BA0 string=0x00000000004D7BA4 "!"
 *   insn=0x00000000004D7BA8 string=0x00000000004D7BAC "\t"
 *   insn=0x00000000004D7BA8 string=0x00000000004D7BC0 "\t"
 *   insn=0x00000000004D7BAC string=0x00000000004D7BB0 "*"
 *   insn=0x00000000004D7BB0 string=0x00000000004D7BB4 "\n"
 *   insn=0x00000000004D7BBC string=0x00000000004D7BCC "?"
 *   insn=0x00000000004D7BC0 string=0x00000000004D7BC4 "*"
 *   insn=0x00000000004D7BC4 string=0x00000000004D7BC8 "\n"
 *   insn=0x00000000004D7BCC string=0x00000000004D7BD0 ","
 *   insn=0x00000000004D7BE0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004D7BEC string=0x00000000004D7BF0 "(a"
 *   insn=0x00000000004D7BF8 string=0x00000000004D7BFC "j"
 *   insn=0x00000000004D7BFC string=0x00000000004D7C00 "J=G"
 *   insn=0x00000000004D7C00 string=0x00000000004D7C04 ")!"
 *   insn=0x00000000004D7C08 string=0x00000000004D7C0C "*"
 *   insn=0x00000000004D7C08 string=0x00000000004D7C38 "*"
 *   insn=0x00000000004D7C0C string=0x00000000004D7C10 "K"
 *   insn=0x00000000004D7C10 string=0x00000000004D7C14 "+"
 *   insn=0x00000000004D7C18 string=0x00000000004D7C1C "_"
 *   insn=0x00000000004D7C30 string=0x00000000004D7C34 "$"
 *   insn=0x00000000004D7C38 string=0x00000000004D7C3C "K"
 *   insn=0x00000000004D7C3C string=0x00000000004D7C40 "+"
 *   insn=0x00000000004D7C40 string=0x00000000004D7C44 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::internal::Mutex::Lock(pthread_mutex_t **this)
{
  int v1; // w20
  char *v2; // x20
  size_t v3; // x0
  _QWORD v4[3]; // [xsp+18h] [xbp-48h] BYREF

  v4[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = pthread_mutex_lock(*this);
  if ( v1 )
  {
    v4[0] = &byte_6FD2F8;
    sub_5677D4(v4, "pthread_mutex_lock: ", 20);
    v2 = strerror(v1);
    v3 = strlen(v2);
    sub_5677D4(v4, v2, v3);
    off_6E8900(3, "./../../../../Dependencies/protobuf/src/google/protobuf/stubs/common.cc", 300, v4);
    abort();
  }
}

