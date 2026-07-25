/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C1824
 * Mangled: _ZN5Caver15BuildVertexListEPNS_7Vector2Ei
 * Demangled: Caver::BuildVertexList(Caver::Vector2 *,int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5E70  .malloc
 *
 * Referenced strings: 17
 *   insn=0x00000000002C1840 string=0x00000000001F5E70 "P'"
 *   insn=0x00000000002C1854 string=0x00000000002C1858 "`"
 *   insn=0x00000000002C1858 string=0x00000000002C185C "t"
 *   insn=0x00000000002C185C string=0x00000000002C1860 ""
 *   insn=0x00000000002C1870 string=0x00000000002C1874 ""
 *   insn=0x00000000002C1874 string=0x00000000002C1878 "i"
 *   insn=0x00000000002C1878 string=0x00000000002C187C "lA"
 *   insn=0x00000000002C1880 string=0x00000000002C1884 "l"
 *   insn=0x00000000002C1880 string=0x00000000002C1890 ")"
 *   insn=0x00000000002C1884 string=0x00000000002C1888 "l"
 *   insn=0x00000000002C1888 string=0x00000000002C188C "k"
 *   insn=0x00000000002C1890 string=0x00000000002C1894 "_"
 *   insn=0x00000000002C1894 string=0x00000000002C1898 ""
 *   insn=0x00000000002C18A0 string=0x00000000002C18A4 ""
 *   insn=0x00000000002C18A4 string=0x00000000002C18A8 "\t"
 *   insn=0x00000000002C18A8 string=0x00000000002C18AC "\t"
 *   insn=0x00000000002C18B0 string=0x00000000002C18B4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::BuildVertexList(__int64 a1, int a2)
{
  _QWORD *v4; // x0
  _QWORD *v5; // x19
  _QWORD *v6; // x0
  __int64 v7; // x8
  __int64 v8; // x9
  __int64 v9; // x12
  _QWORD *v10; // x11
  _QWORD *v11; // x8

  v4 = malloc(0x18u);
  v5 = v4;
  if ( a2 )
  {
    v6 = malloc(32LL * a2);
    *v5 = v6;
    *((_DWORD *)v5 + 4) = a2;
    if ( a2 >= 1 )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        v9 = *(_QWORD *)(a1 + 8 * v8);
        v10 = &v6[v7];
        *((_DWORD *)v10 + 4) = v8;
        *(_QWORD *)((char *)v10 + 20) = v9;
        if ( v7 * 8 )
        {
          *v10 = v10 - 4;
          *(v10 - 3) = v10;
        }
        ++v8;
        v7 += 4;
      }
      while ( a2 != v8 );
    }
    v11 = &v6[4 * a2];
    *v6 = v11 - 4;
    *(v11 - 3) = v6;
    v5[1] = v6;
  }
  else
  {
    v4[1] = 0;
    *((_DWORD *)v4 + 4) = 0;
  }
  return v5;
}

