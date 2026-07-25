/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CB868
 * Mangled: _ZN5Caver7Texture25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::Texture::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x0000000000203BC0  Caver::Texture::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 0
 *
 * Referenced strings: 33
 *   insn=0x00000000004CB86C string=0x00000000004CB870 ""
 *   insn=0x00000000004CB870 string=0x00000000004CB874 "i"
 *   insn=0x00000000004CB874 string=0x00000000004CB87C "(y"
 *   insn=0x00000000004CB874 string=0x0000000000597E0C "|:"
 *   insn=0x00000000004CB87C string=0x00000000004CB880 ""
 *   insn=0x00000000004CB884 string=0x00000000004CB888 "H"
 *   insn=0x00000000004CB884 string=0x00000000004CB89C "H"
 *   insn=0x00000000004CB884 string=0x00000000004CB8B0 "I"
 *   insn=0x00000000004CB884 string=0x00000000004CB8E0 "I"
 *   insn=0x00000000004CB888 string=0x00000000004CB88C "\tH@"
 *   insn=0x00000000004CB88C string=0x00000000004CB890 ""
 *   insn=0x00000000004CB890 string=0x00000000004CB894 "("
 *   insn=0x00000000004CB89C string=0x00000000004CB8A0 "\tH@"
 *   insn=0x00000000004CB8A0 string=0x00000000004CB8A4 ""
 *   insn=0x00000000004CB8A4 string=0x00000000004CB8A8 "("
 *   insn=0x00000000004CB8B0 string=0x00000000004CB8B4 "H@"
 *   insn=0x00000000004CB8B4 string=0x00000000004CB8B8 ")"
 *   insn=0x00000000004CB8B8 string=0x00000000004CB8BC "\n"
 *   insn=0x00000000004CB8BC string=0x00000000004CB8C0 " "
 *   insn=0x00000000004CB8C0 string=0x00000000004CB8C4 "\t"
 *   insn=0x00000000004CB8C4 string=0x00000000004CB8C8 "J"
 *   insn=0x00000000004CB8D0 string=0x00000000004CB8D4 "\t"
 *   insn=0x00000000004CB8D4 string=0x00000000004CB8D8 "\t\t"
 *   insn=0x00000000004CB8E0 string=0x00000000004CB8E4 "H@"
 *   insn=0x00000000004CB8E4 string=0x00000000004CB8E8 ")"
 *   insn=0x00000000004CB8E8 string=0x00000000004CB8EC "\n"
 *   insn=0x00000000004CB8EC string=0x00000000004CB8F0 "\t\t"
 *   insn=0x00000000004CB8F0 string=0x00000000004CB8F4 "J"
 *   insn=0x00000000004CB8F8 string=0x00000000004CB8FC "!"
 *   insn=0x00000000004CB900 string=0x00000000004CB904 "\t"
 *   insn=0x00000000004CB904 string=0x00000000004CB908 "\t"
 *   insn=0x00000000004CB910 string=0x00000000004CB914 "!"
 *   insn=0x00000000004CB91C string=0x00000000004CB920 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::Texture::SetValueForBindedProperty(
        Caver::Texture *this,
        int a2,
        const Caver::BindingValue *a3,
        float result)
{
  unsigned __int8 *v4; // x8
  int v5; // w9
  int v6; // w10
  float v7; // s0
  int v8; // w9
  int v9; // w10
  float v10; // s1

  switch ( a2 )
  {
    case 5:
      *(_DWORD *)(*((_QWORD *)this + 18) + 12LL) = **((_DWORD **)a3 + 1);
      break;
    case 6:
      *(_DWORD *)(*((_QWORD *)this + 18) + 16LL) = **((_DWORD **)a3 + 1);
      break;
    case 7:
      v4 = (unsigned __int8 *)*((_QWORD *)this + 18);
      v5 = **((_DWORD **)a3 + 1);
      v6 = *v4;
      v7 = (float)v5;
      *((_DWORD *)v4 + 1) = v5;
      if ( !v6 )
      {
        v10 = (float)*((int *)v4 + 2);
        goto LABEL_10;
      }
      result = v7 / *((float *)v4 + 5);
      *((_DWORD *)v4 + 2) = llroundf(result);
      break;
    case 8:
      v4 = (unsigned __int8 *)*((_QWORD *)this + 18);
      v8 = **((_DWORD **)a3 + 1);
      v9 = *v4;
      *((_DWORD *)v4 + 2) = v8;
      if ( v9 )
      {
        result = *((float *)v4 + 5) * (float)v8;
        *((_DWORD *)v4 + 1) = llroundf(result);
      }
      else
      {
        v10 = (float)v8;
        v7 = (float)*((int *)v4 + 1);
LABEL_10:
        result = v7 / v10;
        *((float *)v4 + 5) = result;
      }
      break;
    default:
      return result;
  }
  return result;
}

