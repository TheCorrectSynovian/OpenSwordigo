/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F64B0
 * Mangled: ._ZN5Caver13GlowComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::GlowComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 4
 *   0x0000000000283254  Caver::HookshotTrailComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002AD620  Caver::PortalEffectComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002AF72C  Caver::SimpleGlowComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002CA878  Caver::WeaponGlowComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 1
 *   0x00000000002A3528  Caver::GlowComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F64B8 string=0x00000000001F64BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GlowComponent::LoadFromProtobufMessage(
        Caver::GlowComponent *this,
        const Caver::Proto::Component *a2)
{
  return _ZN5Caver13GlowComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE(this, a2);
}

