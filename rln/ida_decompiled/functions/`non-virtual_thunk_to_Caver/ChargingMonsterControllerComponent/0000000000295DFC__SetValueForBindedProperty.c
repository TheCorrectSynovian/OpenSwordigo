/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000295DFC
 * Mangled: _ZThn16_N5Caver34ChargingMonsterControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::ChargingMonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8E50  Caver::MonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 10
 *   insn=0x0000000000295E04 string=0x0000000000295E08 "?"
 *   insn=0x0000000000295E04 string=0x0000000000295E20 "H"
 *   insn=0x0000000000295E08 string=0x0000000000295E0C "!"
 *   insn=0x0000000000295E0C string=0x0000000000295E10 "H"
 *   insn=0x0000000000295E0C string=0x0000000000295E30 ""
 *   insn=0x0000000000295E10 string=0x0000000000295E14 ""
 *   insn=0x0000000000295E14 string=0x0000000000295E18 "("
 *   insn=0x0000000000295E20 string=0x0000000000295E24 ""
 *   insn=0x0000000000295E24 string=0x0000000000295E28 ","
 *   insn=0x0000000000295E30 string=0x00000000001F8E50 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::MonsterControllerComponent *__fastcall `non-virtual thunk to'Caver::ChargingMonsterControllerComponent::SetValueForBindedProperty(
        Caver::ChargingMonsterControllerComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  Caver::MonsterControllerComponent *result; // x0

  result = (Caver::ChargingMonsterControllerComponent *)((char *)this - 16);
  if ( a2 == 104 )
  {
    *((_DWORD *)result + 75) = **((_DWORD **)a3 + 1);
  }
  else if ( a2 == 103 )
  {
    *((_DWORD *)result + 74) = **((_DWORD **)a3 + 1);
  }
  else
  {
    return (Caver::MonsterControllerComponent *)Caver::MonsterControllerComponent::SetValueForBindedProperty(
                                                  result,
                                                  a2,
                                                  a3);
  }
  return result;
}

