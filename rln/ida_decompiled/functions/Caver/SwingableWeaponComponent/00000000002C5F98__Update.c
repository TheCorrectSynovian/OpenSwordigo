/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C5F98
 * Mangled: _ZN5Caver24SwingableWeaponComponent6UpdateEf
 * Demangled: Caver::SwingableWeaponComponent::Update(float)
 *
 * Callers: 1
 *   0x0000000000201420  Caver::SwingableWeaponComponent::Update(float)
 *
 * Callees: 17
 *   0x00000000001F4FA0  Caver::SoundEffectComponent::Play(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6E00  Caver::Rectangle::ExpandToincludeRectangle(Caver::Rectangle const&)
 *   0x00000000001F7220  Caver::DamageComponent::ResolvePotentialImpacts(bool)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *   0x00000000001F9E30  Caver::Rectangle::ExpandToIncludePoint(Caver::Vector2 const&)
 *   0x00000000001FD0F0  Caver::CollisionShapeComponent::SetEnabled(bool)
 *   0x00000000001FD7C0  Caver::Shape::ShapeWithRectangle(Caver::Rectangle const&)
 *   0x00000000001FDC50  Caver::WeaponTrailComponent::AddSegment(Caver::Vector3 const&,Caver::Vector3 const&,float)
 *   0x00000000001FF5A0  Caver::CollisionShapeComponent::SetUpdatedShape(Caver::Shape const&)
 *   0x00000000002000B0  Caver::Rectangle::ExpandHorizontally(float)
 *   0x0000000000201420  Caver::SwingableWeaponComponent::Update(float)
 *   0x0000000000201690  Caver::WeaponTrail::FadeOut(float)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 168
 *   insn=0x00000000002C5FB8 string=0x00000000002C5FBC "V"
 *   insn=0x00000000002C5FC4 string=0x00000000002C5FC8 ""
 *   insn=0x00000000002C5FCC string=0x00000000002C5FD0 "`"
 *   insn=0x00000000002C5FD0 string=0x00000000002C5FD4 "`"
 *   insn=0x00000000002C5FD4 string=0x00000000002C5FE0 "a"
 *   insn=0x00000000002C5FDC string=0x00000000001F7220 "0'"
 *   insn=0x00000000002C5FE4 string=0x00000000002C5FE8 "t"
 *   insn=0x00000000002C5FEC string=0x00000000002C5FF0 "h"
 *   insn=0x00000000002C5FF0 string=0x00000000002C5FF4 "i"
 *   insn=0x00000000002C5FF4 string=0x00000000002C5FF8 "\ny@"
 *   insn=0x00000000002C5FF8 string=0x00000000002C5FFC "9@"
 *   insn=0x00000000002C5FFC string=0x00000000002C6000 "i"
 *   insn=0x00000000002C6000 string=0x00000000002C608C "h"
 *   insn=0x00000000002C6004 string=0x00000000002C6008 "a~A"
 *   insn=0x00000000002C6008 string=0x00000000002C600C "`zA"
 *   insn=0x00000000002C600C string=0x00000000002C6010 "!(("
 *   insn=0x00000000002C6010 string=0x00000000002C6014 "   "
 *   insn=0x00000000002C6014 string=0x00000000002C6018 "a~"
 *   insn=0x00000000002C601C string=0x00000000002C6020 "h"
 *   insn=0x00000000002C601C string=0x00000000002C60B8 "h"
 *   insn=0x00000000002C6020 string=0x00000000002C6024 "`~"
 *   insn=0x00000000002C602C string=0x00000000002C6030 "\t"
 *   insn=0x00000000002C602C string=0x00000000002C6060 "h"
 *   insn=0x00000000002C6030 string=0x00000000002C6034 "i"
 *   insn=0x00000000002C6038 string=0x00000000002C603C "`R@"
 *   insn=0x00000000002C6040 string=0x00000000002C6044 "`B"
 *   insn=0x00000000002C604C string=0x00000000002C6050 "`R@"
 *   insn=0x00000000002C604C string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002C6050 string=0x00000000002C6054 "`"
 *   insn=0x00000000002C6058 string=0x00000000002C605C "%"
 *   insn=0x00000000002C605C string=0x00000000001FD0F0 "0'"
 *   insn=0x00000000002C6064 string=0x00000000002C6068 "`"
 *   insn=0x00000000002C606C string=0x00000000002C6070 "`"
 *   insn=0x00000000002C6078 string=0x00000000002C607C "`"
 *   insn=0x00000000002C6084 string=0x00000000002C6088 "&"
 *   insn=0x00000000002C6084 string=0x00000000001F4FA0 "P'"
 *   insn=0x00000000002C6090 string=0x00000000002C6094 "`vA"
 *   insn=0x00000000002C6090 string=0x00000000002C60A8 "ub"
 *   insn=0x00000000002C6098 string=0x00000000002C609C "  "
 *   insn=0x00000000002C609C string=0x00000000002C60A0 "`v"
 *   insn=0x00000000002C60A0 string=0x00000000002C60A4 "i#"
 *   insn=0x00000000002C60B0 string=0x00000000002C62C8 ""
 *   insn=0x00000000002C60B4 string=0x00000000002C62B4 "`""
 *   insn=0x00000000002C60B8 string=0x00000000002C60BC "("
 *   insn=0x00000000002C60BC string=0x00000000002C60C0 "`"
 *   insn=0x00000000002C60C4 string=0x00000000002C60C8 "\t"
 *   insn=0x00000000002C60CC string=0x00000000002C60D0 "\t"
 *   insn=0x00000000002C60D0 string=0x00000000002C60D4 "(! "
 *   insn=0x00000000002C60D8 string=0x00000000002C60DC "?"
 *   insn=0x00000000002C60E0 string=0x00000000002C60E4 "_"
 *   insn=0x00000000002C60E8 string=0x00000000002C60EC "(! "
 *   insn=0x00000000002C60F0 string=0x00000000002C60F4 "\t"
 *   insn=0x00000000002C60F4 string=0x00000000002C60F8 "`R@"
 *   insn=0x00000000002C60FC string=0x00000000002C6100 "`B"
 *   insn=0x00000000002C60FC string=0x00000000002C6114 "(! "
 *   insn=0x00000000002C6104 string=0x00000000002C6108 "v"
 *   insn=0x00000000002C6108 string=0x00000000002C610C "`R@"
 *   insn=0x00000000002C6128 string=0x00000000002C612C "`""
 *   insn=0x00000000002C6128 string=0x00000000002C6140 "`zA"
 *   insn=0x00000000002C6130 string=0x00000000002C6134 "k"
 *   insn=0x00000000002C6134 string=0x00000000002C6138 "hn@"
 *   insn=0x00000000002C6140 string=0x00000000002C6144 "a~A"
 *   insn=0x00000000002C614C string=0x00000000002C6150 "   "
 *   insn=0x00000000002C6150 string=0x00000000002C6154 ""
 *   insn=0x00000000002C6154 string=0x00000000002C6158 "\tQB9"
 *   insn=0x00000000002C6164 string=0x00000000002C6168 "J"
 *   insn=0x00000000002C6168 string=0x00000000002C616C "hz@"
 *   insn=0x00000000002C6170 string=0x00000000002C6174 "`"
 *   insn=0x00000000002C6178 string=0x00000000002C617C "Y"
 *   insn=0x00000000002C617C string=0x00000000002C6180 "hz@"
 *   insn=0x00000000002C618C string=0x00000000002C6190 "@"
 *   insn=0x00000000002C6194 string=0x00000000002C6198 "`zA"
 *   insn=0x00000000002C619C string=0x00000000002C61A0 "b~A"
 *   insn=0x00000000002C61A4 string=0x00000000002C61A8 "@ !"
 *   insn=0x00000000002C61A8 string=0x00000000002C61AC "M"
 *   insn=0x00000000002C61AC string=0x00000000002C61B0 "("
 *   insn=0x00000000002C61AC string=0x00000000002C61D4 "\t"
 *   insn=0x00000000002C61C0 string=0x00000000002C61C4 "@"
 *   insn=0x00000000002C61C8 string=0x00000000002C61CC "\tH!"
 *   insn=0x00000000002C61E0 string=0x00000000002C61E4 "`""
 *   insn=0x00000000002C61E8 string=0x00000000002C61EC "="
 *   insn=0x00000000002C61EC string=0x00000000002C61F0 "`n@"
 *   insn=0x00000000002C6200 string=0x00000000002C6204 "@"
 *   insn=0x00000000002C6204 string=0x00000000002C6208 "`"
 *   insn=0x00000000002C6208 string=0x00000000002C620C "A)!"
 *   insn=0x00000000002C6214 string=0x00000000002C6218 "`"
 *   insn=0x00000000002C6220 string=0x00000000002C6224 "A"
 *   insn=0x00000000002C6228 string=0x00000000002C622C "@) "
 *   insn=0x00000000002C622C string=0x00000000002C6230 "a"
 *   insn=0x00000000002C6234 string=0x00000000002C6238 " "
 *   insn=0x00000000002C6240 string=0x00000000002C6244 "`z@"
 *   insn=0x00000000002C6240 string=0x00000000001FDC50 "0'"
 *   insn=0x00000000002C6248 string=0x00000000002C624C "`"
 *   insn=0x00000000002C6250 string=0x00000000002C6254 "#"
 *   insn=0x00000000002C6254 string=0x00000000002C6258 "`z@"
 *   insn=0x00000000002C6270 string=0x00000000002C6274 "#-"
 *   insn=0x00000000002C6274 string=0x00000000002C6278 "b"
 *   insn=0x00000000002C6278 string=0x00000000002C627C "C)#"
 *   insn=0x00000000002C6284 string=0x00000000002C6288 "b"
 *   insn=0x00000000002C628C string=0x00000000002C6290 "!""
 *   insn=0x00000000002C6290 string=0x00000000002C6294 "`"
 *   insn=0x00000000002C6294 string=0x00000000002C6298 "A)!"
 *   insn=0x00000000002C629C string=0x00000000002C62A0 " "
 *   insn=0x00000000002C62A4 string=0x00000000002C62A8 "j"
 *   insn=0x00000000002C62B8 string=0x00000000002C62BC "\t"
 *   insn=0x00000000002C62BC string=0x00000000002C62C0 "`n@"
 *   insn=0x00000000002C62C4 string=0x00000000002C62D8 "`z@"
 *   insn=0x00000000002C62CC string=0x00000000002C62D0 "e@"
 *   insn=0x00000000002C62DC string=0x00000000002C62E0 "`"
 *   insn=0x00000000002C62DC string=0x00000000002C62F4 ""
 *   insn=0x00000000002C62E8 string=0x00000000002C62EC "`z@"
 *   insn=0x00000000002C62F0 string=0x00000000002C6304 "h"
 *   insn=0x00000000002C62F8 string=0x00000000002C62FC "e@"
 *   insn=0x00000000002C6308 string=0x00000000002C630C "hR@"
 *   insn=0x00000000002C6310 string=0x00000000002C6314 "`B"
 *   insn=0x00000000002C6310 string=0x00000000002C6328 "t"
 *   insn=0x00000000002C631C string=0x00000000002C6320 "hR@"
 *   insn=0x00000000002C6320 string=0x00000000002C6324 ""
 *   insn=0x00000000002C6338 string=0x00000000002C633C "%"
 *   insn=0x00000000002C633C string=0x00000000002C6340 "`"
 *   insn=0x00000000002C6350 string=0x00000000002C6354 " "
 *   insn=0x00000000002C6360 string=0x00000000001F9E30 "0'"
 *   insn=0x00000000002C636C string=0x00000000002C6370 "P"
 *   insn=0x00000000002C6370 string=0x00000000002C6374 "h"
 *   insn=0x00000000002C637C string=0x00000000002C6380 "h"
 *   insn=0x00000000002C637C string=0x00000000002C63B0 "h"
 *   insn=0x00000000002C6388 string=0x00000000002C638C "%"
 *   insn=0x00000000002C638C string=0x00000000002C63D0 "h"
 *   insn=0x00000000002C639C string=0x00000000002C63A0 ""
 *   insn=0x00000000002C63A8 string=0x00000000002C63AC "L"
 *   insn=0x00000000002C63BC string=0x00000000002C63C0 "@ !"
 *   insn=0x00000000002C63C0 string=0x00000000002C63C4 "m"
 *   insn=0x00000000002C63C4 string=0x00000000002C63C8 " 8 "
 *   insn=0x00000000002C63D0 string=0x00000000002C63D4 "t"
 *   insn=0x00000000002C63D4 string=0x00000000002C63D8 "\t"
 *   insn=0x00000000002C63DC string=0x00000000002C63E0 "i"
 *   insn=0x00000000002C63F0 string=0x00000000002C63F4 "uR@"
 *   insn=0x00000000002C63F0 string=0x00000000001F6E00 "0'"
 *   insn=0x00000000002C63F8 string=0x00000000002C6454 "h"
 *   insn=0x00000000002C63FC string=0x00000000002C6444 "`B"
 *   insn=0x00000000002C6404 string=0x0000000000583734 "o"
 *   insn=0x00000000002C6408 string=0x00000000002C640C "a"
 *   insn=0x00000000002C6410 string=0x00000000002C6414 "   "
 *   insn=0x00000000002C6418 string=0x00000000002C641C "a"
 *   insn=0x00000000002C6418 string=0x00000000002C6428 "a"
 *   insn=0x00000000002C641C string=0x00000000002C6420 "   "
 *   insn=0x00000000002C642C string=0x00000000002C6430 "t"
 *   insn=0x00000000002C6434 string=0x00000000002C6438 "h"
 *   insn=0x00000000002C6438 string=0x00000000002C643C "uR@"
 *   insn=0x00000000002C644C string=0x00000000002C6450 "uR@"
 *   insn=0x00000000002C6470 string=0x00000000001F9C60 "0'"
 *   insn=0x00000000002C647C string=0x00000000001FD7C0 "0'"
 *   insn=0x00000000002C6484 string=0x00000000002C6488 "F"
 *   insn=0x00000000002C648C string=0x00000000002C6490 "4"
 *   insn=0x00000000002C6494 string=0x00000000002C6498 ""
 *   insn=0x00000000002C64A8 string=0x00000000002C64AC "\t@"
 *   insn=0x00000000002C64B4 string=0x00000000002C64B8 ""
 *   insn=0x00000000002C64C8 string=0x00000000002C64CC "@"
 *   insn=0x00000000002C64D4 string=0x00000000002C64D8 "`"
 *   insn=0x00000000002C64E8 string=0x00000000002C651C "m"
 *   insn=0x00000000002C6510 string=0x00000000002C6514 "h"
 *   insn=0x00000000002C651C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002C6524 string=0x00000000002C6528 "4"
 *   insn=0x00000000002C652C string=0x00000000002C6530 ""
 *   insn=0x00000000002C653C string=0x00000000002C6540 "\t@"
 *   insn=0x00000000002C654C string=0x00000000002C6550 ""
 *   insn=0x00000000002C655C string=0x00000000002C6560 "@"
 *   insn=0x00000000002C6570 string=0x00000000002C6574 "v"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SwingableWeaponComponent::Update(Caver::SwingableWeaponComponent *this, long double a2)
{
  Caver::DamageComponent *v4; // x0
  unsigned __int64 v5; // d1
  float v6; // w20
  float32x2_t *v7; // x8
  float v8; // s10
  float32x2_t v9; // d11
  float v10; // s0
  float v11; // s1
  __int64 v12; // x8
  Caver::CollisionShapeComponent *v13; // x0
  Caver::SoundEffectComponent *v14; // x0
  float v15; // s0
  Caver::WeaponTrailComponent *v16; // x0
  __int64 v17; // x8
  float v18; // s9
  Caver::CollisionShapeComponent *v19; // x0
  __int64 v20; // x8
  Caver::WeaponTrailComponent **v21; // x21
  __int64 v22; // x8
  float v23; // s0
  float v24; // s2
  float v25; // s9
  Caver::WeaponTrailComponent *v26; // x0
  float v27; // s0
  Caver::WeaponTrailComponent *v28; // x0
  float v29; // s2
  __int64 result; // x0
  float32x2_t *v31; // x20
  float v32; // s0
  float v33; // s1
  float v34; // s0
  float v35; // s1
  int v36; // w8
  Caver::CollisionShapeComponent *v37; // x21
  _QWORD *v38; // x20
  __int64 v39; // x8
  __int64 v40; // x8
  float32x2_t v41; // [xsp+0h] [xbp-D0h]
  unsigned __int64 v42; // [xsp+10h] [xbp-C0h] BYREF
  __int64 v43; // [xsp+18h] [xbp-B8h] BYREF
  unsigned __int64 v44; // [xsp+28h] [xbp-A8h] BYREF
  float v45; // [xsp+30h] [xbp-A0h]
  _QWORD *v46; // [xsp+38h] [xbp-98h]
  float32x2_t v47; // [xsp+40h] [xbp-90h] BYREF
  __int128 v48; // [xsp+48h] [xbp-88h] BYREF
  float32x2_t v49; // [xsp+58h] [xbp-78h] BYREF
  float v50; // [xsp+60h] [xbp-70h]
  __int64 v51; // [xsp+68h] [xbp-68h]

  v51 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = (Caver::DamageComponent *)*((_QWORD *)this + 44);
  if ( v4 )
    Caver::DamageComponent::ResolvePotentialImpacts(v4, 0);
  v5 = *((_QWORD *)this + 50);
  v49.n64_u64[0] = v5;
  v6 = *((float *)this + 102);
  v50 = v6;
  v7 = (float32x2_t *)*((_QWORD *)this + 5);
  v8 = v7[15].n64_f32[0];
  v9.n64_u64[0] = v7[14].n64_u64[0];
  if ( *((_BYTE *)this + 368) )
  {
LABEL_4:
    v41.n64_u64[0] = v5;
    v10 = *((float *)this + 94);
    v11 = *((float *)this + 95) + *(float *)&a2;
    *((float *)this + 95) = v11;
    if ( v11 <= v10 )
    {
      v17 = *((_QWORD *)this + 44);
      if ( v17 )
      {
        v18 = vmuls_n_f32((float)*((int *)this + 96), v41.n64_f32[0]);
        if ( v18 > 0.0 != (*(_BYTE *)(v17 + 188) != 0) )
        {
          *(_BYTE *)(v17 + 188) = v18 > 0.0;
          v19 = (Caver::CollisionShapeComponent *)*((_QWORD *)this + 20);
          if ( v19
            || (Caver::ComponentOutletBase::Connect((Caver::SwingableWeaponComponent *)((char *)this + 144), this),
                (v19 = (Caver::CollisionShapeComponent *)*((_QWORD *)this + 20)) != 0) )
          {
            Caver::CollisionShapeComponent::SetEnabled(v19);
          }
        }
      }
    }
    else
    {
      v12 = *((_QWORD *)this + 44);
      *((float *)this + 95) = v10;
      *((_BYTE *)this + 368) = 0;
      if ( v12 )
      {
        if ( *(_BYTE *)(v12 + 188) )
        {
          *(_BYTE *)(v12 + 188) = 0;
          v13 = (Caver::CollisionShapeComponent *)*((_QWORD *)this + 20);
          if ( v13
            || (Caver::ComponentOutletBase::Connect((Caver::SwingableWeaponComponent *)((char *)this + 144), this),
                (v13 = (Caver::CollisionShapeComponent *)*((_QWORD *)this + 20)) != 0) )
          {
            Caver::CollisionShapeComponent::SetEnabled(v13);
          }
        }
      }
      if ( !*((_BYTE *)this + 452) )
      {
        v14 = (Caver::SoundEffectComponent *)*((_QWORD *)this + 39);
        if ( v14
          || (Caver::ComponentOutletBase::Connect((Caver::SwingableWeaponComponent *)((char *)this + 296), this),
              (v14 = (Caver::SoundEffectComponent *)*((_QWORD *)this + 39)) != 0) )
        {
          Caver::SoundEffectComponent::Play(v14);
        }
      }
    }
    v21 = (Caver::WeaponTrailComponent **)((char *)this + 216);
    v20 = *((_QWORD *)this + 27);
    if ( v20
      || (Caver::ComponentOutletBase::Connect((Caver::SwingableWeaponComponent *)((char *)this + 200), this),
          (v20 = *((_QWORD *)this + 27)) != 0) )
    {
      if ( *((float *)this + 95) > (float)(*((float *)this + 94) + -0.5) && !*(_BYTE *)(v20 + 148) )
      {
        Caver::WeaponTrail::FadeOut((Caver::WeaponTrail *)(v20 + 112), 0.5);
        v22 = *((_QWORD *)this + 30);
        if ( v22
          || (Caver::ComponentOutletBase::Connect((Caver::SwingableWeaponComponent *)((char *)this + 224), this),
              (v22 = *((_QWORD *)this + 30)) != 0) )
        {
          Caver::WeaponTrail::FadeOut((Caver::WeaponTrail *)(v22 + 112), 0.5);
        }
      }
      v23 = *((float *)this + 94);
      v24 = *((float *)this + 95);
      if ( v24 <= (float)(v23 * 0.6) )
        v25 = 1.0;
      else
        v25 = fmaxf((float)((float)(v23 * 0.92) - v24) / (float)((float)(v23 * 0.92) - (float)(v23 * 0.6)), 0.0);
      v26 = *v21;
      if ( !*v21 )
      {
        Caver::ComponentOutletBase::Connect((Caver::SwingableWeaponComponent *)((char *)this + 200), this);
        v26 = (Caver::WeaponTrailComponent *)*((_QWORD *)this + 27);
      }
      v44 = vadd_f32(v9, vmul_f32(v41, 0)).n64_u64[0];
      v45 = v8 + (float)(v6 * 0.0);
      v27 = *((float *)this + 110);
      *((float *)&v48 + 2) = v8 + (float)(v27 * v6);
      *(float32x2_t *)&v48 = vadd_f32(v9, vmul_n_f32(v41, v27));
      Caver::WeaponTrailComponent::AddSegment(v26, (const Caver::Vector3 *)&v44, (const Caver::Vector3 *)&v48, v25);
      v28 = (Caver::WeaponTrailComponent *)*((_QWORD *)this + 30);
      if ( v28
        || (Caver::ComponentOutletBase::Connect((Caver::SwingableWeaponComponent *)((char *)this + 224), this),
            (v28 = (Caver::WeaponTrailComponent *)*((_QWORD *)this + 30)) != 0) )
      {
        v44 = vadd_f32(v9, vmul_f32(v49, 0)).n64_u64[0];
        v45 = v8 + (float)(v50 * 0.0);
        v29 = *((float *)this + 110);
        *(float32x2_t *)&v48 = vadd_f32(v9, vmul_n_f32(v49, v29));
        *((float *)&v48 + 2) = v8 + (float)(v50 * v29);
        Caver::WeaponTrailComponent::AddSegment(v28, (const Caver::Vector3 *)&v44, (const Caver::Vector3 *)&v48, v25);
      }
      v16 = *v21;
      if ( *v21 )
        goto LABEL_40;
    }
    goto LABEL_39;
  }
  if ( *((_BYTE *)this + 369) )
  {
    v15 = *((float *)this + 93) - *(float *)&a2;
    *((float *)this + 93) = v15;
    if ( v15 <= 0.0 )
    {
      *((_WORD *)this + 184) = 1;
      goto LABEL_4;
    }
  }
  v16 = (Caver::WeaponTrailComponent *)*((_QWORD *)this + 27);
  if ( v16 )
  {
LABEL_40:
    (*(void (__fastcall **)(Caver::WeaponTrailComponent *, long double))(*(_QWORD *)v16 + 200LL))(v16, a2);
    goto LABEL_41;
  }
LABEL_39:
  Caver::ComponentOutletBase::Connect((Caver::SwingableWeaponComponent *)((char *)this + 200), this);
  v16 = (Caver::WeaponTrailComponent *)*((_QWORD *)this + 27);
  if ( v16 )
    goto LABEL_40;
LABEL_41:
  result = *((_QWORD *)this + 30);
  if ( result
    || (Caver::ComponentOutletBase::Connect((Caver::SwingableWeaponComponent *)((char *)this + 224), this),
        (result = *((_QWORD *)this + 30)) != 0) )
  {
    result = (*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)result + 200LL))(result, a2);
  }
  if ( !*((_BYTE *)this + 368)
    || !*((_QWORD *)this + 20)
    && (result = Caver::ComponentOutletBase::Connect((Caver::SwingableWeaponComponent *)((char *)this + 144), this),
        !*((_QWORD *)this + 20)) )
  {
    *((_DWORD *)this + 112) = 0;
    *((_QWORD *)this + 23) = 0;
    *((_QWORD *)this + 24) = 0;
    return result;
  }
  v31 = (float32x2_t *)*((_QWORD *)this + 5);
  v48 = v31[14].n64_u64[0];
  Caver::Vector2::Vector2((Caver::Vector2 *)&v47, (const Caver::Vector3 *)&v49);
  v44 = vadd_f32(vmul_n_f32(v47, *((float *)this + 110)), v31[14]).n64_u64[0];
  Caver::Rectangle::ExpandToIncludePoint((Caver::Rectangle *)&v48, (const Caver::Vector2 *)&v44);
  Caver::Rectangle::ExpandHorizontally((Caver::Rectangle *)&v48, 40.0);
  v32 = *(float *)&v48;
  if ( (*((_DWORD *)this + 96) & 0x80000000) != 0 )
  {
    v35 = *(float *)(*((_QWORD *)this + 5) + 112LL);
    if ( (float)(*(float *)&v48 + *((float *)&v48 + 2)) <= v35 )
      goto LABEL_54;
    v34 = v35 - *(float *)&v48;
  }
  else
  {
    v33 = *(float *)(*((_QWORD *)this + 5) + 112LL);
    if ( *(float *)&v48 >= v33 )
      goto LABEL_54;
    LODWORD(v48) = *(_DWORD *)(*((_QWORD *)this + 5) + 112LL);
    v34 = (float)(v32 + *((float *)&v48 + 2)) - v33;
  }
  *((float *)&v48 + 2) = v34;
