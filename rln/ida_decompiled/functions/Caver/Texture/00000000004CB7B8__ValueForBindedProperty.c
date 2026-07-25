/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CB7B8
 * Mangled: _ZN5Caver7Texture22ValueForBindedPropertyEi
 * Demangled: Caver::Texture::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x0000000000202F40  Caver::Texture::ValueForBindedProperty(int)
 *
 * Callees: 3
 *   0x00000000001FB2C0  Caver::BindingValue::ValueWithInt(int)
 *   0x00000000001FFD40  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *
 * Referenced strings: 20
 *   insn=0x00000000004CB7B8 string=0x00000000004CB7BC "("
 *   insn=0x00000000004CB7BC string=0x00000000004CB7C0 "j"
 *   insn=0x00000000004CB7C4 string=0x00000000004CB7C8 "J"
 *   insn=0x00000000004CB7C8 string=0x00000000004CB7CC "Iy"
 *   insn=0x00000000004CB7CC string=0x00000000004CB7D0 ")"
 *   insn=0x00000000004CB7D0 string=0x00000000004CB7D4 " "
 *   insn=0x00000000004CB7D4 string=0x00000000004CB81C "\tH@"
 *   insn=0x00000000004CB7D4 string=0x00000000004CB830 "\tH@"
 *   insn=0x00000000004CB7D4 string=0x00000000004CB848 "\tH@"
 *   insn=0x00000000004CB7D4 string=0x00000000004CB854 "\tH@"
 *   insn=0x00000000004CB7D8 string=0x00000000004CB7DC "Y"
 *   insn=0x00000000004CB800 string=0x00000000004CB83C ")"
 *   insn=0x00000000004CB80C string=0x00000000001FB2C0 "0'"
 *   insn=0x00000000004CB81C string=0x00000000004CB820 " @"
 *   insn=0x00000000004CB824 string=0x00000000004CB828 ")"
 *   insn=0x00000000004CB82C string=0x00000000004CB840 "!"
 *   insn=0x00000000004CB830 string=0x00000000004CB834 " "
 *   insn=0x00000000004CB840 string=0x00000000004CB844 "?"
 *   insn=0x00000000004CB848 string=0x00000000004CB84C " "
 *   insn=0x00000000004CB854 string=0x00000000004CB858 " \t@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::Texture::ValueForBindedProperty(Caver::Texture *this@<X0>, int a2@<W1>, __int64 *a3@<X8>)
{
  unsigned __int64 v3; // x0

  switch ( a2 )
  {
    case 0:
      Caver::BindingValue::ValueWithString();
      return;
    case 1:
    case 2:
    case 5:
    case 6:
      Caver::BindingValue::ValueWithInt();
      return;
    case 3:
      v3 = (unsigned int)(int)*((float *)this + 21);
      goto LABEL_5;
    case 4:
      v3 = (unsigned int)(int)*((float *)this + 22);
      goto LABEL_5;
    case 7:
      v3 = *(unsigned int *)(*((_QWORD *)this + 18) + 4LL);
      goto LABEL_5;
    case 8:
      v3 = *(unsigned int *)(*((_QWORD *)this + 18) + 8LL);
LABEL_5:
      Caver::BindingValue::ValueWithInt(a3, (Caver::BindingValue *)v3, a2);
      break;
    default:
      *(_DWORD *)a3 = 0;
      a3[3] = 0;
      a3[4] = 0;
      a3[1] = 0;
      a3[2] = 0;
      break;
  }
}

