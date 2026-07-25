/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FAE60
 * Mangled: _ZN5Caver5Proto14SpellComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::SpellComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6B40  Caver::Proto::Program::default_instance(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002FAE6C string=0x00000000002FAE70 "4"
 *   insn=0x00000000002FAE70 string=0x00000000002FAE74 "`\n"
 *   insn=0x00000000002FAE70 string=0x00000000001F6B40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SpellComponent::InitAsDefaultInstance(Caver::Proto::SpellComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::Program::default_instance(this);
  *((_QWORD *)this + 2) = result;
  return result;
}

