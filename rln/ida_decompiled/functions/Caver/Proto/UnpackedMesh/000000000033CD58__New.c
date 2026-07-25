/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033CD58
 * Mangled: _ZNK5Caver5Proto12UnpackedMesh3NewEv
 * Demangled: Caver::Proto::UnpackedMesh::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 15
 *   insn=0x000000000033CD64 string=0x000000000033CD68 ""
 *   insn=0x000000000033CD64 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000033CD68 string=0x000000000033CD6C ""
 *   insn=0x000000000033CD6C string=0x000000000033CD70 "h"
 *   insn=0x000000000033CD74 string=0x000000000033CD78 ""
 *   insn=0x000000000033CD78 string=0x000000000033CD7C ""
 *   insn=0x000000000033CD7C string=0x000000000033CD80 ""
 *   insn=0x000000000033CD80 string=0x000000000033CD84 "("
 *   insn=0x000000000033CD84 string=0x000000000033CD88 "H"
 *   insn=0x000000000033CD88 string=0x000000000033CD8C ""
 *   insn=0x000000000033CD8C string=0x000000000033CD90 "8"
 *   insn=0x000000000033CD90 string=0x000000000033CD94 "H"
 *   insn=0x000000000033CD94 string=0x000000000033CD98 "mB"
 *   insn=0x000000000033CDA4 string=0x000000000033CDA8 "A"
 *   insn=0x000000000033CDA8 string=0x000000000033CDAC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::UnpackedMesh::New(Caver::Proto::UnpackedMesh *this)
{
  __int64 v1; // x0
  double result; // d0

  v1 = operator new(0x80u);
  *(_QWORD *)(v1 + 16) = v1 + 32;
  *(_QWORD *)&result = 0x400000000LL;
  *(_QWORD *)(v1 + 48) = v1 + 64;
  *(_QWORD *)(v1 + 80) = v1 + 96;
  *(_QWORD *)(v1 + 112) = &Caver::Proto::UnpackedMesh::_default_vertex_data_;
  *(_DWORD *)(v1 + 8) = 0;
  *(_QWORD *)(v1 + 24) = 0x400000000LL;
  *(_QWORD *)(v1 + 56) = 0x400000000LL;
  *(_QWORD *)v1 = off_6C9E28;
  *(_QWORD *)(v1 + 88) = 0x400000000LL;
  *(_DWORD *)(v1 + 120) = 0;
  return result;
}

