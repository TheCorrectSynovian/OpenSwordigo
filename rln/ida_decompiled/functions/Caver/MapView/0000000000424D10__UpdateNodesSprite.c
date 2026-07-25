/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000424D10
 * Mangled: _ZN5Caver7MapView17UpdateNodesSpriteEv
 * Demangled: Caver::MapView::UpdateNodesSprite(void)
 *
 * Callers: 1
 *   0x00000000001FD280  Caver::MapView::UpdateNodesSprite(void)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F64C0  Caver::MapView::AddPathSprite(Caver::MapViewNode *,Caver::MapViewNode *)
 *   0x00000000001F9830  Caver::Sprite::Clear(void)
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *   0x00000000001FEFA0  Caver::MapView::AddNodeIconsToSprite(Caver::MapViewNode *,Caver::Rectangle const&,float)
 *   0x0000000000200B90  Caver::Sprite::AddRectangle(Caver::Rectangle const&,Caver::Rectangle const&,Caver::Color const&)
 *   0x0000000000202260  Caver::Map::NodeForName(std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 171
 *   insn=0x0000000000424D38 string=0x0000000000424D3C "H"
 *   insn=0x0000000000424D40 string=0x0000000000424D44 ""
 *   insn=0x0000000000424D48 string=0x0000000000424D4C "t"
 *   insn=0x0000000000424D58 string=0x0000000000424D5C "u""
 *   insn=0x0000000000424D58 string=0x00000000001F9830 "0'"
 *   insn=0x0000000000424D64 string=0x0000000000424D68 "h"
 *   insn=0x0000000000424D68 string=0x0000000000424D6C ")"
 *   insn=0x0000000000424D6C string=0x0000000000424D70 ")"
 *   insn=0x0000000000424D70 string=0x0000000000424D74 "?"
 *   insn=0x0000000000424D78 string=0x0000000000424D7C "\t"
 *   insn=0x0000000000424D7C string=0x0000000000424D80 "*1D"
 *   insn=0x0000000000424D7C string=0x0000000000584430 "333?"
 *   insn=0x0000000000424D88 string=0x0000000000424D8C ""
 *   insn=0x0000000000424D90 string=0x0000000000424D94 "\n"
 *   insn=0x0000000000424D9C string=0x0000000000424DA0 "i"
 *   insn=0x0000000000424DC0 string=0x0000000000424DC4 "H"
 *   insn=0x0000000000424DC4 string=0x0000000000424DC8 "h"
 *   insn=0x0000000000424DC4 string=0x00000000004250AC "h"
 *   insn=0x0000000000424DCC string=0x0000000000424DD0 "\t"
 *   insn=0x0000000000424DD0 string=0x0000000000424DD4 "("
 *   insn=0x0000000000424DD8 string=0x0000000000424DE8 ""
 *   insn=0x0000000000424DDC string=0x0000000000424DE0 ")"
 *   insn=0x0000000000424DE8 string=0x0000000000424DEC ""
 *   insn=0x0000000000424DF4 string=0x0000000000424DF8 "@"
 *   insn=0x0000000000424DFC string=0x0000000000424E00 ""
 *   insn=0x0000000000424E00 string=0x0000000000424E04 "\t@"
 *   insn=0x0000000000424E0C string=0x0000000000424E10 "@"
 *   insn=0x0000000000424E10 string=0x0000000000424E14 ""
 *   insn=0x0000000000424E14 string=0x0000000000424E18 ""
 *   insn=0x0000000000424E1C string=0x0000000000424E20 ""
 *   insn=0x0000000000424E20 string=0x0000000000424E24 "@"
 *   insn=0x0000000000424E30 string=0x0000000000424E64 "?"
 *   insn=0x0000000000424E34 string=0x0000000000424E38 ""
 *   insn=0x0000000000424E3C string=0x0000000000424E40 "!"
 *   insn=0x0000000000424E48 string=0x0000000000424E4C "\t@"
 *   insn=0x0000000000424E54 string=0x0000000000424E58 ""
 *   insn=0x0000000000424E64 string=0x0000000000424E68 "!"
 *   insn=0x0000000000424E68 string=0x0000000000424E6C ""
 *   insn=0x0000000000424E70 string=0x0000000000424E74 "h"
 *   insn=0x0000000000424E74 string=0x0000000000424E78 "ibP9"
 *   insn=0x0000000000424E7C string=0x0000000000424E80 "i"
 *   insn=0x0000000000424E84 string=0x0000000000424E88 "i"
 *   insn=0x0000000000424E90 string=0x0000000000424E94 "\t"
 *   insn=0x0000000000424E94 string=0x0000000000424E98 ")+"
 *   insn=0x0000000000424EA0 string=0x0000000000424EA4 ")#"
 *   insn=0x0000000000424EBC string=0x0000000000424EC0 "@"
 *   insn=0x0000000000424EC4 string=0x0000000000424EC8 "?"
 *   insn=0x0000000000424EE0 string=0x0000000000424EE4 "if"
 *   insn=0x0000000000424EEC string=0x0000000000424EF0 "B"
 *   insn=0x0000000000424EF8 string=0x0000000000424EFC "K"
 *   insn=0x0000000000424F00 string=0x0000000000424F04 "!"
 *   insn=0x0000000000424F10 string=0x0000000000424F14 "!"
 *   insn=0x0000000000424F20 string=0x0000000000424F24 "o"
 *   insn=0x0000000000424F28 string=0x0000000000424F2C "h"
 *   insn=0x0000000000424F2C string=0x0000000000424F30 "w"
 *   insn=0x0000000000424F38 string=0x0000000000424F3C ""
 *   insn=0x0000000000424F50 string=0x0000000000424F54 "l"
 *   insn=0x0000000000424F58 string=0x0000000000424F5C " "
 *   insn=0x0000000000424F6C string=0x00000000001FDA30 "0'"
 *   insn=0x0000000000424F90 string=0x0000000000424F94 ""
 *   insn=0x0000000000424F98 string=0x0000000000424F9C "!@"
 *   insn=0x0000000000424FA4 string=0x0000000000424D98 "w"
 *   insn=0x0000000000424FAC string=0x0000000000424FB0 "w"
 *   insn=0x0000000000424FB0 string=0x0000000000424FB4 "7"
 *   insn=0x0000000000424FDC string=0x00000000001FEFA0 "0'"
 *   insn=0x0000000000424FE4 string=0x0000000000424FE8 "x"
 *   insn=0x0000000000424FEC string=0x0000000000424FF0 "@"
 *   insn=0x0000000000424FEC string=0x0000000000424FFC "x"
 *   insn=0x0000000000424FF0 string=0x0000000000424FF4 ""
 *   insn=0x0000000000424FF4 string=0x0000000000424FF8 ""
 *   insn=0x0000000000424FFC string=0x0000000000425088 "<"
 *   insn=0x0000000000425008 string=0x000000000042500C "k"
 *   insn=0x000000000042500C string=0x0000000000425010 "`"
 *   insn=0x0000000000425010 string=0x0000000000425014 " "
 *   insn=0x0000000000425034 string=0x0000000000425038 ""
 *   insn=0x000000000042504C string=0x0000000000425050 "@"
 *   insn=0x0000000000425050 string=0x0000000000425054 ""
 *   insn=0x0000000000425054 string=0x0000000000425058 ""
 *   insn=0x0000000000425058 string=0x000000000042505C "a"
 *   insn=0x000000000042505C string=0x0000000000425060 ""
 *   insn=0x0000000000425060 string=0x0000000000425064 ""
 *   insn=0x0000000000425078 string=0x000000000042507C "x"
 *   insn=0x0000000000425088 string=0x000000000042508C "(@"
 *   insn=0x000000000042508C string=0x0000000000425090 ""
 *   insn=0x0000000000425090 string=0x0000000000425094 "("
 *   insn=0x00000000004250A0 string=0x00000000004250A4 ""
 *   insn=0x00000000004250AC string=0x00000000004250B0 "{"
 *   insn=0x00000000004250B0 string=0x00000000004250B4 "ZC"
 *   insn=0x00000000004250B4 string=0x00000000004250B8 ")"
 *   insn=0x00000000004250B8 string=0x00000000004250BC ")"
 *   insn=0x00000000004250C8 string=0x00000000004250CC ""
 *   insn=0x00000000004250D8 string=0x0000000000425108 "rD"
 *   insn=0x0000000000425108 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000425110 string=0x0000000000425114 "@"
 *   insn=0x0000000000425118 string=0x000000000042511C ""
 *   insn=0x000000000042511C string=0x0000000000425120 ""
 *   insn=0x0000000000425124 string=0x0000000000425128 ""
 *   insn=0x0000000000425124 string=0x0000000000425138 "\"
 *   insn=0x0000000000425128 string=0x000000000042512C ""
 *   insn=0x0000000000425138 string=0x000000000042513C "!"
 *   insn=0x0000000000425138 string=0x00000000004251A0 "(@"
 *   insn=0x0000000000425154 string=0x0000000000425158 ""
 *   insn=0x0000000000425164 string=0x0000000000425168 "\t@"
 *   insn=0x0000000000425174 string=0x0000000000425178 ""
 *   insn=0x0000000000425184 string=0x0000000000425188 "@"
 *   insn=0x0000000000425190 string=0x0000000000425194 ""
 *   insn=0x00000000004251A0 string=0x00000000004251A4 ""
 *   insn=0x00000000004251A4 string=0x00000000004251A8 "("
 *   insn=0x00000000004251B0 string=0x00000000004251B4 ""
 *   insn=0x00000000004251C4 string=0x00000000004251C8 "a"
 *   insn=0x00000000004251E8 string=0x00000000004251EC "V"
 *   insn=0x00000000004251F4 string=0x00000000004251F8 "`"
 *   insn=0x0000000000425200 string=0x0000000000425204 "h~@"
 *   insn=0x0000000000425204 string=0x0000000000425208 "\t)@"
 *   insn=0x0000000000425208 string=0x000000000042520C "_"
 *   insn=0x0000000000425218 string=0x000000000042521C "xU"
 *   insn=0x000000000042522C string=0x000000000042523C ""
 *   insn=0x0000000000425230 string=0x0000000000425234 "{"
 *   insn=0x0000000000425234 string=0x0000000000425238 "Zc"
 *   insn=0x000000000042523C string=0x0000000000425240 ""
 *   insn=0x0000000000425240 string=0x0000000000425244 "Q@"
 *   insn=0x0000000000425248 string=0x0000000000425258 "\t!C"
 *   insn=0x000000000042524C string=0x0000000000425250 ")"
 *   insn=0x0000000000425258 string=0x000000000042525C ""
 *   insn=0x000000000042525C string=0x0000000000425260 ""
 *   insn=0x0000000000425264 string=0x0000000000425268 "4"
 *   insn=0x000000000042526C string=0x0000000000425270 ""
 *   insn=0x0000000000425280 string=0x0000000000425284 "\t@"
 *   insn=0x000000000042528C string=0x0000000000425290 ""
 *   insn=0x00000000004252A0 string=0x00000000004252A4 "@"
 *   insn=0x00000000004252B0 string=0x00000000004252B4 "h~@"
 *   insn=0x00000000004252B0 string=0x00000000004253EC "h~@"
 *   insn=0x00000000004252B4 string=0x00000000004252B8 ""
 *   insn=0x00000000004252B8 string=0x00000000004252BC ""
 *   insn=0x00000000004252BC string=0x00000000004252C0 "U@"
 *   insn=0x00000000004252C4 string=0x00000000004252C8 ""
 *   insn=0x00000000004252C4 string=0x0000000000425314 ""
 *   insn=0x00000000004252D0 string=0x00000000004252D4 "i"
 *   insn=0x00000000004252DC string=0x00000000004252E0 "\t@"
 *   insn=0x00000000004252E8 string=0x00000000004252EC ""
 *   insn=0x00000000004252F0 string=0x00000000004252F4 "a"
 *   insn=0x00000000004252FC string=0x0000000000425300 "@"
 *   insn=0x0000000000425308 string=0x000000000042530C "("
 *   insn=0x000000000042530C string=0x0000000000425230 "h~@"
 *   insn=0x0000000000425310 string=0x0000000000425328 "`~@"
 *   insn=0x0000000000425318 string=0x000000000042531C "t#"
 *   insn=0x0000000000425320 string=0x0000000000425324 "h"
 *   insn=0x0000000000425340 string=0x0000000000425344 ""
 *   insn=0x0000000000425348 string=0x000000000042534C "!"
 *   insn=0x0000000000425354 string=0x0000000000425358 "\t@"
 *   insn=0x0000000000425360 string=0x0000000000425364 ""
 *   insn=0x0000000000425368 string=0x000000000042536C "@"
 *   insn=0x0000000000425374 string=0x0000000000425378 "h"
 *   insn=0x000000000042537C string=0x0000000000425380 ")"
 *   insn=0x0000000000425390 string=0x0000000000425394 "H`@9"
 *   insn=0x0000000000425390 string=0x00000000004253C8 "?"
 *   insn=0x0000000000425398 string=0x000000000042539C "?"
 *   insn=0x00000000004253A0 string=0x00000000004253A4 "Hh@9H"
 *   insn=0x00000000004253A4 string=0x00000000004253A8 "H"
 *   insn=0x00000000004253A8 string=0x00000000004253AC "(`@9"
 *   insn=0x00000000004253AC string=0x00000000004253B0 ""
 *   insn=0x00000000004253B0 string=0x00000000004253B4 "(h@9"
 *   insn=0x00000000004253BC string=0x00000000004253C0 "@D"
 *   insn=0x00000000004253C0 string=0x00000000001F64C0 "0'"
 *   insn=0x00000000004253D8 string=0x00000000004253DC "@"
 *   insn=0x00000000004253F0 string=0x00000000004253F4 "\t)@"
 *   insn=0x00000000004253F4 string=0x00000000004253F8 "I"
 *   insn=0x00000000004253F8 string=0x00000000004253FC ")"
 *   insn=0x00000000004253FC string=0x0000000000425400 "?"
 *   insn=0x0000000000425400 string=0x0000000000425404 ""
 *   insn=0x0000000000425410 string=0x0000000000425414 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MapView::UpdateNodesSprite(Caver::MapView *this)
{
  unsigned __int64 v1; // d8
  unsigned __int64 v2; // d10
  Caver::Sprite *v4; // x20
  __int64 result; // x0
  __int64 v6; // x8
  __int64 v7; // x26
  __int64 v8; // x27
  __int64 v9; // x23
  __int64 v10; // x25
  char v11; // w28
  float32x2_t **v12; // x22
  float32x2_t *v13; // x25
  __int64 v14; // x9
  _QWORD *v15; // x8
  _QWORD *v16; // x23
  float32x2_t **v17; // x8
  float32x2_t *v18; // x24
  float32x2_t *v19; // x28
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // x8
  float32x2_t v24; // d0
  int32x2_t v25; // d2
  float32x2_t v26; // d0
  float32x2_t v27; // d11
  float32x2_t v28; // d12
  unsigned __int32 v29; // w8
  __int64 v30; // x24
  float32x2_t v31; // d11
  int v32; // w8
  int v33; // w8
  float v34; // [xsp+88h] [xbp-E0h]
  int v35; // [xsp+9Ch] [xbp-CCh] BYREF
  unsigned __int64 v36; // [xsp+A0h] [xbp-C8h] BYREF
  unsigned __int64 v37; // [xsp+A8h] [xbp-C0h] BYREF
  __int64 v38; // [xsp+B0h] [xbp-B8h] BYREF
  __int64 v39; // [xsp+B8h] [xbp-B0h] BYREF
  unsigned __int64 v40; // [xsp+C0h] [xbp-A8h]
  _QWORD v41[2]; // [xsp+C8h] [xbp-A0h] BYREF
  int v42; // [xsp+D8h] [xbp-90h] BYREF
  int v43; // [xsp+DCh] [xbp-8Ch] BYREF
  __int64 v44; // [xsp+E0h] [xbp-88h]

  v4 = (Caver::MapView *)((char *)this + 304);
  v44 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Sprite::Clear((Caver::MapView *)((char *)this + 304));
  result = Caver::Sprite::Clear((Caver::MapView *)((char *)this + 392));
  v6 = *((_QWORD *)this + 35);
  if ( (int)((unsigned __int64)(*((_QWORD *)this + 36) - v6) >> 4) >= 1 )
  {
    LODWORD(v2) = 1060320051;
    v7 = 0;
    v8 = 0;
    LODWORD(v1) = 1.0;
    do
    {
      v12 = *(float32x2_t ***)(v6 + v7);
      if ( *((_BYTE *)v12 + 24) )
      {
        v13 = *v12;
        v14 = **((_QWORD **)this + 33);
        v15 = *(_QWORD **)(v14 + 72);
        v16 = *(_QWORD **)(v14 + 80);
        if ( v16 )
          ++v16[1];
        v17 = (float32x2_t **)(*v15 + v7);
        v19 = *v17;
        v18 = v17[1];
        if ( v18 )
        {
          if ( !v18[1].n64_u64[0] )
          {
            result = (*(__int64 (__fastcall **)(float32x2_t *))(v18->n64_u64[0] + 16))(v18);
            v20 = v18[2].n64_u64[0] - 1;
            v18[2].n64_u64[0] = v20;
            if ( !v20 )
              result = (*(__int64 (__fastcall **)(float32x2_t *))(v18->n64_u64[0] + 24))(v18);
          }
        }
        if ( !v16
          || (v21 = v16[1] - 1LL, (v16[1] = v21) != 0)
          || (result = (*(__int64 (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16), v22 = v16[2] - 1LL, (v16[2] = v22) != 0) )
        {
          if ( v13 == v19 )
            goto LABEL_18;
        }
        else
        {
          result = (*(__int64 (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
          if ( v13 == v19 )
          {
LABEL_18:
            v42 = -1;
            v43 = -1;
            v23 = *((_QWORD *)this + 105);
            v24.n64_u64[0] = *(unsigned __int64 *)(v23 + 84);
            if ( *((_BYTE *)this + 1048) && !*((_BYTE *)v12 + 41) )
            {
              v43 = -1717986919;
              v42 = 1717986918;
              *((_DWORD *)v12 + 11) = 1093874483;
              v25.n64_u64[0] = v2;
            }
            else
            {
              v25.n64_u64[0] = v1;
              if ( !*((_BYTE *)v12 + 25) )
              {
                v43 = 1499027801;
                v25.n64_u64[0] = v1;
                v42 = 421075225;
              }
            }
            v26.n64_u64[0] = vmul_n_f32(v24, v25.n64_f32[0]).n64_u64[0];
            v27.n64_u64[0] = vdup_lane_s32(v25, 0).n64_u64[0];
            v34 = v25.n64_f32[0];
            v41[0] = vsub_f32((*v12)[1], vmul_f32(v26, (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
            v41[1] = v26.n64_u64[0];
            result = Caver::Sprite::AddRectangle(
                       v4,
                       (const Caver::Rectangle *)v41,
                       (const Caver::Rectangle *)(v23 + 92),
                       (const Caver::Color *)&v43);
            if ( *((_BYTE *)v12 + 26) )
            {
              v9 = *((_QWORD *)this + 108);
              if ( v9 )
                goto LABEL_27;
              goto LABEL_28;
            }
            v29 = (*v12)[4].n64_u32[0];
            if ( v29 == 3 )
            {
              v9 = *((_QWORD *)this + 107);
              if ( v9 )
                goto LABEL_27;
              goto LABEL_28;
            }
            if ( v29 == 1 )
            {
              v9 = *((_QWORD *)this + 106);
              if ( v9 )
LABEL_27:
                ++*(_DWORD *)(v9 + 8);
LABEL_28:
              if ( v9 )
              {
                v28.n64_u64[0] = vmul_f32(v27, *(float32x2_t *)(v9 + 84)).n64_u64[0];
                v37 = vsub_f32((*v12)[1], vmul_f32(v28, (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
                Caver::Vector2::Rounded(&v38, (Caver::Vector2 *)&v37);
                v40 = v28.n64_u64[0];
                v39 = v38;
                result = Caver::Sprite::AddRectangle(
                           (Caver::MapView *)((char *)this + 392),
                           (const Caver::Rectangle *)&v39,
                           (const Caver::Rectangle *)(v9 + 92),
                           (const Caver::Color *)&v42);
                v11 = 0;
              }
              else
              {
                v11 = 1;
              }
              v10 = v9;
              if ( *((_BYTE *)v12 + 25) )
LABEL_36:
                result = Caver::MapView::AddNodeIconsToSprite(
                           this,
                           (Caver::MapViewNode *)v12,
                           (const Caver::Rectangle *)v41,
                           v34);
            }
            else
            {
              v10 = 0;
              v9 = 0;
              v11 = 1;
              if ( *((_BYTE *)v12 + 25) )
                goto LABEL_36;
            }
            if ( *((_BYTE *)v12 + 28) )
            {
              v30 = *((_QWORD *)this + 110);
              if ( v30 )
                goto LABEL_39;
              goto LABEL_40;
            }
            if ( *((_BYTE *)v12 + 29) )
            {
              v30 = *((_QWORD *)this + 111);
              if ( v30 )
LABEL_39:
                ++*(_DWORD *)(v30 + 8);
LABEL_40:
              if ( v30 )
              {
                v31.n64_u64[0] = vmul_f32(v27, *(float32x2_t *)(v30 + 84)).n64_u64[0];
                v36 = vsub_f32((*v12)[1], vmul_f32(v31, (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
                Caver::Vector2::Rounded(&v38, (Caver::Vector2 *)&v36);
                v40 = v31.n64_u64[0];
                v39 = v38;
                v35 = -1;
                result = Caver::Sprite::AddRectangle(
                           (Caver::MapView *)((char *)this + 392),
                           (const Caver::Rectangle *)&v39,
                           (const Caver::Rectangle *)(v30 + 92),
                           (const Caver::Color *)&v35);
                v32 = *(_DWORD *)(v30 + 8) - 1;
                *(_DWORD *)(v30 + 8) = v32;
                if ( !v32 )
                  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
              }
            }
            if ( (v11 & 1) == 0 )
            {
              v33 = *(_DWORD *)(v10 + 8) - 1;
              *(_DWORD *)(v10 + 8) = v33;
              if ( !v33 )
                result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
            }
          }
        }
      }
      v6 = *((_QWORD *)this + 35);
      ++v8;
      v7 += 16;
    }
    while ( v8 < (int)((unsigned __int64)(*((_QWORD *)this + 36) - v6) >> 4) );
  }
  return result;
}

