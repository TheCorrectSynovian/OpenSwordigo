/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000281EA8
 * Mangled: _ZN5Caver23DimensionSpellComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::DimensionSpellComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC2D0  Caver::SpellComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000281EA8 string=0x00000000001FC2D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::DimensionSpellComponent::LoadFromProtobufMessage(
        Caver::DimensionSpellComponent *this,
        const Caver::Proto::Component *a2)
{
  return Caver::SpellComponent::LoadFromProtobufMessage(this, a2);
}

