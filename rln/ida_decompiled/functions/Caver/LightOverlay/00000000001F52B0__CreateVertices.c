/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F52B0
 * Mangled: ._ZN5Caver12LightOverlay14CreateVerticesEv
 * Demangled: Caver::LightOverlay::CreateVertices(void)
 *
 * Callers: 1
 *   0x0000000000459F58  Caver::LightOverlay::SetFrame(Caver::Rectangle const&)
 *
 * Callees: 1
 *   0x000000000045A05C  Caver::LightOverlay::CreateVertices(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F52B8 string=0x00000000001F52BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::LightOverlay::CreateVertices(Caver::LightOverlay *this)
{
  return _ZN5Caver12LightOverlay14CreateVerticesEv(this);
}

