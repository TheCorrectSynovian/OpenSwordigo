/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E2850
 * Mangled: _ZN6google8protobuf8internal21StringTypeHandlerBase6DeleteEPSs
 * Demangled: google::protobuf::internal::StringTypeHandlerBase::Delete(std::string *)
 *
 * Callers: 1
 *   0x00000000001F6CB0  google::protobuf::internal::StringTypeHandlerBase::Delete(std::string *)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 23
 *   insn=0x00000000004E285C string=0x00000000004E2860 "S"
 *   insn=0x00000000004E2860 string=0x00000000004E2864 "h"
 *   insn=0x00000000004E286C string=0x00000000004E2870 "\t"
 *   insn=0x00000000004E286C string=0x00000000004E288C "h"
 *   insn=0x00000000004E2870 string=0x00000000004E2874 "\n"
 *   insn=0x00000000004E2874 string=0x00000000004E2878 "J"
 *   insn=0x00000000004E2878 string=0x00000000004E287C "(a"
 *   insn=0x00000000004E2880 string=0x00000000004E2884 "A"
 *   insn=0x00000000004E2884 string=0x00000000004E28AC "\n"
 *   insn=0x00000000004E2888 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004E2894 string=0x00000000004E2898 "!"
 *   insn=0x00000000004E2898 string=0x00000000004E28FC "uN"
 *   insn=0x00000000004E28AC string=0x00000000004E28B0 "J=G"
 *   insn=0x00000000004E28B0 string=0x00000000004E28B4 ")!"
 *   insn=0x00000000004E28B8 string=0x00000000004E28BC "*"
 *   insn=0x00000000004E28B8 string=0x00000000004E28D0 "*"
 *   insn=0x00000000004E28BC string=0x00000000004E28C0 "K"
 *   insn=0x00000000004E28C0 string=0x00000000004E28C4 "+"
 *   insn=0x00000000004E28CC string=0x00000000004E28DC "_"
 *   insn=0x00000000004E28D0 string=0x00000000004E28D4 "K"
 *   insn=0x00000000004E28D4 string=0x00000000004E28D8 "+"
 *   insn=0x00000000004E28DC string=0x00000000004E28E0 "L"
 *   insn=0x00000000004E28FC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::internal::StringTypeHandlerBase::Delete(_QWORD *a1)
{
  __int64 *v1; // x8
  unsigned int *v2; // x9
  int v3; // w10
  _QWORD *v4; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  if ( a1 )
  {
    v1 = (__int64 *)(*a1 - 24LL);
    if ( v1 != &qword_6FD2E0 )
    {
      v2 = (unsigned int *)(*a1 - 8LL);
      if ( &pthread_create )
      {
        do
          v3 = __ldaxr(v2);
        while ( __stlxr(v3 - 1, v2) );
      }
      else
      {
        v3 = (*v2)--;
      }
      if ( v3 <= 0 )
      {
        v4 = a1;
        operator delete(v1);
        a1 = v4;
      }
    }
    operator delete(a1);
  }
}

