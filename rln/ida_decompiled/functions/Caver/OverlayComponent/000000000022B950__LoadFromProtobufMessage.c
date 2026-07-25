/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022B950
 * Mangled: _ZN5Caver16OverlayComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::OverlayComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 1
 *   0x00000000001FF0D0  Caver::OverlayComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 1
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000022B950 string=0x00000000001FA840 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OverlayComponent::LoadFromProtobufMessage(
        Caver::OverlayComponent *this,
        const Caver::Proto::Component *a2)
{
  return Caver::Component::LoadFromProtobufMessage(this, a2);
}

