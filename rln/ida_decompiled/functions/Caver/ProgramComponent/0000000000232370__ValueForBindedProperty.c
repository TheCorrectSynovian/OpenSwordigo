/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000232370
 * Mangled: _ZN5Caver16ProgramComponent22ValueForBindedPropertyEi
 * Demangled: Caver::ProgramComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000001F9490  Caver::ProgramComponent::ValueForBindedProperty(int)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F92E0  Caver::StringForTrigger(Caver::ProgramComponent::Trigger)
 *   0x00000000001FA5F0  Caver::BindingValue::ValueWithProgram(Caver::Program const&)
 *   0x00000000001FE4F0  Caver::BindingValue::ValueWithBool(bool)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FFD40  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 35
 *   insn=0x0000000000232380 string=0x0000000000232384 "U"
 *   insn=0x000000000023238C string=0x0000000000232390 "?"
 *   insn=0x0000000000232398 string=0x000000000023239C "?"
 *   insn=0x000000000023239C string=0x00000000002323A0 " "
 *   insn=0x00000000002323B4 string=0x00000000001F92E0 "0'"
 *   insn=0x00000000002323C0 string=0x00000000002323C4 "_6"
 *   insn=0x00000000002323CC string=0x00000000002323D0 ")"
 *   insn=0x00000000002323E0 string=0x00000000002323E4 ")=G"
 *   insn=0x00000000002323E4 string=0x00000000002323E8 "!"
 *   insn=0x00000000002323E8 string=0x00000000002323EC ")"
 *   insn=0x00000000002323EC string=0x00000000002323F0 "\t"
 *   insn=0x00000000002323EC string=0x0000000000232450 "\t"
 *   insn=0x00000000002323F0 string=0x00000000002323F4 "*"
 *   insn=0x00000000002323F4 string=0x00000000002323F8 "\n"
 *   insn=0x0000000000232400 string=0x000000000023245C "?"
 *   insn=0x0000000000232408 string=0x000000000023240C "90"
 *   insn=0x000000000023240C string=0x0000000000232410 ""
 *   insn=0x0000000000232418 string=0x000000000023241C "u "
 *   insn=0x000000000023241C string=0x00000000001FA5F0 "0'"
 *   insn=0x0000000000232450 string=0x0000000000232454 "*"
 *   insn=0x0000000000232454 string=0x0000000000232458 "\n"
 *   insn=0x000000000023245C string=0x0000000000232460 "l"
 *   insn=0x0000000000232470 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000232478 string=0x000000000023247C "J"
 *   insn=0x0000000000232480 string=0x0000000000232484 "(a"
 *   insn=0x0000000000232490 string=0x0000000000232494 "J=G"
 *   insn=0x0000000000232494 string=0x0000000000232498 ")!"
 *   insn=0x000000000023249C string=0x00000000002324A0 "*"
 *   insn=0x000000000023249C string=0x00000000002324CC "*"
 *   insn=0x00000000002324A0 string=0x00000000002324A4 "K"
 *   insn=0x00000000002324A4 string=0x00000000002324A8 "+"
 *   insn=0x00000000002324AC string=0x00000000002324B0 "_"
 *   insn=0x00000000002324CC string=0x00000000002324D0 "K"
 *   insn=0x00000000002324D0 string=0x00000000002324D4 "+"
 *   insn=0x00000000002324D4 string=0x00000000002324D8 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProgramComponent::ValueForBindedProperty(
        Caver::ProgramComponent *this,
        const Caver::Program *a2)
{
  unsigned int *v2; // x8
  int v3; // w9
  __int64 v4; // [xsp+8h] [xbp-38h]

  _ReadStatusReg(TPIDR_EL0);
  if ( (_DWORD)a2 == 2 )
  {
    Caver::BindingValue::ValueWithProgram((Caver::ProgramComponent *)((char *)this + 128), a2);
  }
  else if ( (_DWORD)a2 == 1 )
  {
    Caver::BindingValue::ValueWithBool((Caver::BindingValue *)*((unsigned __int8 *)this + 120), 1);
  }
  else if ( (_DWORD)a2 )
  {
    Caver::Component::ValueForBindedProperty(this, (int)a2);
  }
  else
  {
    Caver::StringForTrigger();
    Caver::BindingValue::ValueWithInt();
    if ( (__int64 *)(v4 - 24) != &qword_6FD2E0 )
    {
      v2 = (unsigned int *)(v4 - 8);
      if ( &pthread_create )
      {
        do
          v3 = __ldaxr(v2);
        while ( __stlxr(v3 - 1, v2) );
      }
      else
      {
        v3 = (*v2)--;
      }
      if ( v3 <= 0 )
        operator delete((void *)(v4 - 24));
    }
  }
}

