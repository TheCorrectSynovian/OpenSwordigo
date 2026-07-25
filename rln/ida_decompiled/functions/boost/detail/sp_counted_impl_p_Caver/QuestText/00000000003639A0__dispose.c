/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003639A0
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver9QuestTextEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::QuestText>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 31
 *   insn=0x00000000003639B4 string=0x00000000003639B8 "U"
 *   insn=0x00000000003639C4 string=0x00000000003639C8 "s"
 *   insn=0x00000000003639C8 string=0x00000000003639CC "t"
 *   insn=0x00000000003639D4 string=0x0000000000363A48 "t"
 *   insn=0x00000000003639F0 string=0x00000000003639F4 "\t"
 *   insn=0x00000000003639F0 string=0x0000000000363A08 "\t"
 *   insn=0x00000000003639F4 string=0x00000000003639F8 "*"
 *   insn=0x00000000003639F8 string=0x00000000003639FC "\n"
 *   insn=0x0000000000363A04 string=0x0000000000363A14 "?"
 *   insn=0x0000000000363A08 string=0x0000000000363A0C "*"
 *   insn=0x0000000000363A0C string=0x0000000000363A10 "\n"
 *   insn=0x0000000000363A1C string=0x0000000000363A20 "a"
 *   insn=0x0000000000363A34 string=0x00000000003639EC "!"
 *   insn=0x0000000000363A3C string=0x0000000000363A40 "A"
 *   insn=0x0000000000363A40 string=0x0000000000363A44 "t"
 *   insn=0x0000000000363A48 string=0x0000000000363A54 "h"
 *   insn=0x0000000000363A50 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000363A54 string=0x0000000000363A58 "\t"
 *   insn=0x0000000000363A58 string=0x0000000000363A5C ")"
 *   insn=0x0000000000363A68 string=0x0000000000363A9C "\t"
 *   insn=0x0000000000363A9C string=0x0000000000363AA0 ")=G"
 *   insn=0x0000000000363AA0 string=0x0000000000363AA4 "!"
 *   insn=0x0000000000363AA8 string=0x0000000000363AAC "\t"
 *   insn=0x0000000000363AA8 string=0x0000000000363AC0 "\t"
 *   insn=0x0000000000363AAC string=0x0000000000363AB0 "*"
 *   insn=0x0000000000363AB0 string=0x0000000000363AB4 "\n"
 *   insn=0x0000000000363ABC string=0x0000000000363ACC "?"
 *   insn=0x0000000000363AC0 string=0x0000000000363AC4 "*"
 *   insn=0x0000000000363AC4 string=0x0000000000363AC8 "\n"
 *   insn=0x0000000000363AD4 string=0x0000000000363AD8 "3"
 *   insn=0x0000000000363AE0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::QuestText>::dispose(__int64 a1)
{
  _QWORD *v1; // x19
  _QWORD *v2; // x20
  _QWORD *v3; // x22
  unsigned int *v4; // x8
  int v5; // w9
  __int64 *v6; // x0
  __int64 *v7; // x0
  unsigned int *v8; // x8
  int v9; // w9

  _ReadStatusReg(TPIDR_EL0);
  v1 = *(_QWORD **)(a1 + 24);
  if ( v1 )
  {
    v2 = (_QWORD *)v1[1];
    v3 = (_QWORD *)v1[2];
    if ( v2 != v3 )
    {
      do
      {
        v6 = (__int64 *)(*v2 - 24LL);
        if ( v6 != &qword_6FD2E0 )
        {
          v4 = (unsigned int *)(*v2 - 8LL);
          if ( &pthread_create )
          {
            do
              v5 = __ldaxr(v4);
            while ( __stlxr(v5 - 1, v4) );
          }
          else
          {
            v5 = (*v4)--;
          }
          if ( v5 <= 0 )
            operator delete(v6);
        }
        ++v2;
      }
      while ( v2 != v3 );
      v2 = (_QWORD *)v1[1];
    }
    if ( v2 )
      operator delete(v2);
    v7 = (__int64 *)(*v1 - 24LL);
    if ( v7 != &qword_6FD2E0 )
    {
      v8 = (unsigned int *)(*v1 - 8LL);
      if ( &pthread_create )
      {
        do
          v9 = __ldaxr(v8);
        while ( __stlxr(v9 - 1, v8) );
      }
      else
      {
        v9 = (*v8)--;
      }
      if ( v9 <= 0 )
        operator delete(v7);
    }
    operator delete(v1);
  }
}

