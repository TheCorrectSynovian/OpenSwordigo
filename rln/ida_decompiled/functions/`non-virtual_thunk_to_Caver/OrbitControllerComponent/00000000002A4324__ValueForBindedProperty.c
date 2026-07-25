/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A4324
 * Mangled: _ZThn16_N5Caver24OrbitControllerComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::OrbitControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *   0x00000000002033B0  Caver::BindingValue::ValueWithVector3(Caver::Vector3 const&)
 *
 * Referenced strings: 6
 *   insn=0x00000000002A432C string=0x00000000002A4330 "?"
 *   insn=0x00000000002A4334 string=0x00000000002A4338 "A"
 *   insn=0x00000000002A4334 string=0x00000000002A434C "\t"
 *   insn=0x00000000002A4344 string=0x00000000002A4348 "Nl"
 *   insn=0x00000000002A4350 string=0x00000000002A4354 "!"
 *   insn=0x00000000002A4358 string=0x00000000002A435C "Il"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::OrbitControllerComponent::ValueForBindedProperty(
        Caver::OrbitControllerComponent *this,
        const Caver::Vector3 *a2)
{
  float *v2; // x0
  float v3; // s0

  v2 = (float *)((char *)this - 16);
  if ( (_DWORD)a2 == 2 )
  {
    v3 = v2[35];
LABEL_6:
    Caver::BindingValue::ValueWithFloat((Caver::BindingValue *)v2, v3);
    return;
  }
  if ( (_DWORD)a2 == 1 )
  {
    v3 = v2[34] * 57.296;
    goto LABEL_6;
  }
  if ( (_DWORD)a2 )
    Caver::Component::ValueForBindedProperty((Caver::Component *)v2, (int)a2);
  else
    Caver::BindingValue::ValueWithVector3((Caver::BindingValue *)(v2 + 31), a2);
}

