/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8F10
 * Mangled: ._ZN5Caver24ParticleEmitterComponent11AddParticleEiRKNS_7Vector3ES3_fRKNS_5ColorEf
 * Demangled: Caver::ParticleEmitterComponent::AddParticle(int,Caver::Vector3 const&,Caver::Vector3 const&,float,Caver::Color const&,float)
 *
 * Callers: 6
 *   0x0000000000282B80  Caver::FireBreathComponent::Update(float)
 *   0x0000000000284B60  Caver::MagicBoltComponent::Update(float)
 *   0x000000000028BA40  Caver::MagicSpellCastComponent::Update(float)
 *   0x000000000029B1B4  Caver::MonsterDeathControllerComponent::Explode(void)
 *   0x00000000002A2C88  Caver::FireEmitterComponent::Update(float)
 *   0x00000000002AF110  Caver::ShatterComponent::ShatterModel(Caver::ModelComponent *,bool)
 *
 * Callees: 1
 *   0x00000000002AAFA0  Caver::ParticleEmitterComponent::AddParticle(int,Caver::Vector3 const&,Caver::Vector3 const&,float,Caver::Color const&,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8F18 string=0x00000000001F8F1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ParticleEmitterComponent::AddParticle(
        Caver::ParticleEmitterComponent *this,
        int a2,
        const Caver::Vector3 *a3,
        const Caver::Vector3 *a4,
        float a5,
        const Caver::Color *a6,
        float a7)
{
  return _ZN5Caver24ParticleEmitterComponent11AddParticleEiRKNS_7Vector3ES3_fRKNS_5ColorEf(this, a2, a3, a4, a5, a6, a7);
}

