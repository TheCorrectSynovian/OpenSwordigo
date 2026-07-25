/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023ECB8
 * Mangled: _ZN5Caver23TextureMappingComponent22ValueForBindedPropertyEi
 * Demangled: Caver::TextureMappingComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *
 * Referenced strings: 6
 *   insn=0x000000000023ECB8 string=0x000000000023ECBC "("
 *   insn=0x000000000023ECBC string=0x000000000023ECC0 "*"
 *   insn=0x000000000023ECC4 string=0x000000000023ECC8 "Ja("
 *   insn=0x000000000023ECC8 string=0x000000000023ECCC "Iy"
 *   insn=0x000000000023ECCC string=0x000000000023ECD0 ")"
 *   insn=0x000000000023ECD0 string=0x000000000023ECD4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::TextureMappingComponent::ValueForBindedProperty(
        Caver::TextureMappingComponent *this@<X0>,
        int a2@<W1>,
        __int64 a3@<X8>)
{
  float v3; // s0

  switch ( a2 )
  {
    case 0:
      Caver::BindingValue::ValueWithString();
      return;
    case 1:
      v3 = *((float *)this + 32);
      goto LABEL_5;
    case 2:
      v3 = *((float *)this + 33);
      goto LABEL_5;
    case 3:
      v3 = *((float *)this + 34);
LABEL_5:
      Caver::BindingValue::ValueWithFloat(this, v3);
      break;
    default:
      *(_DWORD *)a3 = 0;
      *(_QWORD *)(a3 + 24) = 0;
      *(_QWORD *)(a3 + 32) = 0;
      *(_QWORD *)(a3 + 8) = 0;
      *(_QWORD *)(a3 + 16) = 0;
      break;
  }
}

