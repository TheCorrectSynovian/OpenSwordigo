/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9FBC
 * Mangled: _ZN5Caver5Proto24PressureTriggerComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::PressureTriggerComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6B40  Caver::Proto::Program::default_instance(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002F9FCC string=0x00000000002F9FD0 "`"
 *   insn=0x00000000002F9FCC string=0x00000000001F6B40 "0'"
 *   insn=0x00000000002F9FD4 string=0x00000000002F9FD8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PressureTriggerComponent::InitAsDefaultInstance(
        Caver::Proto::PressureTriggerComponent *this)
{
  Caver::Proto::Program *v2; // x0
  __int64 result; // x0

  v2 = (Caver::Proto::Program *)Caver::Proto::Program::default_instance(this);
  *((_QWORD *)this + 3) = v2;
  result = Caver::Proto::Program::default_instance(v2);
  *((_QWORD *)this + 4) = result;
  return result;
}

