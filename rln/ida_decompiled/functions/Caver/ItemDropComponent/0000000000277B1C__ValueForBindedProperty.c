/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000277B1C
 * Mangled: _ZN5Caver17ItemDropComponent22ValueForBindedPropertyEi
 * Demangled: Caver::ItemDropComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x0000000000202B60  Caver::ItemDropComponent::ValueForBindedProperty(int)
 *
 * Callees: 5
 *   0x00000000001FB2C0  Caver::BindingValue::ValueWithInt(int)
 *   0x00000000001FE4F0  Caver::BindingValue::ValueWithBool(bool)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *
 * Referenced strings: 38
 *   insn=0x0000000000277B24 string=0x0000000000277B38 ")"
 *   insn=0x0000000000277B28 string=0x0000000000277B2C "q"
 *   insn=0x0000000000277B30 string=0x0000000000277B34 "o"
 *   insn=0x0000000000277B40 string=0x0000000000277B48 ")}*"
 *   insn=0x0000000000277B48 string=0x0000000000277B4C "*"
 *   insn=0x0000000000277B4C string=0x0000000000277B50 ")"
 *   insn=0x0000000000277B50 string=0x0000000000277B54 ")"
 *   insn=0x0000000000277B54 string=0x0000000000277B58 "*\t\t*"
 *   insn=0x0000000000277B58 string=0x0000000000277B5C "*"
 *   insn=0x0000000000277B5C string=0x0000000000277B60 "J"
 *   insn=0x0000000000277B60 string=0x0000000000277B64 "_"
 *   insn=0x0000000000277B64 string=0x0000000000277B68 "H"
 *   insn=0x0000000000277B6C string=0x0000000000277B74 "jy"
 *   insn=0x0000000000277B74 string=0x0000000000277B78 "J"
 *   insn=0x0000000000277B78 string=0x0000000000277B7C "@"
 *   insn=0x0000000000277B7C string=0x0000000000277B80 "\nH@"
 *   insn=0x0000000000277B7C string=0x0000000000277B94 "\nH@"
 *   insn=0x0000000000277B7C string=0x0000000000277BA8 "\nH@"
 *   insn=0x0000000000277B7C string=0x0000000000277BBC "\nH@"
 *   insn=0x0000000000277B7C string=0x0000000000277BD0 "\nH@"
 *   insn=0x0000000000277B80 string=0x0000000000277B84 ")}@"
 *   insn=0x0000000000277B84 string=0x0000000000277B88 "@"
 *   insn=0x0000000000277B88 string=0x0000000000277B8C "m""
 *   insn=0x0000000000277B94 string=0x0000000000277B98 ")}@"
 *   insn=0x0000000000277B98 string=0x0000000000277B9C "I"
 *   insn=0x0000000000277B9C string=0x0000000000277BA0 " !"
 *   insn=0x0000000000277BA0 string=0x0000000000277BA4 "g""
 *   insn=0x0000000000277BA8 string=0x0000000000277BAC ")}@"
 *   insn=0x0000000000277BAC string=0x0000000000277BB0 "I"
 *   insn=0x0000000000277BB0 string=0x0000000000277BB4 " "
 *   insn=0x0000000000277BB4 string=0x0000000000277BB8 "2"
 *   insn=0x0000000000277BBC string=0x0000000000277BC0 ")}@"
 *   insn=0x0000000000277BC0 string=0x0000000000277BC4 "I"
 *   insn=0x0000000000277BC4 string=0x0000000000277BC8 " "
 *   insn=0x0000000000277BCC string=0x00000000001FB2C0 "0'"
 *   insn=0x0000000000277BD0 string=0x0000000000277BD4 ")}@"
 *   insn=0x0000000000277BD4 string=0x0000000000277BD8 "I"
 *   insn=0x0000000000277BD8 string=0x0000000000277BDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::ItemDropComponent::ValueForBindedProperty(
        Caver::ItemDropComponent *this@<X0>,
        int a2@<W1>,
        __int64 *a3@<X8>)
{
  Caver::BindingValue *v3; // x0
  int v4; // w9
  Caver::BindingValue *v5; // x0

  if ( a2 == 1 )
  {
    v3 = (Caver::BindingValue *)*((unsigned __int8 *)this + 113);
    goto LABEL_4;
  }
  if ( !a2 )
  {
    v3 = (Caver::BindingValue *)*((unsigned __int8 *)this + 112);
LABEL_4:
    Caver::BindingValue::ValueWithBool(v3, a2);
    return;
  }
  if ( a2 < 4 )
  {
LABEL_9:
    Caver::Component::ValueForBindedProperty(this, a2);
  }
  else
  {
    v4 = (a2 - 4) / 5;
    switch ( a2 - 5 * v4 )
    {
      case 4:
      case 5:
        Caver::BindingValue::ValueWithString();
        return;
      case 6:
        Caver::BindingValue::ValueWithFloat(this, *(float *)(*((_QWORD *)this + 18) + 32LL * v4 + 16));
        return;
      case 7:
        v5 = (Caver::BindingValue *)*(unsigned int *)(*((_QWORD *)this + 18) + 32LL * v4 + 20);
        goto LABEL_12;
      case 8:
        v5 = (Caver::BindingValue *)*(unsigned int *)(*((_QWORD *)this + 18) + 32LL * v4 + 24);
LABEL_12:
        Caver::BindingValue::ValueWithInt(a3, v5, a2);
        break;
      default:
        goto LABEL_9;
    }
  }
}

