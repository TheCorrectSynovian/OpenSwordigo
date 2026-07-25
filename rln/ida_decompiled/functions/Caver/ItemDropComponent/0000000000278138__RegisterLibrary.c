/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000278138
 * Mangled: _ZN5Caver17ItemDropComponent15RegisterLibraryEv
 * Demangled: Caver::ItemDropComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x00000000001FE570  Caver::ItemDropComponent::RegisterLibrary(void)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A00  Caver::ProgramState::RegisterLibrary(std::string const&,Caver::LibFunction const*)
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 53
 *   insn=0x0000000000278144 string=0x0000000000278148 "S"
 *   insn=0x0000000000278148 string=0x000000000027814C "h"
 *   insn=0x0000000000278150 string=0x0000000000278154 ""
 *   insn=0x0000000000278158 string=0x000000000027815C "a"
 *   insn=0x000000000027815C string=0x0000000000585742 "ItemDrop"
 *   insn=0x0000000000278170 string=0x0000000000278174 """"
 *   insn=0x000000000027817C string=0x0000000000278180 " "
 *   insn=0x0000000000278180 string=0x00000000001F7A00 "0'"
 *   insn=0x0000000000278184 string=0x0000000000278188 "i#"
 *   insn=0x0000000000278188 string=0x000000000027818C ")"
 *   insn=0x0000000000278194 string=0x0000000000278198 "!"
 *   insn=0x0000000000278198 string=0x000000000027819C "h"
 *   insn=0x0000000000278198 string=0x00000000002781BC "i#"
 *   insn=0x00000000002781A8 string=0x0000000000278200 "4"
 *   insn=0x00000000002781BC string=0x00000000002781C0 ")=G"
 *   insn=0x00000000002781C0 string=0x00000000002781C4 "!"
 *   insn=0x00000000002781C8 string=0x00000000002781CC "\t"
 *   insn=0x00000000002781C8 string=0x00000000002781E0 "\t"
 *   insn=0x00000000002781CC string=0x00000000002781D0 "*"
 *   insn=0x00000000002781D0 string=0x00000000002781D4 "\n"
 *   insn=0x00000000002781DC string=0x00000000002781EC "?"
 *   insn=0x00000000002781E0 string=0x00000000002781E4 "*"
 *   insn=0x00000000002781E4 string=0x00000000002781E8 "\n"
 *   insn=0x00000000002781EC string=0x00000000002781F0 "l"
 *   insn=0x00000000002781F4 string=0x00000000002781F8 "k"
 *   insn=0x0000000000278200 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000278204 string=0x0000000000278208 "j#"
 *   insn=0x0000000000278208 string=0x000000000027820C "J"
 *   insn=0x0000000000278210 string=0x0000000000278214 "(a"
 *   insn=0x000000000027821C string=0x0000000000278220 "j#"
 *   insn=0x0000000000278220 string=0x0000000000278224 "J=G"
 *   insn=0x0000000000278224 string=0x0000000000278228 ")!"
 *   insn=0x000000000027822C string=0x0000000000278230 "*"
 *   insn=0x000000000027822C string=0x000000000027825C "*"
 *   insn=0x0000000000278230 string=0x0000000000278234 "K"
 *   insn=0x0000000000278234 string=0x0000000000278238 "+"
 *   insn=0x000000000027823C string=0x0000000000278240 "_"
 *   insn=0x000000000027824C string=0x0000000000278250 "U"
 *   insn=0x000000000027825C string=0x0000000000278260 "K"
 *   insn=0x0000000000278260 string=0x0000000000278264 "+"
 *   insn=0x0000000000278264 string=0x0000000000278268 "_"
 *   insn=0x000000000027828C string=0x00000000001FCE30 "0'"
 *   insn=0x000000000027829C string=0x00000000002782A0 "h#"
 *   insn=0x00000000002782A0 string=0x00000000002782A4 ""
 *   insn=0x00000000002782A4 string=0x00000000002782A8 "I"
 *   insn=0x00000000002782A8 string=0x00000000002782AC " "
 *   insn=0x00000000002782B8 string=0x00000000002782BC "B"
 *   insn=0x00000000002782BC string=0x00000000002782C0 "!"
 *   insn=0x00000000002782C4 string=0x00000000002782C8 "cz`"
 *   insn=0x00000000002782C8 string=0x00000000002782CC "B(#"
 *   insn=0x00000000002782CC string=0x00000000002782D0 "C( "
 *   insn=0x00000000002782D0 string=0x00000000002782D4 "  #"
 *   insn=0x00000000002782E0 string=0x00000000002782E4 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ItemDropComponent::RegisterLibrary(Caver::ItemDropComponent *this)
{
  void *v1; // x0
  unsigned int *v2; // x8
  int v3; // w9
  _QWORD v4[3]; // [xsp+28h] [xbp-28h] BYREF

  v4[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v4, "ItemDrop");
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

