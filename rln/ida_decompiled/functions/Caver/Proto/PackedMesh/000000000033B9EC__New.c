/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033B9EC
 * Mangled: _ZNK5Caver5Proto10PackedMesh3NewEv
 * Demangled: Caver::Proto::PackedMesh::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 14
 *   insn=0x000000000033B9F8 string=0x000000000033B9FC ""
 *   insn=0x000000000033B9F8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000033B9FC string=0x000000000033BA00 ""
 *   insn=0x000000000033BA08 string=0x000000000033BA0C " "
 *   insn=0x000000000033BA0C string=0x000000000033BA10 ""
 *   insn=0x000000000033BA10 string=0x000000000033BA14 ""
 *   insn=0x000000000033BA14 string=0x000000000033BA18 "0"
 *   insn=0x000000000033BA18 string=0x000000000033BA1C "h"
 *   insn=0x000000000033BA1C string=0x000000000033BA20 "uB"
 *   insn=0x000000000033BA20 string=0x000000000033BA24 "D"
 *   insn=0x000000000033BA24 string=0x000000000033BA28 "H"
 *   insn=0x000000000033BA28 string=0x000000000033BA2C ""
 *   insn=0x000000000033BA38 string=0x000000000033BA3C "A"
 *   insn=0x000000000033BA3C string=0x000000000033BA40 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::PackedMesh::New(Caver::Proto::PackedMesh *this)
{
  __int64 v1; // x0
  double result; // d0

  v1 = operator new(0x98u);
  *(_QWORD *)(v1 + 16) = v1 + 32;
  *(_QWORD *)&result = 0x400000000LL;
  *(_QWORD *)(v1 + 56) = v1 + 72;
  *(_QWORD *)(v1 + 96) = v1 + 112;
  *(_QWORD *)(v1 + 136) = &Caver::Proto::PackedMesh::_default_vertex_data_;
  *(_DWORD *)(v1 + 8) = 0;
  *(_QWORD *)(v1 + 24) = 0x400000000LL;
  *(_QWORD *)(v1 + 64) = 0x400000000LL;
  *(_QWORD *)v1 = off_6C9DB0;
  *(_QWORD *)(v1 + 104) = 0x400000000LL;
  *(_DWORD *)(v1 + 144) = 0;
  return result;
}

