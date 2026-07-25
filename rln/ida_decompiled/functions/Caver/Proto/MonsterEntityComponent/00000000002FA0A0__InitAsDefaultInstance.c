/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA0A0
 * Mangled: _ZN5Caver5Proto22MonsterEntityComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::MonsterEntityComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6B40  Caver::Proto::Program::default_instance(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002FA0B0 string=0x00000000002FA0B4 "`\n"
 *   insn=0x00000000002FA0B0 string=0x00000000001F6B40 "0'"
 *   insn=0x00000000002FA0B8 string=0x00000000002FA0BC "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MonsterEntityComponent::InitAsDefaultInstance(
        Caver::Proto::MonsterEntityComponent *this)
{
  Caver::Proto::Program *v2; // x0
  __int64 result; // x0

  v2 = (Caver::Proto::Program *)Caver::Proto::Program::default_instance(this);
  *((_QWORD *)this + 2) = v2;
  result = Caver::Proto::Program::default_instance(v2);
  *((_QWORD *)this + 3) = result;
  return result;
}

