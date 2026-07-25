/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002800CC
 * Mangled: _ZN5Caver18PhysicsObjectState21UpdateSpeedComponentsEf
 * Demangled: Caver::PhysicsObjectState::UpdateSpeedComponents(float)
 *
 * Callers: 1
 *   0x00000000001FFC50  Caver::PhysicsObjectState::UpdateSpeedComponents(float)
 *
 * Callees: 0
 *
 * Referenced strings: 101
 *   insn=0x00000000002800DC string=0x00000000002800E0 "h"
 *   insn=0x00000000002800E0 string=0x00000000002800E4 ""
 *   insn=0x00000000002800E8 string=0x00000000002800EC "h"
 *   insn=0x00000000002800EC string=0x00000000002800F0 "h"
 *   insn=0x00000000002800F0 string=0x00000000002800F4 "h"
 *   insn=0x00000000002800F0 string=0x000000000028011C "("
 *   insn=0x00000000002800F8 string=0x00000000002800FC ""
 *   insn=0x00000000002800FC string=0x0000000000583734 "o"
 *   insn=0x0000000000280104 string=0x0000000000280108 "!!"
 *   insn=0x0000000000280110 string=0x0000000000280114 "M"
 *   insn=0x000000000028011C string=0x0000000000280120 "`\n@"
 *   insn=0x0000000000280120 string=0x0000000000280124 "\t5D"
 *   insn=0x000000000028012C string=0x0000000000280130 "`"
 *   insn=0x000000000028012C string=0x0000000000280144 "H"
 *   insn=0x0000000000280130 string=0x0000000000280134 "  "
 *   insn=0x0000000000280134 string=0x0000000000280138 "m"
 *   insn=0x0000000000280138 string=0x000000000028013C "hb@9"
 *   insn=0x0000000000280140 string=0x000000000028017C "h"
 *   insn=0x0000000000280148 string=0x000000000028014C "`"
 *   insn=0x0000000000280150 string=0x0000000000280154 "`"
 *   insn=0x0000000000280158 string=0x000000000028015C "@"
 *   insn=0x0000000000280158 string=0x0000000000280190 "h"
 *   insn=0x000000000028015C string=0x0000000000280160 ""
 *   insn=0x0000000000280160 string=0x0000000000280164 ""
 *   insn=0x0000000000280164 string=0x0000000000280168 "A"
 *   insn=0x0000000000280168 string=0x000000000028016C ""
 *   insn=0x000000000028016C string=0x0000000000280170 ""
 *   insn=0x000000000028017C string=0x0000000000280180 "`"
 *   insn=0x0000000000280180 string=0x0000000000280184 "hN"
 *   insn=0x0000000000280184 string=0x0000000000280188 ""
 *   insn=0x0000000000280188 string=0x000000000028018C "hZ"
 *   insn=0x0000000000280194 string=0x0000000000280198 "("
 *   insn=0x0000000000280198 string=0x000000000028019C ""
 *   insn=0x0000000000280198 string=0x000000000028021C "h"
 *   insn=0x000000000028019C string=0x00000000002801A0 "a\n@"
 *   insn=0x000000000028019C string=0x0000000000583944 "\n"
 *   insn=0x00000000002801A4 string=0x00000000002801A8 "   "
 *   insn=0x00000000002801A8 string=0x00000000002801AC "%"
 *   insn=0x00000000002801AC string=0x00000000002801B0 "hb@9"
 *   insn=0x00000000002801AC string=0x0000000000280210 "`r@"
 *   insn=0x00000000002801B4 string=0x00000000002801B8 "h"
 *   insn=0x00000000002801BC string=0x00000000002801C0 "aj@"
 *   insn=0x00000000002801C0 string=0x00000000002801C4 "!"
 *   insn=0x00000000002801C4 string=0x00000000002801C8 "   "
 *   insn=0x00000000002801C8 string=0x00000000002801CC "("
 *   insn=0x00000000002801CC string=0x00000000002801D0 "an@"
 *   insn=0x00000000002801D4 string=0x00000000002801D8 "!(""
 *   insn=0x00000000002801D8 string=0x00000000002801DC "!"
 *   insn=0x00000000002801DC string=0x00000000002801E0 "   "
 *   insn=0x00000000002801E0 string=0x00000000002801E4 "h"
 *   insn=0x00000000002801E4 string=0x00000000002801E8 "("
 *   insn=0x00000000002801E8 string=0x00000000002801EC "`2@"
 *   insn=0x00000000002801E8 string=0x000000000058493C "fff?"
 *   insn=0x00000000002801F8 string=0x00000000002801FC "`\n@"
 *   insn=0x00000000002801FC string=0x0000000000280200 "ar@"
 *   insn=0x0000000000280210 string=0x0000000000280214 "a6@"
 *   insn=0x0000000000280214 string=0x0000000000280218 " "
 *   insn=0x0000000000280224 string=0x0000000000280228 "d"
 *   insn=0x000000000028022C string=0x0000000000280230 "h"
 *   insn=0x0000000000280230 string=0x0000000000280234 "!(""
 *   insn=0x0000000000280238 string=0x000000000028023C "b"
 *   insn=0x000000000028023C string=0x0000000000280240 "$$"
 *   insn=0x0000000000280240 string=0x0000000000280244 "!""
 *   insn=0x0000000000280250 string=0x0000000000280254 "!(#"
 *   insn=0x0000000000280254 string=0x0000000000280258 "`"
 *   insn=0x000000000028025C string=0x0000000000280260 "a"
 *   insn=0x000000000028025C string=0x0000000000280278 "b\n@"
 *   insn=0x0000000000280260 string=0x0000000000280264 "(  "
 *   insn=0x0000000000280270 string=0x0000000000280274 ""
 *   insn=0x0000000000280270 string=0x00000000002802A4 "a^"
 *   insn=0x0000000000280274 string=0x00000000002802A8 "h"
 *   insn=0x0000000000280278 string=0x000000000028027C "a>@"
 *   insn=0x000000000028027C string=0x0000000000280280 "@ )"
 *   insn=0x0000000000280280 string=0x0000000000280284 "%"
 *   insn=0x0000000000280284 string=0x0000000000280288 "b"
 *   insn=0x0000000000280284 string=0x00000000002802C8 "b2@"
 *   insn=0x0000000000280288 string=0x000000000028028C "H  "
 *   insn=0x0000000000280290 string=0x0000000000280294 "b2@"
 *   insn=0x0000000000280298 string=0x00000000002802FC "c:@"
 *   insn=0x000000000028029C string=0x00000000002802A0 "E"
 *   insn=0x00000000002802A8 string=0x00000000002802AC "h"
 *   insn=0x00000000002802AC string=0x00000000002802B0 "hB@"
 *   insn=0x00000000002802B0 string=0x00000000002802B4 "hb"
 *   insn=0x00000000002802CC string=0x00000000002802D0 "@ #"
 *   insn=0x00000000002802D0 string=0x00000000002802D4 "E"
 *   insn=0x00000000002802E0 string=0x00000000002802E4 "@ #"
 *   insn=0x00000000002802E4 string=0x00000000002802E8 "b2"
 *   insn=0x00000000002802F0 string=0x00000000002802F4 "b"
 *   insn=0x00000000002802F4 string=0x00000000002802F8 "h2"
 *   insn=0x00000000002802FC string=0x0000000000280300 "!""
 *   insn=0x0000000000280300 string=0x0000000000280304 "$("
 *   insn=0x0000000000280308 string=0x000000000028030C "B"
 *   insn=0x000000000028030C string=0x0000000000280310 "@ $"
 *   insn=0x0000000000280310 string=0x0000000000280314 ")"
 *   insn=0x0000000000280314 string=0x0000000000280318 "b8 "
 *   insn=0x0000000000280314 string=0x0000000000280338 "c^"
 *   insn=0x000000000028031C string=0x0000000000280320 "H  "
 *   insn=0x0000000000280324 string=0x0000000000280328 "B"
 *   insn=0x0000000000280328 string=0x000000000028032C "!""
 *   insn=0x000000000028032C string=0x0000000000280330 "!("
 *   insn=0x0000000000280338 string=0x000000000028033C "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PhysicsObjectState::UpdateSpeedComponents(__int64 this, float a2)
{
  __int64 v2; // x19
  float v4; // s0
  int v5; // w8
  int v6; // w8
  float32x2_t v7; // d0
  int v8; // w8
  float v9; // s1
  float v10; // s0
  float v11; // s3
  float v12; // s0
  float v13; // s1
  float v14; // s1
  float v15; // s1
  float v16; // s2
  float v17; // s3
  float v18; // s1
  float v19; // s2

  v2 = this;
  if ( *(_BYTE *)(this + 116) )
  {
    if ( *(_BYTE *)(this + 100)
      && (float)((float)(*(float *)(*(_QWORD *)this + 104LL) * *(float *)(*(_QWORD *)this + 104LL))
               + (float)(*(float *)(*(_QWORD *)this + 108LL) * *(float *)(*(_QWORD *)this + 108LL))) > 0.001 )
    {
      *(_BYTE *)(this + 100) = 0;
    }
    if ( *(float *)(this + 8) >= 0.1 || (v4 = *(float *)(this + 20), v4 <= 0.0) || *(_BYTE *)(this + 24) )
    {
      this = *(_QWORD *)(this + 32);
      *(_QWORD *)(v2 + 32) = 0;
      *(_OWORD *)(v2 + 76) = xmmword_5888E0;
      if ( this )
      {
        v5 = *(_DWORD *)(this + 8) - 1;
        *(_DWORD *)(this + 8) = v5;
        if ( !v5 )
          this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)this + 8LL))(this);
      }
    }
    else
    {
      v6 = *(_DWORD *)(this + 16);
      *(float *)(this + 80) = v4;
      *(float *)(this + 84) = v4;
      *(_DWORD *)(this + 76) = v6;
      *(_DWORD *)(this + 88) = v6 ^ 0x80000000;
    }
    v7.n64_u64[0] = 0;
    if ( !*(_BYTE *)(v2 + 101) )
    {
      if ( *(float *)(v2 + 8) >= 0.01
        || *(_BYTE *)(v2 + 24)
        || *(_BYTE *)(v2 + 117)
        || fabsf(*(float *)(v2 + 104)) > 0.01
        || fabsf(*(float *)(v2 + 108) + 1.0) > 0.01
        || *(float *)(v2 + 48) <= 0.9 )
      {
        v7.n64_u64[0] = vmul_n_f32(*(float32x2_t *)(v2 + 104), *(float *)(v2 + 112)).n64_u64[0];
      }
      else
      {
        v7.n64_u64[0] = vneg_f32(vmul_n_f32(*(float32x2_t *)(v2 + 16), *(float *)(v2 + 112))).n64_u64[0];
      }
    }
    v8 = *(unsigned __int8 *)(v2 + 124);
    v9 = vmuls_n_f32(a2, v7.n64_f32[0]) + *(float *)(*(_QWORD *)v2 + 104LL);
    v10 = vmuls_lane_f32(a2, v7, 1) + *(float *)(*(_QWORD *)v2 + 108LL);
    v11 = v10 * *(float *)(v2 + 80);
    v12 = (float)(v9 * *(float *)(v2 + 84)) + (float)(v10 * *(float *)(v2 + 88));
    v13 = (float)(v9 * *(float *)(v2 + 76)) + v11;
    *(float *)(v2 + 92) = v12;
    *(float *)(v2 + 96) = v13;
    if ( v8 )
    {
      v14 = *(float *)(v2 + 128);
      if ( v14 >= 0.0 )
      {
        if ( v12 >= v14 )
          goto LABEL_30;
      }
      else if ( v12 <= v14 )
      {
LABEL_30:
        if ( !*(_BYTE *)(v2 + 68) )
          return this;
        goto LABEL_31;
      }
      *(float *)(v2 + 92) = v14;
      goto LABEL_30;
    }
    v15 = *(float *)(v2 + 60);
    if ( *(float *)(v2 + 8) >= 0.1 || *(float *)(v2 + 20) <= 0.0 )
    {
      v16 = *(float *)(v2 + 48);
      if ( v16 < 1.0 )
      {
        v16 = (float)(a2 * 0.5) + v16;
        *(float *)(v2 + 48) = v16;
        if ( v16 > 1.0 )
        {
          v16 = 1.0;
          *(_DWORD *)(v2 + 48) = 1065353216;
        }
      }
    }
    else
    {
      v16 = *(float *)(v2 + 48);
    }
    v17 = *(float *)(v2 + 56);
    v18 = v15 * v16;
    if ( fabsf(v12 - v17) > (float)(v18 * a2) )
    {
      v19 = 1.0;
      if ( (float)(v17 - v12) <= 0.0 )
        v19 = -1.0;
      v17 = v12 + (float)((float)(v18 * v19) * a2);
    }
    *(float *)(v2 + 92) = v17;
    if ( *(_BYTE *)(v2 + 68) )
LABEL_31:
      *(_DWORD *)(v2 + 96) = *(_DWORD *)(v2 + 64);
  }
  return this;
}

