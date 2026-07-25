/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA1D8
 * Mangled: _ZN5Caver5Proto21EntityActionComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::EntityActionComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6B40  Caver::Proto::Program::default_instance(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002FA1E4 string=0x00000000002FA1E8 "V"
 *   insn=0x00000000002FA1E8 string=0x00000000002FA1EC "`\n"
 *   insn=0x00000000002FA1E8 string=0x00000000001F6B40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityActionComponent::InitAsDefaultInstance(
        Caver::Proto::EntityActionComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::Program::default_instance(this);
  *((_QWORD *)this + 2) = result;
  return result;
}

