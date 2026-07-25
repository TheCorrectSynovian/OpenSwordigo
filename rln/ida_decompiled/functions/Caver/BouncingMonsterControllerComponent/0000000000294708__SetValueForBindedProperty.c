/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000294708
 * Mangled: _ZN5Caver34BouncingMonsterControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::BouncingMonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8E50  Caver::MonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 9
 *   insn=0x0000000000294708 string=0x000000000029470C "@"
 *   insn=0x000000000029470C string=0x0000000000294710 "?"
 *   insn=0x000000000029470C string=0x0000000000294734 "H"
 *   insn=0x0000000000294714 string=0x0000000000294718 "H"
 *   insn=0x000000000029471C string=0x0000000000294720 "!"
 *   insn=0x000000000029471C string=0x0000000000584004 "5"
 *   insn=0x0000000000294734 string=0x0000000000294738 ""
 *   insn=0x0000000000294738 string=0x000000000029473C ""
 *   insn=0x0000000000294744 string=0x00000000001F8E50 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BouncingMonsterControllerComponent::SetValueForBindedProperty(
        __int64 this,
        int a2,
        const Caver::BindingValue *a3)
{
  if ( a2 == 103 )
  {
    *(_DWORD *)(this + 268) = **((_DWORD **)a3 + 1);
  }
  else if ( a2 == 102 )
  {
    *(float *)(this + 264) = **((float **)a3 + 1) * 0.017453;
  }
  else
  {
    return Caver::MonsterControllerComponent::SetValueForBindedProperty(
             (Caver::MonsterControllerComponent *)this,
             a2,
             a3);
  }
  return this;
}

