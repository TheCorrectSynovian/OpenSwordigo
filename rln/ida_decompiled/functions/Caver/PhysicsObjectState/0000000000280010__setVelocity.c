/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000280010
 * Mangled: _ZN5Caver18PhysicsObjectState11setVelocityERKNS_7Vector2E
 * Demangled: Caver::PhysicsObjectState::setVelocity(Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000001F4B80  Caver::PhysicsObjectState::setVelocity(Caver::Vector2 const&)
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x0000000000280010 string=0x0000000000280014 ")"
 *   insn=0x0000000000280014 string=0x0000000000280018 "\t5"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PhysicsObjectState::setVelocity(__int64 result, _QWORD *a2)
{
  *(_QWORD *)(*(_QWORD *)result + 104LL) = *a2;
  return result;
}

