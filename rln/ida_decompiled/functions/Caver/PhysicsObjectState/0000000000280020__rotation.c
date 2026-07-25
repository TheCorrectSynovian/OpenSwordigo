/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000280020
 * Mangled: _ZNK5Caver18PhysicsObjectState8rotationEv
 * Demangled: Caver::PhysicsObjectState::rotation(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::PhysicsObjectState::rotation(Caver::PhysicsObjectState *this)
{
  return *(float *)(*(_QWORD *)this + 128LL);
}

