/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003CFA50
 * Mangled: _ZN5Caver13ExperienceBar17InitWithGameStateERKN5boost10shared_ptrINS_9GameStateEEE
 * Demangled: Caver::ExperienceBar::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callers: 1
 *   0x00000000001F6800  Caver::ExperienceBar::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x00000000001FF4D0  Caver::ExperienceBar::UpdateExperience(void)
 *
 * Referenced strings: 14
 *   insn=0x00000000003CFA58 string=0x00000000003CFA5C ") @"
 *   insn=0x00000000003CFA64 string=0x00000000003CFA68 "\n"
 *   insn=0x00000000003CFA64 string=0x00000000003CFA74 "t"
 *   insn=0x00000000003CFA68 string=0x00000000003CFA6C "J"
 *   insn=0x00000000003CFA6C string=0x00000000003CFA70 "\n"
 *   insn=0x00000000003CFA74 string=0x00000000003CFA78 "i""
 *   insn=0x00000000003CFA78 string=0x00000000003CFA7C "4"
 *   insn=0x00000000003CFA80 string=0x00000000003CFA84 ""
 *   insn=0x00000000003CFA94 string=0x00000000003CFA98 "\t@"
 *   insn=0x00000000003CFAA0 string=0x00000000003CFAA4 ""
 *   insn=0x00000000003CFAB4 string=0x00000000003CFAB8 "@"
 *   insn=0x00000000003CFAC4 string=0x00000000003CFAC8 "h"
 *   insn=0x00000000003CFAC8 string=0x00000000003CFACC "h"
 *   insn=0x00000000003CFAD0 string=0x00000000003CFAD4 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ExperienceBar::InitWithGameState(Caver::ExperienceBar *this, __int64 *a2)
{
  __int64 v2; // x8
  __int64 v3; // x9
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 result; // x0

  v3 = *a2;
  v2 = a2[1];
  if ( v2 )
    ++*(_QWORD *)(v2 + 8);
  v5 = (_QWORD *)*((_QWORD *)this + 33);
  *((_QWORD *)this + 32) = v3;
  *((_QWORD *)this + 33) = v2;
  if ( v5 )
  {
    v6 = v5[1] - 1LL;
    v5[1] = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v7 = v5[2] - 1LL;
      v5[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
  }
  result = Caver::ExperienceBar::UpdateExperience(this);
  if ( *((_BYTE *)this + 1016) )
    *((_BYTE *)this + 228) = 1;
  return result;
}

