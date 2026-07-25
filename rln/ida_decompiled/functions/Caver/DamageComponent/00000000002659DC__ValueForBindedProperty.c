/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002659DC
 * Mangled: _ZN5Caver15DamageComponent22ValueForBindedPropertyEi
 * Demangled: Caver::DamageComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000001F8D30  Caver::DamageComponent::ValueForBindedProperty(int)
 *
 * Callees: 12
 *   0x00000000001F3CC0  Caver::StringForSpecialDamageType(Caver::SpecialDamageType)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB2C0  Caver::BindingValue::ValueWithInt(int)
 *   0x00000000001FE4F0  Caver::BindingValue::ValueWithBool(bool)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *   0x00000000001FFD40  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *   0x0000000000265C8C  `non-virtual thunk to'Caver::DamageComponent::ValueForBindedProperty(int)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 71
 *   insn=0x00000000002659EC string=0x00000000002659F0 "U"
 *   insn=0x00000000002659F8 string=0x00000000002659FC "? "
 *   insn=0x0000000000265A04 string=0x0000000000265A08 "\t"
 *   insn=0x0000000000265A08 string=0x0000000000587DD4 "L"
 *   insn=0x0000000000265A0C string=0x0000000000265A10 ")Q7"
 *   insn=0x0000000000265A10 string=0x0000000000265A14 "(y"
 *   insn=0x0000000000265A14 string=0x0000000000265A18 ""
 *   insn=0x0000000000265A1C string=0x0000000000265ABC ""
 *   insn=0x0000000000265A20 string=0x0000000000265A24 "("
 *   insn=0x0000000000265A28 string=0x0000000000265A2C "0"
 *   insn=0x0000000000265A34 string=0x0000000000265A38 "`"
 *   insn=0x0000000000265A3C string=0x0000000000265B1C "A"
 *   insn=0x0000000000265A40 string=0x0000000000587E20 "enemy"
 *   insn=0x0000000000265A4C string=0x0000000000265A50 "Z"
 *   insn=0x0000000000265A50 string=0x0000000000265A54 "7"
 *   insn=0x0000000000265A64 string=0x00000000001F3CC0 "P'"
 *   insn=0x0000000000265A78 string=0x0000000000265A7C "\t$"
 *   insn=0x0000000000265A7C string=0x0000000000265A80 ")"
 *   insn=0x0000000000265A88 string=0x0000000000265A8C "`"
 *   insn=0x0000000000265A90 string=0x0000000000265A94 ")=G"
 *   insn=0x0000000000265A94 string=0x0000000000265A98 "!"
 *   insn=0x0000000000265A98 string=0x0000000000265A9C ")"
 *   insn=0x0000000000265A9C string=0x0000000000265AA0 "\t"
 *   insn=0x0000000000265A9C string=0x0000000000265BA0 "\t"
 *   insn=0x0000000000265AA0 string=0x0000000000265AA4 "*"
 *   insn=0x0000000000265AA4 string=0x0000000000265AA8 "\n"
 *   insn=0x0000000000265AAC string=0x0000000000265AB0 "?"
 *   insn=0x0000000000265AB0 string=0x0000000000265BAC "?"
 *   insn=0x0000000000265AB4 string=0x0000000000265AB8 ""
 *   insn=0x0000000000265ABC string=0x0000000000265AC0 " "
 *   insn=0x0000000000265AC8 string=0x0000000000265ACC "#"
 *   insn=0x0000000000265AC8 string=0x00000000001FB2C0 "0'"
 *   insn=0x0000000000265ADC string=0x0000000000265AE0 "hf"
 *   insn=0x0000000000265B04 string=0x0000000000587E26 "friendly"
 *   insn=0x0000000000265B10 string=0x0000000000265B14 ")"
 *   insn=0x0000000000265B28 string=0x0000000000265B2C "#"
 *   insn=0x0000000000265B40 string=0x0000000000265B44 "\t$"
 *   insn=0x0000000000265B44 string=0x0000000000265B48 ")"
 *   insn=0x0000000000265B50 string=0x0000000000265B54 "A"
 *   insn=0x0000000000265B7C string=0x0000000000265B80 ")=G"
 *   insn=0x0000000000265B80 string=0x0000000000265B84 "!"
 *   insn=0x0000000000265B88 string=0x0000000000265B8C "\t"
 *   insn=0x0000000000265B8C string=0x0000000000265B90 "*"
 *   insn=0x0000000000265B90 string=0x0000000000265B94 "\n"
 *   insn=0x0000000000265BA0 string=0x0000000000265BA4 "*"
 *   insn=0x0000000000265BA4 string=0x0000000000265BA8 "\n"
 *   insn=0x0000000000265BAC string=0x0000000000265BB0 "L"
 *   insn=0x0000000000265BC0 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000265BD0 string=0x0000000000265BD4 "<o"
 *   insn=0x0000000000265BD8 string=0x0000000000265BDC "\n$"
 *   insn=0x0000000000265BDC string=0x0000000000265BE0 "J"
 *   insn=0x0000000000265BE4 string=0x0000000000265BE8 "(a"
 *   insn=0x0000000000265BF4 string=0x0000000000265BF8 "J=G"
 *   insn=0x0000000000265BF8 string=0x0000000000265BFC ")!"
 *   insn=0x0000000000265C00 string=0x0000000000265C04 "*"
 *   insn=0x0000000000265C00 string=0x0000000000265C70 "*"
 *   insn=0x0000000000265C04 string=0x0000000000265C08 "K"
 *   insn=0x0000000000265C08 string=0x0000000000265C0C "+"
 *   insn=0x0000000000265C14 string=0x0000000000265C54 "_"
 *   insn=0x0000000000265C18 string=0x0000000000265C1C "\n$"
 *   insn=0x0000000000265C1C string=0x0000000000265C20 "J"
 *   insn=0x0000000000265C24 string=0x0000000000265C28 "(a"
 *   insn=0x0000000000265C34 string=0x0000000000265C38 "J=G"
 *   insn=0x0000000000265C38 string=0x0000000000265C3C ")!"
 *   insn=0x0000000000265C40 string=0x0000000000265C44 "*"
 *   insn=0x0000000000265C44 string=0x0000000000265C48 "K"
 *   insn=0x0000000000265C48 string=0x0000000000265C4C "+"
 *   insn=0x0000000000265C54 string=0x0000000000265C58 "l"
 *   insn=0x0000000000265C70 string=0x0000000000265C74 "K"
 *   insn=0x0000000000265C74 string=0x0000000000265C78 "+"
 *   insn=0x0000000000265C78 string=0x0000000000265C7C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::DamageComponent::ValueForBindedProperty(
        Caver::DamageComponent *this@<X0>,
        int a2@<W1>,
        __int64 *a3@<X8>)
{
  unsigned __int64 v3; // x0
  Caver::BindingValue *v4; // x0
  int v5; // w20
  void *v6; // x0
  unsigned int *v7; // x8
  int v8; // w9
  float v9; // s0
  _QWORD v10[3]; // [xsp+8h] [xbp-38h] BYREF

  v10[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( a2 )
  {
    case 0:
      v3 = *((unsigned int *)this + 41);
      goto LABEL_13;
    case 1:
      v3 = (unsigned int)(*((_DWORD *)this + 42) + *((_DWORD *)this + 41));
LABEL_13:
      Caver::BindingValue::ValueWithInt(a3, (Caver::BindingValue *)v3, a2);
      return;
    case 2:
      v5 = *((_DWORD *)this + 45);
      if ( v5 == 1 )
      {
        sub_566BB8((int)v10, "friendly");
      }
      else if ( v5 )
      {
        sub_566BB8((int)v10, "");
      }
      else
      {
        sub_566BB8((int)v10, "enemy");
      }
      Caver::BindingValue::ValueWithInt();
      v6 = (void *)(v10[0] - 24LL);
      if ( (__int64 *)(v10[0] - 24LL) == &qword_6FD2E0 )
        return;
      v7 = (unsigned int *)(v10[0] - 8LL);
      if ( !&pthread_create )
        goto LABEL_27;
      do
        v8 = __ldaxr(v7);
      while ( __stlxr(v8 - 1, v7) );
      goto LABEL_28;
    case 3:
      Caver::StringForSpecialDamageType();
      Caver::BindingValue::ValueWithInt();
      v6 = (void *)(v10[0] - 24LL);
      if ( (__int64 *)(v10[0] - 24LL) == &qword_6FD2E0 )
        return;
      v7 = (unsigned int *)(v10[0] - 8LL);
      if ( &pthread_create )
      {
        do
          v8 = __ldaxr(v7);
        while ( __stlxr(v8 - 1, v7) );
      }
      else
      {
LABEL_27:
        v8 = (*v7)--;
      }
LABEL_28:
      if ( v8 <= 0 )
        operator delete(v6);
      return;
    case 4:
      v4 = (Caver::BindingValue *)*((unsigned __int8 *)this + 208);
      goto LABEL_18;
    case 5:
      v9 = *((float *)this + 50);
      goto LABEL_16;
    case 6:
      v9 = *((float *)this + 51);
LABEL_16:
      Caver::BindingValue::ValueWithFloat(this, v9);
      return;
    case 7:
      v4 = (Caver::BindingValue *)*((unsigned __int8 *)this + 160);
      goto LABEL_18;
    case 8:
      v4 = (Caver::BindingValue *)*((unsigned __int8 *)this + 209);
LABEL_18:
      Caver::BindingValue::ValueWithBool(v4, a2);
      break;
    default:
      Caver::Component::ValueForBindedProperty(this, a2);
      break;
  }
}

