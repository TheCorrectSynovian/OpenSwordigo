/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053C900
 * Mangled: sub_53C900
 * Demangled: sub_53C900
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000053C520  sub_53C520
 *   0x0000000000565808  sub_565808
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 17
 *   insn=0x000000000053C90C string=0x000000000053C910 "A"
 *   insn=0x000000000053C928 string=0x000000000053C92C "U"
 *   insn=0x000000000053C92C string=0x000000000053C930 "s"
 *   insn=0x000000000053C934 string=0x000000000053C984 " "
 *   insn=0x000000000053C93C string=0x000000000053C940 "b"
 *   insn=0x000000000053C944 string=0x000000000053C938 "`"
 *   insn=0x000000000053C94C string=0x000000000053C950 " "
 *   insn=0x000000000053C958 string=0x000000000053C95C "B"
 *   insn=0x000000000053C95C string=0x000000000053C960 "_"
 *   insn=0x000000000053C968 string=0x000000000053C96C "Bx`"
 *   insn=0x000000000053C96C string=0x000000000053C970 "B"
 *   insn=0x000000000053C97C string=0x000000000053C980 "!"
 *   insn=0x000000000053C984 string=0x000000000053C988 "`"
 *   insn=0x000000000053C98C string=0x000000000053C990 "@"
 *   insn=0x000000000053C990 string=0x000000000053C994 "`"
 *   insn=0x000000000053C998 string=0x000000000053C99C "`"
 *   insn=0x000000000053C9B8 string=0x000000000059E408 "locale::_Impl::_M_replace_facet"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall sub_53C900(_DWORD *result, __int64 a2, __int64 **a3)
{
  __int64 *v4; // x1
  _DWORD *v5; // x20
  __int64 **v6; // x22
  unsigned int v7; // w0
  __int64 v8; // x0
  unsigned __int64 v9; // x0
  _DWORD *v10; // x2
  __int64 *v11; // t1

  v4 = *a3;
  v5 = result;
  v6 = a3;
  if ( *a3 )
  {
    do
    {
      v8 = *v4;
      if ( !*v4 )
      {
        if ( &pthread_create )
        {
          do
            v7 = __ldaxr((unsigned int *)&dword_6FBDF8);
          while ( __stlxr(v7 + 1, (unsigned int *)&dword_6FBDF8) );
          LODWORD(v8) = v7 + 1;
        }
        else
        {
          LODWORD(v8) = ++dword_6FBDF8;
        }
        v8 = (int)v8;
        *v4 = (int)v8;
      }
      v9 = v8 - 1;
      if ( *(_QWORD *)(a2 + 16) - 1LL < v9 || (v10 = *(_DWORD **)(*(_QWORD *)(a2 + 8) + 8 * v9)) == 0 )
        sub_565808("locale::_Impl::_M_replace_facet");
      result = sub_53C520(v5, v4, v10);
      v11 = v6[1];
      ++v6;
      v4 = v11;
    }
    while ( v11 );
  }
  return result;
}

