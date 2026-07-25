/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C0068
 * Mangled: _ZN5Caver7ProgramD2Ev
 * Demangled: Caver::Program::~Program()
 *
 * Callers: 1
 *   0x00000000001FFB70  Caver::Program::~Program()
 *
 * Callees: 13
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7F10  boost::detail::shared_count::shared_count<std::string>(std::string *)
 *   0x0000000000201100  Caver::Program::InitWithString(std::string const&,std::string *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004C06D4  Caver::Program::InitWithString(std::string const&,std::string *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 161
 *   insn=0x00000000004C0078 string=0x00000000004C007C "U"
 *   insn=0x00000000004C0088 string=0x00000000004C008C "t\n@"
 *   insn=0x00000000004C0090 string=0x00000000004C0094 "4"
 *   insn=0x00000000004C0094 string=0x00000000004C00D8 "t"
 *   insn=0x00000000004C0098 string=0x00000000004C009C ""
 *   insn=0x00000000004C00A8 string=0x00000000004C00AC "\t@"
 *   insn=0x00000000004C00B8 string=0x00000000004C00BC ""
 *   insn=0x00000000004C00C8 string=0x00000000004C00CC "@"
 *   insn=0x00000000004C00DC string=0x00000000004C00E0 "4"
 *   insn=0x00000000004C00E0 string=0x00000000004C0124 "t"
 *   insn=0x00000000004C00E4 string=0x00000000004C00E8 ""
 *   insn=0x00000000004C00F4 string=0x00000000004C00F8 "\t@"
 *   insn=0x00000000004C0104 string=0x00000000004C0108 ""
 *   insn=0x00000000004C0114 string=0x00000000004C0118 "@"
 *   insn=0x00000000004C0124 string=0x00000000004C0128 "4"
 *   insn=0x00000000004C0128 string=0x00000000004C016C "t\n@"
 *   insn=0x00000000004C012C string=0x00000000004C0130 ""
 *   insn=0x00000000004C013C string=0x00000000004C0140 "\t@"
 *   insn=0x00000000004C014C string=0x00000000004C0150 ""
 *   insn=0x00000000004C015C string=0x00000000004C0160 "@"
 *   insn=0x00000000004C016C string=0x00000000004C0170 "4"
 *   insn=0x00000000004C0170 string=0x00000000004C01B4 "h"
 *   insn=0x00000000004C0174 string=0x00000000004C0178 ""
 *   insn=0x00000000004C0184 string=0x00000000004C0188 "\t@"
 *   insn=0x00000000004C0194 string=0x00000000004C0198 ""
 *   insn=0x00000000004C01A4 string=0x00000000004C01A8 "@"
 *   insn=0x00000000004C01B4 string=0x00000000004C01B8 ")"
 *   insn=0x00000000004C01B8 string=0x00000000004C01BC ")"
 *   insn=0x00000000004C01C4 string=0x00000000004C01C8 "A"
 *   insn=0x00000000004C01C8 string=0x00000000004C01F0 ")"
 *   insn=0x00000000004C01D8 string=0x00000000004C0234 "'"
 *   insn=0x00000000004C01F0 string=0x00000000004C01F4 ")=G"
 *   insn=0x00000000004C01F4 string=0x00000000004C01F8 "!"
 *   insn=0x00000000004C01FC string=0x00000000004C0200 "\t"
 *   insn=0x00000000004C01FC string=0x00000000004C0214 "\t"
 *   insn=0x00000000004C0200 string=0x00000000004C0204 "*"
 *   insn=0x00000000004C0204 string=0x00000000004C0208 "\n"
 *   insn=0x00000000004C0210 string=0x00000000004C0220 "?"
 *   insn=0x00000000004C0214 string=0x00000000004C0218 "*"
 *   insn=0x00000000004C0218 string=0x00000000004C021C "\n"
 *   insn=0x00000000004C0220 string=0x00000000004C0224 "L"
 *   insn=0x00000000004C0228 string=0x00000000004C022C "^"
 *   insn=0x00000000004C0234 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004C0238 string=0x00000000004C023C "*"
 *   insn=0x00000000004C023C string=0x00000000004C02E4 "h"
 *   insn=0x00000000004C0240 string=0x00000000004C0244 "u\n@"
 *   insn=0x00000000004C0248 string=0x00000000004C024C "&"
 *   insn=0x00000000004C0254 string=0x00000000004C0258 "5"
 *   insn=0x00000000004C0258 string=0x00000000004C029C "u\n@"
 *   insn=0x00000000004C025C string=0x00000000004C0260 ""
 *   insn=0x00000000004C026C string=0x00000000004C0270 "\t@"
 *   insn=0x00000000004C027C string=0x00000000004C0280 ""
 *   insn=0x00000000004C028C string=0x00000000004C0290 "@"
 *   insn=0x00000000004C029C string=0x00000000004C02A0 "5"
 *   insn=0x00000000004C02A4 string=0x00000000004C02A8 ""
 *   insn=0x00000000004C02B4 string=0x00000000004C02B8 "\t@"
 *   insn=0x00000000004C02C4 string=0x00000000004C02C8 ""
 *   insn=0x00000000004C02D4 string=0x00000000004C02D8 "@"
 *   insn=0x00000000004C02E4 string=0x00000000004C02E8 ")"
 *   insn=0x00000000004C02E8 string=0x00000000004C02EC ")"
 *   insn=0x00000000004C02F8 string=0x00000000004C02FC ")"
 *   insn=0x00000000004C02FC string=0x00000000004C0300 ")=G"
 *   insn=0x00000000004C0300 string=0x00000000004C0304 "!"
 *   insn=0x00000000004C0304 string=0x00000000004C0308 "i"
 *   insn=0x00000000004C0308 string=0x00000000004C030C "\t"
 *   insn=0x00000000004C0308 string=0x00000000004C0334 "\t"
 *   insn=0x00000000004C030C string=0x00000000004C0310 "*"
 *   insn=0x00000000004C0310 string=0x00000000004C0314 "\n"
 *   insn=0x00000000004C0318 string=0x00000000004C031C "?"
 *   insn=0x00000000004C031C string=0x00000000004C0320 "l"
 *   insn=0x00000000004C032C string=0x00000000004C0330 "e"
 *   insn=0x00000000004C0334 string=0x00000000004C0338 "*"
 *   insn=0x00000000004C0338 string=0x00000000004C033C "\n"
 *   insn=0x00000000004C033C string=0x00000000004C0340 "?"
 *   insn=0x00000000004C0340 string=0x00000000004C0344 ""
 *   insn=0x00000000004C0364 string=0x00000000004C0368 "W"
 *   insn=0x00000000004C0380 string=0x00000000004C0394 "h"
 *   insn=0x00000000004C0394 string=0x00000000004C0440 "H"
 *   insn=0x00000000004C039C string=0x00000000004C03A0 ")"
 *   insn=0x00000000004C03AC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004C03B4 string=0x00000000004C03B8 "\"
 *   insn=0x00000000004C03CC string=0x00000000001F7F10 "0'"
 *   insn=0x00000000004C03D8 string=0x00000000004C03DC "]\t"
 *   insn=0x00000000004C03DC string=0x00000000004C03E0 "h"
 *   insn=0x00000000004C03EC string=0x00000000004C03F0 "i"
 *   insn=0x00000000004C03F4 string=0x00000000004C03F8 "5"
 *   insn=0x00000000004C03FC string=0x00000000004C0400 ""
 *   insn=0x00000000004C0410 string=0x00000000004C0414 "\t@"
 *   insn=0x00000000004C041C string=0x00000000004C0420 ""
 *   insn=0x00000000004C0430 string=0x00000000004C0434 "@"
 *   insn=0x00000000004C0440 string=0x00000000004C04E8 "a"
 *   insn=0x00000000004C0448 string=0x00000000004C044C ""
 *   insn=0x00000000004C0454 string=0x00000000004C0458 "b"
 *   insn=0x00000000004C0460 string=0x00000000004C0464 "1"
 *   insn=0x00000000004C0484 string=0x00000000004C0488 "2\t"
 *   insn=0x00000000004C0488 string=0x00000000004C048C "h"
 *   insn=0x00000000004C0498 string=0x00000000004C049C "i"
 *   insn=0x00000000004C04A0 string=0x00000000004C04A4 "4"
 *   insn=0x00000000004C04A8 string=0x00000000004C04AC ""
 *   insn=0x00000000004C04BC string=0x00000000004C04C0 "\t@"
 *   insn=0x00000000004C04C8 string=0x00000000004C04CC ""
 *   insn=0x00000000004C04DC string=0x00000000004C04E0 "@"
 *   insn=0x00000000004C04E8 string=0x00000000004C04EC "a"
 *   insn=0x00000000004C04EC string=0x00000000004C04F0 "4"
 *   insn=0x00000000004C0500 string=0x00000000004C0504 "\t"
 *   insn=0x00000000004C0524 string=0x00000000004C0560 ")"
 *   insn=0x00000000004C0534 string=0x00000000004C0584 ")"
 *   insn=0x00000000004C0540 string=0x00000000004C0544 "!"
 *   insn=0x00000000004C0544 string=0x00000000004C05E8 ":"
 *   insn=0x00000000004C0560 string=0x00000000004C0564 ")=G"
 *   insn=0x00000000004C0564 string=0x00000000004C0568 "!"
 *   insn=0x00000000004C056C string=0x00000000004C0570 "\t"
 *   insn=0x00000000004C056C string=0x00000000004C05A8 "\t"
 *   insn=0x00000000004C0570 string=0x00000000004C0574 "*"
 *   insn=0x00000000004C0574 string=0x00000000004C0578 "\n"
 *   insn=0x00000000004C057C string=0x00000000004C0580 ""
 *   insn=0x00000000004C0580 string=0x00000000004C05B4 "?"
 *   insn=0x00000000004C0584 string=0x00000000004C0588 ")=G"
 *   insn=0x00000000004C0588 string=0x00000000004C058C "!"
 *   insn=0x00000000004C0590 string=0x00000000004C0594 "\t"
 *   insn=0x00000000004C0590 string=0x00000000004C05C8 "\t"
 *   insn=0x00000000004C0594 string=0x00000000004C0598 "*"
 *   insn=0x00000000004C0598 string=0x00000000004C059C "\n"
 *   insn=0x00000000004C05A4 string=0x00000000004C05D4 "?"
 *   insn=0x00000000004C05A8 string=0x00000000004C05AC "*"
 *   insn=0x00000000004C05AC string=0x00000000004C05B0 "\n"
 *   insn=0x00000000004C05BC string=0x00000000004C05C0 "y"
 *   insn=0x00000000004C05C8 string=0x00000000004C05CC "*"
 *   insn=0x00000000004C05CC string=0x00000000004C05D0 "\n"
 *   insn=0x00000000004C05DC string=0x00000000004C05E0 "q"
 *   insn=0x00000000004C05F4 string=0x00000000004C0600 ","
 *   insn=0x00000000004C0600 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004C0610 string=0x00000000004C0614 "(a"
 *   insn=0x00000000004C0618 string=0x00000000004C061C "a"
 *   insn=0x00000000004C061C string=0x00000000004C0628 "*"
 *   insn=0x00000000004C0628 string=0x00000000004C062C "J=G"
 *   insn=0x00000000004C062C string=0x00000000004C0630 ")!"
 *   insn=0x00000000004C0634 string=0x00000000004C0638 "*"
 *   insn=0x00000000004C0634 string=0x00000000004C064C "*"
 *   insn=0x00000000004C0638 string=0x00000000004C063C "K"
 *   insn=0x00000000004C063C string=0x00000000004C0640 "+"
 *   insn=0x00000000004C0648 string=0x00000000004C0658 "_"
 *   insn=0x00000000004C064C string=0x00000000004C0650 "K"
 *   insn=0x00000000004C0650 string=0x00000000004C0654 "+"
 *   insn=0x00000000004C0658 string=0x00000000004C065C ","
 *   insn=0x00000000004C0664 string=0x00000000004C0668 "O"
 *   insn=0x00000000004C067C string=0x00000000004C0680 ")"
 *   insn=0x00000000004C0680 string=0x00000000004C0684 ")=G"
 *   insn=0x00000000004C0688 string=0x00000000004C068C "i"
 *   insn=0x00000000004C068C string=0x00000000004C0690 "\t"
 *   insn=0x00000000004C068C string=0x00000000004C06B8 "\t"
 *   insn=0x00000000004C0690 string=0x00000000004C0694 "*"
 *   insn=0x00000000004C0694 string=0x00000000004C0698 "\n"
 *   insn=0x00000000004C069C string=0x00000000004C06A0 "?"
 *   insn=0x00000000004C06A0 string=0x00000000004C06A4 "L"
 *   insn=0x00000000004C06A8 string=0x00000000004C06AC ">"
 *   insn=0x00000000004C06B8 string=0x00000000004C06BC "*"
 *   insn=0x00000000004C06BC string=0x00000000004C06C0 "\n"
 *   insn=0x00000000004C06C0 string=0x00000000004C06C4 "?"
 *   insn=0x00000000004C06C4 string=0x00000000004C06C8 ""
 *   insn=0x00000000004C06CC string=0x00000000004C06D0 "}"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Program::~Program(Caver::Program *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x8
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 *v14; // x0
  unsigned int *v15; // x8
  int v16; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = (_QWORD *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
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
  v5 = (_QWORD *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  if ( v5 )
  {
    v6 = v5[1] - 1LL;
    v5[1] = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v7 = v5[2] - 1LL;
      v5[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
  }
  v8 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v8 )
  {
    v9 = v8[1] - 1LL;
    v8[1] = v9;
    if ( !v9 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v10 = v8[2] - 1LL;
      v8[2] = v10;
      if ( !v10 )
        (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
  v11 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v11 )
  {
    v12 = v11[1] - 1LL;
    v11[1] = v12;
    if ( !v12 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v13 = v11[2] - 1LL;
      v11[2] = v13;
      if ( !v13 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
  v14 = (__int64 *)(*(_QWORD *)this - 24LL);
  if ( v14 != &qword_6FD2E0 )
  {
    v15 = (unsigned int *)(*(_QWORD *)this - 8LL);
    if ( &pthread_create )
    {
      do
        v16 = __ldaxr(v15);
      while ( __stlxr(v16 - 1, v15) );
    }
    else
    {
      v16 = (*v15)--;
    }
    if ( v16 <= 0 )
      operator delete(v14);
  }
}

