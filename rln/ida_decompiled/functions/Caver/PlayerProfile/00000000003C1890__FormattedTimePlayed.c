/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C1890
 * Mangled: _ZN5Caver13PlayerProfile19FormattedTimePlayedEdb
 * Demangled: Caver::PlayerProfile::FormattedTimePlayed(double,bool)
 *
 * Callers: 1
 *   0x00000000001FA8C0  Caver::PlayerProfile::FormattedTimePlayed(double,bool)
 *
 * Callees: 14
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA8C0  Caver::PlayerProfile::FormattedTimePlayed(double,bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000051FEA0  sub_51FEA0
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x0000000000540490  sub_540490
 *   0x0000000000540D00  sub_540D00
 *   0x00000000005459D8  sub_5459D8
 *   0x0000000000546A98  sub_546A98
 *   0x00000000005652C8  sub_5652C8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 114
 *   insn=0x00000000003C18AC string=0x00000000003C18B0 "V"
 *   insn=0x00000000003C18C4 string=0x00000000003C18C8 ""
 *   insn=0x00000000003C18D0 string=0x00000000003C18D4 "q"
 *   insn=0x00000000003C18D8 string=0x00000000003C18DC ""
 *   insn=0x00000000003C18E0 string=0x00000000003C18E4 ""
 *   insn=0x00000000003C18E4 string=0x00000000003C18E8 "h"
 *   insn=0x00000000003C18F4 string=0x00000000003C18F8 "U"
 *   insn=0x00000000003C18FC string=0x00000000003C1900 "h"
 *   insn=0x00000000003C1904 string=0x00000000003C1908 ""
 *   insn=0x00000000003C190C string=0x00000000003C1910 "dy"
 *   insn=0x00000000003C1914 string=0x00000000003C1918 ""
 *   insn=0x00000000003C192C string=0x00000000003C1930 ""
 *   insn=0x00000000003C1938 string=0x00000000003C193C ""
 *   insn=0x00000000003C1944 string=0x00000000003C1948 "H4"
 *   insn=0x00000000003C194C string=0x00000000003C1950 ""
 *   insn=0x00000000003C1950 string=0x00000000003C1954 ""
 *   insn=0x00000000003C1954 string=0x00000000003C1958 "\t}"
 *   insn=0x00000000003C1958 string=0x00000000003C195C "!}H"
 *   insn=0x00000000003C1968 string=0x00000000005910F2 ":"
 *   insn=0x00000000003C1984 string=0x00000000003C1988 "\t"
 *   insn=0x00000000003C198C string=0x00000000003C1990 "*\t"
 *   insn=0x00000000003C1990 string=0x00000000003C1994 ""
 *   insn=0x00000000003C1998 string=0x00000000003C199C "("
 *   insn=0x00000000003C199C string=0x00000000003C19A0 "h"
 *   insn=0x00000000003C19A0 string=0x00000000003C19A4 "9"
 *   insn=0x00000000003C19A0 string=0x00000000003C19AC "5{@"
 *   insn=0x00000000003C19A8 string=0x00000000003C19EC "("
 *   insn=0x00000000003C19B4 string=0x00000000003C19B8 "h"
 *   insn=0x00000000003C19BC string=0x00000000003C19C0 ""
 *   insn=0x00000000003C19C0 string=0x00000000003C19E0 " "
 *   insn=0x00000000003C19C4 string=0x00000000003C19C8 "6y"
 *   insn=0x00000000003C19CC string=0x00000000003C19D0 ""
 *   insn=0x00000000003C19E4 string=0x00000000003C19E8 "("
 *   insn=0x00000000003C19F4 string=0x00000000003C19F8 "J"
 *   insn=0x00000000003C19F8 string=0x00000000003C19FC "J"
 *   insn=0x00000000003C19FC string=0x00000000003C1A00 "K}"
 *   insn=0x00000000003C1A00 string=0x00000000003C1A04 "x}J"
 *   insn=0x00000000003C1A04 string=0x00000000003C1A08 ""
 *   insn=0x00000000003C1A08 string=0x00000000003C1A0C ""
 *   insn=0x00000000003C1A0C string=0x00000000003C1A10 ""
 *   insn=0x00000000003C1A10 string=0x00000000003C1A14 "\n}"
 *   insn=0x00000000003C1A18 string=0x00000000003C1A1C "H}H"
 *   insn=0x00000000003C1A24 string=0x00000000003C1A28 ")"
 *   insn=0x00000000003C1A54 string=0x00000000003C1A58 "\t"
 *   insn=0x00000000003C1A5C string=0x00000000003C1A60 "*\t"
 *   insn=0x00000000003C1A60 string=0x00000000003C1A64 ""
 *   insn=0x00000000003C1A68 string=0x00000000003C1A6C "("
 *   insn=0x00000000003C1A6C string=0x00000000003C1A70 "h"
 *   insn=0x00000000003C1A70 string=0x00000000003C1A74 "9"
 *   insn=0x00000000003C1A70 string=0x00000000003C1A7C "4{@"
 *   insn=0x00000000003C1A7C string=0x00000000003C1A80 "T\n"
 *   insn=0x00000000003C1A84 string=0x00000000003C1A88 "h"
 *   insn=0x00000000003C1A8C string=0x00000000003C1A90 ""
 *   insn=0x00000000003C1A90 string=0x00000000003C1AB0 " "
 *   insn=0x00000000003C1A9C string=0x00000000003C1AA0 ""
 *   insn=0x00000000003C1AB4 string=0x00000000003C1AB8 "("
 *   insn=0x00000000003C1AC0 string=0x00000000003C1AC4 "("
 *   insn=0x00000000003C1ADC string=0x00000000003C1AE0 "("
 *   insn=0x00000000003C1AE0 string=0x00000000003C1AE4 ""
 *   insn=0x00000000003C1AE4 string=0x00000000003C1AE8 "*"
 *   insn=0x00000000003C1AE8 string=0x00000000003C1AEC "\t"
 *   insn=0x00000000003C1AEC string=0x00000000003C1AF0 "@"
 *   insn=0x00000000003C1AF4 string=0x00000000003C1AF8 ")"
 *   insn=0x00000000003C1AF8 string=0x00000000003C1AFC "J"
 *   insn=0x00000000003C1AF8 string=0x00000000006B7280 "X"
 *   insn=0x00000000003C1B00 string=0x00000000003C1B04 "JA"
 *   insn=0x00000000003C1B0C string=0x00000000003C1B10 ")"
 *   insn=0x00000000003C1B10 string=0x00000000003C1B14 ")"
 *   insn=0x00000000003C1B20 string=0x00000000003C1B24 "("
 *   insn=0x00000000003C1B20 string=0x00000000003C1B78 "\t"
 *   insn=0x00000000003C1B24 string=0x00000000003C1B28 "%E"
 *   insn=0x00000000003C1B2C string=0x00000000003C1B30 "`"
 *   insn=0x00000000003C1B30 string=0x00000000003C1B34 "A"
 *   insn=0x00000000003C1B38 string=0x00000000003C1B3C "c"
 *   insn=0x00000000003C1B3C string=0x00000000003C1B40 "`b"
 *   insn=0x00000000003C1B50 string=0x00000000003C1B54 "A"
 *   insn=0x00000000003C1B78 string=0x00000000003C1B7C ")=G"
 *   insn=0x00000000003C1B7C string=0x00000000003C1B80 "!"
 *   insn=0x00000000003C1B84 string=0x00000000003C1B88 "\t"
 *   insn=0x00000000003C1B84 string=0x00000000003C1B9C "\t"
 *   insn=0x00000000003C1B88 string=0x00000000003C1B8C "*"
 *   insn=0x00000000003C1B8C string=0x00000000003C1B90 "\n"
 *   insn=0x00000000003C1B98 string=0x00000000003C1BA8 "?"
 *   insn=0x00000000003C1B9C string=0x00000000003C1BA0 "*"
 *   insn=0x00000000003C1BA0 string=0x00000000003C1BA4 "\n"
 *   insn=0x00000000003C1BBC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003C1BCC string=0x00000000003C1BD0 ""
 *   insn=0x00000000003C1BD0 string=0x00000000003C1BD4 "*"
 *   insn=0x00000000003C1BDC string=0x00000000003C1BE0 "\t"
 *   insn=0x00000000003C1BE0 string=0x00000000003C1BE4 "@"
 *   insn=0x00000000003C1BE8 string=0x00000000003C1BEC ")"
 *   insn=0x00000000003C1BEC string=0x00000000003C1BF0 "J"
 *   insn=0x00000000003C1BF4 string=0x00000000003C1BF8 "JA"
 *   insn=0x00000000003C1C00 string=0x00000000003C1C04 "*"
 *   insn=0x00000000003C1C04 string=0x00000000003C1C08 "J"
 *   insn=0x00000000003C1C08 string=0x00000000003C1C0C "(a"
 *   insn=0x00000000003C1C14 string=0x00000000003C1C18 "\n"
 *   insn=0x00000000003C1C14 string=0x00000000003C1C4C "("
 *   insn=0x00000000003C1C18 string=0x00000000003C1C1C "J=G"
 *   insn=0x00000000003C1C1C string=0x00000000003C1C20 ")!"
 *   insn=0x00000000003C1C24 string=0x00000000003C1C28 "*"
 *   insn=0x00000000003C1C24 string=0x00000000003C1C74 "*"
 *   insn=0x00000000003C1C28 string=0x00000000003C1C2C "K"
 *   insn=0x00000000003C1C2C string=0x00000000003C1C30 "+"
 *   insn=0x00000000003C1C34 string=0x00000000003C1C38 "_"
 *   insn=0x00000000003C1C4C string=0x00000000003C1C50 "%E"
 *   insn=0x00000000003C1C54 string=0x00000000003C1C58 "A"
 *   insn=0x00000000003C1C64 string=0x00000000003C1C68 "]"
 *   insn=0x00000000003C1C74 string=0x00000000003C1C78 "K"
 *   insn=0x00000000003C1C78 string=0x00000000003C1C7C "+"
 *   insn=0x00000000003C1C7C string=0x00000000003C1C80 "_"
 *   insn=0x00000000003C1C94 string=0x00000000003C1C98 "\n"
 *   insn=0x00000000003C1C94 string=0x0000000000000001 "ELF"
 *   insn=0x00000000003C1C98 string=0x00000000001FA8C0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PlayerProfile::FormattedTimePlayed(Caver::PlayerProfile *this, double a2)
{
  char v2; // w20
  __int64 v4; // x0
  char *v5; // x24
  _BYTE *v6; // x24
  _BYTE *v7; // x21
  char v8; // w0
  float v9; // s0
  signed int v10; // w23
  __int64 v11; // x0
  __int64 (__fastcall **v12)(); // x8
  char *v13; // x25
  _BYTE *v14; // x25
  _BYTE *v15; // x21
  char v16; // w0
  __int64 v17; // x0
  __int64 (__fastcall **v18)(); // x8
  char *v19; // x25
  _BYTE *v20; // x25
  _BYTE *v21; // x20
  char v22; // w0
  void *v23; // x0
  unsigned int *v25; // x8
  int v26; // w9
  __int64 (__fastcall **v27)(); // [xsp+8h] [xbp-1B8h] BYREF
  _QWORD v28[7]; // [xsp+10h] [xbp-1B0h] BYREF
  __int64 v29; // [xsp+48h] [xbp-178h] BYREF
  __int64 v30; // [xsp+58h] [xbp-168h]
  _QWORD v31[34]; // [xsp+60h] [xbp-160h] BYREF

  v2 = (char)this;
  v31[33] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = sub_546A98(&v27, 16);
  v5 = (char *)&v28[-1] + (_QWORD)*(v27 - 3);
  if ( v5[225] )
  {
    v6 = v5 + 224;
  }
  else
  {
    v7 = (_BYTE *)*((_QWORD *)v5 + 30);
    if ( !v7 )
      sub_5652C8(v4);
    if ( v7[56] )
    {
      v8 = v7[89];
    }
    else
    {
      sub_51FEA0(*((_QWORD *)v5 + 30));
      v8 = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v7 + 48LL))(v7, 32);
    }
    v5[224] = v8;
    v6 = v5 + 224;
    v6[1] = 1;
  }
  v9 = a2;
  *v6 = 48;
  v10 = llroundf(v9);
  sub_540D00(&v27, (unsigned int)(v10 / 3600));
  v11 = sub_540490(&v27, ":", 1);
  v12 = v27;
  *(_QWORD *)((char *)&v28[1] + (_QWORD)*(v27 - 3)) = 2;
  v13 = (char *)&v28[-1] + (_QWORD)*(v12 - 3);
  if ( v13[225] )
  {
    v14 = v13 + 224;
  }
  else
  {
    v15 = (_BYTE *)*((_QWORD *)v13 + 30);
    if ( !v15 )
      sub_5652C8(v11);
    if ( v15[56] )
    {
      v16 = v15[89];
    }
    else
    {
      sub_51FEA0(*((_QWORD *)v13 + 30));
      v16 = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v15 + 48LL))(v15, 32);
    }
    v13[224] = v16;
    v14 = v13 + 224;
    v14[1] = 1;
  }
  *v14 = 48;
  sub_540D00(&v27, (unsigned int)(v10 / 60 % 60));
  if ( (v2 & 1) != 0 )
  {
    v17 = sub_540490(&v27, ":", 1);
    v18 = v27;
    *(_QWORD *)((char *)&v28[1] + (_QWORD)*(v27 - 3)) = 2;
    v19 = (char *)&v28[-1] + (_QWORD)*(v18 - 3);
    if ( v19[225] )
    {
      v20 = v19 + 224;
    }
    else
    {
      v21 = (_BYTE *)*((_QWORD *)v19 + 30);
      if ( !v21 )
        sub_5652C8(v17);
      if ( v21[56] )
      {
        v22 = v21[89];
      }
      else
      {
        sub_51FEA0(*((_QWORD *)v19 + 30));
        v22 = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v21 + 48LL))(v21, 32);
      }
      v19[224] = v22;
      v20 = v19 + 224;
      v20[1] = 1;
    }
    *v20 = 48;
    sub_540D00(&v27, (unsigned int)(v10 % 60));
  }
  sub_5459D8(v28);
  v27 = off_6B7298;
  v31[0] = off_6B72C0;
  v28[0] = off_6DA7B0;
  v23 = (void *)(v30 - 24);
  if ( (__int64 *)(v30 - 24) != &qword_6FD2E0 )
  {
    v25 = (unsigned int *)(v30 - 8);
    if ( &pthread_create )
    {
      do
        v26 = __ldaxr(v25);
      while ( __stlxr(v26 - 1, v25) );
    }
    else
    {
      v26 = (*v25)--;
    }
    if ( v26 <= 0 )
      operator delete(v23);
  }
  v28[0] = off_6B7710;
  sub_53C0C8(&v29);
  return sub_5221DC(v31);
}

