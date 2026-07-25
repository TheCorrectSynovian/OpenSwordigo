/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002946A4
 * Mangled: _ZN5Caver34BouncingMonsterControllerComponent22ValueForBindedPropertyEi
 * Demangled: Caver::BouncingMonsterControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA990  Caver::MonsterControllerComponent::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *
 * Referenced strings: 5
 *   insn=0x00000000002946A8 string=0x00000000002946AC "?"
 *   insn=0x00000000002946B8 string=0x00000000002946BC "!"
 *   insn=0x00000000002946C0 string=0x00000000002946C4 "o"
 *   insn=0x00000000002946C8 string=0x00000000002946CC "m"
 *   insn=0x00000000002946D0 string=0x00000000001FA990 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::BouncingMonsterControllerComponent::ValueForBindedProperty(
        Caver::BouncingMonsterControllerComponent *this,
        int a2)
{
  float v2; // s0

  if ( a2 == 103 )
  {
    v2 = *((float *)this + 67);
    goto LABEL_4;
  }
  if ( a2 == 102 )
  {
    v2 = *((float *)this + 66) * 57.296;
LABEL_4:
    Caver::BindingValue::ValueWithFloat(this, v2);
    return;
  }
  Caver::MonsterControllerComponent::ValueForBindedProperty(this, a2);
}

