/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026ED90
 * Mangled: _ZN5Caver19EntityInfoComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::EntityInfoComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000002013B0  Caver::EntityInfoComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 34
 *   insn=0x000000000026ED9C string=0x000000000026EDA0 "T"
 *   insn=0x000000000026EDB0 string=0x000000000026EDC0 "A"
 *   insn=0x000000000026EDB4 string=0x000000000026EDB8 "Z)"
 *   insn=0x000000000026EDB8 string=0x000000000026EDBC ""
 *   insn=0x000000000026EDB8 string=0x00000000001F9320 "0'"
 *   insn=0x000000000026EDC8 string=0x000000000026EDCC "`"
 *   insn=0x000000000026EDD0 string=0x000000000026EDD4 "5"
 *   insn=0x000000000026EDDC string=0x000000000026EDE0 ")"
 *   insn=0x000000000026EDE8 string=0x000000000026EDEC "!"
 *   insn=0x000000000026EE10 string=0x000000000026EE14 ")=G"
 *   insn=0x000000000026EE14 string=0x000000000026EE18 "!"
 *   insn=0x000000000026EE1C string=0x000000000026EE20 "\t"
 *   insn=0x000000000026EE1C string=0x000000000026EE34 "\t"
 *   insn=0x000000000026EE20 string=0x000000000026EE24 "*"
 *   insn=0x000000000026EE24 string=0x000000000026EE28 "\n"
 *   insn=0x000000000026EE30 string=0x000000000026EE40 "?"
 *   insn=0x000000000026EE34 string=0x000000000026EE38 "*"
 *   insn=0x000000000026EE38 string=0x000000000026EE3C "\n"
 *   insn=0x000000000026EE40 string=0x000000000026EE44 "l"
 *   insn=0x000000000026EE48 string=0x000000000026EE4C "V"
 *   insn=0x000000000026EE54 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000026EE5C string=0x000000000026EE60 "J"
 *   insn=0x000000000026EE64 string=0x000000000026EE68 "(a"
 *   insn=0x000000000026EE74 string=0x000000000026EE78 "J=G"
 *   insn=0x000000000026EE78 string=0x000000000026EE7C ")!"
 *   insn=0x000000000026EE80 string=0x000000000026EE84 "*"
 *   insn=0x000000000026EE80 string=0x000000000026EEB0 "*"
 *   insn=0x000000000026EE84 string=0x000000000026EE88 "K"
 *   insn=0x000000000026EE88 string=0x000000000026EE8C "+"
 *   insn=0x000000000026EE90 string=0x000000000026EE94 "_"
 *   insn=0x000000000026EEA0 string=0x000000000026EEA4 "@"
 *   insn=0x000000000026EEB0 string=0x000000000026EEB4 "K"
 *   insn=0x000000000026EEB4 string=0x000000000026EEB8 "+"
 *   insn=0x000000000026EEB8 string=0x000000000026EEBC "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::EntityInfoComponent::SetValueForBindedProperty(
        Caver::EntityInfoComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  void *v4; // x0
  unsigned int *v5; // x8
  int v6; // w9
  _QWORD v7[3]; // [xsp+8h] [xbp-28h] BYREF

  v7[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 )
  {
    Caver::Component::SetValueForBindedProperty(this, a2, a3);
  }
  else
  {
    sub_56A528(v7, *((_QWORD *)a3 + 1));
    sub_56A6A8((char *)this + 120);
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

