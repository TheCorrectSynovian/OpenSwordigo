/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000262AE8
 * Mangled: _ZN5Caver24CollectableItemComponent22ValueForBindedPropertyEi
 * Demangled: Caver::CollectableItemComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000001F5FE0  Caver::CollectableItemComponent::ValueForBindedProperty(int)
 *
 * Callees: 6
 *   0x00000000001FA5F0  Caver::BindingValue::ValueWithProgram(Caver::Program const&)
 *   0x00000000001FB2C0  Caver::BindingValue::ValueWithInt(int)
 *   0x00000000001FE4F0  Caver::BindingValue::ValueWithBool(bool)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FFD40  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *
 * Referenced strings: 12
 *   insn=0x0000000000262AEC string=0x0000000000262AF0 "*"
 *   insn=0x0000000000262AF0 string=0x0000000000587CD4 "4"
 *   insn=0x0000000000262AF4 string=0x0000000000262AF8 "JQ3"
 *   insn=0x0000000000262AF8 string=0x0000000000262AFC "Iy"
 *   insn=0x0000000000262AFC string=0x0000000000262B00 ")"
 *   insn=0x0000000000262B00 string=0x0000000000262B04 " "
 *   insn=0x0000000000262B04 string=0x0000000000262B08 ")$"
 *   insn=0x0000000000262B0C string=0x0000000000262B10 ")MC"
 *   insn=0x0000000000262B10 string=0x0000000000262B14 "!"
 *   insn=0x0000000000262B24 string=0x00000000001FB2C0 "0'"
 *   insn=0x0000000000262B38 string=0x0000000000262B3C "mn"
 *   insn=0x0000000000262B44 string=0x00000000001FA5F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::CollectableItemComponent::ValueForBindedProperty(
        Caver::CollectableItemComponent *this@<X0>,
        const Caver::Program *a2@<X1>,
        __int64 *a3@<X8>)
{
  switch ( (int)a2 )
  {
    case 0:
      Caver::BindingValue::ValueWithInt();
      break;
    case 1:
      Caver::BindingValue::ValueWithInt(a3, (Caver::BindingValue *)*((unsigned int *)this + 29), (int)a2);
      break;
    case 2:
    case 3:
      Caver::BindingValue::ValueWithString();
      break;
    case 4:
      Caver::BindingValue::ValueWithBool((Caver::BindingValue *)*((unsigned __int8 *)this + 136), (bool)a2);
      break;
    case 5:
      Caver::BindingValue::ValueWithProgram((Caver::CollectableItemComponent *)((char *)this + 144), a2);
      break;
    default:
      Caver::Component::ValueForBindedProperty(this, (int)a2);
      break;
  }
}

