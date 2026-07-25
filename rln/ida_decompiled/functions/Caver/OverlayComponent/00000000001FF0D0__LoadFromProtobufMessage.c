/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF0D0
 * Mangled: ._ZN5Caver16OverlayComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::OverlayComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 2
 *   0x000000000022BAB8  Caver::OverlayTargetArrowComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000022D020  Caver::OverlayTextComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 1
 *   0x000000000022B950  Caver::OverlayComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF0D8 string=0x00000000001FF0DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OverlayComponent::LoadFromProtobufMessage(
        Caver::OverlayComponent *this,
        const Caver::Proto::Component *a2)
{
  return _ZN5Caver16OverlayComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE(this, a2);
}

