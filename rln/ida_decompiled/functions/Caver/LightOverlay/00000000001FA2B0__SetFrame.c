/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA2B0
 * Mangled: ._ZN5Caver12LightOverlay8SetFrameERKNS_9RectangleE
 * Demangled: Caver::LightOverlay::SetFrame(Caver::Rectangle const&)
 *
 * Callers: 1
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x0000000000459F58  Caver::LightOverlay::SetFrame(Caver::Rectangle const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FA2B4 string=0x0000000000459F58 "!"
 *   insn=0x00000000001FA2B8 string=0x00000000001FA2BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::LightOverlay::SetFrame(Caver::LightOverlay *this, const Caver::Rectangle *a2)
{
  return _ZN5Caver12LightOverlay8SetFrameERKNS_9RectangleE(this, a2);
}

