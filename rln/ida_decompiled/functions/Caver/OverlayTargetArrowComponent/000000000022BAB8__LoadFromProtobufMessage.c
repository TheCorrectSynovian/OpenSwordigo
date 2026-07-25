/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022BAB8
 * Mangled: _ZN5Caver27OverlayTargetArrowComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::OverlayTargetArrowComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF0D0  Caver::OverlayComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OverlayTargetArrowComponent::LoadFromProtobufMessage(
        Caver::OverlayTargetArrowComponent *this,
        const Caver::Proto::Component *a2)
{
  return Caver::OverlayComponent::LoadFromProtobufMessage(this, a2);
}

