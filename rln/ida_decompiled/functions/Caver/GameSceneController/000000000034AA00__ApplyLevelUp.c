/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000034AA00
 * Mangled: _ZN5Caver19GameSceneController12ApplyLevelUpEiii
 * Demangled: Caver::GameSceneController::ApplyLevelUp(int,int,int)
 *
 * Callers: 1
 *   0x0000000000202AF0  Caver::GameSceneController::ApplyLevelUp(int,int,int)
 *
 * Callees: 2
 *   0x00000000001F6F10  Caver::HeroEquipmentManager::ApplyLevelUp(void)
 *   0x00000000001FB110  Caver::CharacterState::ExperiencePointsRequiredForLevel(int)
 *
 * Referenced strings: 30
 *   insn=0x000000000034AA14 string=0x000000000034AA18 "h"
 *   insn=0x000000000034AA2C string=0x000000000034AA30 "7"
 *   insn=0x000000000034AA38 string=0x00000000001FB110 "0'"
 *   insn=0x000000000034AA40 string=0x000000000034AA58 "h"
 *   insn=0x000000000034AA5C string=0x000000000034AA60 "J"
 *   insn=0x000000000034AA68 string=0x000000000034AA6C "iz@"
 *   insn=0x000000000034AA6C string=0x000000000034AA70 "+"
 *   insn=0x000000000034AA70 string=0x000000000034AA74 "*}"
 *   insn=0x000000000034AA74 string=0x000000000034AA78 ""
 *   insn=0x000000000034AA78 string=0x000000000034AA7C ""
 *   insn=0x000000000034AA78 string=0x000000000034AA98 "\t"
 *   insn=0x000000000034AA7C string=0x000000000034AA80 "ky"
 *   insn=0x000000000034AA80 string=0x000000000034AA84 "k"
 *   insn=0x000000000034AA84 string=0x000000000034AA88 "_"
 *   insn=0x000000000034AA88 string=0x000000000034AA8C "j"
 *   insn=0x000000000034AA8C string=0x000000000034AA90 "J}"
 *   insn=0x000000000034AA90 string=0x000000000034AA94 "*"
 *   insn=0x000000000034AA98 string=0x000000000034AA9C "j~@"
 *   insn=0x000000000034AAA0 string=0x000000000034AAA4 "`"
 *   insn=0x000000000034AAA4 string=0x000000000034AAA8 ")}))"
 *   insn=0x000000000034AAA8 string=0x000000000034AAAC "))"
 *   insn=0x000000000034AAAC string=0x000000000034AAB0 "Iq"
 *   insn=0x000000000034AAB0 string=0x000000000034AAB4 ""
 *   insn=0x000000000034AAB4 string=0x000000000034AAB8 "})"
 *   insn=0x000000000034AAB8 string=0x000000000034AABC ")"
 *   insn=0x000000000034AABC string=0x000000000034AAC0 "?"
 *   insn=0x000000000034AAC0 string=0x000000000034AAC4 ""
 *   insn=0x000000000034AAC4 string=0x000000000034AAC8 "}"
 *   insn=0x000000000034AAC8 string=0x000000000034AACC "Hu"
 *   insn=0x000000000034AAE0 string=0x00000000001F6F10 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameSceneController::ApplyLevelUp(Caver::GameSceneController *this, int a2, int a3, int a4)
{
  _DWORD *v5; // x8
  int v9; // w24
  int v10; // w23
  int v11; // w0
  _DWORD *v12; // x8
  int v13; // w10
  __int64 v14; // x9
  int v15; // w11
  __int64 v16; // x10
  int v17; // w9
  int v18; // w8

  v5 = (_DWORD *)*((_QWORD *)this + 1);
  v9 = v5[45];
  v10 = v5[46] + 1;
  Caver::CharacterState::ExperiencePointsRequiredForLevel((Caver::CharacterState *)(v5 + 4));
  if ( v9 >= v11 )
  {
    v12 = (_DWORD *)*((_QWORD *)this + 1);
    v13 = 2 * a2 + 4;
    v12[46] = v10;
    v12[47] = a2;
    v12[48] = a3;
    v12[49] = a4;
    v14 = *((_QWORD *)this + 30);
    v15 = *(unsigned __int8 *)(v14 + 120);
    *(_DWORD *)(v14 + 124) = v13;
    if ( !v15 )
    {
      if ( v13 > 2 * v12[47] + 4 )
        v13 = 2 * v12[47] + 4;
      *(_DWORD *)(v14 + 128) = v13 & ~(v13 >> 31);
    }
    v16 = *((_QWORD *)this + 31);
    v17 = 20 * v12[49] + 10;
    *(_DWORD *)(v16 + 112) = v17;
    v18 = 20 * v12[49] + 10;
    if ( v17 <= v18 )
      v18 = v17;
    *(_DWORD *)(v16 + 116) = v18 & ~(v18 >> 31);
    Caver::HeroEquipmentManager::ApplyLevelUp((Caver::GameSceneController *)((char *)this + 256));
  }
}

