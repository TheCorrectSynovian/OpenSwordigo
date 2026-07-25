/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047A684
 * Mangled: _Z18DataFromJByteArrayP7_JNIEnvP11_jbyteArray
 * Demangled: DataFromJByteArray(_JNIEnv *,_jbyteArray *)
 *
 * Callers: 1
 *   0x00000000001F4060  DataFromJByteArray(_JNIEnv *,_jbyteArray *)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566A7C  sub_566A7C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 38
 *   insn=0x000000000047A698 string=0x000000000047A69C "W"
 *   insn=0x000000000047A6B0 string=0x000000000047A6B4 "t"
 *   insn=0x000000000047A6B4 string=0x000000000047A760 "H"
 *   insn=0x000000000047A6C4 string=0x000000000047A6C8 ""
 *   insn=0x000000000047A6DC string=0x000000000047A6E0 ""
 *   insn=0x000000000047A6FC string=0x000000000047A700 ""
 *   insn=0x000000000047A724 string=0x000000000047A728 "I"
 *   insn=0x000000000047A728 string=0x000000000047A72C ")"
 *   insn=0x000000000047A738 string=0x000000000047A73C "I"
 *   insn=0x000000000047A73C string=0x000000000047A740 ")=G"
 *   insn=0x000000000047A740 string=0x000000000047A744 "!"
 *   insn=0x000000000047A748 string=0x000000000047A74C "\t"
 *   insn=0x000000000047A748 string=0x000000000047A798 "\t"
 *   insn=0x000000000047A74C string=0x000000000047A750 "*"
 *   insn=0x000000000047A750 string=0x000000000047A754 "\n"
 *   insn=0x000000000047A75C string=0x000000000047A7A4 "?"
 *   insn=0x000000000047A760 string=0x000000000047A764 ""
 *   insn=0x000000000047A764 string=0x000000000047A768 "a"
 *   insn=0x000000000047A768 string=0x000000000047A76C "h"
 *   insn=0x000000000047A798 string=0x000000000047A79C "*"
 *   insn=0x000000000047A79C string=0x000000000047A7A0 "\n"
 *   insn=0x000000000047A7A4 string=0x000000000047A7A8 "L"
 *   insn=0x000000000047A7B8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000047A7C0 string=0x000000000047A7C4 "J"
 *   insn=0x000000000047A7C4 string=0x000000000047A7C8 "J"
 *   insn=0x000000000047A7CC string=0x000000000047A7D0 "(a"
 *   insn=0x000000000047A7D8 string=0x000000000047A7DC "J"
 *   insn=0x000000000047A7DC string=0x000000000047A7E0 "J=G"
 *   insn=0x000000000047A7E0 string=0x000000000047A7E4 ")!"
 *   insn=0x000000000047A7E8 string=0x000000000047A7EC "*"
 *   insn=0x000000000047A7E8 string=0x000000000047A818 "*"
 *   insn=0x000000000047A7EC string=0x000000000047A7F0 "K"
 *   insn=0x000000000047A7F0 string=0x000000000047A7F4 "+"
 *   insn=0x000000000047A7F8 string=0x000000000047A7FC "_"
 *   insn=0x000000000047A810 string=0x000000000047A814 ","
 *   insn=0x000000000047A818 string=0x000000000047A81C "K"
 *   insn=0x000000000047A81C string=0x000000000047A820 "+"
 *   insn=0x000000000047A820 string=0x000000000047A824 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall DataFromJByteArray(__int64 a1@<X0>, __int64 a2@<X1>, _QWORD *a3@<X8>)
{
  __int64 v6; // x22
  int v7; // w0
  void *v8; // x0
  unsigned int *v9; // x8
  int v10; // w9
  __int64 v11; // [xsp+0h] [xbp-50h] BYREF
  _BYTE v12[4]; // [xsp+Ch] [xbp-44h] BYREF
  _BYTE v13[8]; // [xsp+10h] [xbp-40h] BYREF
  __int64 v14; // [xsp+18h] [xbp-38h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a1 + 1472LL))(a1, a2, v12);
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1368LL))(a1, a2);
    sub_566A7C(&v11, v6, v7, v13);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 1536LL))(a1, a2, v6, 2);
    sub_56A528(a3, &v11);
    v8 = (void *)(v11 - 24);
    if ( (__int64 *)(v11 - 24) != &qword_6FD2E0 )
    {
      v9 = (unsigned int *)(v11 - 8);
      if ( &pthread_create )
      {
        do
          v10 = __ldaxr(v9);
        while ( __stlxr(v10 - 1, v9) );
      }
      else
      {
        v10 = (*v9)--;
      }
      if ( v10 <= 0 )
        operator delete(v8);
    }
  }
  else
  {
    *a3 = &byte_6FD2F8;
  }
}

