/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023CD1C
 * Mangled: _ZN5Caver19TextBubbleComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::TextBubbleComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000023CD1C string=0x00000000001FA840 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TextBubbleComponent::LoadFromProtobufMessage(
        Caver::TextBubbleComponent *this,
        const Caver::Proto::Component *a2)
{
  return Caver::Component::LoadFromProtobufMessage(this, a2);
}

