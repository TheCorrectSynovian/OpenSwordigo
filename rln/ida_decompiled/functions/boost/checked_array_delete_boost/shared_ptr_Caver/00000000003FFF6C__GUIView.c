/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003FFF6C
 * Mangled: _ZN5boost20checked_array_deleteINS_10shared_ptrIN5Caver7GUIViewEEEEEvPT_
 * Demangled: boost::checked_array_delete<boost::shared_ptr<Caver::GUIView>>(boost::shared_ptr<Caver::GUIView> *)
 *
 * Callers: 2
 *   0x0000000000203190  boost::checked_array_delete<boost::shared_ptr<Caver::GUIView>>(boost::shared_ptr<Caver::GUIView> *)
 *   0x00000000003FFF68  Caver::MenuViewPage::~MenuViewPage()
 *
 * Callees: 4
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001FA120  .strcmp
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 32
 *   insn=0x00000000003FFF88 string=0x00000000003FFF8C "h"
 *   insn=0x00000000003FFF9C string=0x00000000003FFFA0 "5"
 *   insn=0x00000000003FFFA4 string=0x00000000003FFFA8 ""
 *   insn=0x00000000003FFFB4 string=0x00000000003FFFB8 "\t@"
 *   insn=0x00000000003FFFC4 string=0x00000000003FFFC8 ""
 *   insn=0x00000000003FFFD4 string=0x00000000003FFFD8 "@"
 *   insn=0x0000000000400000 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000400028 string=0x000000000040002C "6"
 *   insn=0x0000000000400030 string=0x0000000000400034 ""
 *   insn=0x0000000000400040 string=0x0000000000400044 "\t@"
 *   insn=0x0000000000400050 string=0x0000000000400054 ""
 *   insn=0x0000000000400060 string=0x0000000000400064 "@"
 *   insn=0x0000000000400074 string=0x0000000000400078 "a"
 *   insn=0x000000000040009C string=0x00000000004000A0 "_"
 *   insn=0x00000000004000A8 string=0x00000000004000AC "("
 *   insn=0x00000000004000A8 string=0x00000000004000C0 "_"
 *   insn=0x00000000004000AC string=0x00000000004000B0 ""
 *   insn=0x00000000004000B4 string=0x00000000004000B8 "h"
 *   insn=0x00000000004000C4 string=0x00000000004000DC "_"
 *   insn=0x00000000004000C8 string=0x00000000004000CC "h\n"
 *   insn=0x00000000004000D0 string=0x00000000004000D4 "`"
 *   insn=0x00000000004000E0 string=0x00000000004000E4 "_"
 *   insn=0x00000000004000E4 string=0x00000000004000E8 "!"
 *   insn=0x00000000004000E8 string=0x00000000004000EC "h"
 *   insn=0x00000000004000EC string=0x00000000004000F0 "!"
 *   insn=0x00000000004000F0 string=0x00000000004000F4 ""
 *   insn=0x00000000004000F8 string=0x00000000004000FC "*"
 *   insn=0x00000000004000FC string=0x0000000000400100 "!DC"
 *   insn=0x0000000000400100 string=0x0000000000400104 "_"
 *   insn=0x0000000000400100 string=0x0000000000593B30 "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver13CharacterViewEPvPNS4_8GUIEventEEENS0_5list3INS0_5valueIPS5_EENS_3argILi1EEENSE_ILi2EEEEEEE"
 *   insn=0x0000000000400104 string=0x0000000000400108 " "
 *   insn=0x000000000040010C string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::checked_array_delete<boost::shared_ptr<Caver::GUIView>>(_QWORD *a1)
{
  __int64 v2; // x8
  __int64 v3; // x23
  _QWORD *v4; // x21
  __int64 v5; // x8
  __int64 v6; // x8

  if ( a1 )
  {
    v2 = *(a1 - 1);
    if ( v2 )
    {
      v3 = 2 * v2;
      do
      {
        v4 = (_QWORD *)a1[v3 - 1];
        if ( v4 )
        {
          v5 = v4[1] - 1LL;
          v4[1] = v5;
          if ( !v5 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
            v6 = v4[2] - 1LL;
            v4[2] = v6;
            if ( !v6 )
              (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
          }
        }
        v3 -= 2;
      }
      while ( v3 * 8 );
    }
    operator delete[](a1 - 1);
  }
}

