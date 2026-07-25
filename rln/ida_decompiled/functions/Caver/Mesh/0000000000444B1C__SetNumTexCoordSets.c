/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000444B1C
 * Mangled: _ZN5Caver4Mesh18SetNumTexCoordSetsEi
 * Demangled: Caver::Mesh::SetNumTexCoordSets(int)
 *
 * Callers: 1
 *   0x00000000001FF070  Caver::Mesh::SetNumTexCoordSets(int)
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *
 * Referenced strings: 31
 *   insn=0x0000000000444B3C string=0x0000000000444B40 ")"
 *   insn=0x0000000000444B48 string=0x0000000000444B4C " "
 *   insn=0x0000000000444B4C string=0x0000000000444B50 "tB"
 *   insn=0x0000000000444B54 string=0x00000000001F8570 "0'"
 *   insn=0x0000000000444B58 string=0x0000000000444BE8 "h*@"
 *   insn=0x0000000000444B5C string=0x0000000000444B60 "\t"
 *   insn=0x0000000000444B64 string=0x0000000000444B68 "(a"
 *   insn=0x0000000000444B68 string=0x0000000000444B6C "jU"
 *   insn=0x0000000000444B6C string=0x0000000000444B70 "}"
 *   insn=0x0000000000444B70 string=0x0000000000444B74 ""
 *   insn=0x0000000000444B74 string=0x0000000000444B78 "\n"
 *   insn=0x0000000000444B78 string=0x0000000000444B7C "_\t"
 *   insn=0x0000000000444B80 string=0x0000000000444B84 "C"
 *   insn=0x0000000000444B84 string=0x0000000000444B88 "K"
 *   insn=0x0000000000444B84 string=0x0000000000444BCC "\t"
 *   insn=0x0000000000444B90 string=0x0000000000444B94 "h"
 *   insn=0x0000000000444BC0 string=0x0000000000444BC4 "_"
 *   insn=0x0000000000444BD8 string=0x0000000000444BDC "a"
 *   insn=0x0000000000444BE0 string=0x0000000000444BE4 "a"
 *   insn=0x0000000000444BE8 string=0x0000000000444BEC "`*"
 *   insn=0x0000000000444BF8 string=0x0000000000444BFC "tBA"
 *   insn=0x0000000000444BF8 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000444C0C string=0x0000000000444C10 "j*@"
 *   insn=0x0000000000444C10 string=0x0000000000444C14 ")"
 *   insn=0x0000000000444C14 string=0x0000000000444C18 "J"
 *   insn=0x0000000000444C18 string=0x0000000000444C1C "_"
 *   insn=0x0000000000444C1C string=0x0000000000444C20 "_\t"
 *   insn=0x0000000000444C20 string=0x0000000000444C24 "_\t"
 *   insn=0x0000000000444C24 string=0x0000000000444C28 "jB"
 *   insn=0x0000000000444C28 string=0x0000000000444C2C "a"
 *   insn=0x0000000000444C2C string=0x0000000000444C30 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Mesh::SetNumTexCoordSets(Caver::Mesh *this, int a2)
{
  int v2; // w20
  __int64 v3; // x21
  unsigned __int64 v5; // x0
  __int64 v6; // x0
  unsigned __int64 v7; // x10
  __int64 v8; // x8
  __int64 v9; // x12
  __int64 v10; // x13
  void *v11; // x8
  __int64 v12; // x8
  __int64 v13; // x9
  __int64 v14; // x10

  v2 = a2;
  v3 = a2;
  if ( is_mul_ok(a2, 0x18u) )
    v5 = 24LL * a2;
  else
    v5 = -1;
  *((_DWORD *)this + 80) = a2;
  v6 = operator new[](v5);
  if ( v2 )
  {
    v7 = (24 * v3 - 24) / 0x18uLL + 1;
    v8 = v6;
    if ( v7 < 2 )
      goto LABEL_17;
    v9 = v6 + 24;
    v8 = v6 + 24 * (v7 & 0x1FFFFFFFFFFFFFFELL);
    v10 = v7 & 0x1FFFFFFFFFFFFFFELL;
    do
    {
      *(_QWORD *)(v9 - 24) = 0;
      *(_QWORD *)v9 = 0;
      *(_DWORD *)(v9 - 16) = 0;
      *(_DWORD *)(v9 + 8) = 0;
      *(_QWORD *)(v9 - 8) = 0;
      *(_QWORD *)(v9 + 16) = 0;
      v10 -= 2;
      v9 += 48;
    }
    while ( v10 );
    if ( v7 != (v7 & 0x1FFFFFFFFFFFFFFELL) )
    {
LABEL_17:
      do
      {
        *(_QWORD *)v8 = 0;
        *(_DWORD *)(v8 + 8) = 0;
        *(_QWORD *)(v8 + 16) = 0;
        v8 += 24;
      }
      while ( v8 != v6 + 24 * v3 );
    }
  }
  v11 = (void *)*((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = v6;
  if ( v11 )
  {
    operator delete[](v11);
    v2 = *((_DWORD *)this + 80);
  }
  if ( v2 >= 1 )
  {
    v12 = 0;
    v13 = 0;
    do
    {
      ++v13;
      v14 = *((_QWORD *)this + 10) + v12;
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 8) = 0;
      *(_QWORD *)(v14 + 16) = 0;
      v12 += 24;
    }
    while ( v13 < *((int *)this + 80) );
  }
}

