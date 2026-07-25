/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ADE28
 * Mangled: _ZN5Caver21PortalEffectComponent14CreateVerticesEv
 * Demangled: Caver::PortalEffectComponent::CreateVertices(void)
 *
 * Callers: 1
 *   0x00000000001F4830  Caver::PortalEffectComponent::CreateVertices(void)
 *
 * Callees: 15
 *   0x00000000001F4590  AngleDifference(float,float)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6DE0  Caver::Vector2::Angle(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FD530  .sqrtf
 *   0x00000000001FEB70  Caver::FastVector<ushort>::Resize(int)
 *   0x0000000000200AA0  Caver::Polygon::Bounds(void)
 *   0x0000000000200F90  Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *   0x0000000000201360  Caver::FastVector<Caver::PortalEffectComponent::Vertex>::Resize(int)
 *   0x0000000000201370  Caver::Polygon::SplitEdgesToMaxLength(float)
 *   0x00000000002AE494  `non-virtual thunk to'Caver::PortalEffectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 164
 *   insn=0x00000000002ADE4C string=0x00000000002ADE50 "V"
 *   insn=0x00000000002ADE5C string=0x00000000002ADE60 "tN@"
 *   insn=0x00000000002ADE64 string=0x00000000002ADE68 "`""
 *   insn=0x00000000002ADE70 string=0x00000000002ADE74 "tN@"
 *   insn=0x00000000002ADE70 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002ADE94 string=0x00000000002ADEA8 "\n"
 *   insn=0x00000000002ADEA0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002ADEA8 string=0x00000000002ADEAC ""
 *   insn=0x00000000002ADEB8 string=0x00000000002ADEBC "\n!"
 *   insn=0x00000000002ADEBC string=0x00000000002ADEC0 "J"
 *   insn=0x00000000002ADEC0 string=0x00000000002ADEC4 "K"
 *   insn=0x00000000002ADEC4 string=0x00000000002ADEC8 "k"
 *   insn=0x00000000002ADED0 string=0x00000000002ADED4 "b"
 *   insn=0x00000000002ADED4 string=0x00000000002ADED8 "+"
 *   insn=0x00000000002ADEE4 string=0x00000000002ADEE8 "H"
 *   insn=0x00000000002ADEE8 string=0x00000000002ADEEC ""
 *   insn=0x00000000002ADF0C string=0x00000000002ADF10 "i"
 *   insn=0x00000000002ADF10 string=0x00000000002ADF14 "tb"
 *   insn=0x00000000002ADF14 string=0x00000000002ADF18 "\ny"
 *   insn=0x00000000002ADF18 string=0x00000000002ADF1C "A\t"
 *   insn=0x00000000002ADF1C string=0x00000000002ADF20 "?"
 *   insn=0x00000000002ADF24 string=0x00000000002ADF34 "i"
 *   insn=0x00000000002ADF28 string=0x00000000002ADF2C "M"
 *   insn=0x00000000002ADF34 string=0x00000000002ADF38 ""
 *   insn=0x00000000002ADF3C string=0x00000000002ADF40 "u"
 *   insn=0x00000000002ADF40 string=0x00000000002ADF44 "?"
 *   insn=0x00000000002ADF44 string=0x00000000002ADF48 "j"
 *   insn=0x00000000002ADF4C string=0x00000000002ADF50 "C"
 *   insn=0x00000000002ADF68 string=0x00000000002ADF6C "`"
 *   insn=0x00000000002ADF70 string=0x00000000002ADF74 "L"
 *   insn=0x00000000002ADF78 string=0x00000000002ADF7C "h"
 *   insn=0x00000000002ADF7C string=0x00000000002AE208 "hZ@"
 *   insn=0x00000000002ADF8C string=0x00000000002ADF90 "*"
 *   insn=0x00000000002ADF90 string=0x00000000002ADF94 " "
 *   insn=0x00000000002ADF9C string=0x00000000002ADFA0 ""
 *   insn=0x00000000002ADFA0 string=0x00000000002ADFA4 "X"
 *   insn=0x00000000002ADFB0 string=0x00000000002ADFB4 "\t"
 *   insn=0x00000000002ADFB0 string=0x00000000001FD530 "0'"
 *   insn=0x00000000002ADFD0 string=0x00000000002ADFD4 " "
 *   insn=0x00000000002ADFE4 string=0x00000000002ADFE8 ""
 *   insn=0x00000000002ADFE4 string=0x00000000001F6DE0 "0'"
 *   insn=0x00000000002ADFF0 string=0x00000000002ADFF4 "!"
 *   insn=0x00000000002ADFF4 string=0x00000000002ADFF8 "a9!"
 *   insn=0x00000000002ADFFC string=0x00000000002AE000 "!!"
 *   insn=0x00000000002AE004 string=0x00000000002AE008 "\t"
 *   insn=0x00000000002AE008 string=0x00000000002AE00C " !)"
 *   insn=0x00000000002AE010 string=0x00000000002ADFB0 "`="
 *   insn=0x00000000002AE020 string=0x00000000002AE024 "@b"
 *   insn=0x00000000002AE034 string=0x00000000002AE038 "*"
 *   insn=0x00000000002AE038 string=0x00000000002AE03C "k"])"
 *   insn=0x00000000002AE038 string=0x00000000002AE0DC "h&[)"
 *   insn=0x00000000002AE044 string=0x00000000002AE048 "y"
 *   insn=0x00000000002AE044 string=0x00000000002AE060 "iz@"
 *   insn=0x00000000002AE058 string=0x00000000002AE05C "k"])iz@"
 *   insn=0x00000000002AE060 string=0x00000000002AE064 "j"
 *   insn=0x00000000002AE068 string=0x00000000002AE06C "_"
 *   insn=0x00000000002AE06C string=0x00000000002AE070 ":"
 *   insn=0x00000000002AE070 string=0x00000000002AE074 "j"
 *   insn=0x00000000002AE074 string=0x00000000002AE078 ""
 *   insn=0x00000000002AE078 string=0x00000000002AE07C "y"
 *   insn=0x00000000002AE078 string=0x00000000002AE098 "K"
 *   insn=0x00000000002AE08C string=0x00000000002AE090 "iz@"
 *   insn=0x00000000002AE090 string=0x00000000002AE094 "j"])K"
 *   insn=0x00000000002AE098 string=0x00000000002AE09C "L"
 *   insn=0x00000000002AE0A0 string=0x00000000002AE0A4 ","
 *   insn=0x00000000002AE0A8 string=0x00000000002AE0AC ""
 *   insn=0x00000000002AE0AC string=0x00000000002AE0B0 "y"
 *   insn=0x00000000002AE0AC string=0x00000000002AE0CC "H"
 *   insn=0x00000000002AE0C0 string=0x00000000002AE0C4 "k"
 *   insn=0x00000000002AE0C4 string=0x00000000002AE0C8 "iz@"
 *   insn=0x00000000002AE0CC string=0x00000000002AE0D0 "j"
 *   insn=0x00000000002AE0D0 string=0x00000000002AE0D4 "("
 *   insn=0x00000000002AE0E4 string=0x00000000002AE0E8 "(y"
 *   insn=0x00000000002AE0E4 string=0x00000000002AE100 "ir@"
 *   insn=0x00000000002AE104 string=0x00000000002AE108 "}@"
 *   insn=0x00000000002AE108 string=0x00000000002AE10C "("
 *   insn=0x00000000002AE118 string=0x00000000002AE11C ""
 *   insn=0x00000000002AE120 string=0x00000000002AE124 "h&[)"
 *   insn=0x00000000002AE124 string=0x00000000002AE128 ""
 *   insn=0x00000000002AE12C string=0x00000000002AE130 "h"
 *   insn=0x00000000002AE134 string=0x00000000002AE138 "(y"
 *   insn=0x00000000002AE134 string=0x00000000002AE150 "ir@"
 *   insn=0x00000000002AE154 string=0x00000000002AE158 "}@"
 *   insn=0x00000000002AE15C string=0x00000000002AE160 "("
 *   insn=0x00000000002AE16C string=0x00000000002AE170 "%"
 *   insn=0x00000000002AE170 string=0x00000000002AE174 "h"
 *   insn=0x00000000002AE174 string=0x00000000002AE178 ""
 *   insn=0x00000000002AE178 string=0x00000000002AE17C "h"
 *   insn=0x00000000002AE194 string=0x00000000002AE198 "hr@"
 *   insn=0x00000000002AE1A4 string=0x00000000002AE1A8 ""
 *   insn=0x00000000002AE1B4 string=0x00000000002AE1B8 ")"
 *   insn=0x00000000002AE1B8 string=0x00000000002AE1BC "J}@"
 *   insn=0x00000000002AE1BC string=0x00000000002AE1C0 "\t"
 *   insn=0x00000000002AE1C0 string=0x00000000002AE1C4 ""
 *   insn=0x00000000002AE1C4 string=0x00000000002AE1C8 " "
 *   insn=0x00000000002AE1D0 string=0x00000000002AE1D4 "hr@"
 *   insn=0x00000000002AE1D0 string=0x00000000001F4590 "P'"
 *   insn=0x00000000002AE1E0 string=0x00000000002AE1E4 "\t"
 *   insn=0x00000000002AE1E4 string=0x00000000002AE1E8 "!"
 *   insn=0x00000000002AE1F4 string=0x00000000002AE1F8 " "
 *   insn=0x00000000002AE200 string=0x00000000002AE204 "k"
 *   insn=0x00000000002AE20C string=0x00000000002AE210 "`"
 *   insn=0x00000000002AE214 string=0x00000000002AE218 "2&"
 *   insn=0x00000000002AE218 string=0x00000000002AE21C "hZ@"
 *   insn=0x00000000002AE228 string=0x00000000002AE22C " "
 *   insn=0x00000000002AE230 string=0x00000000002AE234 "h"
 *   insn=0x00000000002AE238 string=0x00000000002AE23C "K"
 *   insn=0x00000000002AE23C string=0x00000000002AE240 "b"
 *   insn=0x00000000002AE240 string=0x00000000002AE244 "ir@"
 *   insn=0x00000000002AE248 string=0x00000000002AE24C "!"
 *   insn=0x00000000002AE24C string=0x00000000002AE250 "B"
 *   insn=0x00000000002AE254 string=0x00000000002AE304 ""
 *   insn=0x00000000002AE258 string=0x00000000002AE25C "S"
 *   insn=0x00000000002AE264 string=0x00000000002AE268 "/"
 *   insn=0x00000000002AE27C string=0x00000000002AE280 ""
 *   insn=0x00000000002AE280 string=0x00000000002AE284 "0"
 *   insn=0x00000000002AE288 string=0x00000000002AE28C "?"
 *   insn=0x00000000002AE294 string=0x00000000002AE298 "-"
 *   insn=0x00000000002AE2BC string=0x00000000002AE2C0 "m"
 *   insn=0x00000000002AE2CC string=0x00000000002AE2D0 "."
 *   insn=0x00000000002AE2D0 string=0x00000000002AE2D4 ")"
 *   insn=0x00000000002AE2D8 string=0x00000000002AE2DC " "
 *   insn=0x00000000002AE2DC string=0x00000000002AE2E0 """
 *   insn=0x00000000002AE2EC string=0x00000000002AE2F0 "a"
 *   insn=0x00000000002AE304 string=0x00000000002AE308 "\n"
 *   insn=0x00000000002AE314 string=0x00000000002AE318 "m?"
 *   insn=0x00000000002AE31C string=0x00000000002AE320 "L"
 *   insn=0x00000000002AE320 string=0x00000000002AE324 "-"
 *   insn=0x00000000002AE324 string=0x00000000002AE328 "\n"
 *   insn=0x00000000002AE328 string=0x00000000002AE32C "l"
 *   insn=0x00000000002AE330 string=0x00000000002AE334 "$"
 *   insn=0x00000000002AE334 string=0x00000000002AE338 "E"
 *   insn=0x00000000002AE338 string=0x00000000002AE33C "+a"
 *   insn=0x00000000002AE348 string=0x00000000002AE34C "p"
 *   insn=0x00000000002AE34C string=0x00000000002AE350 "q\t"
 *   insn=0x00000000002AE358 string=0x00000000002AE35C "2&"
 *   insn=0x00000000002AE35C string=0x00000000002AE360 "0"
 *   insn=0x00000000002AE360 string=0x00000000002AE364 "Q"
 *   insn=0x00000000002AE368 string=0x00000000002AE36C "1za"
 *   insn=0x00000000002AE370 string=0x00000000002AE374 "1"
 *   insn=0x00000000002AE374 string=0x00000000002AE378 "p"
 *   insn=0x00000000002AE378 string=0x00000000002AE37C "q"
 *   insn=0x00000000002AE380 string=0x00000000002AE384 "1"
 *   insn=0x00000000002AE388 string=0x00000000002AE38C "1ja"
 *   insn=0x00000000002AE394 string=0x00000000002AE398 "rA"
 *   insn=0x00000000002AE398 string=0x00000000002AE39C "pA"
 *   insn=0x00000000002AE39C string=0x00000000002AE3A0 "k"
 *   insn=0x00000000002AE3A0 string=0x00000000002AE3A4 "A"
 *   insn=0x00000000002AE3AC string=0x00000000002AE3B0 "c"
 *   insn=0x00000000002AE3AC string=0x0000000000583944 "\n"
 *   insn=0x00000000002AE3B4 string=0x00000000002AE3B8 ")"
 *   insn=0x00000000002AE3B8 string=0x00000000002AE3BC ""
 *   insn=0x00000000002AE3BC string=0x00000000002AE3C0 ")A"
 *   insn=0x00000000002AE3C0 string=0x00000000002AE3C4 "%"
 *   insn=0x00000000002AE3C4 string=0x00000000002AE3C8 ""
 *   insn=0x00000000002AE3DC string=0x00000000002AE3E0 "%"
 *   insn=0x00000000002AE3F8 string=0x00000000002AE3FC "%"
 *   insn=0x00000000002AE3FC string=0x00000000002AE400 "!"
 *   insn=0x00000000002AE404 string=0x00000000002AE408 "@"
 *   insn=0x00000000002AE40C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002AE450 string=0x00000000002AE454 "x"
 *   insn=0x00000000002AE45C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002AE480 string=0x00000000002AE484 "@"
 *   insn=0x00000000002AE48C string=0x00000000002AE490 "M"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PortalEffectComponent::CreateVertices(Caver::PortalEffectComponent *this)
{
  __int64 v2; // x20
  char *v3; // x8
  char *v4; // x9
  char *v5; // x0
  unsigned __int64 v6; // x21
  unsigned __int64 v7; // x10
  unsigned __int64 v8; // x11
  char *v9; // x12
  __int64 v10; // t1
  int v11; // w8
  int *v12; // x20
  _DWORD *v13; // x21
  float32x2_t v14; // d8
  float32x2_t v15; // d9
  __int128 v16; // q1
  float v17; // s12
  unsigned __int64 v18; // d0
  __int64 v19; // x23
  float v20; // s11
  int v21; // w25
  float v22; // s0
  float v23; // s8
  float i; // s9
  int v25; // w8
  int v26; // w11
  __int64 v27; // x9
  int v28; // w10
  __int16 v29; // w26
  int v30; // w11
  int v31; // w8
  __int64 v32; // x8
  int v33; // w9
  int v34; // w8
  __int64 v35; // x8
  __int64 v37; // x8
  __int64 v38; // x20
  int v39; // w21
  __int64 v40; // x23
  float v41; // s0
  __int64 v42; // x9
  __int64 v43; // x8
  double v44; // d0
  __int64 v45; // x8
  __int64 v46; // x9
  __int64 v47; // d1
  __int64 v48; // d2
  __int64 v49; // x10
  unsigned __int64 v50; // x12
  char *v51; // x14
  unsigned __int64 v52; // x15
  unsigned __int64 v53; // x16
  bool v54; // w12
  bool v55; // w13
  __int64 v56; // x14
  _OWORD *v57; // x15
  char *v58; // x14
  __int128 *v59; // x9
  __int64 v60; // x16
  __int128 v61; // q0
  __int128 v62; // q1
  __int128 v63; // q2
  __int128 v64; // q3
  __int64 v65; // x10
  float64x2_t v66; // q3
  float64x2_t v67; // q4
  float64x2_t v68; // q5
  __int128 *v69; // x11
  float64x2_t v70; // q6
  float32x2_t v71; // d7
  __int64 v72; // x12
  __int128 v73; // q16
  float32x2_t v74; // d18
  int32x2_t v75; // d17
  __int64 v76; // x8
  float *v77; // x9
  float v78; // s6
  float v79; // s5
  float v80; // s5
  __int128 v81; // [xsp+0h] [xbp-E0h]
  float32x2_t v82; // [xsp+10h] [xbp-D0h]
  unsigned __int64 v83; // [xsp+20h] [xbp-C0h] BYREF
  int v84; // [xsp+2Ch] [xbp-B4h]
  __int64 v85[2]; // [xsp+30h] [xbp-B0h] BYREF
  int v86; // [xsp+40h] [xbp-A0h] BYREF
  void *p; // [xsp+48h] [xbp-98h]
  char *v88; // [xsp+50h] [xbp-90h]
  char *v89; // [xsp+58h] [xbp-88h]
  __int16 v90; // [xsp+60h] [xbp-80h]
  __int64 v91; // [xsp+68h] [xbp-78h]

  v91 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *((_QWORD *)this + 19);
  if ( !v2 )
  {
    Caver::ComponentOutletBase::Connect((Caver::PortalEffectComponent *)((char *)this + 136), this);
    v2 = *((_QWORD *)this + 19);
  }
  v86 = *(_DWORD *)(v2 + 112);
  v4 = *(char **)(v2 + 120);
  v3 = *(char **)(v2 + 128);
  p = 0;
  v88 = 0;
  v89 = 0;
  v5 = (char *)(v3 - v4);
  v6 = (v3 - v4) >> 3;
  if ( v3 != v4 )
  {
    if ( v6 >> 61 )
      sub_565294();
    v5 = (char *)operator new((unsigned __int64)v5);
    v4 = *(char **)(v2 + 120);
    v3 = *(char **)(v2 + 128);
  }
  p = v5;
  v88 = v5;
  v89 = &v5[8 * v6];
  if ( v3 != v4 )
  {
    v7 = v3 - 8 - v4;
    v8 = (v7 >> 3) + 1;
    v9 = v5;
    if ( v8 >= 8 )
    {
      v50 = (v3 - v4 - 8) & 0xFFFFFFFFFFFFFFF8LL;
      v51 = &v5[v50];
      v52 = (unsigned __int64)&v4[v50 + 4];
      v50 += 8LL;
      v53 = (unsigned __int64)&v5[v50];
      v54 = v5 + 4 < &v4[v50];
      if ( (unsigned __int64)v5 < v52 && v4 < v51 + 4 )
      {
        v9 = v5;
      }
      else
      {
        v55 = v54 && (unsigned __int64)(v4 + 4) < v53;
        v9 = v5;
        if ( !v55 )
        {
          v56 = 8 * (v8 & 0x3FFFFFFFFFFFFFF8LL);
          v57 = v5 + 32;
          v9 = &v5[v56];
          v58 = &v4[v56];
          v59 = (__int128 *)(v4 + 32);
          v60 = v8 & 0x3FFFFFFFFFFFFFF8LL;
          do
          {
            v61 = *(v59 - 2);
            v62 = *(v59 - 1);
            v63 = *v59;
            v64 = v59[1];
            v59 += 4;
            v60 -= 8;
            *(v57 - 2) = v61;
            *(v57 - 1) = v62;
            *v57 = v63;
            v57[1] = v64;
            v57 += 4;
          }
          while ( v60 );
          v4 = v58;
          if ( v8 == (v8 & 0x3FFFFFFFFFFFFFF8LL) )
            goto LABEL_9;
        }
      }
    }
    do
    {
      v10 = *(_QWORD *)v4;
      v4 += 8;
      *(_QWORD *)v9 = v10;
      v9 += 8;
    }
    while ( v3 != v4 );
LABEL_9:
    v5 += (v7 & 0xFFFFFFFFFFFFFFF8LL) + 8;
  }
  v88 = v5;
  v90 = *(_WORD *)(v2 + 144);
  Caver::Polygon::SplitEdgesToMaxLength((Caver::Polygon *)&v86, 10.0);
  v11 = v86;
  v12 = (int *)((char *)this + 216);
  if ( *((_DWORD *)this + 55) < 2 * v86 + 2 )
  {
    Caver::FastVector<Caver::PortalEffectComponent::Vertex>::Resize();
    v11 = v86;
  }
  v13 = (_DWORD *)((char *)this + 232);
  if ( *((_DWORD *)this + 59) < 6 * v11 )
    Caver::FastVector<unsigned short>::Resize();
  *v12 = 0;
  *v13 = 0;
  Caver::Polygon::Bounds(v85, (Caver::Polygon *)&v86);
  v14.n64_u64[0] = v85[0];
  v15.n64_u64[0] = v85[1];
  Caver::Color::FromFloatColor();
  if ( (v86 & 0x80000000) == 0 )
  {
    v17 = -3.4028e38;
    v18 = vadd_f32(v14, vmul_f32(v15, (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
    v19 = 0;
    v20 = *((float *)&v18 + 1);
    v82.n64_u64[0] = v18;
    do
    {
      v21 = v84;
      *(_QWORD *)&v16 = *((_QWORD *)p + v19);
      v81 = v16;
      v83 = vsub_f32(*(float32x2_t *)&v16, v82).n64_u64[0];
      Caver::Vector2::Angle((Caver::Vector2 *)&v83);
      v23 = v22;
      *((_QWORD *)&v16 + 1) = *((_QWORD *)&v81 + 1);
      for ( i = sqrtf(
                  (float)((float)(v82.n64_f32[0] - *(float *)&v81) * (float)(v82.n64_f32[0] - *(float *)&v81))
                + (float)((float)(v20 - *((float *)&v81 + 1)) * (float)(v20 - *((float *)&v81 + 1))));
            v17 > v23;
            v23 = v23 + 6.28318531 )
      {
        ;
      }
      if ( v19 < v86 )
      {
        v26 = *((_DWORD *)this + 58);
        v25 = *((_DWORD *)this + 59);
        if ( v26 >= v25 )
        {
          Caver::FastVector<unsigned short>::Resize();
          v26 = *((_DWORD *)this + 58);
          v25 = *((_DWORD *)this + 59);
        }
        v27 = *((_QWORD *)this + 30);
        v28 = v26 + 1;
        v29 = 2 * v19;
        *(_WORD *)(v27 + 2LL * v26) = 2 * v19;
        *((_DWORD *)this + 58) = v26 + 1;
        if ( v26 + 1 >= v25 )
        {
          Caver::FastVector<unsigned short>::Resize();
          v27 = *((_QWORD *)this + 30);
          v28 = *((_DWORD *)this + 58);
          v25 = *((_DWORD *)this + 59);
        }
        v30 = v28 + 1;
        *(_WORD *)(v27 + 2LL * v28) = v29 | 1;
        *v13 = v28 + 1;
        if ( v28 + 1 >= v25 )
        {
          Caver::FastVector<unsigned short>::Resize();
          v30 = *((_DWORD *)this + 58);
          v27 = *((_QWORD *)this + 30);
        }
        *(_WORD *)(v27 + 2LL * v30) = v29 + 3;
        *v13 = v30 + 1;
      }
      v31 = *((_DWORD *)this + 54);
      if ( v31 >= *((_DWORD *)this + 55) )
      {
        Caver::FastVector<Caver::PortalEffectComponent::Vertex>::Resize();
        v31 = *v12;
      }
      v32 = *((_QWORD *)this + 28) + 32LL * v31;
      *(float32x2_t *)v32 = v82;
      *(_DWORD *)(v32 + 8) = 0;
      *(_DWORD *)(v32 + 20) = v21;
      *(float *)(v32 + 24) = v23;
      *(_DWORD *)(v32 + 28) = 0;
      v33 = *((_DWORD *)this + 55);
      v34 = *((_DWORD *)this + 54) + 1;
      *((_DWORD *)this + 54) = v34;
      if ( v34 >= v33 )
      {
        Caver::FastVector<Caver::PortalEffectComponent::Vertex>::Resize();
        v34 = *v12;
      }
      v17 = v23;
      v35 = *((_QWORD *)this + 28) + 32LL * v34;
      *(_QWORD *)v35 = v81;
      *(_DWORD *)(v35 + 8) = 0;
      *(_DWORD *)(v35 + 20) = v21;
      *(float *)(v35 + 24) = v23;
      *(float *)(v35 + 28) = i;
      ++*((_DWORD *)this + 54);
    }
    while ( v19++ < v86 );
    if ( v86 >= 1 )
    {
      v37 = *((_QWORD *)this + 28);
      v38 = 0;
      v39 = 0;
      v40 = 0;
      do
      {
        AngleDifference(*(float *)(v37 + ((v38 >> 27) | 0x20) + 24), *(float *)(v37 + 32LL * (v39 + 3) + 24));
        v37 = *((_QWORD *)this + 28);
        ++v40;
        v42 = v37 + 32LL * v39;
        v39 += 2;
        v38 += 0x200000000LL;
        *(float *)(v42 + 24) = (float)(v41 * 0.5) + *(float *)(v42 + 24);
      }
      while ( v40 < v86 );
    }
  }
  v43 = *((_QWORD *)this + 22);
  if ( v43
    || (Caver::ComponentOutletBase::Connect((Caver::PortalEffectComponent *)((char *)this + 160), this),
        (v43 = *((_QWORD *)this + 22)) != 0) )
  {
    v44 = (float)(1.0 / *(float *)(v43 + 128));
  }
  else
  {
    v44 = 1.0;
  }
  v45 = *((int *)this + 54);
  if ( (int)v45 >= 1 )
  {
    v46 = *((_QWORD *)this + 28);
    *(double *)&v47 = *((float *)this + 63);
    *(double *)&v48 = *((float *)this + 62);
    if ( (unsigned int)v45 >= 3 )
    {
      v65 = v45 & 1;
      if ( (v45 & 1) == 0 )
        v65 = 2;
      v49 = v45 - v65;
      v66 = vdupq_lane_s64(*(__int64 *)&v44, 0);
      v67 = vdupq_lane_s64(v47, 0);
      v68 = vdupq_lane_s64(v48, 0);
      v69 = (__int128 *)(v46 + 24);
      v70 = vdupq_n_s64(0x401921FB54442D18uLL);
      v71.n64_u64[0] = vdup_n_s32(0x3C23D70Au).n64_u64[0];
      v72 = v49;
      do
      {
        v73 = *v69;
        v72 -= 2;
        v74.n64_u32[0] = vdupq_lane_s32(*(int32x2_t *)v69, 1).n128_u32[0];
        v74.n64_u32[1] = HIDWORD(*((_QWORD *)v69 + 4));
        DWORD1(v73) = v69[2];
        *(float32x2_t *)&v73 = vcvt_f32_f64(vaddq_f64(vmulq_f64(v66, vdivq_f64(vcvtq_f64_f32(*(float32x2_t *)&v73), v70)), v67));
        v75.n64_u64[0] = vcvt_f32_f64(vaddq_f64(vmulq_f64(v66, vdivq_f64(vcvtq_f64_f32(vmul_f32(v74, v71)), v70)), v68)).n64_u64[0];
        *(int32x2_t *)((char *)v69 - 12) = vzip1_s32(*(int32x2_t *)&v73, v75);
        *(int32x2_t *)((char *)v69 + 20) = vzip2_s32(*(int32x2_t *)&v73, v75);
        v69 += 4;
      }
      while ( v72 );
    }
    else
    {
      v49 = 0;
    }
    v76 = v45 - v49;
    v77 = (float *)(v46 + 32 * v49 + 16);
    do
    {
      v78 = v77[3];
      --v76;
      v79 = v44 * (v77[2] / 6.28318531) + *(double *)&v47;
      *(v77 - 1) = v79;
      v80 = v44 * ((float)(v78 * 0.01) / 6.28318531) + *(double *)&v48;
      *v77 = v80;
      v77 += 8;
    }
    while ( v76 );
  }
  if ( p )
    operator delete(p);
}

