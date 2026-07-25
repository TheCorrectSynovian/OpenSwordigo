/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D7C50
 * Mangled: _ZN6google8protobuf8internal5Mutex6UnlockEv
 * Demangled: google::protobuf::internal::Mutex::Unlock(void)
 *
 * Callers: 2
 *   0x00000000001FD430  google::protobuf::internal::Mutex::Unlock(void)
 *   0x00000000004D7C50  google::protobuf::internal::Mutex::Unlock(void)
 *
 * Callees: 13
 *   0x00000000001F60A0  .pthread_once
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7870  google::protobuf::internal::Mutex::Lock(void)
 *   0x00000000001FBB50  .pthread_mutex_unlock
 *   0x00000000001FE620  .abort
 *   0x00000000002031D0  .strerror
 *   0x0000000000203230  .strlen
 *   0x00000000004D7284  google::protobuf::internal::DefaultLogHandler(google::protobuf::LogLevel,char const*,int,std::string const&)
 *   0x00000000004D7338  google::protobuf::internal::InitLogSilencerCount(void)
 *   0x00000000005677D4  sub_5677D4
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 47
 *   insn=0x00000000004D7C64 string=0x00000000004D7C68 "U"
 *   insn=0x00000000004D7C78 string=0x00000000001FBB50 "0'"
 *   insn=0x00000000004D7C80 string=0x00000000004D7C84 "v"
 *   insn=0x00000000004D7C8C string=0x00000000004D7C90 "\t"
 *   insn=0x00000000004D7C90 string=0x0000000000598281 "./../../../../Dependencies/protobuf/src/google/protobuf/stubs/common.cc"
 *   insn=0x00000000004D7C94 string=0x00000000004D7C98 ")"
 *   insn=0x00000000004D7C98 string=0x00000000004D7C9C "j&"
 *   insn=0x00000000004D7CA0 string=0x00000000004D7CA4 "sa"
 *   insn=0x00000000004D7CB8 string=0x00000000005985C3 "pthread_mutex_unlock: "
 *   insn=0x00000000004D7CCC string=0x00000000004D7CD0 "@"
 *   insn=0x00000000004D7CD8 string=0x00000000004D7CDC "U"
 *   insn=0x00000000004D7CF4 string=0x00000000004D7CF8 "a"
 *   insn=0x00000000004D7CF8 string=0x00000000004D7D04 "`"
 *   insn=0x00000000004D7D04 string=0x00000000004D7D08 "a"
 *   insn=0x00000000004D7D0C string=0x00000000004D7D10 "!"
 *   insn=0x00000000004D7D14 string=0x00000000001F60A0 "0'"
 *   insn=0x00000000004D7D24 string=0x00000000001F7870 "0'"
 *   insn=0x00000000004D7D48 string=0x00000000004D7D4C ""
 *   insn=0x00000000004D7D60 string=0x00000000004D7D64 " "
 *   insn=0x00000000004D7D70 string=0x00000000004D7D74 "a"
 *   insn=0x00000000004D7D74 string=0x00000000004D7DA0 "i"
 *   insn=0x00000000004D7D84 string=0x00000000004D7DE4 ";y"
 *   insn=0x00000000004D7DA0 string=0x00000000004D7DA4 ")=G"
 *   insn=0x00000000004D7DA4 string=0x00000000004D7DA8 "!"
 *   insn=0x00000000004D7DAC string=0x00000000004D7DB0 "\t"
 *   insn=0x00000000004D7DAC string=0x00000000004D7DC4 "\t"
 *   insn=0x00000000004D7DB0 string=0x00000000004D7DB4 "*"
 *   insn=0x00000000004D7DB4 string=0x00000000004D7DB8 "\n"
 *   insn=0x00000000004D7DC0 string=0x00000000004D7DD0 "?"
 *   insn=0x00000000004D7DC4 string=0x00000000004D7DC8 "*"
 *   insn=0x00000000004D7DC8 string=0x00000000004D7DCC "\n"
 *   insn=0x00000000004D7DD0 string=0x00000000004D7DD4 ","
 *   insn=0x00000000004D7DD8 string=0x00000000004D7DDC "rI"
 *   insn=0x00000000004D7DE4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004D7DF0 string=0x00000000004D7DF4 "(a"
 *   insn=0x00000000004D7DFC string=0x00000000004D7E00 "j"
 *   insn=0x00000000004D7E00 string=0x00000000004D7E04 "J=G"
 *   insn=0x00000000004D7E04 string=0x00000000004D7E08 ")!"
 *   insn=0x00000000004D7E0C string=0x00000000004D7E10 "*"
 *   insn=0x00000000004D7E0C string=0x00000000004D7E3C "*"
 *   insn=0x00000000004D7E10 string=0x00000000004D7E14 "K"
 *   insn=0x00000000004D7E14 string=0x00000000004D7E18 "+"
 *   insn=0x00000000004D7E1C string=0x00000000004D7E20 "_"
 *   insn=0x00000000004D7E2C string=0x00000000004D7E30 "]I"
 *   insn=0x00000000004D7E3C string=0x00000000004D7E40 "K"
 *   insn=0x00000000004D7E40 string=0x00000000004D7E44 "+"
 *   insn=0x00000000004D7E44 string=0x00000000004D7E48 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::internal::Mutex::Unlock(pthread_mutex_t **this)
{
  int v1; // w20
  char *v2; // x20
  size_t v3; // x0
  _QWORD v4[3]; // [xsp+18h] [xbp-48h] BYREF

  v4[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = pthread_mutex_unlock(*this);
  if ( v1 )
  {
    v4[0] = &byte_6FD2F8;
    sub_5677D4(v4, "pthread_mutex_unlock: ", 22);
    v2 = strerror(v1);
    v3 = strlen(v2);
    sub_5677D4(v4, v2, v3);
    off_6E8900(3, "./../../../../Dependencies/protobuf/src/google/protobuf/stubs/common.cc", 307, v4);
    abort();
  }
}

