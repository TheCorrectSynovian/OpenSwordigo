/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002159AC
 * Mangled: _ZN5boost6detail17sp_counted_impl_pISsE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<std::string>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 23
 *   insn=0x00000000002159B8 string=0x00000000002159BC "S"
 *   insn=0x00000000002159BC string=0x00000000002159C0 "h"
 *   insn=0x00000000002159CC string=0x00000000002159D0 "\t"
 *   insn=0x00000000002159CC string=0x00000000002159EC "h"
 *   insn=0x00000000002159D4 string=0x00000000002159D8 "J"
 *   insn=0x00000000002159D8 string=0x00000000002159DC "(a"
 *   insn=0x00000000002159E0 string=0x00000000002159E4 "A"
 *   insn=0x00000000002159E4 string=0x00000000002159E8 "2"
 *   insn=0x00000000002159E4 string=0x0000000000215A0C "j&"
 *   insn=0x00000000002159E8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002159F4 string=0x00000000002159F8 "!"
 *   insn=0x0000000000215A0C string=0x0000000000215A10 "J=G"
 *   insn=0x0000000000215A10 string=0x0000000000215A14 ")!"
 *   insn=0x0000000000215A18 string=0x0000000000215A1C "*"
 *   insn=0x0000000000215A18 string=0x0000000000215A30 "*"
 *   insn=0x0000000000215A1C string=0x0000000000215A20 "K"
 *   insn=0x0000000000215A20 string=0x0000000000215A24 "+"
 *   insn=0x0000000000215A2C string=0x0000000000215A3C "_"
 *   insn=0x0000000000215A30 string=0x0000000000215A34 "K"
 *   insn=0x0000000000215A34 string=0x0000000000215A38 "+"
 *   insn=0x0000000000215A3C string=0x0000000000215A40 "L"
 *   insn=0x0000000000215A4C string=0x0000000000215A50 "UR"
 *   insn=0x0000000000215A5C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<std::string>::dispose(__int64 a1)
{
  _QWORD *v1; // x0
  __int64 *v2; // x8
  unsigned int *v3; // x9
  int v4; // w10
  _QWORD *v5; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  v1 = *(_QWORD **)(a1 + 24);
  if ( v1 )
  {
    v2 = (__int64 *)(*v1 - 24LL);
    if ( v2 != &qword_6FD2E0 )
    {
      v3 = (unsigned int *)(*v1 - 8LL);
      if ( &pthread_create )
      {
        do
          v4 = __ldaxr(v3);
        while ( __stlxr(v4 - 1, v3) );
      }
      else
      {
        v4 = (*v3)--;
      }
      if ( v4 <= 0 )
      {
        v5 = v1;
        operator delete(v2);
        v1 = v5;
      }
    }
    operator delete(v1);
  }
}

