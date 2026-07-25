/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3BC0
 * Mangled: ._ZNK5Caver10FloatColor16GetHSLComponentsEPf
 * Demangled: Caver::FloatColor::GetHSLComponents(float *)
 *
 * Callers: 9
 *   0x00000000002A2C3C  Caver::FireEmitterComponent::Prepare(void)
 *   0x00000000002A9CC0  Caver::ParticleEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002AA56C  Caver::ParticleEmitterComponent::SetColor(Caver::FloatColor const&)
 *   0x00000000002AB9A4  sub_2AB9A4
 *   0x00000000002AF110  Caver::ShatterComponent::ShatterModel(Caver::ModelComponent *,bool)
 *   0x00000000003DAD60  Caver::HealthBar::Update(float)
 *   0x00000000003DC7D8  Caver::ParticleEmitter::ParticleEmitter(void)
 *   0x00000000003E0E08  Caver::OverlayMenuButton::SetSparkling(bool)
 *   0x0000000000452FC0  Caver::ParticleEmitter::LoadFromProtobufMessage(Caver::Proto::ParticleEmitter const&)
 *
 * Callees: 1
 *   0x000000000048A714  Caver::FloatColor::GetHSLComponents(float *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3BC8 string=0x00000000001F3BCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FloatColor::GetHSLComponents(Caver::FloatColor *this, float *a2)
{
  return _ZNK5Caver10FloatColor16GetHSLComponentsEPf(this, a2);
}

