/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FAB48
 * Mangled: _ZN5Caver5Proto20OverlayTextComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::OverlayTextComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FB0B0  Caver::Proto::Vector2::default_instance(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FAB54 string=0x00000000002FAB58 "V"
 *   insn=0x00000000002FAB58 string=0x00000000002FAB5C "`"
 *   insn=0x00000000002FAB58 string=0x00000000001FB0B0 "0'"
 *   insn=0x00000000002FAB5C string=0x00000000002FAB60 "T"
 *   insn=0x00000000002FAB60 string=0x00000000002FAB64 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::OverlayTextComponent::InitAsDefaultInstance(Caver::Proto::OverlayTextComponent *this)
{
  Caver::Proto::Vector2 *v2; // x0
  __int64 result; // x0

  v2 = (Caver::Proto::Vector2 *)Caver::Proto::Vector2::default_instance(this);
  *((_QWORD *)this + 3) = v2;
  result = Caver::Proto::Vector2::default_instance(v2);
  *((_QWORD *)this + 5) = result;
  return result;
}

