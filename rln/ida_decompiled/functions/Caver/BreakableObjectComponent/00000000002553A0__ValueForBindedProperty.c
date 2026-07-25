/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002553A0
 * Mangled: _ZN5Caver24BreakableObjectComponent22ValueForBindedPropertyEi
 * Demangled: Caver::BreakableObjectComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000001F66F0  Caver::BreakableObjectComponent::ValueForBindedProperty(int)
 *
 * Callees: 10
 *   0x00000000001F3CC0  Caver::StringForSpecialDamageType(Caver::SpecialDamageType)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA5F0  Caver::BindingValue::ValueWithProgram(Caver::Program const&)
 *   0x00000000001FB2C0  Caver::BindingValue::ValueWithInt(int)
 *   0x00000000001FE4F0  Caver::BindingValue::ValueWithBool(bool)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FFD40  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 43
 *   insn=0x00000000002553B0 string=0x00000000002553B4 "U"
 *   insn=0x00000000002553BC string=0x00000000002553C0 "?"
 *   insn=0x00000000002553C4 string=0x00000000002553C8 "H"
 *   insn=0x00000000002553CC string=0x000000000058778C "X"
 *   insn=0x00000000002553D0 string=0x00000000002553D4 ")1"
 *   insn=0x00000000002553D4 string=0x00000000002553D8 "(y"
 *   insn=0x00000000002553D8 string=0x00000000002553DC ""
 *   insn=0x00000000002553E8 string=0x00000000002553EC "A"
 *   insn=0x00000000002553EC string=0x00000000002553F0 """
 *   insn=0x00000000002553FC string=0x0000000000255400 "0z"
 *   insn=0x0000000000255400 string=0x00000000001F3CC0 "P'"
 *   insn=0x000000000025540C string=0x0000000000255410 "L"
 *   insn=0x0000000000255418 string=0x000000000025541C ")"
 *   insn=0x0000000000255428 string=0x000000000025542C "i$"
 *   insn=0x000000000025542C string=0x0000000000255430 ")=G"
 *   insn=0x0000000000255430 string=0x0000000000255434 "!"
 *   insn=0x0000000000255434 string=0x0000000000255438 ")"
 *   insn=0x0000000000255438 string=0x000000000025543C "\t"
 *   insn=0x0000000000255438 string=0x000000000025549C "\t"
 *   insn=0x000000000025543C string=0x0000000000255440 "*"
 *   insn=0x0000000000255440 string=0x0000000000255444 "\n"
 *   insn=0x000000000025544C string=0x00000000002554A8 "?"
 *   insn=0x0000000000255454 string=0x0000000000255458 "f"
 *   insn=0x0000000000255458 string=0x000000000025545C ""
 *   insn=0x0000000000255458 string=0x00000000001FA5F0 "0'"
 *   insn=0x0000000000255468 string=0x00000000001FB2C0 "0'"
 *   insn=0x000000000025549C string=0x00000000002554A0 "*"
 *   insn=0x00000000002554A0 string=0x00000000002554A4 "\n"
 *   insn=0x00000000002554A8 string=0x00000000002554AC "l"
 *   insn=0x00000000002554BC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002554C4 string=0x00000000002554C8 "J"
 *   insn=0x00000000002554CC string=0x00000000002554D0 "(a"
 *   insn=0x00000000002554D8 string=0x00000000002554DC "j$"
 *   insn=0x00000000002554DC string=0x00000000002554E0 "J=G"
 *   insn=0x00000000002554E0 string=0x00000000002554E4 ")!"
 *   insn=0x00000000002554E8 string=0x00000000002554EC "*"
 *   insn=0x00000000002554E8 string=0x0000000000255518 "*"
 *   insn=0x00000000002554EC string=0x00000000002554F0 "K"
 *   insn=0x00000000002554F0 string=0x00000000002554F4 "+"
 *   insn=0x00000000002554F8 string=0x00000000002554FC "_"
 *   insn=0x0000000000255518 string=0x000000000025551C "K"
 *   insn=0x000000000025551C string=0x0000000000255520 "+"
 *   insn=0x0000000000255520 string=0x0000000000255524 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::BreakableObjectComponent::ValueForBindedProperty(
        Caver::BreakableObjectComponent *this@<X0>,
        const Caver::Program *a2@<X1>,
        __int64 *a3@<X8>)
{
  unsigned int *v3; // x8
  int v4; // w9
  __int64 v5; // [xsp+8h] [xbp-38h]

  _ReadStatusReg(TPIDR_EL0);
  switch ( (int)a2 )
  {
    case 0:
      Caver::BindingValue::ValueWithBool((Caver::BindingValue *)*((unsigned __int8 *)this + 113), (bool)a2);
      break;
    case 1:
      Caver::BindingValue::ValueWithInt(a3, (Caver::BindingValue *)*((unsigned int *)this + 29), (int)a2);
      break;
    case 2:
      Caver::StringForSpecialDamageType();
      Caver::BindingValue::ValueWithInt();
      if ( (__int64 *)(v5 - 24) != &qword_6FD2E0 )
      {
        v3 = (unsigned int *)(v5 - 8);
        if ( &pthread_create )
        {
          do
            v4 = __ldaxr(v3);
          while ( __stlxr(v4 - 1, v3) );
        }
        else
        {
          v4 = (*v3)--;
        }
        if ( v4 <= 0 )
          operator delete((void *)(v5 - 24));
      }
      break;
    case 3:
      Caver::BindingValue::ValueWithProgram((Caver::BreakableObjectComponent *)((char *)this + 128), a2);
      break;
    default:
      Caver::Component::ValueForBindedProperty(this, (int)a2);
      break;
  }
}

