/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B9C3C
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver10QuestStateEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::QuestState>::dispose(void)
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
 *   insn=0x00000000003B9C48 string=0x00000000003B9C4C "S"
 *   insn=0x00000000003B9C4C string=0x00000000003B9C50 "h"
 *   insn=0x00000000003B9C5C string=0x00000000003B9C60 "\t"
 *   insn=0x00000000003B9C5C string=0x00000000003B9C7C "h"
 *   insn=0x00000000003B9C60 string=0x00000000003B9C64 "j"
 *   insn=0x00000000003B9C64 string=0x00000000003B9C68 "J"
 *   insn=0x00000000003B9C68 string=0x00000000003B9C6C "(a"
 *   insn=0x00000000003B9C70 string=0x00000000003B9C74 "A"
 *   insn=0x00000000003B9C74 string=0x00000000003B9C9C "J"
 *   insn=0x00000000003B9C78 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B9C84 string=0x00000000003B9C88 "!"
 *   insn=0x00000000003B9C88 string=0x00000000003B9CEC "y"
 *   insn=0x00000000003B9C9C string=0x00000000003B9CA0 "J=G"
 *   insn=0x00000000003B9CA0 string=0x00000000003B9CA4 ")!"
 *   insn=0x00000000003B9CA8 string=0x00000000003B9CAC "*"
 *   insn=0x00000000003B9CA8 string=0x00000000003B9CC0 "*"
 *   insn=0x00000000003B9CAC string=0x00000000003B9CB0 "K"
 *   insn=0x00000000003B9CB0 string=0x00000000003B9CB4 "+"
 *   insn=0x00000000003B9CBC string=0x00000000003B9CCC "_"
 *   insn=0x00000000003B9CC0 string=0x00000000003B9CC4 "K"
 *   insn=0x00000000003B9CC4 string=0x00000000003B9CC8 "+"
 *   insn=0x00000000003B9CCC string=0x00000000003B9CD0 "L"
 *   insn=0x00000000003B9CEC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::QuestState>::dispose(__int64 a1)
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

