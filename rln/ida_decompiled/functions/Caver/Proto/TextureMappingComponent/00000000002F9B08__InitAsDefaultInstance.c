/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9B08
 * Mangled: _ZN5Caver5Proto23TextureMappingComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::TextureMappingComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FB0B0  Caver::Proto::Vector2::default_instance(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002F9B14 string=0x00000000002F9B18 "f"
 *   insn=0x00000000002F9B18 string=0x00000000002F9B1C "`"
 *   insn=0x00000000002F9B18 string=0x00000000001FB0B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::TextureMappingComponent::InitAsDefaultInstance(
        Caver::Proto::TextureMappingComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::Vector2::default_instance(this);
  *((_QWORD *)this + 4) = result;
  return result;
}

