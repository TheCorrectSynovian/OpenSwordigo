/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D56A4
 * Mangled: sub_4D56A4
 * Demangled: sub_4D56A4
 *
 * Callers: 0
 *
 * Callees: 18
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6900  Caver::ProgramMath::PushRectangle(Caver::ProgramState *,Caver::Rectangle const&)
 *   0x00000000001FABE0  Caver::ProgramState::FloatAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FBB30  Caver::ProgramState::PushString(std::string const&)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FE800  Caver::ProgramState::RegisterClass(std::string const&,Caver::LibFunction const*,Caver::LibFunction const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x0000000000540490  sub_540490
 *   0x0000000000541620  sub_541620
 *   0x00000000005459D8  sub_5459D8
 *   0x00000000005473C8  sub_5473C8
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 133
 *   insn=0x00000000004D56B8 string=0x00000000004D56BC "V"
 *   insn=0x00000000004D56C4 string=0x00000000004D56C8 "F"
 *   insn=0x00000000004D56C8 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000004D56D0 string=0x00000000004D56D4 "/"
 *   insn=0x00000000004D56D4 string=0x00000000001FC790 "0'"
 *   insn=0x00000000004D56E4 string=0x00000000004D56E8 "8"
 *   insn=0x00000000004D56F0 string=0x0000000000598256 "(X: "
 *   insn=0x00000000004D56FC string=0x00000000004D5700 "d"
 *   insn=0x00000000004D5718 string=0x000000000059825B ", Y: "
 *   insn=0x00000000004D5724 string=0x00000000004D5728 "Z"
 *   insn=0x00000000004D5740 string=0x0000000000598261 ", Z: "
 *   insn=0x00000000004D574C string=0x00000000004D5750 "P"
 *   insn=0x00000000004D5764 string=0x00000000005933DB ")"
 *   insn=0x00000000004D576C string=0x00000000004D5770 "H"
 *   insn=0x00000000004D578C string=0x00000000001FBB30 "0'"
 *   insn=0x00000000004D57A0 string=0x00000000004D57A4 "!"
 *   insn=0x00000000004D57A4 string=0x00000000004D5848 "i"
 *   insn=0x00000000004D57A8 string=0x00000000004D57AC "s>@"
 *   insn=0x00000000004D57B4 string=0x00000000004D57B8 "h"
 *   insn=0x00000000004D57B8 string=0x00000000004D57BC "i*D"
 *   insn=0x00000000004D57C0 string=0x00000000004D57C4 ""
 *   insn=0x00000000004D57C4 string=0x00000000004D57C8 "k"
 *   insn=0x00000000004D57C4 string=0x00000000006B7320 "h"
 *   insn=0x00000000004D57D0 string=0x00000000004D57D4 "kA"
 *   insn=0x00000000004D57E0 string=0x00000000004D57E4 "A"
 *   insn=0x00000000004D57E4 string=0x00000000004D586C "i"
 *   insn=0x00000000004D57E8 string=0x00000000004D57EC "%E"
 *   insn=0x00000000004D57F0 string=0x00000000004D57F4 "A"
 *   insn=0x00000000004D57F8 string=0x00000000004D57FC "3"
 *   insn=0x00000000004D57FC string=0x00000000004D5800 "h&A"
 *   insn=0x00000000004D5808 string=0x00000000004D580C ""
 *   insn=0x00000000004D580C string=0x00000000006DA910 "h"
 *   insn=0x00000000004D5814 string=0x00000000004D5818 "q2"
 *   insn=0x00000000004D5824 string=0x00000000004D5828 "A"
 *   insn=0x00000000004D5848 string=0x00000000004D584C ")=G"
 *   insn=0x00000000004D584C string=0x00000000004D5850 "!"
 *   insn=0x00000000004D5854 string=0x00000000004D5858 "\t"
 *   insn=0x00000000004D5854 string=0x00000000004D5890 "\t"
 *   insn=0x00000000004D5858 string=0x00000000004D585C "*"
 *   insn=0x00000000004D585C string=0x00000000004D5860 "\n"
 *   insn=0x00000000004D5864 string=0x00000000004D5868 ""
 *   insn=0x00000000004D5868 string=0x00000000004D589C "?"
 *   insn=0x00000000004D586C string=0x00000000004D5870 ")=G"
 *   insn=0x00000000004D5870 string=0x00000000004D5874 "!"
 *   insn=0x00000000004D5878 string=0x00000000004D587C "\t"
 *   insn=0x00000000004D5878 string=0x00000000004D58B0 "\t"
 *   insn=0x00000000004D587C string=0x00000000004D5880 "*"
 *   insn=0x00000000004D5880 string=0x00000000004D5884 "\n"
 *   insn=0x00000000004D588C string=0x00000000004D58BC "?"
 *   insn=0x00000000004D5890 string=0x00000000004D5894 "*"
 *   insn=0x00000000004D5894 string=0x00000000004D5898 "\n"
 *   insn=0x00000000004D589C string=0x00000000004D58A0 "L"
 *   insn=0x00000000004D58B0 string=0x00000000004D58B4 "*"
 *   insn=0x00000000004D58B4 string=0x00000000004D58B8 "\n"
 *   insn=0x00000000004D58BC string=0x00000000004D58C0 "L"
 *   insn=0x00000000004D58D0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004D58D8 string=0x00000000004D58DC "J"
 *   insn=0x00000000004D58E0 string=0x00000000004D58E4 "(a"
 *   insn=0x00000000004D58EC string=0x00000000004D58F0 "j"
 *   insn=0x00000000004D58F0 string=0x00000000004D58F4 "J=G"
 *   insn=0x00000000004D58F4 string=0x00000000004D58F8 ")!"
 *   insn=0x00000000004D58FC string=0x00000000004D5900 "*"
 *   insn=0x00000000004D58FC string=0x00000000004D5914 "*"
 *   insn=0x00000000004D5900 string=0x00000000004D5904 "K"
 *   insn=0x00000000004D5904 string=0x00000000004D5908 "+"
 *   insn=0x00000000004D5910 string=0x00000000004D5920 "_"
 *   insn=0x00000000004D5914 string=0x00000000004D5918 "K"
 *   insn=0x00000000004D5918 string=0x00000000004D591C "+"
 *   insn=0x00000000004D5954 string=0x00000000004D5958 ""
 *   insn=0x00000000004D5960 string=0x00000000004D5964 ""
 *   insn=0x00000000004D5968 string=0x00000000004D596C "A"
 *   insn=0x00000000004D5974 string=0x00000000004D5978 ")"
 *   insn=0x00000000004D5984 string=0x00000000004D5988 "i"
 *   insn=0x00000000004D5988 string=0x00000000004D598C ")=G"
 *   insn=0x00000000004D598C string=0x00000000004D5990 "!"
 *   insn=0x00000000004D5990 string=0x00000000004D5994 "\t"
 *   insn=0x00000000004D5994 string=0x00000000004D5998 "\t"
 *   insn=0x00000000004D5994 string=0x00000000004D59F4 "\t"
 *   insn=0x00000000004D5998 string=0x00000000004D599C "*"
 *   insn=0x00000000004D599C string=0x00000000004D59A0 "\n"
 *   insn=0x00000000004D59A4 string=0x00000000004D59A8 "?"
 *   insn=0x00000000004D59A8 string=0x00000000004D59AC "l"
 *   insn=0x00000000004D59B0 string=0x00000000004D59B4 "|R"
 *   insn=0x00000000004D59B8 string=0x00000000004D59BC "%E"
 *   insn=0x00000000004D59C0 string=0x00000000004D59C4 "A"
 *   insn=0x00000000004D59D8 string=0x00000000004D59DC ""
 *   insn=0x00000000004D59F4 string=0x00000000004D59F8 "*"
 *   insn=0x00000000004D59F8 string=0x00000000004D59FC "\n"
 *   insn=0x00000000004D59FC string=0x00000000004D5A00 "?"
 *   insn=0x00000000004D5A00 string=0x00000000004D5A04 "m"
 *   insn=0x00000000004D5A1C string=0x00000000004D5A20 "T"
 *   insn=0x00000000004D5A30 string=0x000000000058A45D "Rectangle"
 *   insn=0x00000000004D5A3C string=0x00000000004D5A40 "^D"
 *   insn=0x00000000004D5A48 string=0x00000000004D5A4C "B`"
 *   insn=0x00000000004D5A4C string=0x00000000004D5A50 "c"
 *   insn=0x00000000004D5A58 string=0x00000000004D5A5C "i"
 *   insn=0x00000000004D5A64 string=0x00000000004D5A68 ")"
 *   insn=0x00000000004D5A70 string=0x00000000004D5A74 "!"
 *   insn=0x00000000004D5A74 string=0x00000000004D5A98 "i"
 *   insn=0x00000000004D5A98 string=0x00000000004D5A9C ")=G"
 *   insn=0x00000000004D5A9C string=0x00000000004D5AA0 "!"
 *   insn=0x00000000004D5AA4 string=0x00000000004D5AA8 "\t"
 *   insn=0x00000000004D5AA4 string=0x00000000004D5ABC "\t"
 *   insn=0x00000000004D5AA8 string=0x00000000004D5AAC "*"
 *   insn=0x00000000004D5AAC string=0x00000000004D5AB0 "\n"
 *   insn=0x00000000004D5AB8 string=0x00000000004D5AC8 "?"
 *   insn=0x00000000004D5ABC string=0x00000000004D5AC0 "*"
 *   insn=0x00000000004D5AC0 string=0x00000000004D5AC4 "\n"
 *   insn=0x00000000004D5AC8 string=0x00000000004D5ACC "l"
 *   insn=0x00000000004D5AD0 string=0x00000000004D5AD4 "4R"
 *   insn=0x00000000004D5AE4 string=0x00000000004D5AE8 "J"
 *   insn=0x00000000004D5AEC string=0x00000000004D5AF0 "(a"
 *   insn=0x00000000004D5AF8 string=0x00000000004D5AFC "j"
 *   insn=0x00000000004D5AFC string=0x00000000004D5B00 "J=G"
 *   insn=0x00000000004D5B00 string=0x00000000004D5B04 ")!"
 *   insn=0x00000000004D5B08 string=0x00000000004D5B0C "*"
 *   insn=0x00000000004D5B08 string=0x00000000004D5B38 "*"
 *   insn=0x00000000004D5B0C string=0x00000000004D5B10 "K"
 *   insn=0x00000000004D5B10 string=0x00000000004D5B14 "+"
 *   insn=0x00000000004D5B18 string=0x00000000004D5B1C "_"
 *   insn=0x00000000004D5B30 string=0x00000000004D5B34 "d"
 *   insn=0x00000000004D5B38 string=0x00000000004D5B3C "K"
 *   insn=0x00000000004D5B3C string=0x00000000004D5B40 "+"
 *   insn=0x00000000004D5B40 string=0x00000000004D5B44 "_"
 *   insn=0x00000000004D5B68 string=0x00000000004D5B6C "T"
 *   insn=0x00000000004D5B84 string=0x00000000001FABE0 "0'"
 *   insn=0x00000000004D5B8C string=0x00000000004D5B90 ""
 *   insn=0x00000000004D5B9C string=0x00000000004D5BA0 "\t"
 *   insn=0x00000000004D5BAC string=0x00000000004D5BB0 "\n"
 *   insn=0x00000000004D5BB0 string=0x00000000004D5BB4 ""
 *   insn=0x00000000004D5BB4 string=0x00000000004D5BB8 "!9("
 *   insn=0x00000000004D5BCC string=0x00000000004D5BD0 "L"
 *   insn=0x00000000004D5BD0 string=0x00000000001F6900 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4D56A4(void *a1)
{
  Caver::ProgramState *v1; // x0
  float *v2; // x0
  float *v3; // x20
  __int64 v4; // x21
  __int64 v5; // x21
  __int64 v6; // x0
  void *v7; // x0
  unsigned int *v9; // x8
  int v10; // w9
  unsigned int *v11; // x8
  int v12; // w9
  __int64 v13; // [xsp+A0h] [xbp-1B8h]
  _QWORD v14[2]; // [xsp+B0h] [xbp-1A8h] BYREF
  __int64 (__fastcall **v15)(); // [xsp+C0h] [xbp-198h] BYREF
  __int64 (__fastcall **v16)(); // [xsp+C8h] [xbp-190h] BYREF
  __int64 v17; // [xsp+100h] [xbp-158h] BYREF
  __int64 v18; // [xsp+110h] [xbp-148h]
  _QWORD v19[34]; // [xsp+118h] [xbp-140h] BYREF

  v19[33] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  v3 = v2;
  sub_5473C8(v14, 24);
  sub_540490(&v15, "(X: ", 4);
  v4 = sub_541620(&v15, *v3);
  sub_540490(v4, ", Y: ", 5);
  v5 = sub_541620(v4, v3[1]);
  sub_540490(v5, ", Z: ", 5);
  v6 = sub_541620(v5, v3[2]);
  sub_540490(v6, ")", 1);
  sub_5459D8(&v16);
  Caver::ProgramState::PushString();
  if ( (__int64 *)(v13 - 24) != &qword_6FD2E0 )
  {
    v9 = (unsigned int *)(v13 - 8);
    if ( &pthread_create )
    {
      do
        v10 = __ldaxr(v9);
      while ( __stlxr(v10 - 1, v9) );
    }
    else
    {
      v10 = (*v9)--;
    }
    if ( v10 <= 0 )
      operator delete((void *)(v13 - 24));
  }
  v14[0] = off_6B7338;
  v19[0] = off_6B7388;
  v15 = off_6B7360;
  v16 = off_6DA7B0;
  v7 = (void *)(v18 - 24);
  if ( (__int64 *)(v18 - 24) != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(v18 - 8);
    if ( &pthread_create )
    {
      do
        v12 = __ldaxr(v11);
      while ( __stlxr(v12 - 1, v11) );
    }
    else
    {
      v12 = (*v11)--;
    }
    if ( v12 <= 0 )
      operator delete(v7);
  }
  v16 = off_6B7710;
  sub_53C0C8(&v17);
  v14[0] = &unk_6DA928;
  v19[0] = &unk_6DA950;
  v14[1] = 0;
  sub_5221DC(v19);
  return 1;
}

