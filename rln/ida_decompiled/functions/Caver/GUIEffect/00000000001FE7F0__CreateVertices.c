/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE7F0
 * Mangled: ._ZN5Caver9GUIEffect14CreateVerticesEv
 * Demangled: Caver::GUIEffect::CreateVertices(void)
 *
 * Callers: 2
 *   0x00000000004A6D0C  Caver::GUIEffect::SetFrame(Caver::Rectangle const&)
 *   0x00000000004A71A8  Caver::GUIEffect::Update(float)
 *
 * Callees: 1
 *   0x00000000004A6D18  Caver::GUIEffect::CreateVertices(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE7F8 string=0x00000000001FE7FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIEffect::CreateVertices(Caver::GUIEffect *this)
{
  return _ZN5Caver9GUIEffect14CreateVerticesEv(this);
}

