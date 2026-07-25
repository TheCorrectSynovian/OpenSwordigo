/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D5CF4
 * Mangled: sub_4D5CF4
 * Demangled: sub_4D5CF4
 *
 * Callers: 0
 *
 * Callees: 19
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A00  Caver::ProgramState::RegisterLibrary(std::string const&,Caver::LibFunction const*)
 *   0x00000000001FABE0  Caver::ProgramState::FloatAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FBB30  Caver::ProgramState::PushString(std::string const&)
 *   0x00000000001FC5A0  Caver::ProgramState::PushFloat(float)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FCE30  Caver::fastrandom(void)
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
 *   insn=0x00000000004D5D08 string=0x00000000004D5D0C "V"
 *   insn=0x00000000004D5D18 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000004D5D24 string=0x00000000001FC790 "0'"
 *   insn=0x00000000004D5D40 string=0x0000000000598256 "(X: "
 *   insn=0x00000000004D5D5C string=0x00000000004D5D60 "0"
 *   insn=0x00000000004D5D68 string=0x000000000059825B ", Y: "
 *   insn=0x00000000004D5D84 string=0x00000000004D5D88 "&"
 *   insn=0x00000000004D5D90 string=0x00000000004D5D98 """
 *   insn=0x00000000004D5D90 string=0x0000000000598267 ", Width: "
 *   insn=0x00000000004D5DB8 string=0x00000000004D5DC0 "B"
 *   insn=0x00000000004D5DB8 string=0x0000000000598271 ", Height: "
 *   insn=0x00000000004D5DDC string=0x00000000005933DB ")"
 *   insn=0x00000000004D5E00 string=0x00000000004D5E04 "K"
 *   insn=0x00000000004D5E04 string=0x00000000001FBB30 "0'"
 *   insn=0x00000000004D5E18 string=0x00000000004D5E1C "!"
 *   insn=0x00000000004D5E1C string=0x00000000004D5EC0 "i"
 *   insn=0x00000000004D5E20 string=0x00000000004D5E24 "s>@"
 *   insn=0x00000000004D5E2C string=0x00000000004D5E30 "h"
 *   insn=0x00000000004D5E30 string=0x00000000004D5E34 "i*D"
 *   insn=0x00000000004D5E38 string=0x00000000004D5E3C ""
 *   insn=0x00000000004D5E3C string=0x00000000004D5E40 "k"
 *   insn=0x00000000004D5E3C string=0x00000000006B7320 "h"
 *   insn=0x00000000004D5E48 string=0x00000000004D5E4C "kA"
 *   insn=0x00000000004D5E58 string=0x00000000004D5E5C "A"
 *   insn=0x00000000004D5E5C string=0x00000000004D5EE4 "i"
 *   insn=0x00000000004D5E60 string=0x00000000004D5E64 "%E"
 *   insn=0x00000000004D5E68 string=0x00000000004D5E6C "A"
 *   insn=0x00000000004D5E74 string=0x00000000004D5E78 "h&A"
 *   insn=0x00000000004D5E80 string=0x00000000004D5E84 ""
 *   insn=0x00000000004D5E84 string=0x00000000006DA910 "h"
 *   insn=0x00000000004D5E9C string=0x00000000004D5EA0 "A"
 *   insn=0x00000000004D5EC0 string=0x00000000004D5EC4 ")=G"
 *   insn=0x00000000004D5EC4 string=0x00000000004D5EC8 "!"
 *   insn=0x00000000004D5ECC string=0x00000000004D5ED0 "\t"
 *   insn=0x00000000004D5ECC string=0x00000000004D5F08 "\t"
 *   insn=0x00000000004D5ED0 string=0x00000000004D5ED4 "*"
 *   insn=0x00000000004D5ED4 string=0x00000000004D5ED8 "\n"
 *   insn=0x00000000004D5EDC string=0x00000000004D5EE0 ""
 *   insn=0x00000000004D5EE0 string=0x00000000004D5F14 "?"
 *   insn=0x00000000004D5EE4 string=0x00000000004D5EE8 ")=G"
 *   insn=0x00000000004D5EE8 string=0x00000000004D5EEC "!"
 *   insn=0x00000000004D5EF0 string=0x00000000004D5EF4 "\t"
 *   insn=0x00000000004D5EF0 string=0x00000000004D5F28 "\t"
 *   insn=0x00000000004D5EF4 string=0x00000000004D5EF8 "*"
 *   insn=0x00000000004D5EF8 string=0x00000000004D5EFC "\n"
 *   insn=0x00000000004D5F04 string=0x00000000004D5F34 "?"
 *   insn=0x00000000004D5F08 string=0x00000000004D5F0C "*"
 *   insn=0x00000000004D5F0C string=0x00000000004D5F10 "\n"
 *   insn=0x00000000004D5F14 string=0x00000000004D5F18 "L"
 *   insn=0x00000000004D5F1C string=0x00000000004D5F20 "!Q"
 *   insn=0x00000000004D5F28 string=0x00000000004D5F2C "*"
 *   insn=0x00000000004D5F2C string=0x00000000004D5F30 "\n"
 *   insn=0x00000000004D5F34 string=0x00000000004D5F38 "L"
 *   insn=0x00000000004D5F48 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004D5F50 string=0x00000000004D5F54 "J"
 *   insn=0x00000000004D5F58 string=0x00000000004D5F5C "(a"
 *   insn=0x00000000004D5F64 string=0x00000000004D5F68 "j"
 *   insn=0x00000000004D5F68 string=0x00000000004D5F6C "J=G"
 *   insn=0x00000000004D5F6C string=0x00000000004D5F70 ")!"
 *   insn=0x00000000004D5F74 string=0x00000000004D5F78 "*"
 *   insn=0x00000000004D5F74 string=0x00000000004D5F8C "*"
 *   insn=0x00000000004D5F78 string=0x00000000004D5F7C "K"
 *   insn=0x00000000004D5F7C string=0x00000000004D5F80 "+"
 *   insn=0x00000000004D5F88 string=0x00000000004D5F98 "_"
 *   insn=0x00000000004D5F8C string=0x00000000004D5F90 "K"
 *   insn=0x00000000004D5F90 string=0x00000000004D5F94 "+"
 *   insn=0x00000000004D5FCC string=0x00000000004D5FD0 ""
 *   insn=0x00000000004D5FD8 string=0x00000000004D5FDC ""
 *   insn=0x00000000004D5FE0 string=0x00000000004D5FE4 "A"
 *   insn=0x00000000004D5FEC string=0x00000000004D5FF0 ")"
 *   insn=0x00000000004D5FFC string=0x00000000004D6000 "i"
 *   insn=0x00000000004D6000 string=0x00000000004D6004 ")=G"
 *   insn=0x00000000004D6004 string=0x00000000004D6008 "!"
 *   insn=0x00000000004D6008 string=0x00000000004D600C "\t"
 *   insn=0x00000000004D600C string=0x00000000004D6010 "\t"
 *   insn=0x00000000004D600C string=0x00000000004D606C "\t"
 *   insn=0x00000000004D6010 string=0x00000000004D6014 "*"
 *   insn=0x00000000004D6014 string=0x00000000004D6018 "\n"
 *   insn=0x00000000004D601C string=0x00000000004D6020 "?"
 *   insn=0x00000000004D6020 string=0x00000000004D6024 "l"
 *   insn=0x00000000004D6030 string=0x00000000004D6034 "%E"
 *   insn=0x00000000004D6038 string=0x00000000004D603C "A"
 *   insn=0x00000000004D6040 string=0x00000000004D6044 "!"
 *   insn=0x00000000004D6050 string=0x00000000004D6054 ""
 *   insn=0x00000000004D605C string=0x00000000004D6060 "_0"
 *   insn=0x00000000004D606C string=0x00000000004D6070 "*"
 *   insn=0x00000000004D6070 string=0x00000000004D6074 "\n"
 *   insn=0x00000000004D6074 string=0x00000000004D6078 "?"
 *   insn=0x00000000004D6078 string=0x00000000004D607C "m"
 *   insn=0x00000000004D6094 string=0x00000000004D6098 "T"
 *   insn=0x00000000004D60A8 string=0x0000000000598251 "Math"
 *   insn=0x00000000004D60C8 string=0x00000000004D60CC "M"
 *   insn=0x00000000004D60CC string=0x00000000001F7A00 "0'"
 *   insn=0x00000000004D60D0 string=0x00000000004D60D4 "i"
 *   insn=0x00000000004D60D4 string=0x00000000004D60D8 ")"
 *   insn=0x00000000004D60E0 string=0x00000000004D60E4 "!"
 *   insn=0x00000000004D60E4 string=0x00000000004D6108 "i"
 *   insn=0x00000000004D60F4 string=0x00000000004D614C "a"
 *   insn=0x00000000004D6108 string=0x00000000004D610C ")=G"
 *   insn=0x00000000004D610C string=0x00000000004D6110 "!"
 *   insn=0x00000000004D6114 string=0x00000000004D6118 "\t"
 *   insn=0x00000000004D6114 string=0x00000000004D612C "\t"
 *   insn=0x00000000004D6118 string=0x00000000004D611C "*"
 *   insn=0x00000000004D611C string=0x00000000004D6120 "\n"
 *   insn=0x00000000004D6128 string=0x00000000004D6138 "?"
 *   insn=0x00000000004D612C string=0x00000000004D6130 "*"
 *   insn=0x00000000004D6130 string=0x00000000004D6134 "\n"
 *   insn=0x00000000004D6138 string=0x00000000004D613C "l"
 *   insn=0x00000000004D6150 string=0x00000000004D6154 "j"
 *   insn=0x00000000004D6154 string=0x00000000004D6158 "J"
 *   insn=0x00000000004D615C string=0x00000000004D6160 "(a"
 *   insn=0x00000000004D6168 string=0x00000000004D616C "j"
 *   insn=0x00000000004D616C string=0x00000000004D6170 "J=G"
 *   insn=0x00000000004D6170 string=0x00000000004D6174 ")!"
 *   insn=0x00000000004D6178 string=0x00000000004D617C "*"
 *   insn=0x00000000004D6178 string=0x00000000004D61A8 "*"
 *   insn=0x00000000004D617C string=0x00000000004D6180 "K"
 *   insn=0x00000000004D6180 string=0x00000000004D6184 "+"
 *   insn=0x00000000004D6188 string=0x00000000004D618C "_"
 *   insn=0x00000000004D61A8 string=0x00000000004D61AC "K"
 *   insn=0x00000000004D61AC string=0x00000000004D61B0 "+"
 *   insn=0x00000000004D61B0 string=0x00000000004D61B4 "_"
 *   insn=0x00000000004D61E0 string=0x00000000001FABE0 "0'"
 *   insn=0x00000000004D61E8 string=0x00000000004D61EC ""
 *   insn=0x00000000004D61EC string=0x00000000004D61F0 "|"
 *   insn=0x00000000004D61F0 string=0x00000000004D61F4 "\t"
 *   insn=0x00000000004D61F8 string=0x00000000004D61FC "h"
 *   insn=0x00000000004D61F8 string=0x00000000001FCE30 "0'"
 *   insn=0x00000000004D61FC string=0x00000000004D6200 ""
 *   insn=0x00000000004D6210 string=0x00000000004D6214 " "
 *   insn=0x00000000004D6214 string=0x00000000004D6218 "!9("
 *   insn=0x00000000004D6218 string=0x00000000004D621C "  "
 *   insn=0x00000000004D6224 string=0x00000000001FC5A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4D5CF4(void *a1)
{
  Caver::ProgramState *v1; // x0
  float *v2; // x0
  float *v3; // x20
  __int64 v4; // x21
  __int64 v5; // x21
  __int64 v6; // x21
  __int64 v7; // x0
  void *v8; // x0
  unsigned int *v10; // x8
  int v11; // w9
  unsigned int *v12; // x8
  int v13; // w9
  __int64 v14; // [xsp+78h] [xbp-1B8h]
  _QWORD v15[2]; // [xsp+88h] [xbp-1A8h] BYREF
  __int64 (__fastcall **v16)(); // [xsp+98h] [xbp-198h] BYREF
  __int64 (__fastcall **v17)(); // [xsp+A0h] [xbp-190h] BYREF
  __int64 v18; // [xsp+D8h] [xbp-158h] BYREF
  __int64 v19; // [xsp+E8h] [xbp-148h]
  _QWORD v20[34]; // [xsp+F0h] [xbp-140h] BYREF

  v20[33] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  v3 = v2;
  sub_5473C8(v15, 24);
  sub_540490(&v16, "(X: ", 4);
  v4 = sub_541620(&v16, *v3);
  sub_540490(v4, ", Y: ", 5);
  v5 = sub_541620(v4, v3[1]);
  sub_540490(v5, ", Width: ", 9);
  v6 = sub_541620(v5, v3[2]);
  sub_540490(v6, ", Height: ", 10);
  v7 = sub_541620(v6, v3[3]);
  sub_540490(v7, ")", 1);
  sub_5459D8(&v17);
  Caver::ProgramState::PushString();
  if ( (__int64 *)(v14 - 24) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(v14 - 8);
    if ( &pthread_create )
    {
      do
        v11 = __ldaxr(v10);
      while ( __stlxr(v11 - 1, v10) );
    }
    else
    {
      v11 = (*v10)--;
    }
    if ( v11 <= 0 )
      operator delete((void *)(v14 - 24));
  }
  v15[0] = off_6B7338;
  v20[0] = off_6B7388;
  v16 = off_6B7360;
  v17 = off_6DA7B0;
  v8 = (void *)(v19 - 24);
  if ( (__int64 *)(v19 - 24) != &qword_6FD2E0 )
  {
    v12 = (unsigned int *)(v19 - 8);
    if ( &pthread_create )
    {
      do
        v13 = __ldaxr(v12);
      while ( __stlxr(v13 - 1, v12) );
    }
    else
    {
      v13 = (*v12)--;
    }
    if ( v13 <= 0 )
      operator delete(v8);
  }
  v17 = off_6B7710;
  sub_53C0C8(&v18);
  v15[0] = &unk_6DA928;
  v20[0] = &unk_6DA950;
  v15[1] = 0;
  sub_5221DC(v20);
  return 1;
}

