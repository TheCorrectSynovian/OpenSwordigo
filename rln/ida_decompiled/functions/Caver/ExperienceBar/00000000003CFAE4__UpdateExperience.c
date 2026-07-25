/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003CFAE4
 * Mangled: _ZN5Caver13ExperienceBar16UpdateExperienceEv
 * Demangled: Caver::ExperienceBar::UpdateExperience(void)
 *
 * Callers: 1
 *   0x00000000001FF4D0  Caver::ExperienceBar::UpdateExperience(void)
 *
 * Callees: 2
 *   0x00000000001FB110  Caver::CharacterState::ExperiencePointsRequiredForLevel(int)
 *   0x00000000002020B0  Caver::ExperienceBar::SetExperience(int,int,int,int)
 *
 * Referenced strings: 14
 *   insn=0x00000000003CFAF8 string=0x00000000003CFAFC "h"
 *   insn=0x00000000003CFAFC string=0x00000000003CFB00 "i"
 *   insn=0x00000000003CFB08 string=0x00000000003CFB0C "?"
 *   insn=0x00000000003CFB0C string=0x00000000003CFB10 "V"
 *   insn=0x00000000003CFB18 string=0x00000000003CFB1C "A"
 *   insn=0x00000000003CFB20 string=0x00000000003CFB24 "{"
 *   insn=0x00000000003CFB24 string=0x00000000001FB110 "0'"
 *   insn=0x00000000003CFB28 string=0x00000000003CFB2C "a"
 *   insn=0x00000000003CFB30 string=0x00000000003CFB34 "w"
 *   insn=0x00000000003CFB34 string=0x00000000003CFB38 "a"
 *   insn=0x00000000003CFB48 string=0x00000000003CFB4C ""
 *   insn=0x00000000003CFB54 string=0x00000000003CFB58 "n"
 *   insn=0x00000000003CFB64 string=0x00000000003CFB68 "j"
 *   insn=0x00000000003CFB8C string=0x00000000003CFB90 "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ExperienceBar::UpdateExperience(Caver::ExperienceBar *this)
{
  _DWORD *v2; // x8
  int v3; // w20
  Caver::CharacterState *v4; // x21
  int v5; // w22
  int v6; // w0
  int v7; // w22
  int v8; // w1
  int v9; // w0
  int v10; // w4
  Caver::ExperienceBar *v11; // x0
  int v12; // w2
  int v13; // w3
  int v14; // w23
  int v15; // w0

  v2 = (_DWORD *)*((_QWORD *)this + 32);
  v3 = v2[45];
  v4 = (Caver::CharacterState *)(v2 + 4);
  if ( *((_DWORD *)this + 69) >= v2[46] )
    v5 = *((_DWORD *)this + 69);
  else
    v5 = v2[46];
  Caver::CharacterState::ExperiencePointsRequiredForLevel((Caver::CharacterState *)(v2 + 4));
  if ( v5 == 99 )
  {
    v7 = v6;
    Caver::CharacterState::ExperiencePointsRequiredForLevel(v4);
    v8 = 99;
    v10 = v9;
    v11 = this;
    v12 = v3;
    v13 = v7;
  }
  else
  {
    v14 = v6;
    Caver::CharacterState::ExperiencePointsRequiredForLevel(v4);
    v10 = v15;
    v11 = this;
    v8 = v5;
    v12 = v3;
    v13 = v14;
  }
  return Caver::ExperienceBar::SetExperience(v11, v8, v12, v13, v10);
}

