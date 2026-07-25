/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000337A98
 * Mangled: _ZN5Caver5Proto8MeshData10SharedCtorEv
 * Demangled: Caver::Proto::MeshData::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::MeshData::SharedCtor(Caver::Proto::MeshData *this)
{
  double result; // d0

  *(_QWORD *)&result = 0x100000000LL;
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 1) = 0x100000000LL;
  return result;
}

