/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000270874
 * Mangled: _ZN5Caver15HealthComponent15RegisterLibraryEv
 * Demangled: Caver::HealthComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x00000000001FC320  Caver::HealthComponent::RegisterLibrary(void)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A00  Caver::ProgramState::RegisterLibrary(std::string const&,Caver::LibFunction const*)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 44
 *   insn=0x0000000000270880 string=0x0000000000270884 "S"
 *   insn=0x0000000000270884 string=0x0000000000270888 "h"
 *   insn=0x000000000027088C string=0x0000000000270890 ""
 *   insn=0x0000000000270898 string=0x0000000000588337 "Health"
 *   insn=0x00000000002708AC string=0x00000000002708B0 "b""
 *   insn=0x00000000002708B8 string=0x00000000002708BC "Q"
 *   insn=0x00000000002708BC string=0x00000000001F7A00 "0'"
 *   insn=0x00000000002708C4 string=0x00000000002708C8 ")"
 *   insn=0x00000000002708D0 string=0x00000000002708D4 "!"
 *   insn=0x00000000002708D4 string=0x00000000002708D8 "h"
 *   insn=0x00000000002708E4 string=0x000000000027093C "e"
 *   insn=0x00000000002708F8 string=0x00000000002708FC ")=G"
 *   insn=0x00000000002708FC string=0x0000000000270900 "!"
 *   insn=0x0000000000270904 string=0x0000000000270908 "\t"
 *   insn=0x0000000000270904 string=0x000000000027091C "\t"
 *   insn=0x0000000000270908 string=0x000000000027090C "*"
 *   insn=0x000000000027090C string=0x0000000000270910 "\n"
 *   insn=0x0000000000270918 string=0x0000000000270928 "?"
 *   insn=0x000000000027091C string=0x0000000000270920 "*"
 *   insn=0x0000000000270920 string=0x0000000000270924 "\n"
 *   insn=0x0000000000270928 string=0x000000000027092C "l"
 *   insn=0x000000000027093C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000270944 string=0x0000000000270948 "J"
 *   insn=0x000000000027094C string=0x0000000000270950 "(a"
 *   insn=0x000000000027095C string=0x0000000000270960 "J=G"
 *   insn=0x0000000000270960 string=0x0000000000270964 ")!"
 *   insn=0x0000000000270968 string=0x000000000027096C "*"
 *   insn=0x0000000000270968 string=0x0000000000270998 "*"
 *   insn=0x000000000027096C string=0x0000000000270970 "K"
 *   insn=0x0000000000270970 string=0x0000000000270974 "+"
 *   insn=0x0000000000270978 string=0x000000000027097C "_"
 *   insn=0x0000000000270998 string=0x000000000027099C "K"
 *   insn=0x000000000027099C string=0x00000000002709A0 "+"
 *   insn=0x00000000002709A0 string=0x00000000002709A4 "_"
 *   insn=0x00000000002709B0 string=0x00000000002709B4 "?"
 *   insn=0x00000000002709B4 string=0x00000000002709B8 "+"
 *   insn=0x00000000002709B8 string=0x00000000002709BC "\t"
 *   insn=0x00000000002709C0 string=0x00000000002709C4 ""
 *   insn=0x00000000002709C4 string=0x00000000002709C8 ")"
 *   insn=0x00000000002709C8 string=0x00000000002709CC "*}"
 *   insn=0x00000000002709CC string=0x00000000002709D0 "?"
 *   insn=0x00000000002709D0 string=0x00000000002709D4 "\n"
 *   insn=0x00000000002709D4 string=0x00000000002709D8 "m"
 *   insn=0x00000000002709D8 string=0x00000000002709E4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::HealthComponent::RegisterLibrary(Caver::HealthComponent *this)
{
  void *v1; // x0
  unsigned int *v2; // x8
  int v3; // w9
  _QWORD v4[3]; // [xsp+8h] [xbp-28h] BYREF

  v4[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v4, "Health");
  Caver::ProgramState::RegisterLibrary();
  v1 = (void *)(v4[0] - 24LL);
  if ( (__int64 *)(v4[0] - 24LL) != &qword_6FD2E0 )
  {
    v2 = (unsigned int *)(v4[0] - 8LL);
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
      operator delete(v1);
  }
}

