/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FADB8
 * Mangled: _ZN5Caver5Proto18MagicBombComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::MagicBombComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6310  Caver::Proto::FloatColor::default_instance(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002FADC4 string=0x00000000002FADC8 "R"
 *   insn=0x00000000002FADC8 string=0x00000000002FADCC "`\n"
 *   insn=0x00000000002FADC8 string=0x00000000001F6310 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicBombComponent::InitAsDefaultInstance(Caver::Proto::MagicBombComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::FloatColor::default_instance(this);
  *((_QWORD *)this + 2) = result;
  return result;
}

