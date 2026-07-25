/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029998C
 * Mangled: _ZN5Caver26MonsterControllerComponent22ValueForBindedPropertyEi
 * Demangled: Caver::MonsterControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000001FA990  Caver::MonsterControllerComponent::ValueForBindedProperty(int)
 *
 * Callees: 2
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *
 * Referenced strings: 2
 *   insn=0x000000000029998C string=0x0000000000299990 "a"
 *   insn=0x0000000000299990 string=0x000000000029999C "M"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MonsterControllerComponent::ValueForBindedProperty(
        Caver::MonsterControllerComponent *this,
        int a2)
{
  if ( a2 == 3 )
    Caver::BindingValue::ValueWithFloat(this, *((float *)this + 50));
  else
    Caver::Component::ValueForBindedProperty(this, a2);
}

