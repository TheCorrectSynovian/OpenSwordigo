/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000449D5C
 * Mangled: _ZN5Caver13MeshOptimizer28GetVertexGroupIndicesForFaceEiPi
 * Demangled: Caver::MeshOptimizer::GetVertexGroupIndicesForFace(int,int *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 28
 *   insn=0x0000000000449D64 string=0x0000000000449D68 "\n"
 *   insn=0x0000000000449D68 string=0x0000000000449D6C "\t"
 *   insn=0x0000000000449D6C string=0x0000000000449D70 "L("
 *   insn=0x0000000000449D70 string=0x0000000000449D74 "H"
 *   insn=0x0000000000449D74 string=0x0000000000449D78 ""
 *   insn=0x0000000000449D78 string=0x0000000000449D7C "\t"
 *   insn=0x0000000000449D7C string=0x0000000000449D80 "+"
 *   insn=0x0000000000449D80 string=0x0000000000449D84 "ly"
 *   insn=0x0000000000449D80 string=0x0000000000449DC4 ""
 *   insn=0x0000000000449D84 string=0x0000000000449D88 ""
 *   insn=0x0000000000449D88 string=0x0000000000449D8C "L"
 *   insn=0x0000000000449D98 string=0x0000000000449D9C "L"
 *   insn=0x0000000000449D9C string=0x0000000000449DA0 "j"
 *   insn=0x0000000000449DA0 string=0x0000000000449DA4 "J"
 *   insn=0x0000000000449DA8 string=0x0000000000449DAC "J%"
 *   insn=0x0000000000449DAC string=0x0000000000449DB0 "J@"
 *   insn=0x0000000000449DB0 string=0x0000000000449DB4 "J"
 *   insn=0x0000000000449DB4 string=0x0000000000449DB8 "hyh"
 *   insn=0x0000000000449DB8 string=0x0000000000449DBC "H"
 *   insn=0x0000000000449DBC string=0x0000000000449DC0 "\t"
 *   insn=0x0000000000449DC0 string=0x0000000000449DE4 "\n"
 *   insn=0x0000000000449DD0 string=0x0000000000449DD4 "J%"
 *   insn=0x0000000000449DD4 string=0x0000000000449DD8 "L"
 *   insn=0x0000000000449DD8 string=0x0000000000449DDC "J@"
 *   insn=0x0000000000449DDC string=0x0000000000449DE0 "J"
 *   insn=0x0000000000449DE4 string=0x0000000000449DE8 "%*"
 *   insn=0x0000000000449DE8 string=0x0000000000449DEC "@"
 *   insn=0x0000000000449DEC string=0x0000000000449DF0 "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MeshOptimizer::GetVertexGroupIndicesForFace(__int64 this, int a2, int *a3)
{
  __int64 v3; // x10
  __int64 v4; // x8
  __int64 v5; // x11
  __int64 v6; // x9
  __int64 v7; // x12
  __int64 v8; // x10

  v3 = 3 * a2 + 1LL;
  v4 = 3 * a2 + 2LL;
  *a3 = 3 * a2;
  a3[1] = v3;
  a3[2] = v4;
  v5 = *(_QWORD *)(this + 40);
  v6 = *(_QWORD *)(this + 24);
  if ( v5 )
  {
    v7 = *(int *)(v5 + 12LL * a2);
    *a3 = v7;
    *a3 = *(_DWORD *)(v6 + 40 * v7 + 12);
    v8 = *(int *)(v5 + 4LL * (int)v3);
    a3[1] = v8;
    a3[1] = *(_DWORD *)(v6 + 40 * v8 + 12);
    LODWORD(v4) = *(_DWORD *)(v5 + 4 * v4);
    a3[2] = v4;
  }
  else
  {
    *a3 = *(_DWORD *)(v6 + 120LL * a2 + 12);
    a3[1] = *(_DWORD *)(v6 + 40 * v3 + 12);
  }
  a3[2] = *(_DWORD *)(v6 + 40LL * (int)v4 + 12);
  return this;
}

