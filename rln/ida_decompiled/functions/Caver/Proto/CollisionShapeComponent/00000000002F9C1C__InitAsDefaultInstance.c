/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9C1C
 * Mangled: _ZN5Caver5Proto23CollisionShapeComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::CollisionShapeComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6B40  Caver::Proto::Program::default_instance(void)
 *
 * Referenced strings: 4
 *   insn=0x00000000002F9C2C string=0x00000000002F9C30 "`"
 *   insn=0x00000000002F9C2C string=0x00000000001F6B40 "0'"
 *   insn=0x00000000002F9C34 string=0x00000000002F9C38 "`"
 *   insn=0x00000000002F9C3C string=0x00000000002F9C40 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CollisionShapeComponent::InitAsDefaultInstance(
        Caver::Proto::CollisionShapeComponent *this)
{
  Caver::Proto::Program *v2; // x0
  Caver::Proto::Program *v3; // x0
  __int64 result; // x0

  v2 = (Caver::Proto::Program *)Caver::Proto::Program::default_instance(this);
  *((_QWORD *)this + 5) = v2;
  v3 = (Caver::Proto::Program *)Caver::Proto::Program::default_instance(v2);
  *((_QWORD *)this + 6) = v3;
  result = Caver::Proto::Program::default_instance(v3);
  *((_QWORD *)this + 7) = result;
  return result;
}

