/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053C874
 * Mangled: sub_53C874
 * Demangled: sub_53C874
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000053C520  sub_53C520
 *   0x0000000000565808  sub_565808
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 14
 *   insn=0x000000000053C878 string=0x000000000053C87C "C"
 *   insn=0x000000000053C880 string=0x000000000053C884 "C"
 *   insn=0x000000000053C880 string=0x000000000053C8B4 "$@"
 *   insn=0x000000000053C888 string=0x000000000053C88C "c<G"
 *   insn=0x000000000053C898 string=0x000000000053C89C "e"
 *   insn=0x000000000053C8A4 string=0x000000000053C8A8 "c"
 *   insn=0x000000000053C8A8 string=0x000000000053C8AC "c|@"
 *   insn=0x000000000053C8AC string=0x000000000053C8B0 "C"
 *   insn=0x000000000053C8B4 string=0x000000000053C8B8 "c"
 *   insn=0x000000000053C8C4 string=0x000000000053C8C8 "!"
 *   insn=0x000000000053C8C8 string=0x000000000053C8CC "#xc"
 *   insn=0x000000000053C8CC string=0x000000000053C8D0 "#"
 *   insn=0x000000000053C8E4 string=0x000000000053C8E8 "c"
 *   insn=0x000000000053C8F4 string=0x000000000059E408 "locale::_Impl::_M_replace_facet"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall sub_53C874(_DWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // x3
  unsigned int v4; // w3
  unsigned __int64 v5; // x3
  _DWORD *v6; // x3

  v3 = *a3;
  if ( !*a3 )
  {
    if ( &pthread_create )
    {
      do
        v4 = __ldaxr((unsigned int *)&dword_6FBDF8);
      while ( __stlxr(v4 + 1, (unsigned int *)&dword_6FBDF8) );
      LODWORD(v3) = v4 + 1;
    }
    else
    {
      LODWORD(v3) = ++dword_6FBDF8;
    }
    v3 = (int)v3;
    *a3 = (int)v3;
  }
  v5 = v3 - 1;
  if ( *(_QWORD *)(a2 + 16) - 1LL < v5 || (v6 = *(_DWORD **)(*(_QWORD *)(a2 + 8) + 8 * v5)) == 0 )
    sub_565808("locale::_Impl::_M_replace_facet");
  return sub_53C520(a1, a3, v6);
}

