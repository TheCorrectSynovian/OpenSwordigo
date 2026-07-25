/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000447FAC
 * Mangled: _ZN5Caver11MeshClipperC2Ev
 * Demangled: Caver::MeshClipper::MeshClipper(void)
 *
 * Callers: 1
 *   0x00000000001F82A0  Caver::MeshClipper::MeshClipper(void)
 *
 * Callees: 1
 *   0x0000000000203610  Caver::MeshBuilder::MeshBuilder(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000447FB8 string=0x0000000000447FBC "`""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MeshClipper::MeshClipper(Caver::MeshClipper *this)
{
  __int64 result; // x0

  result = Caver::MeshBuilder::MeshBuilder((Caver::MeshClipper *)((char *)this + 72));
  *((_QWORD *)this + 21) = 0;
  *((_QWORD *)this + 23) = 0;
  return result;
}

