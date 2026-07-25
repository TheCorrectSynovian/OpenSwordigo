/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002999A0
 * Mangled: _ZThn16_N5Caver26MonsterControllerComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::MonsterControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *
 * Referenced strings: 2
 *   insn=0x00000000002999A4 string=0x00000000002999A8 "a"
 *   insn=0x00000000002999A8 string=0x00000000002999B4 "G"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::MonsterControllerComponent::ValueForBindedProperty(
        Caver::MonsterControllerComponent *this,
        int a2)
{
  float *v2; // x0

  v2 = (float *)((char *)this - 16);
  if ( a2 == 3 )
    Caver::BindingValue::ValueWithFloat((Caver::BindingValue *)v2, v2[50]);
  else
    Caver::Component::ValueForBindedProperty((Caver::Component *)v2, a2);
}

