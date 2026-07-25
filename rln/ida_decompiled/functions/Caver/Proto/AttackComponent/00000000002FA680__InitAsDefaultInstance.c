/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA680
 * Mangled: _ZN5Caver5Proto15AttackComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::AttackComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6B40  Caver::Proto::Program::default_instance(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002FA68C string=0x00000000002FA690 ","
 *   insn=0x00000000002FA690 string=0x00000000002FA694 "`"
 *   insn=0x00000000002FA690 string=0x00000000001F6B40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::AttackComponent::InitAsDefaultInstance(Caver::Proto::AttackComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::Program::default_instance(this);
  *((_QWORD *)this + 4) = result;
  return result;
}

