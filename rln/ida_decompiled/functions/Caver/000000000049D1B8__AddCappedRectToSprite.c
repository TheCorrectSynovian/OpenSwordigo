/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049D1B8
 * Mangled: _ZN5Caver21AddCappedRectToSpriteEPNS_6SpriteERKN5boost13intrusive_ptrINS_7TextureEEERKNS_9RectangleEf
 * Demangled: Caver::AddCappedRectToSprite(Caver::Sprite *,boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&,float)
 *
 * Callers: 1
 *   0x00000000001FBD50  Caver::AddCappedRectToSprite(Caver::Sprite *,boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&,float)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000200B90  Caver::Sprite::AddRectangle(Caver::Rectangle const&,Caver::Rectangle const&,Caver::Color const&)
 *
 * Referenced strings: 20
 *   insn=0x000000000049D1D0 string=0x000000000049D1D4 "V"
 *   insn=0x000000000049D214 string=0x000000000049D218 "\t"
 *   insn=0x000000000049D238 string=0x000000000049D23C "\tL&"
 *   insn=0x000000000049D23C string=0x000000000049D240 "  ("
 *   insn=0x000000000049D240 string=0x000000000049D244 " L("
 *   insn=0x000000000049D24C string=0x000000000049D250 "i@"
 *   insn=0x000000000049D280 string=0x000000000049D284 "C"
 *   insn=0x000000000049D294 string=0x000000000049D298 "%"
 *   insn=0x000000000049D2A8 string=0x000000000049D2AC " !("
 *   insn=0x000000000049D2AC string=0x000000000049D2B0 "$M("
 *   insn=0x000000000049D2B0 string=0x000000000049D2B4 "!(""
 *   insn=0x000000000049D2B8 string=0x000000000049D2BC "@8 "
 *   insn=0x000000000049D2EC string=0x000000000049D2F0 "B(#"
 *   insn=0x000000000049D2F0 string=0x000000000049D2F4 "` "
 *   insn=0x000000000049D2F4 string=0x000000000049D2F8 "@8 "
 *   insn=0x000000000049D308 string=0x000000000049D30C "!"
 *   insn=0x000000000049D338 string=0x000000000049D33C "!(""
 *   insn=0x000000000049D340 string=0x000000000049D344 "@8 "
 *   insn=0x000000000049D360 string=0x000000000049D364 ""
 *   insn=0x000000000049D3A8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AddCappedRectToSprite(Caver::Sprite *a1, __int64 *a2, float *a3, float a4)
{
  __int64 v6; // x8
  __int64 v7; // d2
  float v8; // s4
  float v9; // s5
  float v10; // s8
  float v11; // s1
  float v12; // s9
  float v13; // s0
  float v14; // s1
  int v15; // w8
  __int64 result; // x0
  float v18; // s0
  float v19; // s3
  float v20; // s4
  float v21; // s0
  float v22; // s1
  float v23; // s2
  int v24; // [xsp+4h] [xbp-6Ch] BYREF
  __int64 v25; // [xsp+8h] [xbp-68h] BYREF
  float v26; // [xsp+10h] [xbp-60h]
  int v27; // [xsp+14h] [xbp-5Ch]
  __int64 v28; // [xsp+18h] [xbp-58h] BYREF
  float v29; // [xsp+20h] [xbp-50h]
  int v30; // [xsp+24h] [xbp-4Ch]
  __int64 v31; // [xsp+28h] [xbp-48h]

  v31 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *a2;
  v7 = *(_QWORD *)a3;
  v8 = a3[2];
  v9 = *(float *)(*a2 + 84);
  v28 = *(_QWORD *)a3;
  v10 = v8 * a4;
  v30 = *((_DWORD *)a3 + 3);
  v11 = (float)(v9 * 0.5) + -1.0;
  if ( (float)(v8 * 0.5) < v11 )
    v11 = v8 * 0.5;
  v25 = *(_QWORD *)(v6 + 92);
  if ( (float)(v8 * 0.5) >= (float)((float)(v8 - (float)(v9 * 0.5)) + 1.0) )
    v12 = v8 * 0.5;
  else
    v12 = (float)(v8 - (float)(v9 * 0.5)) + 1.0;
  if ( v11 >= v10 )
    v13 = v8 * a4;
  else
    v13 = v11;
  v14 = *(float *)(v6 + 100);
  v15 = *(_DWORD *)(v6 + 104);
  v29 = (float)(v13 + *(float *)&v7) - *(float *)&v7;
  v27 = v15;
  v26 = (float)(v29 / v9) * v14;
  v24 = -1;
  result = Caver::Sprite::AddRectangle(
             a1,
             (const Caver::Rectangle *)&v28,
             (const Caver::Rectangle *)&v25,
             (const Caver::Color *)&v24);
  v18 = *(float *)&v28 + v29;
  if ( (float)(*(float *)&v28 + v29) < v10 )
  {
    *(float *)&v28 = *(float *)&v28 + v29;
    v19 = *a3;
    if ( v12 >= v10 )
      v20 = v10;
    else
      v20 = v12;
    *(float *)&v25 = *(float *)&v25 + v26;
    v29 = (float)(v20 + v19) - v18;
    v26 = (float)((float)(*(float *)(*a2 + 92) + *(float *)(*a2 + 100))
                - (float)(*(float *)(*a2 + 100) * (float)((float)(a3[2] - v12) / *(float *)(*a2 + 84))))
        - *(float *)&v25;
    v24 = -1;
    result = Caver::Sprite::AddRectangle(
               a1,
               (const Caver::Rectangle *)&v28,
               (const Caver::Rectangle *)&v25,
               (const Caver::Color *)&v24);
    v18 = *(float *)&v28 + v29;
  }
  if ( v18 < v10 )
  {
    *(float *)&v28 = v18;
    v21 = (float)(v10 + *a3) - v18;
    *(float *)&v25 = *(float *)&v25 + v26;
    v29 = v21;
    v22 = *(float *)(*a2 + 84);
    v23 = *(float *)(*a2 + 100);
    v24 = -1;
    v26 = (float)(v21 / v22) * v23;
    return Caver::Sprite::AddRectangle(
             a1,
             (const Caver::Rectangle *)&v28,
             (const Caver::Rectangle *)&v25,
             (const Caver::Color *)&v24);
  }
  return result;
}

