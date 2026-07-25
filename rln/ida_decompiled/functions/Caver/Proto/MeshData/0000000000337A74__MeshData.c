/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000337A74
 * Mangled: _ZN5Caver5Proto8MeshDataC2Ev
 * Demangled: Caver::Proto::MeshData::MeshData(void)
 *
 * Callers: 1
 *   0x00000000001FCA50  Caver::Proto::MeshData::MeshData(void)
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000337A7C string=0x0000000000337A80 ""
 *   insn=0x0000000000337A88 string=0x0000000000337A8C "A"
 *   insn=0x0000000000337A8C string=0x0000000000337A90 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::MeshData::MeshData(Caver::Proto::MeshData *this)
{
  double result; // d0

  *(_QWORD *)&result = 0x100000000LL;
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 1) = 0x100000000LL;
  *(_QWORD *)this = off_6C9C48;
  return result;
}

