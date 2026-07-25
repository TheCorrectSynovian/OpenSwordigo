/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000337CC8
 * Mangled: _ZNK5Caver5Proto8MeshData3NewEv
 * Demangled: Caver::Proto::MeshData::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x0000000000337CD0 string=0x0000000000337CD4 "C"
 *   insn=0x0000000000337CD4 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000337CE0 string=0x0000000000337CE4 ""
 *   insn=0x0000000000337CEC string=0x0000000000337CF0 "A"
 *   insn=0x0000000000337CF0 string=0x0000000000337CF4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::MeshData::New(Caver::Proto::MeshData *this)
{
  _QWORD *v1; // x0
  double result; // d0

  v1 = (_QWORD *)operator new(0x20u);
  *(_QWORD *)&result = 0x100000000LL;
  v1[2] = 0;
  v1[3] = 0;
  v1[1] = 0x100000000LL;
  *v1 = off_6C9C48;
  return result;
}

