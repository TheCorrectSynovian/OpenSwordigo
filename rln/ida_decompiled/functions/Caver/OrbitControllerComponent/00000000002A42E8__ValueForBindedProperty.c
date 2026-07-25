/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A42E8
 * Mangled: _ZN5Caver24OrbitControllerComponent22ValueForBindedPropertyEi
 * Demangled: Caver::OrbitControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *   0x00000000002033B0  Caver::BindingValue::ValueWithVector3(Caver::Vector3 const&)
 *
 * Referenced strings: 7
 *   insn=0x00000000002A42EC string=0x00000000002A42F0 "?"
 *   insn=0x00000000002A42F4 string=0x00000000002A42F8 "A"
 *   insn=0x00000000002A42F4 string=0x00000000002A430C "\t"
 *   insn=0x00000000002A42FC string=0x00000000002A4300 ",|"
 *   insn=0x00000000002A4304 string=0x00000000002A4308 "^l"
 *   insn=0x00000000002A4310 string=0x00000000002A4314 "!"
 *   insn=0x00000000002A4318 string=0x00000000002A431C "Yl"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OrbitControllerComponent::ValueForBindedProperty(
        Caver::OrbitControllerComponent *this,
        const Caver::Vector3 *a2)
{
  float v2; // s0

  if ( (_DWORD)a2 == 2 )
  {
    v2 = *((float *)this + 35);
LABEL_6:
    Caver::BindingValue::ValueWithFloat(this, v2);
    return;
  }
  if ( (_DWORD)a2 == 1 )
  {
    v2 = *((float *)this + 34) * 57.296;
    goto LABEL_6;
  }
  if ( (_DWORD)a2 )
    Caver::Component::ValueForBindedProperty(this, (int)a2);
  else
    Caver::BindingValue::ValueWithVector3((Caver::OrbitControllerComponent *)((char *)this + 124), a2);
}