LABEL_54:
  v36 = *((_DWORD *)this + 112);
  *((_DWORD *)this + 112) = v36 - 1;
  if ( v36 < 2 )
  {
    *(_OWORD *)((char *)this + 168) = v48;
    if ( *((float *)this + 48) > 0.001 || *((float *)this + 49) > 0.001 )
      Caver::Rectangle::ExpandToincludeRectangle(
        (Caver::SwingableWeaponComponent *)((char *)this + 168),
        (Caver::SwingableWeaponComponent *)((char *)this + 184));
    *((_DWORD *)this + 112) = 6;
    v37 = (Caver::CollisionShapeComponent *)*((_QWORD *)this + 20);
    if ( v37 )
      goto LABEL_62;
  }
  else
  {
    Caver::Rectangle::ExpandToincludeRectangle(
      (Caver::SwingableWeaponComponent *)((char *)this + 168),
      (const Caver::Rectangle *)&v48);
    v37 = (Caver::CollisionShapeComponent *)*((_QWORD *)this + 20);
    if ( v37 )
      goto LABEL_62;
  }
  Caver::ComponentOutletBase::Connect((Caver::SwingableWeaponComponent *)((char *)this + 144), this);
  v37 = (Caver::CollisionShapeComponent *)*((_QWORD *)this + 20);
LABEL_62:
  v42 = vneg_f32(*(float32x2_t *)(*((_QWORD *)this + 5) + 112LL)).n64_u64[0];
  Caver::Rectangle::TranslatedRectangle(
    &v43,
    (Caver::SwingableWeaponComponent *)((char *)this + 168),
    (const Caver::Vector2 *)&v42);
  Caver::Shape::ShapeWithRectangle();
  result = Caver::CollisionShapeComponent::SetUpdatedShape(v37, (const Caver::Shape *)&v44);
  v38 = v46;
  if ( v46 )
  {
    v39 = v46[1] - 1LL;
    v46[1] = v39;
    if ( !v39 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v38 + 16LL))(v38);
      v40 = v38[2] - 1LL;
      v38[2] = v40;
      if ( !v40 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v38 + 24LL))(v38);
    }
  }
  *(_OWORD *)((char *)this + 184) = v48;
  return result;
}

