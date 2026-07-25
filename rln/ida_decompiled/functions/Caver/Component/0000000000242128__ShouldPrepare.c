/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000242128
 * Mangled: _ZNK5Caver9Component13ShouldPrepareEv
 * Demangled: Caver::Component::ShouldPrepare(void)
 *
 * Callers: 1
 *   0x0000000000203A20  Caver::Component::ShouldPrepare(void)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000024212C string=0x0000000000242130 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::Component::ShouldPrepare(Caver::Component *this)
{
  __int64 v1; // x8

  v1 = *((_QWORD *)this + 5);
  return v1 && *(_QWORD *)(v1 + 32) != 0;
}

