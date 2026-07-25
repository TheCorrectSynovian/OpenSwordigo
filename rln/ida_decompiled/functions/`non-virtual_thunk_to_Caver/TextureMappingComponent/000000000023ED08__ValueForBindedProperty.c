/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023ED08
 * Mangled: _ZThn16_N5Caver23TextureMappingComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::TextureMappingComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *
 * Referenced strings: 11
 *   insn=0x000000000023ED08 string=0x000000000023ED0C "H"
 *   insn=0x000000000023ED0C string=0x000000000023ED10 "*"
 *   insn=0x000000000023ED14 string=0x000000000023ED18 "J"
 *   insn=0x000000000023ED18 string=0x000000000023ED1C "Iy"
 *   insn=0x000000000023ED1C string=0x000000000023ED20 "*"
 *   insn=0x000000000023ED20 string=0x000000000023ED24 "\t@"
 *   insn=0x000000000023ED24 string=0x000000000023ED28 "@"
 *   insn=0x000000000023ED28 string=0x000000000023ED2C " "
 *   insn=0x000000000023ED28 string=0x000000000023ED44 " "
 *   insn=0x000000000023ED28 string=0x000000000023ED4C " "
 *   insn=0x000000000023ED28 string=0x000000000023ED54 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall `non-virtual thunk to'Caver::TextureMappingComponent::ValueForBindedProperty(
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
      v3 = *((float *)this + 28);
      goto LABEL_5;
    case 2:
      v3 = *((float *)this + 29);
      goto LABEL_5;
    case 3:
      v3 = *((float *)this + 30);
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

