/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FAE0C
 * Mangled: _ZN5Caver5Proto22MagicHookshotComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::MagicHookshotComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6310  Caver::Proto::FloatColor::default_instance(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002FAE18 string=0x00000000002FAE1C "="
 *   insn=0x00000000002FAE1C string=0x00000000002FAE20 "`"
 *   insn=0x00000000002FAE1C string=0x00000000001F6310 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicHookshotComponent::InitAsDefaultInstance(
        Caver::Proto::MagicHookshotComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::FloatColor::default_instance(this);
  *((_QWORD *)this + 4) = result;
  return result;
}

