/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB800
 * Mangled: ._ZN5Caver15HealthComponent4DrawEPNS_16RenderingContextERKNS_7Matrix4E
 * Demangled: Caver::HealthComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x0000000000271378  Caver::HealthComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB808 string=0x00000000001FB80C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::HealthComponent::Draw(
        Caver::HealthComponent *this,
        Caver::RenderingContext *a2,
        const Caver::Matrix4 *a3)
{
  return _ZN5Caver15HealthComponent4DrawEPNS_16RenderingContextERKNS_7Matrix4E(this, a2, a3);
}

