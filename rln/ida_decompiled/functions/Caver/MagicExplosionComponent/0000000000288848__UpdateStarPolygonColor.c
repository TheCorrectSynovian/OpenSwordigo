/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000288848
 * Mangled: _ZN5Caver23MagicExplosionComponent22UpdateStarPolygonColorEv
 * Demangled: Caver::MagicExplosionComponent::UpdateStarPolygonColor(void)
 *
 * Callers: 1
 *   0x00000000001F67A0  Caver::MagicExplosionComponent::UpdateStarPolygonColor(void)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000200F90  Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *
 * Referenced strings: 48
 *   insn=0x0000000000288854 string=0x0000000000288858 "T"
 *   insn=0x0000000000288864 string=0x0000000000288868 "h"
 *   insn=0x000000000028886C string=0x0000000000288870 "`"
 *   insn=0x0000000000288880 string=0x0000000000584430 "333?"
 *   insn=0x0000000000288894 string=0x0000000000288898 "!"
 *   insn=0x000000000028889C string=0x00000000002888A0 "B"
 *   insn=0x00000000002888A4 string=0x00000000002888A8 "%$"
 *   insn=0x00000000002888AC string=0x00000000002888B0 "E$"
 *   insn=0x00000000002888B4 string=0x00000000002888B8 "c"
 *   insn=0x00000000002888C4 string=0x00000000002888C8 "d$"
 *   insn=0x00000000002888C4 string=0x0000000000587824 "33"
 *   insn=0x00000000002888C8 string=0x00000000002888CC ""
 *   insn=0x00000000002888CC string=0x00000000002888D0 "?"
 *   insn=0x00000000002888D8 string=0x00000000002888DC "l"
 *   insn=0x00000000002888DC string=0x00000000002888E0 ")"
 *   insn=0x00000000002888E0 string=0x00000000002888E4 "_"
 *   insn=0x00000000002888E4 string=0x00000000002888E8 "J"
 *   insn=0x00000000002888EC string=0x00000000002888F0 "("
 *   insn=0x00000000002888F4 string=0x00000000002888F8 "H"
 *   insn=0x00000000002888F8 string=0x00000000002888FC "("
 *   insn=0x0000000000288900 string=0x0000000000288904 "i"
 *   insn=0x0000000000288908 string=0x000000000028890C "!$"
 *   insn=0x000000000028890C string=0x0000000000288910 "\n"
 *   insn=0x0000000000288910 string=0x0000000000288914 "(-"
 *   insn=0x0000000000288914 string=0x0000000000288918 "i"
 *   insn=0x0000000000288918 string=0x000000000028891C "B$"
 *   insn=0x000000000028891C string=0x0000000000288920 ","
 *   insn=0x0000000000288920 string=0x0000000000288924 "_"
 *   insn=0x0000000000288924 string=0x0000000000288928 "(="
 *   insn=0x0000000000288928 string=0x000000000028892C "i"
 *   insn=0x000000000028892C string=0x0000000000288930 "c$"
 *   insn=0x0000000000288930 string=0x0000000000288934 "M"
 *   insn=0x0000000000288934 string=0x0000000000288938 "(M"
 *   insn=0x0000000000288938 string=0x000000000028893C "I"
 *   insn=0x0000000000288940 string=0x0000000000288944 "h"
 *   insn=0x0000000000288954 string=0x0000000000288958 ""
 *   insn=0x0000000000288958 string=0x000000000028895C "k"
 *   insn=0x000000000028895C string=0x0000000000288960 "I"
 *   insn=0x0000000000288964 string=0x0000000000288968 "\t"
 *   insn=0x0000000000288968 string=0x000000000028896C "iM"
 *   insn=0x000000000028896C string=0x0000000000288970 "h"
 *   insn=0x0000000000288970 string=0x0000000000288974 "\t]"
 *   insn=0x0000000000288974 string=0x0000000000288978 "h"
 *   insn=0x0000000000288978 string=0x000000000028897C "\tm"
 *   insn=0x000000000028897C string=0x0000000000288980 "h"
 *   insn=0x0000000000288980 string=0x0000000000288984 "\t}"
 *   insn=0x0000000000288994 string=0x00000000002889A8 "J"
 *   insn=0x00000000002889A8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MagicExplosionComponent::UpdateStarPolygonColor(Caver::MagicExplosionComponent *this)
{
  unsigned int v2; // s0
  unsigned int v3; // s1
  unsigned int v4; // s2
  unsigned int v5; // s3
  float v6; // s0
  float v7; // s1
  float v8; // s2
  int v9; // w8
  int v10; // w9
  float v11; // s3
  int v12; // w10
  unsigned __int16 v13; // w8
  unsigned __int8 v14; // w9
  int v15; // w8
  float v16; // s3
  unsigned __int8 v17; // w9
  int v18; // w8
  unsigned __int8 v19; // w10
  unsigned __int8 v20; // w12
  int v21; // w9
  char v22; // [xsp+0h] [xbp-20h]
  char v23; // [xsp+1h] [xbp-1Fh]
  char v24; // [xsp+2h] [xbp-1Eh]
  char v25; // [xsp+3h] [xbp-1Dh]

  _ReadStatusReg(TPIDR_EL0);
  if ( *((_QWORD *)this + 45) )
  {
    Caver::Color::FromFloatColor();
    LOBYTE(v2) = v22;
    LOBYTE(v3) = v23;
    LOBYTE(v4) = v24;
    LOBYTE(v5) = v25;
    v6 = (float)v2;
    v7 = (float)v3;
    v8 = (float)v4;
    v9 = (int)(float)(v6 * 0.7);
    v10 = (int)(float)(v7 * 0.7);
    v11 = (float)v5;
    v12 = (int)(float)(v8 * 0.7);
    if ( v9 >= 255 )
      LOBYTE(v9) = -1;
    if ( v10 >= 255 )
      LOBYTE(v10) = -1;
    if ( v12 >= 255 )
      LOBYTE(v12) = -1;
    v13 = (unsigned __int8)v9 | ((unsigned __int8)v10 << 8);
    if ( (int)(float)(v11 * 0.7) >= 255 )
      v14 = -1;
    else
      v14 = (int)(float)(v11 * 0.7);
    v15 = v13 | ((unsigned __int8)v12 << 16) & 0xFFFFFF | (v14 << 24);
    *(_DWORD *)(*((_QWORD *)this + 45) + 28LL) = v15;
    *(_DWORD *)(*((_QWORD *)this + 45) + 44LL) = v15;
    *(_DWORD *)(*((_QWORD *)this + 45) + 60LL) = v15;
    v16 = v11 * 0.35;
    *(_DWORD *)(*((_QWORD *)this + 45) + 76LL) = v15;
    if ( (int)(float)(v6 * 0.35) >= 255 )
      v17 = -1;
    else
      v17 = (int)(float)(v6 * 0.35);
    v18 = (int)v16;
    if ( (int)(float)(v7 * 0.35) >= 255 )
      v19 = -1;
    else
      v19 = (int)(float)(v7 * 0.35);
    if ( (int)(float)(v8 * 0.35) >= 255 )
      v20 = -1;
    else
      v20 = (int)(float)(v8 * 0.35);
    if ( v18 >= 255 )
      LOBYTE(v18) = -1;
    v21 = v17 | (unsigned __int16)(v19 << 8) | (v20 << 16) & 0xFFFFFF | ((unsigned __int8)v18 << 24);
    *(_DWORD *)(*((_QWORD *)this + 45) + 76LL) = v21;
    *(_DWORD *)(*((_QWORD *)this + 45) + 92LL) = v21;
    *(_DWORD *)(*((_QWORD *)this + 45) + 108LL) = v21;
    *(_DWORD *)(*((_QWORD *)this + 45) + 124LL) = v21;
  }
}

