/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C1900
 * Mangled: _ZN5Caver12RemoveVertexEPNS_11VertexList_EPNS_15VertexListNode_E
 * Demangled: Caver::RemoveVertex(Caver::VertexList_ *,Caver::VertexListNode_ *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 13
 *   insn=0x00000000002C1900 string=0x00000000002C1904 "("
 *   insn=0x00000000002C1904 string=0x00000000002C1908 ""
 *   insn=0x00000000002C1908 string=0x00000000002C190C ""
 *   insn=0x00000000002C190C string=0x00000000002C1910 ""
 *   insn=0x00000000002C1910 string=0x00000000002C1914 "`"
 *   insn=0x00000000002C1914 string=0x00000000002C1918 "($@"
 *   insn=0x00000000002C1918 string=0x00000000002C191C "("
 *   insn=0x00000000002C191C string=0x00000000002C1920 "("
 *   insn=0x00000000002C1920 string=0x00000000002C1924 "\t"
 *   insn=0x00000000002C1924 string=0x00000000002C1928 ""
 *   insn=0x00000000002C1930 string=0x00000000002C1934 "("
 *   insn=0x00000000002C1930 string=0x00000000002C1950 "("
 *   insn=0x00000000002C1950 string=0x00000000002C1954 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RemoveVertex(__int64 a1, __int64 a2)
{
  int v2; // w8
  _QWORD *v3; // x9
  __int64 v5; // x8

  *(_DWORD *)(a2 + 16) = -1;
  v2 = *(_DWORD *)(a1 + 16) - 1;
  *(_DWORD *)(a1 + 16) = v2;
  if ( v2 )
  {
    v3 = *(_QWORD **)(a2 + 8);
    *v3 = *(_QWORD *)a2;
    *(_QWORD *)(*(_QWORD *)a2 + 8LL) = v3;
    if ( *(_QWORD *)(a1 + 8) == a2 )
    {
      v5 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(a1 + 8) = v5;
      return v5;
    }
    else
    {
      return *(_QWORD *)(a2 + 8);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    return 0;
  }
}

