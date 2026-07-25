/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028008C
 * Mangled: _ZN5Caver18PhysicsObjectState16setRotationSpeedEf
 * Demangled: Caver::PhysicsObjectState::setRotationSpeed(float)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PhysicsObjectState::setRotationSpeed(__int64 this, float a2)
{
  *(float *)(*(_QWORD *)this + 132LL) = a2;
  return this;
}

