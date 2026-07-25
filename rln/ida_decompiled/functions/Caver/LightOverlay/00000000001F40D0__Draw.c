/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F40D0
 * Mangled: ._ZN5Caver12LightOverlay4DrawEPNS_16RenderingContextE
 * Demangled: Caver::LightOverlay::Draw(Caver::RenderingContext *)
 *
 * Callers: 1
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x000000000045A84C  Caver::LightOverlay::Draw(Caver::RenderingContext *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F40D8 string=0x00000000001F40DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::LightOverlay::Draw(Caver::LightOverlay *this, Caver::RenderingContext *a2)
{
  return _ZN5Caver12LightOverlay4DrawEPNS_16RenderingContextE(this, a2);
}

