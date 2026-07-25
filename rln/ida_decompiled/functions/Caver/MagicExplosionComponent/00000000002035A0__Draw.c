/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002035A0
 * Mangled: ._ZNK5Caver23MagicExplosionComponent4DrawEPNS_16RenderingContextERKNS_7Matrix4E
 * Demangled: Caver::MagicExplosionComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x0000000000288320  Caver::MagicExplosionComponent::HandleMessage(int,void *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002035A8 string=0x00000000002035AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::MagicExplosionComponent::Draw()
{
  JUMPOUT(0x28849C);
}

