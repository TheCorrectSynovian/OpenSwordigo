/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000295DA0
 * Mangled: _ZThn16_N5Caver34ChargingMonsterControllerComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::ChargingMonsterControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA990  Caver::MonsterControllerComponent::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *
 * Referenced strings: 2
 *   insn=0x0000000000295DA8 string=0x0000000000295DAC "?"
 *   insn=0x0000000000295DC4 string=0x00000000001FA990 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::ChargingMonsterControllerComponent::ValueForBindedProperty(
        Caver::ChargingMonsterControllerComponent *this,
        int a2)
{
  float *v2; // x0
  float v3; // s0

  v2 = (float *)((char *)this - 16);
  if ( a2 == 104 )
  {
    v3 = v2[75];
    goto LABEL_4;
  }
  if ( a2 == 103 )
  {
    v3 = v2[74];
LABEL_4:
    Caver::BindingValue::ValueWithFloat((Caver::BindingValue *)v2, v3);
    return;
  }
  Caver::MonsterControllerComponent::ValueForBindedProperty((Caver::MonsterControllerComponent *)v2, a2);
}

