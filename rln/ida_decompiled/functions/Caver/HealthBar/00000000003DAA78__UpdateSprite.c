/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003DAA78
 * Mangled: _ZN5Caver9HealthBar12UpdateSpriteEv
 * Demangled: Caver::HealthBar::UpdateSprite(void)
 *
 * Callers: 1
 *   0x00000000001FAFE0  Caver::HealthBar::UpdateSprite(void)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9830  Caver::Sprite::Clear(void)
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *   0x0000000000200B90  Caver::Sprite::AddRectangle(Caver::Rectangle const&,Caver::Rectangle const&,Caver::Color const&)
 *
 * Referenced strings: 68
 *   insn=0x00000000003DAA9C string=0x00000000003DAAA0 "H"
 *   insn=0x00000000003DAAA4 string=0x00000000003DAAA8 ""
 *   insn=0x00000000003DAAAC string=0x00000000003DAAB0 "t"
 *   insn=0x00000000003DAAB8 string=0x00000000003DAABC "v"
 *   insn=0x00000000003DAABC string=0x00000000003DAAC0 "\{"
 *   insn=0x00000000003DAAC0 string=0x00000000001F9830 "0'"
 *   insn=0x00000000003DAACC string=0x00000000003DAAD0 "h"
 *   insn=0x00000000003DAAD4 string=0x00000000003DAAD8 "h"
 *   insn=0x00000000003DAADC string=0x00000000003DAAE0 "H"
 *   insn=0x00000000003DAAE0 string=0x00000000003DAAE4 "=I"
 *   insn=0x00000000003DAAE0 string=0x000000000058493C "fff?"
 *   insn=0x00000000003DAAF4 string=0x00000000003DAAF8 "x"
 *   insn=0x00000000003DAAF8 string=0x00000000003DAAFC "{r"
 *   insn=0x00000000003DAAFC string=0x00000000003DAB00 "<}"
 *   insn=0x00000000003DAB00 string=0x00000000003DAB04 "\t"
 *   insn=0x00000000003DAB10 string=0x00000000003DAB20 "i"
 *   insn=0x00000000003DAB18 string=0x00000000003DAB1C "b"
 *   insn=0x00000000003DAB30 string=0x00000000003DAB44 "`"
 *   insn=0x00000000003DAB3C string=0x00000000003DAB40 ""
 *   insn=0x00000000003DAB44 string=0x00000000003DAB48 "i"D9"
 *   insn=0x00000000003DAB50 string=0x00000000003DAB54 "\t"
 *   insn=0x00000000003DAB54 string=0x00000000003DAB58 "h"
 *   insn=0x00000000003DAB58 string=0x00000000003DAB5C "b"
 *   insn=0x00000000003DAB5C string=0x00000000003DAB60 "c"
 *   insn=0x00000000003DAB64 string=0x00000000003DAB68 ""
 *   insn=0x00000000003DAB68 string=0x00000000003DAB6C "}"
 *   insn=0x00000000003DAB6C string=0x00000000003DAB70 ""
 *   insn=0x00000000003DAB74 string=0x00000000003DAB78 "$$"
 *   insn=0x00000000003DAB78 string=0x00000000003DAB7C "B)"
 *   insn=0x00000000003DAB80 string=0x00000000003DAB84 "b(""
 *   insn=0x00000000003DAB88 string=0x00000000003DAB8C "B8#"
 *   insn=0x00000000003DAB90 string=0x00000000003DAB98 "e"A"
 *   insn=0x00000000003DAB9C string=0x00000000003DABA0 "d"
 *   insn=0x00000000003DABA0 string=0x00000000003DABA4 "!#"
 *   insn=0x00000000003DABA4 string=0x00000000003DABA8 "!(""
 *   insn=0x00000000003DABAC string=0x00000000003DABB0 "!@&"
 *   insn=0x00000000003DABB4 string=0x00000000003DABB8 " ( "
 *   insn=0x00000000003DABD0 string=0x00000000003DABD4 "h&Y"
 *   insn=0x00000000003DABD0 string=0x00000000001FDA30 "0'"
 *   insn=0x00000000003DABD4 string=0x00000000003DABD8 "k"
 *   insn=0x00000000003DABD8 string=0x00000000003DABDC ")"
 *   insn=0x00000000003DABDC string=0x00000000003DABE0 ")"
 *   insn=0x00000000003DABE0 string=0x00000000003DABE4 "?"
 *   insn=0x00000000003DABE4 string=0x00000000003DABE8 ")"
 *   insn=0x00000000003DABE8 string=0x00000000003DABEC "yw"
 *   insn=0x00000000003DABF0 string=0x00000000003DABF4 "iz@"
 *   insn=0x00000000003DABF4 string=0x00000000003DABF8 "?"
 *   insn=0x00000000003DABFC string=0x00000000003DAC00 "\t"
 *   insn=0x00000000003DAC04 string=0x00000000003DAC08 ""
 *   insn=0x00000000003DAC04 string=0x00000000003DAC94 "\t"
 *   insn=0x00000000003DAC18 string=0x00000000003DACA8 "k"
 *   insn=0x00000000003DAC24 string=0x00000000003DAC28 "\t@"
 *   insn=0x00000000003DAC30 string=0x00000000003DAC34 ""
 *   insn=0x00000000003DAC44 string=0x00000000003DAC48 "@"
 *   insn=0x00000000003DAC58 string=0x00000000003DAC5C "a"
 *   insn=0x00000000003DAC6C string=0x00000000003DAC70 "h"
 *   insn=0x00000000003DAC80 string=0x00000000003DAC84 "h"
 *   insn=0x00000000003DAC84 string=0x00000000003DAC88 "yw"
 *   insn=0x00000000003DAC88 string=0x00000000003DAC8C "\t"
 *   insn=0x00000000003DAC98 string=0x00000000003DAC9C "UI"
 *   insn=0x00000000003DAC98 string=0x00000000003DAB14 ""
 *   insn=0x00000000003DACAC string=0x00000000003DACB0 "a"
 *   insn=0x00000000003DACB0 string=0x00000000003DACB4 ""s"
 *   insn=0x00000000003DACD0 string=0x00000000003DACD4 "_"
 *   insn=0x00000000003DACE4 string=0x00000000003DACE8 ""
 *   insn=0x00000000003DACF0 string=0x00000000003DACF4 "a"
 *   insn=0x00000000003DACF4 string=0x00000000003DAD20 "lm"
 *   insn=0x00000000003DAD20 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::HealthBar::UpdateSprite(Caver::HealthBar *this)
{
  Caver::Sprite *v2; // x20
  int v3; // w22
  __int64 result; // x0
  int v5; // w9
  __int64 v6; // x23
  unsigned __int64 v7; // x21
  unsigned __int64 v8; // x28
  float *v9; // x8
  _QWORD *v10; // x21
  __int64 v11; // t2
  unsigned int v12; // w9
  char *v13; // x8
  float v14; // s0
  __int64 v15; // x25
  float v16; // s1
  float v17; // s2
  float v18; // s5
  float v19; // s4
  unsigned __int64 v20; // x26
  __int64 v21; // x8
  float32x2_t v22; // d11
  __int64 v23; // x8
  __int64 v24; // t2
  float v25; // s0
  __int64 v26; // x8
  __int64 v27; // x8
  __int64 v28; // t2
  float v29; // [xsp+10h] [xbp-C0h]
  int v30; // [xsp+34h] [xbp-9Ch] BYREF
  unsigned __int64 v31; // [xsp+38h] [xbp-98h] BYREF
  unsigned __int64 v32; // [xsp+40h] [xbp-90h]
  float v33[2]; // [xsp+48h] [xbp-88h] BYREF
  float32x2_t v34[2]; // [xsp+50h] [xbp-80h] BYREF

  v2 = (Caver::HealthBar *)((char *)this + 296);
  v34[1] = *(float32x2_t *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *((_DWORD *)this + 67);
  result = Caver::Sprite::Clear((Caver::HealthBar *)((char *)this + 296));
  if ( (unsigned int)(v3 + 1) >= 3 )
  {
    if ( v3 >= 0 )
      v5 = v3;
    else
      v5 = v3 + 1;
    v6 = 0;
    v7 = 0;
    v8 = (unsigned int)(v5 >> 1);
    do
    {
      v12 = *((_DWORD *)this + 69);
      v13 = (char *)this + 240;
      if ( (int)v6 + 2 > v12 )
      {
        v13 = (char *)this + 256;
        if ( (int)v6 + 1 <= v12 )
          v13 = (char *)this + 248;
      }
      v14 = *((float *)this + 71);
      v15 = *(_QWORD *)v13;
      v16 = v14 * 0.9;
      if ( *((_BYTE *)this + 264) )
        v17 = (float)(*((float *)this + 33) + (float)(*((float *)this + 35) * 0.5))
            - (float)((float)(*((float *)this + 71) + (float)(v16 * (float)(*((_DWORD *)this + 67) / 2 - 1))) * 0.5);
      else
        v17 = 0.0;
      v18 = *((float *)this + 72);
      v19 = *((float *)this + 34);
      v20 = v7 + 1;
      v33[0] = roundf((float)(v16 * (float)(int)v7) + v17) + (float)(v14 * 0.5);
      v33[1] = v19 + (float)(v18 * 0.5);
      Caver::Vector2::Rounded((__int64 *)v34, (Caver::Vector2 *)v33);
      v21 = *((_QWORD *)this + 50);
      v22.n64_u64[0] = *(unsigned __int64 *)((char *)this + 284);
      if ( (*((_QWORD *)this + 51) - v21) >> 4 <= v7 )
        goto LABEL_28;
      v23 = *(_QWORD *)(v21 + 8 * v6);
      if ( !v23 )
        goto LABEL_28;
      if ( *((_QWORD *)this + 30) == v15 )
      {
        v31 = vsub_f32(v34[0], vmul_f32(v22, (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
        v32 = v22.n64_u64[0];
        v27 = *((_QWORD *)this + 32);
        v30 = -1;
        Caver::Sprite::AddRectangle(
          v2,
          (const Caver::Rectangle *)&v31,
          (const Caver::Rectangle *)(v27 + 92),
          (const Caver::Color *)&v30);
        v23 = *(_QWORD *)(*((_QWORD *)this + 50) + 8 * v6);
        if ( *(_DWORD *)(v23 + 160) )
        {
LABEL_18:
          v24 = v23 + 168;
          v9 = *(float **)(v23 + 168);
          v10 = *(_QWORD **)(v24 + 8);
          if ( v10 )
            goto LABEL_19;
          goto LABEL_26;
        }
      }
      else if ( *(_DWORD *)(v23 + 160) )
      {
        goto LABEL_18;
      }
      if ( *(_BYTE *)(v23 + 100) )
      {
        v28 = v23 + 144;
        v9 = *(float **)(v23 + 144);
        v10 = *(_QWORD **)(v28 + 8);
        if ( v10 )
        {
LABEL_19:
          v25 = *v9;
          if ( !v10[1] )
          {
            v29 = *v9;
            (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
            v26 = v10[2] - 1LL;
            v10[2] = v26;
            if ( !v26 )
              (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
            v25 = v29;
          }
          goto LABEL_27;
        }
      }
      else
      {
        v11 = v23 + 120;
        v9 = *(float **)(v23 + 120);
        v10 = *(_QWORD **)(v11 + 8);
        if ( v10 )
          goto LABEL_19;
      }
LABEL_26:
      v25 = *v9;
LABEL_27:
      v22.n64_u64[0] = vmul_n_f32(v22, v25).n64_u64[0];
LABEL_28:
      v31 = vsub_f32(v34[0], vmul_f32(v22, (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
      v32 = v22.n64_u64[0];
      v30 = -1;
      result = Caver::Sprite::AddRectangle(
                 v2,
                 (const Caver::Rectangle *)&v31,
                 (const Caver::Rectangle *)(v15 + 92),
                 (const Caver::Color *)&v30);
      v6 += 2;
      v7 = v20;
    }
    while ( v20 < v8 );
  }
  return result;
}

