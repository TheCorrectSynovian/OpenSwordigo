/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027BF1C
 * Mangled: _ZN5Caver22MonsterEntityComponent6UpdateEf
 * Demangled: Caver::MonsterEntityComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000001FEAC0  Caver::MonsterEntityComponent::Update(float)
 *
 * Callees: 6
 *   0x00000000001F4590  AngleDifference(float,float)
 *   0x00000000001F59D0  Caver::Rectangle::IntersectsWithRect(Caver::Rectangle const&)
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6DE0  Caver::Vector2::Angle(void)
 *   0x00000000001FC070  Caver::EntityComponent::Update(float)
 *
 * Referenced strings: 65
 *   insn=0x000000000027BF30 string=0x000000000027BF34 "U"
 *   insn=0x000000000027BF3C string=0x000000000027BF40 ""
 *   insn=0x000000000027BF44 string=0x000000000027BF48 "h"
 *   insn=0x000000000027BF48 string=0x000000000027BF4C "h"
 *   insn=0x000000000027BF4C string=0x000000000027BF50 "H"
 *   insn=0x000000000027BF50 string=0x000000000027BF54 "`"
 *   insn=0x000000000027BF58 string=0x000000000027BF5C "h"
 *   insn=0x000000000027BF5C string=0x000000000027BF60 "\t1F"
 *   insn=0x000000000027BF68 string=0x000000000027BF6C "%"
 *   insn=0x000000000027BF6C string=0x000000000027BF70 "`"
 *   insn=0x000000000027BF6C string=0x000000000027BFB0 "h"
 *   insn=0x000000000027BF70 string=0x000000000027BF74 "  "
 *   insn=0x000000000027BF78 string=0x000000000027BF7C "hBB9"
 *   insn=0x000000000027BF80 string=0x000000000027BF84 "h"
 *   insn=0x000000000027BF94 string=0x000000000027BF98 "h"
 *   insn=0x000000000027BF94 string=0x00000000001F6DE0 "0'"
 *   insn=0x000000000027BFA0 string=0x000000000027BFA4 "\t"
 *   insn=0x000000000027BFB0 string=0x000000000027BFB4 "a"
 *   insn=0x000000000027BFB8 string=0x000000000027BFBC "u"
 *   insn=0x000000000027BFBC string=0x000000000027BFC0 "H"
 *   insn=0x000000000027BFBC string=0x00000000001F4590 "P'"
 *   insn=0x000000000027BFC0 string=0x0000000000583944 "\n"
 *   insn=0x000000000027BFC8 string=0x000000000027BFCC "@ !"
 *   insn=0x000000000027BFCC string=0x000000000027BFD0 "M"
 *   insn=0x000000000027BFD0 string=0x000000000027BFD4 "t"
 *   insn=0x000000000027BFD4 string=0x000000000027BFD8 "!\t("
 *   insn=0x000000000027BFD8 string=0x000000000027BFDC "@ !"
 *   insn=0x000000000027BFDC string=0x000000000027BFE0 "E"
 *   insn=0x000000000027BFE0 string=0x000000000027BFE4 "`"
 *   insn=0x000000000027BFE8 string=0x000000000027BFEC "H"
 *   insn=0x000000000027BFF4 string=0x000000000027BFF8 "!"
 *   insn=0x000000000027BFF8 string=0x000000000027BFFC "  ""
 *   insn=0x000000000027C008 string=0x000000000027C00C "  "
 *   insn=0x000000000027C014 string=0x000000000027C018 "`"
 *   insn=0x000000000027C018 string=0x000000000027C01C "("
 *   insn=0x000000000027C01C string=0x000000000027C020 "  "
 *   insn=0x000000000027C02C string=0x000000000027C030 "B"
 *   insn=0x000000000027C030 string=0x000000000027C034 "@ !"
 *   insn=0x000000000027C034 string=0x000000000027C038 ""
 *   insn=0x000000000027C048 string=0x000000000027C04C "U"
 *   insn=0x000000000027C04C string=0x00000000001F5DA0 "P'"
 *   insn=0x000000000027C060 string=0x000000000027C064 "`"
 *   insn=0x000000000027C060 string=0x00000000001FC070 "0'"
 *   insn=0x000000000027C064 string=0x000000000027C068 "h"
 *   insn=0x000000000027C06C string=0x000000000027C070 "`"
 *   insn=0x000000000027C070 string=0x000000000027C074 "("
 *   insn=0x000000000027C074 string=0x000000000027C078 "I"
 *   insn=0x000000000027C074 string=0x000000000027C098 "`"
 *   insn=0x000000000027C078 string=0x000000000027C07C "!"
 *   insn=0x000000000027C084 string=0x000000000027C088 "\t"
 *   insn=0x000000000027C088 string=0x000000000027C08C "i"
 *   insn=0x000000000027C090 string=0x000000000027C094 "\t"
 *   insn=0x000000000027C09C string=0x000000000027C0A0 ""
 *   insn=0x000000000027C09C string=0x000000000027C0B0 "h"
 *   insn=0x000000000027C0A4 string=0x000000000027C0A8 "e@"
 *   insn=0x000000000027C0B0 string=0x000000000027C0B4 "\t"
 *   insn=0x000000000027C0B8 string=0x000000000027C0BC "!A"
 *   insn=0x000000000027C0BC string=0x000000000027C0C0 "D"
 *   insn=0x000000000027C0C0 string=0x000000000027C0C4 "("
 *   insn=0x000000000027C0C0 string=0x00000000001F59D0 "P'"
 *   insn=0x000000000027C0C4 string=0x0000000000583734 "o"
 *   insn=0x000000000027C0D4 string=0x000000000027C0D8 "h"
 *   insn=0x000000000027C0DC string=0x000000000027C0E0 "\t"
 *   insn=0x000000000027C0F0 string=0x000000000027C10C "q"
 *   insn=0x000000000027C10C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MonsterEntityComponent::Update(Caver::MonsterEntityComponent *this, long double a2)
{
  float v4; // s9
  float v5; // s1
  int v6; // w8
  float v7; // s0
  __int64 v8; // x8
  float v9; // s0
  float v10; // s2
  __int64 v11; // x20
  float v12; // s0
  float v13; // s2
  bool v14; // cc
  float v15; // s0
  int v16; // w8
  __int64 v17; // x8
  float v18; // s0
  __int64 v19; // x0
  __int64 result; // x0
  _DWORD v21[2]; // [xsp+0h] [xbp-40h] BYREF
  __int64 v22; // [xsp+8h] [xbp-38h]

  v22 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_BYTE *)this + 236) )
  {
    v4 = 4.7124;
    v5 = 0.0;
    if ( *((float *)this + 32) < 0.1 && *((float *)this + 35) > 0.0 && !*((_BYTE *)this + 144) )
    {
      v6 = *((_DWORD *)this + 34);
      v21[1] = *((_DWORD *)this + 35);
      v21[0] = v6;
      Caver::Vector2::Angle((Caver::Vector2 *)v21);
      v4 = 1.0;
      v5 = v7 + -1.57079633;
    }
    v8 = *((_QWORD *)this + 5);
    *((float *)this + 96) = v5;
    AngleDifference(*(float *)(v8 + 128), v5);
    v10 = fabsf(v9);
    if ( v10 > 0.01 )
    {
      v11 = *((_QWORD *)this + 5);
      if ( v10 < (float)(v4 * *(float *)&a2) )
      {
        v12 = *((float *)this + 96);
        if ( fabsf(v12 - *(float *)(v11 + 128)) <= 0.0001 )
          goto LABEL_15;
        goto LABEL_13;
      }
      v13 = *(float *)(v11 + 128);
      v14 = v9 <= 0.0;
      v15 = -1.0;
      if ( !v14 )
        v15 = 1.0;
      v12 = (float)((float)(v4 * *(float *)&a2) * v15) + v13;
      if ( fabsf(v12 - v13) > 0.0001 )
      {
LABEL_13:
        v16 = *(unsigned __int8 *)(v11 + 180);
        *(float *)(v11 + 128) = v12;
        if ( !v16 )
        {
          Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v11);
          *(_BYTE *)(v11 + 180) = 1;
        }
      }
    }
  }
LABEL_15:
  Caver::EntityComponent::Update(this, *(float *)&a2);
  v17 = *((_QWORD *)this + 49);
  v18 = *((float *)this + 97) + *(float *)&a2;
  *((float *)this + 97) = v18;
  if ( v17 && v18 > 0.2 && !*(_BYTE *)(v17 + 188) )
    *(_BYTE *)(v17 + 188) = 1;
  v19 = *((_QWORD *)this + 50);
  if ( v19 )
    (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v19 + 200LL))(v19, a2);
  result = Caver::Rectangle::IntersectsWithRect(
             (Caver::Rectangle *)(*((_QWORD *)this + 5) + 164LL),
             (const Caver::Rectangle *)(*(_QWORD *)(*((_QWORD *)this + 5) + 32LL) + 144LL));
  if ( *(float *)&a2 > 0.001 && (result & 1) == 0 )
    *(_BYTE *)(*((_QWORD *)this + 5) + 232LL) = 1;
  return result;
}

