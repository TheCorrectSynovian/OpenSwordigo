/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000425FB4
 * Mangled: _ZN5Caver7MapView20AddNodeIconsToSpriteEPNS_11MapViewNodeERKNS_9RectangleEf
 * Demangled: Caver::MapView::AddNodeIconsToSprite(Caver::MapViewNode *,Caver::Rectangle const&,float)
 *
 * Callers: 1
 *   0x00000000001FEFA0  Caver::MapView::AddNodeIconsToSprite(Caver::MapViewNode *,Caver::Rectangle const&,float)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9470  Caver::Rectangle::Translate(Caver::Vector2 const&)
 *   0x00000000001F9830  Caver::Sprite::Clear(void)
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *   0x0000000000200B90  Caver::Sprite::AddRectangle(Caver::Rectangle const&,Caver::Rectangle const&,Caver::Color const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 109
 *   insn=0x0000000000425FDC string=0x0000000000425FE0 "V"
 *   insn=0x0000000000426000 string=0x0000000000426004 "h"
 *   insn=0x000000000042600C string=0x0000000000426010 "\t\t@"
 *   insn=0x0000000000426010 string=0x0000000000426014 ")"
 *   insn=0x0000000000426014 string=0x0000000000426018 "\t\t"
 *   insn=0x000000000042603C string=0x00000000004260B8 "h"
 *   insn=0x0000000000426048 string=0x000000000042604C "9M8"
 *   insn=0x000000000042604C string=0x0000000000426050 "Z"
 *   insn=0x0000000000426058 string=0x000000000042605C "*\t@"
 *   insn=0x0000000000426058 string=0x0000000000426068 " "
 *   insn=0x000000000042605C string=0x0000000000426060 "J"
 *   insn=0x0000000000426060 string=0x0000000000426064 "*\t"
 *   insn=0x0000000000426068 string=0x000000000042606C ")"
 *   insn=0x000000000042606C string=0x0000000000426070 " "
 *   insn=0x0000000000426070 string=0x0000000000426074 "\t@"
 *   insn=0x0000000000426074 string=0x0000000000426078 ")"
 *   insn=0x0000000000426078 string=0x000000000042607C "\t"
 *   insn=0x0000000000426080 string=0x0000000000426084 ""
 *   insn=0x0000000000426084 string=0x0000000000426088 ""
 *   insn=0x0000000000426094 string=0x0000000000426098 "9#"
 *   insn=0x00000000004260A0 string=0x00000000004260A4 "Ik78"
 *   insn=0x00000000004260AC string=0x00000000004260B0 "+"
 *   insn=0x00000000004260B8 string=0x00000000004260BC "i"
 *   insn=0x00000000004260C0 string=0x00000000004260C4 "!"
 *   insn=0x00000000004260D4 string=0x00000000004260D8 "h"
 *   insn=0x00000000004260E0 string=0x00000000004260E4 ""
 *   insn=0x00000000004260F0 string=0x00000000004260F4 "9"
 *   insn=0x00000000004260FC string=0x0000000000426100 "@"
 *   insn=0x0000000000426108 string=0x0000000000426114 "b"
 *   insn=0x0000000000426118 string=0x000000000042611C "!"
 *   insn=0x000000000042611C string=0x0000000000426120 "A"
 *   insn=0x0000000000426120 string=0x0000000000426124 " "
 *   insn=0x0000000000426130 string=0x0000000000426134 "?^"
 *   insn=0x0000000000426134 string=0x0000000000426138 "Hkw8"
 *   insn=0x0000000000426134 string=0x00000000001FDA30 "0'"
 *   insn=0x0000000000426140 string=0x0000000000426144 "h"
 *   insn=0x0000000000426150 string=0x0000000000426154 ""
 *   insn=0x0000000000426160 string=0x0000000000426164 "\n"
 *   insn=0x0000000000426164 string=0x0000000000426168 "@"
 *   insn=0x0000000000426168 string=0x000000000042616C " "
 *   insn=0x0000000000426178 string=0x000000000042617C "-^"
 *   insn=0x0000000000426198 string=0x000000000042619C "}j"
 *   insn=0x00000000004261A0 string=0x00000000004261A4 ""
 *   insn=0x00000000004261B0 string=0x00000000004261B4 ""
 *   insn=0x00000000004261C4 string=0x00000000004261C8 "+"
 *   insn=0x00000000004261C8 string=0x000000000042610C " {w"
 *   insn=0x00000000004261D0 string=0x00000000004261D4 " "
 *   insn=0x00000000004261D4 string=0x00000000004261D8 "@"
 *   insn=0x00000000004261D8 string=0x00000000004261DC ""
 *   insn=0x00000000004261DC string=0x00000000004261E0 ""
 *   insn=0x00000000004261E4 string=0x00000000004261E8 ""
 *   insn=0x00000000004261E8 string=0x00000000004261EC "tB"
 *   insn=0x00000000004261EC string=0x00000000004261F0 ""
 *   insn=0x00000000004261F8 string=0x00000000004261FC " "
 *   insn=0x00000000004261FC string=0x0000000000426200 "@"
 *   insn=0x0000000000426200 string=0x0000000000426204 ""
 *   insn=0x0000000000426204 string=0x0000000000426208 ""
 *   insn=0x000000000042620C string=0x0000000000426210 ""
 *   insn=0x0000000000426210 string=0x0000000000426214 "t""
 *   insn=0x0000000000426214 string=0x0000000000426218 ""
 *   insn=0x0000000000426220 string=0x0000000000426224 " "
 *   insn=0x0000000000426224 string=0x0000000000426228 "@"
 *   insn=0x0000000000426228 string=0x000000000042622C ""
 *   insn=0x000000000042622C string=0x0000000000426230 ""
 *   insn=0x0000000000426234 string=0x0000000000426238 ""
 *   insn=0x000000000042623C string=0x0000000000426240 ""
 *   insn=0x0000000000426250 string=0x0000000000426254 "a"
 *   insn=0x0000000000426280 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000426298 string=0x000000000042629C "@"
 *   insn=0x000000000042629C string=0x00000000004262A0 ""
 *   insn=0x00000000004262A0 string=0x00000000004262A4 ""
 *   insn=0x00000000004262A8 string=0x00000000004262AC ""
 *   insn=0x00000000004262AC string=0x00000000004262B0 ""
 *   insn=0x00000000004262BC string=0x00000000004262C0 ","
 *   insn=0x00000000004262D8 string=0x000000000042630C "@"
 *   insn=0x00000000004262E4 string=0x00000000004262E8 ""
 *   insn=0x00000000004262F4 string=0x00000000004262F8 ""
 *   insn=0x000000000042630C string=0x0000000000426310 ""
 *   insn=0x0000000000426310 string=0x0000000000426314 ""
 *   insn=0x0000000000426318 string=0x000000000042631C ""
 *   insn=0x000000000042631C string=0x0000000000426320 ""
 *   insn=0x000000000042632C string=0x0000000000426330 "@"
 *   insn=0x0000000000426330 string=0x0000000000426334 ""
 *   insn=0x0000000000426334 string=0x0000000000426338 ""
 *   insn=0x000000000042633C string=0x0000000000426340 ""
 *   insn=0x0000000000426340 string=0x0000000000426344 ""
 *   insn=0x0000000000426350 string=0x0000000000426354 "@"
 *   insn=0x0000000000426354 string=0x0000000000426358 ""
 *   insn=0x0000000000426358 string=0x000000000042635C ""
 *   insn=0x0000000000426360 string=0x0000000000426364 ""
 *   insn=0x0000000000426364 string=0x0000000000426368 ""
 *   insn=0x0000000000426370 string=0x0000000000426374 "Tm"
 *   insn=0x0000000000426390 string=0x0000000000426394 "U"
 *   insn=0x00000000004263A8 string=0x00000000004263AC "!M"
 *   insn=0x00000000004263AC string=0x00000000001F9830 "0'"
 *   insn=0x00000000004263B0 string=0x00000000004263B4 ""
 *   insn=0x00000000004263C0 string=0x00000000004263C4 ""
 *   insn=0x00000000004263C4 string=0x00000000004263C8 "(ih"
 *   insn=0x00000000004263C8 string=0x00000000004263CC "\n"
 *   insn=0x00000000004263CC string=0x00000000004263D0 "\t"
 *   insn=0x00000000004263D4 string=0x00000000004263D8 "@1D"
 *   insn=0x00000000004263D4 string=0x0000000000584430 "333?"
 *   insn=0x00000000004263DC string=0x00000000004263E0 "?"
 *   insn=0x00000000004263F8 string=0x00000000004263FC "!AE"
 *   insn=0x0000000000426400 string=0x0000000000426404 " "
 *   insn=0x0000000000426408 string=0x000000000042640C ""
 *   insn=0x0000000000426418 string=0x000000000042641C " "
 *   insn=0x0000000000426430 string=0x00000000001F9470 "0'"
 *   insn=0x0000000000426434 string=0x0000000000426438 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MapView::AddNodeIconsToSprite(
        Caver::MapView *this,
        Caver::MapViewNode *a2,
        float32x2_t *a3,
        int32x2_t a4)
{
  __int64 v7; // x8
  __int64 v8; // x24
  int v9; // w8
  __int64 v10; // x23
  __int64 *v11; // x25
  _DWORD *v12; // x9
  _DWORD *v13; // x0
  int v14; // w9
  __int64 v15; // x23
  float32x2_t v16; // d8
  float32x2_t v17; // d0
  Caver::Sprite *v18; // x20
  __int64 v19; // x21
  int v20; // w8
  float32x2_t v21; // d10
  int v22; // w8
  __int64 v23; // x0
  int v24; // w8
  __int64 v25; // x0
  int v26; // w8
  __int64 result; // x0
  int v28; // w8
  unsigned __int64 v30; // [xsp+78h] [xbp-F0h] BYREF
  __int64 v31; // [xsp+80h] [xbp-E8h] BYREF
  _QWORD v32[2]; // [xsp+88h] [xbp-E0h] BYREF
  int v33; // [xsp+9Ch] [xbp-CCh] BYREF
  unsigned __int64 v34; // [xsp+A0h] [xbp-C8h] BYREF
  float32x2_t v35; // [xsp+A8h] [xbp-C0h] BYREF
  _BYTE v36[4]; // [xsp+B4h] [xbp-B4h] BYREF
  _OWORD v37[2]; // [xsp+B8h] [xbp-B0h] BYREF
  __int64 v38; // [xsp+D8h] [xbp-90h] BYREF
  __int64 v39; // [xsp+E0h] [xbp-88h]
  __int64 v40; // [xsp+E8h] [xbp-80h]
  __int64 v41; // [xsp+F0h] [xbp-78h]

  v41 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v38 = 0;
  v39 = 0;
  v40 = 0;
  if ( *((_BYTE *)a2 + 40) )
  {
    v7 = *((_QWORD *)this + 112);
    if ( v7 )
      ++*(_DWORD *)(v7 + 8);
    v38 = v7;
    v8 = 1;
    v36[0] = *((_BYTE *)a2 + 41);
  }
  else
  {
    v8 = 0;
  }
  v9 = *((_DWORD *)a2 + 8);
  if ( v9 >= 1 )
  {
    v10 = 0;
    v11 = &v38 + (unsigned int)v8;
    do
    {
      v12 = (_DWORD *)*((_QWORD *)this + 114);
      if ( v12 )
        ++v12[2];
      v13 = (_DWORD *)*v11;
      *v11 = (__int64)v12;
      if ( v13 )
      {
        v14 = v13[2] - 1;
        v13[2] = v14;
        if ( !v14 )
        {
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 8LL))(v13);
          v9 = *((_DWORD *)a2 + 8);
        }
      }
      ++v11;
      *(_BYTE *)(((unsigned __int64)v36 | v8) + v10) = (int)v10 < *((_DWORD *)a2 + 9);
      ++v10;
    }
    while ( (int)v10 < v9 );
    LODWORD(v8) = v8 + v10;
  }
  v37[0] = xmmword_594800;
  v37[1] = xmmword_594810;
  if ( (int)v8 >= 1 )
  {
    v15 = 0;
    v16.n64_u64[0] = vdup_lane_s32(a4, 0).n64_u64[0];
    v17.n64_u64[0] = 0xC140000000000000LL;
    v18 = (Caver::MapView *)((char *)this + 392);
    while ( 1 )
    {
      v34 = vadd_f32(
              vadd_f32((float32x2_t)a3->n64_u64[0], vmul_f32(a3[1], (float32x2_t)0x3F0000003F000000LL)),
              vmul_f32(v16, v17)).n64_u64[0];
      Caver::Vector2::Rounded((__int64 *)&v35, (Caver::Vector2 *)&v34);
      v19 = *(&v38 + v15);
      if ( v36[v15] )
        v20 = -1;
      else
        v20 = -1308622848;
      v33 = v20;
      if ( v19 )
        ++*(_DWORD *)(v19 + 8);
      v21.n64_u64[0] = vmul_f32(v16, *(float32x2_t *)(v19 + 84)).n64_u64[0];
      v30 = vsub_f32(v35, vmul_f32(v21, (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
      Caver::Vector2::Rounded(&v31, (Caver::Vector2 *)&v30);
      v32[1] = v21.n64_u64[0];
      v32[0] = v31;
      Caver::Sprite::AddRectangle(
        v18,
        (const Caver::Rectangle *)v32,
        (const Caver::Rectangle *)(v19 + 92),
        (const Caver::Color *)&v33);
      v22 = *(_DWORD *)(v19 + 8) - 1;
      *(_DWORD *)(v19 + 8) = v22;
      if ( !v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
      if ( v15 + 1 >= (int)v8 )
        break;
      v17.n64_u64[0] = *(unsigned __int64 *)(((unsigned __int64)v37 | 8) + 8 * v15++);
    }
  }
  v23 = v40;
  if ( v40 )
  {
    v24 = *(_DWORD *)&byte_8[v40] - 1;
    *(_DWORD *)&byte_8[v40] = v24;
    if ( !v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
  }
  v25 = v39;
  if ( v39 )
  {
    v26 = *(_DWORD *)(v39 + 8) - 1;
    *(_DWORD *)(v39 + 8) = v26;
    if ( !v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
  }
  result = v38;
  if ( v38 )
  {
    v28 = *(_DWORD *)(v38 + 8) - 1;
    *(_DWORD *)(v38 + 8) = v28;
    if ( !v28 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

