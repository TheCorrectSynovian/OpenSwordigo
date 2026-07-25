/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D0940
 * Mangled: _ZNK5Caver5Proto7Polygon8ByteSizeEv
 * Demangled: Caver::Proto::Polygon::ByteSize(void)
 *
 * Callers: 1
 *   0x0000000000203210  Caver::Proto::Polygon::ByteSize(void)
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x00000000002D0948 string=0x00000000002D094C "\t"
 *   insn=0x00000000002D094C string=0x00000000002D0950 "*\t"
 *   insn=0x00000000002D0954 string=0x00000000002D0958 "("
 *   insn=0x00000000002D095C string=0x00000000002D0964 "\t"
 *   insn=0x00000000002D0964 string=0x00000000002D0968 "?"
 *   insn=0x00000000002D0968 string=0x00000000002D096C "("
 *   insn=0x00000000002D096C string=0x00000000002D0970 "+"
 *   insn=0x00000000002D0970 string=0x00000000002D0974 "\n@"
 *   insn=0x00000000002D0970 string=0x00000000002D09B4 ""
 *   insn=0x00000000002D0978 string=0x00000000002D097C "L"
 *   insn=0x00000000002D0984 string=0x00000000002D099C ""
 *   insn=0x00000000002D099C string=0x00000000002D09A0 ")"
 *   insn=0x00000000002D09A0 string=0x00000000002D09A4 ""
 *   insn=0x00000000002D09A4 string=0x00000000002D09A8 "J!"
 *   insn=0x00000000002D09AC string=0x00000000002D09B0 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Polygon::ByteSize(Caver::Proto::Polygon *this)
{
  int v1; // w8
  int v2; // w8
  __int64 v3; // x9
  unsigned int v4; // w8
  __int64 *v5; // x10
  __int64 v6; // x12
  int v7; // w13

  v1 = *((_DWORD *)this + 19);
  if ( (v1 & 0x1FE) != 0 )
  {
    if ( (v1 & 4) != 0 )
      v2 = (*((_DWORD *)this + 19) & 2) + 2;
    else
      v2 = *((_DWORD *)this + 19) & 2;
  }
  else
  {
    v2 = 0;
  }
  v3 = *((unsigned int *)this + 6);
  v4 = v3 + v2;
  if ( (int)v3 >= 1 )
  {
    v5 = (__int64 *)*((_QWORD *)this + 2);
    do
    {
      v6 = *v5;
      v7 = *(unsigned __int8 *)(*v5 + 20);
      if ( *(_BYTE *)(*v5 + 20) )
      {
        if ( (v7 & 2) != 0 )
          v7 = ((v7 << 31 >> 31) & 5) + 5;
        else
          v7 = (v7 << 31 >> 31) & 5;
      }
      --v3;
      v4 += v7 + 1;
      ++v5;
      *(_DWORD *)(v6 + 8) = v7;
    }
    while ( v3 );
  }
  *((_DWORD *)this + 2) = v4;
  return v4;
}

