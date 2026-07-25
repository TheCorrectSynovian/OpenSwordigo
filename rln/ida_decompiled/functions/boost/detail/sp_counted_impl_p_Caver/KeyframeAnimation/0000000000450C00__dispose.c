/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000450C00
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver17KeyframeAnimationEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::KeyframeAnimation>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 35
 *   insn=0x0000000000450C10 string=0x0000000000450C14 "U"
 *   insn=0x0000000000450C20 string=0x0000000000450C24 "s"
 *   insn=0x0000000000450C24 string=0x0000000000450C28 "t"
 *   insn=0x0000000000450C28 string=0x0000000000450C2C "4"
 *   insn=0x0000000000450C2C string=0x0000000000450C70 "h"
 *   insn=0x0000000000450C30 string=0x0000000000450C34 ""
 *   insn=0x0000000000450C40 string=0x0000000000450C44 "\t@"
 *   insn=0x0000000000450C50 string=0x0000000000450C54 ""
 *   insn=0x0000000000450C60 string=0x0000000000450C64 "@"
 *   insn=0x0000000000450C74 string=0x0000000000450C78 ")"
 *   insn=0x0000000000450C8C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000450C9C string=0x0000000000450CF8 "v"
 *   insn=0x0000000000450CB4 string=0x0000000000450CB8 ")=G"
 *   insn=0x0000000000450CB8 string=0x0000000000450CBC "!"
 *   insn=0x0000000000450CC0 string=0x0000000000450CC4 "\t"
 *   insn=0x0000000000450CC0 string=0x0000000000450CD8 "\t"
 *   insn=0x0000000000450CC4 string=0x0000000000450CC8 "*"
 *   insn=0x0000000000450CC8 string=0x0000000000450CCC "\n"
 *   insn=0x0000000000450CD4 string=0x0000000000450CE4 "?"
 *   insn=0x0000000000450CD8 string=0x0000000000450CDC "*"
 *   insn=0x0000000000450CDC string=0x0000000000450CE0 "\n"
 *   insn=0x0000000000450CF8 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000450D00 string=0x0000000000450D04 "J"
 *   insn=0x0000000000450D08 string=0x0000000000450D0C "(a"
 *   insn=0x0000000000450D18 string=0x0000000000450D1C "J=G"
 *   insn=0x0000000000450D1C string=0x0000000000450D20 ")!"
 *   insn=0x0000000000450D24 string=0x0000000000450D28 "*"
 *   insn=0x0000000000450D24 string=0x0000000000450D5C "*"
 *   insn=0x0000000000450D28 string=0x0000000000450D2C "K"
 *   insn=0x0000000000450D2C string=0x0000000000450D30 "+"
 *   insn=0x0000000000450D34 string=0x0000000000450D38 "_"
 *   insn=0x0000000000450D4C string=0x0000000000450D50 "X"
 *   insn=0x0000000000450D5C string=0x0000000000450D60 "K"
 *   insn=0x0000000000450D60 string=0x0000000000450D64 "+"
 *   insn=0x0000000000450D64 string=0x0000000000450D68 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::KeyframeAnimation>::dispose(__int64 a1)
{
  _QWORD *v1; // x19
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  __int64 *v5; // x0
  unsigned int *v6; // x8
  int v7; // w9

  _ReadStatusReg(TPIDR_EL0);
  v1 = *(_QWORD **)(a1 + 24);
  if ( v1 )
  {
    v2 = (_QWORD *)v1[3];
    if ( v2 )
    {
      v3 = v2[1] - 1LL;
      v2[1] = v3;
      if ( !v3 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
        v4 = v2[2] - 1LL;
        v2[2] = v4;
        if ( !v4 )
          (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
      }
    }
    v5 = (__int64 *)(*v1 - 24LL);
    if ( v5 != &qword_6FD2E0 )
    {
      v6 = (unsigned int *)(*v1 - 8LL);
      if ( &pthread_create )
      {
        do
          v7 = __ldaxr(v6);
        while ( __stlxr(v7 - 1, v6) );
      }
      else
      {
        v7 = (*v6)--;
      }
      if ( v7 <= 0 )
        operator delete(v5);
    }
    operator delete(v1);
  }
}

