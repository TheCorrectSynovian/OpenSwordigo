/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021B7BC
 * Mangled: _ZN5Caver23CollisionShapeComponent15UpdateWorldAABBEv
 * Demangled: Caver::CollisionShapeComponent::UpdateWorldAABB(void)
 *
 * Callers: 1
 *   0x00000000001FA720  Caver::CollisionShapeComponent::UpdateWorldAABB(void)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FC170  Caver::Rectangle::Transform(Caver::Vector2 const&,float,Caver::Vector2 const&)
 *   0x00000000001FDC30  Caver::Rectangle::FlipHorizontally(void)
 *
 * Referenced strings: 8
 *   insn=0x000000000021B7CC string=0x000000000021B7D0 "U"
 *   insn=0x000000000021B7E8 string=0x000000000021B7EC "`"
 *   insn=0x000000000021B7F0 string=0x000000000021B7F4 "\tAB9"
 *   insn=0x000000000021B7F8 string=0x000000000021B808 "\t"
 *   insn=0x000000000021B800 string=0x00000000001FDC30 "0'"
 *   insn=0x000000000021B81C string=0x000000000021B820 "T"
 *   insn=0x000000000021B820 string=0x00000000001FC170 "0'"
 *   insn=0x000000000021B848 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CollisionShapeComponent::UpdateWorldAABB(Caver::CollisionShapeComponent *this)
{
  Caver::Rectangle *v2; // x19
  __int64 v3; // x8
  float v4; // s0
  _DWORD v6[2]; // [xsp+0h] [xbp-30h] BYREF
  __int64 v7; // [xsp+8h] [xbp-28h]

  v2 = (Caver::CollisionShapeComponent *)((char *)this + 360);
  v7 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *(_OWORD *)((char *)this + 360) = *(_OWORD *)((char *)this + 344);
  v3 = *((_QWORD *)this + 5);
  if ( *(_BYTE *)(v3 + 144) )
  {
    Caver::Rectangle::FlipHorizontally((Caver::CollisionShapeComponent *)((char *)this + 360));
    v3 = *((_QWORD *)this + 5);
  }
  v4 = *(float *)(v3 + 128);
  v6[0] = *(_DWORD *)(v3 + 140);
  v6[1] = v6[0];
  return Caver::Rectangle::Transform(v2, (const Caver::Vector2 *)(v3 + 112), v4, (const Caver::Vector2 *)v6);
}

