/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000297668
 * Mangled: _ZN5Caver33GenericMonsterControllerComponent19SetCurrentMoveSpeedEf
 * Demangled: Caver::GenericMonsterControllerComponent::SetCurrentMoveSpeed(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 14
 *   insn=0x0000000000297674 string=0x0000000000297678 "a"
 *   insn=0x0000000000297678 string=0x000000000029767C "h"
 *   insn=0x000000000029767C string=0x0000000000583734 "o"
 *   insn=0x0000000000297684 string=0x0000000000297688 "!"
 *   insn=0x0000000000297688 string=0x000000000029768C "  ""
 *   insn=0x0000000000297690 string=0x0000000000297694 "`r@"
 *   insn=0x0000000000297694 string=0x0000000000297698 "`"
 *   insn=0x000000000029769C string=0x00000000002976A0 "`B"
 *   insn=0x000000000029769C string=0x00000000002976B0 ""
 *   insn=0x00000000002976A8 string=0x00000000002976AC "`r@"
 *   insn=0x00000000002976A8 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002976B0 string=0x00000000002976B4 ""
 *   insn=0x00000000002976B8 string=0x00000000002976BC "`"
 *   insn=0x00000000002976BC string=0x00000000002976C0 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::GenericMonsterControllerComponent::SetCurrentMoveSpeed(
        Caver::GenericMonsterControllerComponent *this,
        float result)
{
  __int64 v3; // x0
  __int64 v4; // x0

  if ( fabsf(result - *((float *)this + 69)) > 0.001 )
  {
    v3 = *((_QWORD *)this + 28);
    *((float *)this + 69) = result;
    if ( !v3 )
    {
      Caver::ComponentOutletBase::Connect((Caver::GenericMonsterControllerComponent *)((char *)this + 208), this);
      v3 = *((_QWORD *)this + 28);
    }
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 264LL))(v3);
    result = *((float *)this + 69) / *((float *)this + 50);
    *(float *)(v4 + 52) = result;
  }
  return result;
}

