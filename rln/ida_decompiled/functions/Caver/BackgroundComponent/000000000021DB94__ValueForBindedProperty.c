/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021DB94
 * Mangled: _ZN5Caver19BackgroundComponent22ValueForBindedPropertyEi
 * Demangled: Caver::BackgroundComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x0000000000200EE0  Caver::BackgroundComponent::ValueForBindedProperty(int)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 35
 *   insn=0x000000000021DBA4 string=0x000000000021DBA8 "T"
 *   insn=0x000000000021DBB8 string=0x000000000021DBCC "@@"
 *   insn=0x000000000021DBCC string=0x000000000021DBD0 ""
 *   insn=0x000000000021DBDC string=0x000000000021DBE0 "R2"
 *   insn=0x000000000021DBE4 string=0x000000000021DBE8 ""
 *   insn=0x000000000021DC08 string=0x000000000021DC0C "M"
 *   insn=0x000000000021DC10 string=0x000000000021DC14 "I&"
 *   insn=0x000000000021DC14 string=0x000000000021DC18 ")"
 *   insn=0x000000000021DC20 string=0x000000000021DC24 "A"
 *   insn=0x000000000021DC24 string=0x000000000021DC4C ")&"
 *   insn=0x000000000021DC4C string=0x000000000021DC50 ")=G"
 *   insn=0x000000000021DC50 string=0x000000000021DC54 "!"
 *   insn=0x000000000021DC58 string=0x000000000021DC5C "\t"
 *   insn=0x000000000021DC58 string=0x000000000021DC70 "\t"
 *   insn=0x000000000021DC5C string=0x000000000021DC60 "*"
 *   insn=0x000000000021DC60 string=0x000000000021DC64 "\n"
 *   insn=0x000000000021DC6C string=0x000000000021DC7C "?"
 *   insn=0x000000000021DC70 string=0x000000000021DC74 "*"
 *   insn=0x000000000021DC74 string=0x000000000021DC78 "\n"
 *   insn=0x000000000021DC7C string=0x000000000021DC80 "L"
 *   insn=0x000000000021DC90 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000021DC98 string=0x000000000021DC9C "J&"
 *   insn=0x000000000021DC9C string=0x000000000021DCA0 "J"
 *   insn=0x000000000021DCA4 string=0x000000000021DCA8 "(a"
 *   insn=0x000000000021DCB0 string=0x000000000021DCB4 "*&"
 *   insn=0x000000000021DCB4 string=0x000000000021DCB8 "J=G"
 *   insn=0x000000000021DCB8 string=0x000000000021DCBC ")!"
 *   insn=0x000000000021DCC0 string=0x000000000021DCC4 "*"
 *   insn=0x000000000021DCC0 string=0x000000000021DCF0 "*"
 *   insn=0x000000000021DCC4 string=0x000000000021DCC8 "K"
 *   insn=0x000000000021DCC8 string=0x000000000021DCCC "+"
 *   insn=0x000000000021DCD0 string=0x000000000021DCD4 "_"
 *   insn=0x000000000021DCF0 string=0x000000000021DCF4 "K"
 *   insn=0x000000000021DCF4 string=0x000000000021DCF8 "+"
 *   insn=0x000000000021DCF8 string=0x000000000021DCFC "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::BackgroundComponent::ValueForBindedProperty(
        Caver::BackgroundComponent *this@<X0>,
        int a2@<W1>,
        __int64 a3@<X8>)
{
  __int64 v3; // x8
  void *v4; // x0
  unsigned int *v5; // x8
  int v6; // w9
  _QWORD v7[3]; // [xsp+8h] [xbp-38h] BYREF

  v7[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 )
  {
    *(_DWORD *)a3 = 0;
    *(_QWORD *)(a3 + 24) = 0;
    *(_QWORD *)(a3 + 32) = 0;
    *(_QWORD *)(a3 + 8) = 0;
    *(_QWORD *)(a3 + 16) = 0;
  }
  else
  {
    v3 = **((_QWORD **)this + 16);
    if ( v3 )
      sub_56A528(v7, v3 + 48);
    else
      sub_566BB8((int)v7, "");
    Caver::BindingValue::ValueWithString();
    v4 = (void *)(v7[0] - 24LL);
    if ( (__int64 *)(v7[0] - 24LL) != &qword_6FD2E0 )
    {
      v5 = (unsigned int *)(v7[0] - 8LL);
      if ( &pthread_create )
      {
        do
          v6 = __ldaxr(v5);
        while ( __stlxr(v6 - 1, v5) );
      }
      else
      {
        v6 = (*v5)--;
      }
      if ( v6 <= 0 )
        operator delete(v4);
    }
  }
}

