/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B4E74
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver13MusicPlaylistEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::MusicPlaylist>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 28
 *   insn=0x00000000003B4E88 string=0x00000000003B4E8C "U"
 *   insn=0x00000000003B4E98 string=0x00000000003B4E9C "s"
 *   insn=0x00000000003B4E9C string=0x00000000003B4EA0 "tZA"
 *   insn=0x00000000003B4EA8 string=0x00000000003B4F1C "t"
 *   insn=0x00000000003B4EC4 string=0x00000000003B4EC8 "\t"
 *   insn=0x00000000003B4EC4 string=0x00000000003B4EDC "\t"
 *   insn=0x00000000003B4EC8 string=0x00000000003B4ECC "*"
 *   insn=0x00000000003B4ECC string=0x00000000003B4ED0 "\n"
 *   insn=0x00000000003B4ED8 string=0x00000000003B4EE8 "?"
 *   insn=0x00000000003B4EDC string=0x00000000003B4EE0 "*"
 *   insn=0x00000000003B4EE0 string=0x00000000003B4EE4 "\n"
 *   insn=0x00000000003B4EF0 string=0x00000000003B4EF4 ","
 *   insn=0x00000000003B4F08 string=0x00000000003B4EC0 "!"
 *   insn=0x00000000003B4F10 string=0x00000000003B4F14 "A"
 *   insn=0x00000000003B4F14 string=0x00000000003B4F18 "t\n@"
 *   insn=0x00000000003B4F1C string=0x00000000003B4F28 "h"
 *   insn=0x00000000003B4F24 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B4F2C string=0x00000000003B4F30 ")"
 *   insn=0x00000000003B4F70 string=0x00000000003B4F74 ")=G"
 *   insn=0x00000000003B4F74 string=0x00000000003B4F78 "!"
 *   insn=0x00000000003B4F7C string=0x00000000003B4F80 "\t"
 *   insn=0x00000000003B4F7C string=0x00000000003B4F94 "\t"
 *   insn=0x00000000003B4F80 string=0x00000000003B4F84 "*"
 *   insn=0x00000000003B4F84 string=0x00000000003B4F88 "\n"
 *   insn=0x00000000003B4F90 string=0x00000000003B4FA0 "?"
 *   insn=0x00000000003B4F94 string=0x00000000003B4F98 "*"
 *   insn=0x00000000003B4F98 string=0x00000000003B4F9C "\n"
 *   insn=0x00000000003B4FB4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::MusicPlaylist>::dispose(__int64 a1)
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
    v2 = (_QWORD *)v1[2];
    v3 = (_QWORD *)v1[3];
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
        v2 += 2;
      }
      while ( v2 != v3 );
      v2 = (_QWORD *)v1[2];
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

