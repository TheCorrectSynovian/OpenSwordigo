/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000468E8C
 * Mangled: _ZN5Caver5Scene10TouchBeganERKNS_7FWTouchE
 * Demangled: Caver::Scene::TouchBegan(Caver::FWTouch const&)
 *
 * Callers: 1
 *   0x00000000001FA450  Caver::Scene::TouchBegan(Caver::FWTouch const&)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA4C0  Caver::Camera::ViewPointFromWorldPosition(Caver::Vector3 const&,float *)
 *   0x00000000001FE780  Caver::ComponentManager::ComponentCollectionForInterface(long)
 *   0x00000000002022F0  Caver::TouchableComponent::TouchBegan(Caver::FWTouch const&)
 *   0x000000000023DE3C  Caver::GUITextBubble::~GUITextBubble()
 *
 * Referenced strings: 24
 *   insn=0x0000000000468EA4 string=0x0000000000468EA8 "W"
 *   insn=0x0000000000468EBC string=0x0000000000468EC0 "!|A"
 *   insn=0x0000000000468EC0 string=0x000000000023E174 "@%"
 *   insn=0x0000000000468EC4 string=0x0000000000468EC8 ".V"
 *   insn=0x0000000000468ED0 string=0x0000000000468ED4 "?"
 *   insn=0x0000000000468ED8 string=0x0000000000468EDC ""
 *   insn=0x0000000000468ED8 string=0x0000000000468EEC ""
 *   insn=0x0000000000468EDC string=0x0000000000468EF8 "?"
 *   insn=0x0000000000468EE0 string=0x0000000000468EE4 "?"
 *   insn=0x0000000000468EEC string=0x0000000000468EF0 ""
 *   insn=0x0000000000468EF0 string=0x0000000000468EF4 "h"
 *   insn=0x0000000000468F14 string=0x0000000000468F18 "\t9@"
 *   insn=0x0000000000468F18 string=0x0000000000468F1C "y@"
 *   insn=0x0000000000468F28 string=0x0000000000468F2C "eE"
 *   insn=0x0000000000468F2C string=0x00000000001FA4C0 "0'"
 *   insn=0x0000000000468F30 string=0x0000000000468F34 "a"
 *   insn=0x0000000000468F44 string=0x0000000000468F48 "A""
 *   insn=0x0000000000468F70 string=0x0000000000468F74 "\t"
 *   insn=0x0000000000468F70 string=0x0000000000468F8C "?"
 *   insn=0x0000000000468F74 string=0x0000000000468F78 ")"
 *   insn=0x0000000000468F84 string=0x0000000000468F88 "a"
 *   insn=0x0000000000468FA4 string=0x0000000000468FA8 "!"
 *   insn=0x0000000000468FA8 string=0x0000000000468FAC "@"
 *   insn=0x0000000000468FCC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Scene::TouchBegan(Caver::Scene *this, float32x2_t *a2)
{
  __int64 **v4; // x21
  __int64 *v5; // x24
  __int64 *v6; // x25
  char v7; // w26
  __int64 v8; // x22
  Caver::Camera *v9; // x0
  __int64 v10; // x8
  __int64 v11; // x9
  float32x2_t v12; // d0
  __int64 *v13; // x8
  __int64 v15; // [xsp+0h] [xbp-60h] BYREF
  int v16; // [xsp+8h] [xbp-58h]
  float32x2_t v17[2]; // [xsp+10h] [xbp-50h] BYREF

  v17[1] = *(float32x2_t *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = (__int64 **)Caver::ComponentManager::ComponentCollectionForInterface(
                     (Caver::Scene *)((char *)this + 480),
                     (__int64)Caver::TouchableComponent::Interface);
  v5 = *v4;
  v6 = v4[1];
  if ( v6 != *v4 )
  {
    do
    {
      if ( *(_QWORD *)(*v5 + 40) )
        break;
      ++v5;
    }
    while ( v6 != v5 );
  }
  if ( v6 == v5 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 0;
    do
    {
      v8 = *v5;
      v9 = (Caver::Camera *)*((_QWORD *)this + 72);
      v10 = *(_QWORD *)(*v5 + 40);
      v11 = *(_QWORD *)(v10 + 112);
      LODWORD(v10) = *(_DWORD *)(v10 + 120);
      v15 = v11;
      v16 = v10;
      Caver::Camera::ViewPointFromWorldPosition((__int64 *)v17, v9, (const Caver::Vector3 *)&v15, 0);
      v12.n64_u64[0] = vsub_f32(v17[0], a2[1]).n64_u64[0];
      if ( vaddv_f32(vmul_f32(v12, v12)) < (float)(*(float *)(v8 + 112) * *(float *)(v8 + 112)) )
      {
        Caver::TouchableComponent::TouchBegan();
        v7 = 1;
      }
      v13 = v4[1];
      for ( ++v5; v13 != v5; ++v5 )
      {
        if ( *(_QWORD *)(*v5 + 40) )
          break;
      }
    }
    while ( v6 != v5 );
  }
  return v7 & 1;
}

