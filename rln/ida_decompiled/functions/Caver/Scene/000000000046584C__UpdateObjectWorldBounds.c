/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046584C
 * Mangled: _ZN5Caver5Scene23UpdateObjectWorldBoundsERKN5boost13intrusive_ptrINS_11SceneObjectEEE
 * Demangled: Caver::Scene::UpdateObjectWorldBounds(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9890  Caver::SceneGrid::MoveObject(Caver::SceneGridEntry *,Caver::Rectangle const&,float)
 *   0x00000000001FC170  Caver::Rectangle::Transform(Caver::Vector2 const&,float,Caver::Vector2 const&)
 *   0x00000000001FDC30  Caver::Rectangle::FlipHorizontally(void)
 *
 * Referenced strings: 9
 *   insn=0x0000000000465860 string=0x0000000000465864 "U"
 *   insn=0x0000000000465888 string=0x000000000046588C "h"
 *   insn=0x0000000000465894 string=0x00000000001FDC30 "0'"
 *   insn=0x00000000004658AC string=0x00000000004658B0 "0Z"
 *   insn=0x00000000004658B0 string=0x00000000001FC170 "0'"
 *   insn=0x00000000004658B4 string=0x00000000004658B8 "`"
 *   insn=0x00000000004658DC string=0x00000000001F9890 "0'"
 *   insn=0x00000000004658EC string=0x0000000000465908 "rB"
 *   insn=0x0000000000465908 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Scene::UpdateObjectWorldBounds(__int64 a1, __int64 *a2)
{
  __int64 v4; // x22
  _OWORD *v5; // x23
  float v6; // s0
  __int128 v8; // [xsp+0h] [xbp-50h] BYREF
  _DWORD v9[2]; // [xsp+10h] [xbp-40h] BYREF
  __int64 v10; // [xsp+18h] [xbp-38h]

  v10 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *a2;
  v5 = (_OWORD *)(*a2 + 164);
  v8 = *(_OWORD *)(*a2 + 148);
  if ( *(_BYTE *)(v4 + 144) )
    Caver::Rectangle::FlipHorizontally((Caver::Rectangle *)&v8);
  v6 = *(float *)(v4 + 128);
  v9[0] = *(_DWORD *)(v4 + 140);
  v9[1] = v9[0];
  Caver::Rectangle::Transform(
    (Caver::Rectangle *)&v8,
    (const Caver::Vector2 *)(v4 + 112),
    v6,
    (const Caver::Vector2 *)v9);
  *v5 = v8;
  *(_BYTE *)(v4 + 180) = 0;
  return Caver::SceneGrid::MoveObject(
           (Caver::SceneGrid *)(a1 + 864),
           (Caver::SceneGridEntry *)(*a2 + 248),
           (const Caver::Rectangle *)(*a2 + 164),
           *(float *)(*a2 + 120) + *(float *)(*a2 + 184));
}

