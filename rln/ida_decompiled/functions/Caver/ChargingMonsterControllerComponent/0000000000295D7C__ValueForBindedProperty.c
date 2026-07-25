/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000295D7C
 * Mangled: _ZN5Caver34ChargingMonsterControllerComponent22ValueForBindedPropertyEi
 * Demangled: Caver::ChargingMonsterControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA990  Caver::MonsterControllerComponent::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *
 * Referenced strings: 2
 *   insn=0x0000000000295D80 string=0x0000000000295D84 "?"
 *   insn=0x0000000000295D9C string=0x00000000001FA990 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ChargingMonsterControllerComponent::ValueForBindedProperty(
        Caver::ChargingMonsterControllerComponent *this,
        int a2)
{
  float v2; // s0

  if ( a2 == 104 )
  {
    v2 = *((float *)this + 75);
    goto LABEL_4;
  }
  if ( a2 == 103 )
  {
    v2 = *((float *)this + 74);
LABEL_4:
    Caver::BindingValue::ValueWithFloat(this, v2);
    return;
  }
  Caver::MonsterControllerComponent::ValueForBindedProperty(this, a2);
}

