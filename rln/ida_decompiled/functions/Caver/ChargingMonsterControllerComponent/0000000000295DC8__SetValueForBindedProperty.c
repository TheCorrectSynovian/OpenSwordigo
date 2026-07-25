/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000295DC8
 * Mangled: _ZN5Caver34ChargingMonsterControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::ChargingMonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8E50  Caver::MonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 9
 *   insn=0x0000000000295DCC string=0x0000000000295DD0 "?"
 *   insn=0x0000000000295DCC string=0x0000000000295DE8 "H"
 *   insn=0x0000000000295DD0 string=0x0000000000295DD4 "!"
 *   insn=0x0000000000295DD4 string=0x0000000000295DD8 "H"
 *   insn=0x0000000000295DD8 string=0x0000000000295DDC ""
 *   insn=0x0000000000295DDC string=0x0000000000295DE0 "("
 *   insn=0x0000000000295DE8 string=0x0000000000295DEC ""
 *   insn=0x0000000000295DEC string=0x0000000000295DF0 ","
 *   insn=0x0000000000295DF8 string=0x00000000001F8E50 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::MonsterControllerComponent *__fastcall Caver::ChargingMonsterControllerComponent::SetValueForBindedProperty(
        Caver::MonsterControllerComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  if ( a2 == 104 )
  {
    *((_DWORD *)this + 75) = **((_DWORD **)a3 + 1);
  }
  else if ( a2 == 103 )
  {
    *((_DWORD *)this + 74) = **((_DWORD **)a3 + 1);
  }
  else
  {
    return (Caver::MonsterControllerComponent *)Caver::MonsterControllerComponent::SetValueForBindedProperty(
                                                  this,
                                                  a2,
                                                  a3);
  }
  return this;
}

