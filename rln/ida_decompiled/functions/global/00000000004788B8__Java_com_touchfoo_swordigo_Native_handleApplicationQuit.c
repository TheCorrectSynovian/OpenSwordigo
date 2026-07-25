/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004788B8
 * Mangled: Java_com_touchfoo_swordigo_Native_handleApplicationQuit
 * Demangled: Java_com_touchfoo_swordigo_Native_handleApplicationQuit
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE790  Caver::RenderingContext::SetCurrentContext(Caver::RenderingContext*)
 *
 * Referenced strings: 31
 *   insn=0x00000000004788C4 string=0x00000000004788C8 "`"
 *   insn=0x00000000004788C8 string=0x00000000004788CC " "
 *   insn=0x00000000004788DC string=0x00000000004788E0 ""
 *   insn=0x00000000004788DC string=0x00000000004788F4 ""
 *   insn=0x00000000004788E0 string=0x00000000004788E4 "-@"
 *   insn=0x00000000004788E8 string=0x00000000004788EC "`"
 *   insn=0x00000000004788F4 string=0x00000000004788F8 ""
 *   insn=0x000000000047890C string=0x0000000000478910 "3"
 *   insn=0x0000000000478910 string=0x0000000000478914 "h"
 *   insn=0x0000000000478914 string=0x0000000000478918 ""
 *   insn=0x0000000000478918 string=0x000000000047891C "h"
 *   insn=0x0000000000478920 string=0x0000000000478924 "h"
 *   insn=0x0000000000478928 string=0x000000000047892C "\t@"
 *   insn=0x0000000000478930 string=0x0000000000478934 "h\n@"
 *   insn=0x0000000000478934 string=0x0000000000478938 ""
 *   insn=0x0000000000478938 string=0x000000000047893C "h\n"
 *   insn=0x0000000000478940 string=0x0000000000478944 "h"
 *   insn=0x0000000000478948 string=0x000000000047894C "@"
 *   insn=0x0000000000478968 string=0x000000000047896C "3"
 *   insn=0x000000000047896C string=0x0000000000478970 "h"
 *   insn=0x0000000000478970 string=0x0000000000478974 ""
 *   insn=0x0000000000478974 string=0x0000000000478978 "h"
 *   insn=0x000000000047897C string=0x0000000000478980 "h"
 *   insn=0x0000000000478984 string=0x0000000000478988 "\t@"
 *   insn=0x000000000047898C string=0x0000000000478990 "h\n@"
 *   insn=0x0000000000478990 string=0x0000000000478994 ""
 *   insn=0x0000000000478994 string=0x0000000000478998 "h\n"
 *   insn=0x000000000047899C string=0x00000000004789A0 "h"
 *   insn=0x00000000004789A4 string=0x00000000004789A8 "@"
 *   insn=0x00000000004789C8 string=0x00000000004789CC ""
 *   insn=0x00000000004789CC string=0x00000000004789D0 "Y@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 Java_com_touchfoo_swordigo_Native_handleApplicationQuit()
{
  __int64 result; // x0
  Caver::RenderingContext *v1; // x1
  _QWORD *v2; // x19
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x8

  result = qword_6E9C20;
  if ( qword_6E9C20 )
  {
    if ( byte_6E9C79 == 1 )
    {
      (*(void (**)(void))(*(_QWORD *)qword_6E9C20 + 88LL))();
      result = qword_6E9C20;
      byte_6E9C79 = 0;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 56LL))(result);
    v2 = (_QWORD *)qword_6E9C28;
    qword_6E9C20 = 0;
    qword_6E9C28 = 0;
    if ( v2 )
    {
      v3 = v2[1] - 1LL;
      v2[1] = v3;
      if ( !v3 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
        v4 = v2[2] - 1LL;
        v2[2] = v4;
        if ( !v4 )
          (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
      }
    }
    result = Caver::RenderingContext::SetCurrentContext(0, v1);
    v5 = (_QWORD *)qword_6E9C18;
    qword_6E9C10 = 0;
    qword_6E9C18 = 0;
    if ( v5 )
    {
      v6 = v5[1] - 1LL;
      v5[1] = v6;
      if ( !v6 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
        v7 = v5[2] - 1LL;
        v5[2] = v7;
        if ( !v7 )
          result = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
      }
    }
  }
  byte_6E9C7C = 0;
  if ( qword_6E9C68 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_6E9C60 + 176LL))(qword_6E9C60);
  byte_6E9C78 = 0;
  return result;
}

