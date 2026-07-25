/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000294748
 * Mangled: _ZThn16_N5Caver34BouncingMonsterControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::BouncingMonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8E50  Caver::MonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 9
 *   insn=0x000000000029474C string=0x0000000000294750 "@"
 *   insn=0x0000000000294750 string=0x0000000000294754 "?"
 *   insn=0x0000000000294750 string=0x0000000000294778 "H"
 *   insn=0x0000000000294758 string=0x000000000029475C "H"
 *   insn=0x0000000000294760 string=0x0000000000294764 "!"
 *   insn=0x0000000000294760 string=0x0000000000584004 "5"
 *   insn=0x0000000000294778 string=0x000000000029477C ""
 *   insn=0x000000000029477C string=0x0000000000294780 ""
 *   insn=0x0000000000294788 string=0x00000000001F8E50 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::BouncingMonsterControllerComponent::SetValueForBindedProperty(
        Caver::BouncingMonsterControllerComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  __int64 result; // x0

  result = (__int64)this - 16;
  if ( a2 == 103 )
  {
    *(_DWORD *)(result + 268) = **((_DWORD **)a3 + 1);
  }
  else if ( a2 == 102 )
  {
    *(float *)(result + 264) = **((float **)a3 + 1) * 0.017453;
  }
  else
  {
    return Caver::MonsterControllerComponent::SetValueForBindedProperty(
             (Caver::MonsterControllerComponent *)result,
             a2,
             a3);
  }
  return result;
}

