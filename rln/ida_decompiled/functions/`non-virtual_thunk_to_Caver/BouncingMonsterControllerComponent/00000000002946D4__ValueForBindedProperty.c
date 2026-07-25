/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002946D4
 * Mangled: _ZThn16_N5Caver34BouncingMonsterControllerComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::BouncingMonsterControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA990  Caver::MonsterControllerComponent::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *
 * Referenced strings: 5
 *   insn=0x00000000002946DC string=0x00000000002946E0 "?"
 *   insn=0x00000000002946EC string=0x00000000002946F0 "!"
 *   insn=0x00000000002946F4 string=0x00000000002946F8 "b"
 *   insn=0x00000000002946FC string=0x0000000000294700 "`"
 *   insn=0x0000000000294704 string=0x00000000001FA990 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::BouncingMonsterControllerComponent::ValueForBindedProperty(
        Caver::BouncingMonsterControllerComponent *this,
        int a2)
{
  float *v2; // x0
  float v3; // s0

  v2 = (float *)((char *)this - 16);
  if ( a2 == 103 )
  {
    v3 = v2[67];
    goto LABEL_4;
  }
  if ( a2 == 102 )
  {
    v3 = v2[66] * 57.296;
LABEL_4:
    Caver::BindingValue::ValueWithFloat((Caver::BindingValue *)v2, v3);
    return;
  }
  Caver::MonsterControllerComponent::ValueForBindedProperty((Caver::MonsterControllerComponent *)v2, a2);
}

