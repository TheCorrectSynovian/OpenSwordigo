/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028E21C
 * Mangled: _ZN5Caver14SkillComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::SkillComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001F90A0  Caver::SkillComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FB8A0  Caver::BindingValue::Vector2Value(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 35
 *   insn=0x000000000028E228 string=0x000000000028E22C "T"
 *   insn=0x000000000028E234 string=0x000000000028E238 "?"
 *   insn=0x000000000028E240 string=0x000000000028E244 "?"
 *   insn=0x000000000028E248 string=0x000000000028E24C "A"
 *   insn=0x000000000028E254 string=0x000000000028E258 "`"
 *   insn=0x000000000028E268 string=0x000000000028E26C ")"
 *   insn=0x000000000028E274 string=0x000000000028E278 "@"
 *   insn=0x000000000028E27C string=0x000000000028E280 ")=G"
 *   insn=0x000000000028E280 string=0x000000000028E284 "!"
 *   insn=0x000000000028E288 string=0x000000000028E28C "\t"
 *   insn=0x000000000028E288 string=0x000000000028E2E0 "\t"
 *   insn=0x000000000028E28C string=0x000000000028E290 "*"
 *   insn=0x000000000028E290 string=0x000000000028E294 "\n"
 *   insn=0x000000000028E29C string=0x000000000028E2EC "?"
 *   insn=0x000000000028E2A4 string=0x000000000028E2A8 "~"
 *   insn=0x000000000028E2A8 string=0x00000000001FB8A0 "0'"
 *   insn=0x000000000028E2AC string=0x000000000028E2B0 "hF"
 *   insn=0x000000000028E2BC string=0x00000000001F9320 "0'"
 *   insn=0x000000000028E2E0 string=0x000000000028E2E4 "*"
 *   insn=0x000000000028E2E4 string=0x000000000028E2E8 "\n"
 *   insn=0x000000000028E2F4 string=0x000000000028E2F8 "+p"
 *   insn=0x000000000028E300 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000028E308 string=0x000000000028E30C "J"
 *   insn=0x000000000028E310 string=0x000000000028E314 "(a"
 *   insn=0x000000000028E320 string=0x000000000028E324 "J=G"
 *   insn=0x000000000028E324 string=0x000000000028E328 ")!"
 *   insn=0x000000000028E32C string=0x000000000028E330 "*"
 *   insn=0x000000000028E32C string=0x000000000028E35C "*"
 *   insn=0x000000000028E330 string=0x000000000028E334 "K"
 *   insn=0x000000000028E334 string=0x000000000028E338 "+"
 *   insn=0x000000000028E33C string=0x000000000028E340 "_"
 *   insn=0x000000000028E354 string=0x000000000028E358 "["
 *   insn=0x000000000028E35C string=0x000000000028E360 "K"
 *   insn=0x000000000028E360 string=0x000000000028E364 "+"
 *   insn=0x000000000028E364 string=0x000000000028E368 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SkillComponent::SetValueForBindedProperty(
        Caver::SkillComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  void *v4; // x0
  unsigned int *v5; // x8
  int v6; // w9
  _QWORD v7[3]; // [xsp+8h] [xbp-28h] BYREF

  v7[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 == 2 )
  {
    Caver::BindingValue::Vector2Value(a3);
    *((_QWORD *)this + 17) = v7[0];
  }
  else if ( a2 == 1 )
  {
    sub_56A528(v7, *((_QWORD *)a3 + 1));
    sub_56A6A8((char *)this + 160);
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
  else
  {
    Caver::Component::SetValueForBindedProperty(this, a2, a3);
  }
}

