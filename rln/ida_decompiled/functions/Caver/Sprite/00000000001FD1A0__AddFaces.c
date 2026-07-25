/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD1A0
 * Mangled: ._ZN5Caver6Sprite8AddFacesEiPt
 * Demangled: Caver::Sprite::AddFaces(int,ushort *)
 *
 * Callers: 1
 *   0x00000000004A99F4  Caver::GUIRoundedRect::CreateSprite(void)
 *
 * Callees: 1
 *   0x00000000004C86AC  Caver::Sprite::AddFaces(int,ushort *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD1A8 string=0x00000000001FD1AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Sprite::AddFaces(Caver::Sprite *this, int a2, unsigned __int16 *a3)
{
  return _ZN5Caver6Sprite8AddFacesEiPt(this, a2, a3);
}

