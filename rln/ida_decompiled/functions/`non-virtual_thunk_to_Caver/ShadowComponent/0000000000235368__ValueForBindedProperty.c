/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000235368
 * Mangled: _ZThn16_N5Caver15ShadowComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::ShadowComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *   0x00000000002033B0  Caver::BindingValue::ValueWithVector3(Caver::Vector3 const&)
 *
 * Referenced strings: 4
 *   insn=0x0000000000235370 string=0x0000000000235374 "?"
 *   insn=0x0000000000235380 string=0x0000000000235384 "?("
 *   insn=0x0000000000235388 string=0x000000000023538C "\t8"
 *   insn=0x0000000000235390 string=0x0000000000235394 ";("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::ShadowComponent::ValueForBindedProperty(
        Caver::ShadowComponent *this,
        const Caver::Vector3 *a2)
{
  float *v2; // x0
  float v3; // s0

  v2 = (float *)((char *)this - 16);
  switch ( (_DWORD)a2 )
  {
    case 2:
      Caver::BindingValue::ValueWithVector3((Caver::BindingValue *)(v2 + 33), a2);
      break;
    case 1:
      v3 = v2[32];
      goto LABEL_5;
    case 0:
      v3 = v2[31];
LABEL_5:
      Caver::BindingValue::ValueWithFloat((Caver::BindingValue *)v2, v3);
      return;
    default:
      Caver::Component::ValueForBindedProperty((Caver::Component *)v2, (int)a2);
      break;
  }
}

