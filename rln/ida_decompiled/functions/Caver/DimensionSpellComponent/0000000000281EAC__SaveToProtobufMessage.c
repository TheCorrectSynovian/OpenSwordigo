/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000281EAC
 * Mangled: _ZNK5Caver23DimensionSpellComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::DimensionSpellComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4E00  Caver::SpellComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000281EAC string=0x00000000001F4E00 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::DimensionSpellComponent::SaveToProtobufMessage(
        Caver::DimensionSpellComponent *this,
        Caver::Proto::Component *a2)
{
  return Caver::SpellComponent::SaveToProtobufMessage(this, a2);
}

