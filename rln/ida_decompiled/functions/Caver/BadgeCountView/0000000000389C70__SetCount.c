/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000389C70
 * Mangled: _ZN5Caver14BadgeCountView8SetCountEi
 * Demangled: Caver::BadgeCountView::SetCount(int)
 *
 * Callers: 1
 *   0x00000000001FA870  Caver::BadgeCountView::SetCount(int)
 *
 * Callees: 9
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x0000000000200F70  boost::detail::lcast_put_unsigned<std::char_traits<char>,uint,char>(uint,char *)
 *   0x0000000000569E1C  sub_569E1C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 55
 *   insn=0x0000000000389C88 string=0x0000000000389C8C "W"
 *   insn=0x0000000000389C9C string=0x0000000000389CA0 "h"
 *   insn=0x0000000000389CA8 string=0x0000000000389CAC "v"
 *   insn=0x0000000000389CB0 string=0x0000000000389CB4 "t"
 *   insn=0x0000000000389CE0 string=0x0000000000389CF0 """
 *   insn=0x0000000000389CE4 string=0x0000000000389CE8 "\t"
 *   insn=0x0000000000389D00 string=0x0000000000389D04 "F"
 *   insn=0x0000000000389D14 string=0x0000000000389D18 "("
 *   insn=0x0000000000389D18 string=0x0000000000389D1C "_"
 *   insn=0x0000000000389D28 string=0x00000000001F5190 "P'"
 *   insn=0x0000000000389D34 string=0x0000000000389D38 "\"
 *   insn=0x0000000000389D40 string=0x00000000001F8510 "0'"
 *   insn=0x0000000000389D50 string=0x0000000000389D54 "h"
 *   insn=0x0000000000389D54 string=0x0000000000389D58 "iz@"
 *   insn=0x0000000000389D60 string=0x0000000000389D64 "*"
 *   insn=0x0000000000389D68 string=0x0000000000389D6C "h"
 *   insn=0x0000000000389D70 string=0x0000000000389D74 "-@"
 *   insn=0x0000000000389D84 string=0x0000000000389D88 "A"
 *   insn=0x0000000000389D88 string=0x0000000000389DF0 "8"
 *   insn=0x0000000000389DA8 string=0x0000000000389DAC ")=G"
 *   insn=0x0000000000389DB4 string=0x0000000000389DB8 "\t"
 *   insn=0x0000000000389DB4 string=0x0000000000389DCC "\t"
 *   insn=0x0000000000389DB8 string=0x0000000000389DBC "*"
 *   insn=0x0000000000389DBC string=0x0000000000389DC0 "\n"
 *   insn=0x0000000000389DC8 string=0x0000000000389DD8 "?"
 *   insn=0x0000000000389DCC string=0x0000000000389DD0 "*"
 *   insn=0x0000000000389DD0 string=0x0000000000389DD4 "\n"
 *   insn=0x0000000000389DE4 string=0x0000000000389DE8 "o"
 *   insn=0x0000000000389DF0 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000389DF8 string=0x0000000000389DFC "(a"
 *   insn=0x0000000000389E08 string=0x0000000000389E0C "J=G"
 *   insn=0x0000000000389E0C string=0x0000000000389E10 ")!"
 *   insn=0x0000000000389E10 string=0x0000000000389E14 "*"
 *   insn=0x0000000000389E14 string=0x0000000000389E18 "*"
 *   insn=0x0000000000389E14 string=0x0000000000389E38 "*"
 *   insn=0x0000000000389E18 string=0x0000000000389E1C "K"
 *   insn=0x0000000000389E1C string=0x0000000000389E20 "+"
 *   insn=0x0000000000389E24 string=0x0000000000389E28 "_"
 *   insn=0x0000000000389E28 string=0x0000000000389E2C "l"
 *   insn=0x0000000000389E38 string=0x0000000000389E3C "K"
 *   insn=0x0000000000389E3C string=0x0000000000389E40 "+"
 *   insn=0x0000000000389E40 string=0x0000000000389E44 "_"
 *   insn=0x0000000000389E44 string=0x0000000000389E48 "M"
 *   insn=0x0000000000389E54 string=0x0000000000389E58 "(a"
 *   insn=0x0000000000389E64 string=0x0000000000389E68 "J=G"
 *   insn=0x0000000000389E68 string=0x0000000000389E6C ")!"
 *   insn=0x0000000000389E70 string=0x0000000000389E74 "*"
 *   insn=0x0000000000389E70 string=0x0000000000389EA0 "*"
 *   insn=0x0000000000389E74 string=0x0000000000389E78 "K"
 *   insn=0x0000000000389E78 string=0x0000000000389E7C "+"
 *   insn=0x0000000000389E80 string=0x0000000000389E84 "_"
 *   insn=0x0000000000389E90 string=0x0000000000389E94 "D"
 *   insn=0x0000000000389EA0 string=0x0000000000389EA4 "K"
 *   insn=0x0000000000389EA4 string=0x0000000000389EA8 "+"
 *   insn=0x0000000000389EA8 string=0x0000000000389EAC "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::BadgeCountView::SetCount(Caver::BadgeCountView *this, int a2)
{
  Caver::GUILabel *v4; // x20
  char *v5; // x25
  __int64 v6; // x0
  __int64 v7; // x8
  char *v8; // x22
  size_t v9; // x2
  __int64 *v10; // x21
  _QWORD *v11; // x1
  int v12; // w8
  unsigned int *v13; // x8
  int v14; // w9
  void *v15; // [xsp+0h] [xbp-70h] BYREF
  _BYTE v16[12]; // [xsp+24h] [xbp-4Ch] BYREF

  *(_QWORD *)&v16[4] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_DWORD *)this + 59) != a2 )
  {
    *((_DWORD *)this + 59) = a2;
    v4 = (Caver::GUILabel *)*((_QWORD *)this + 32);
    v5 = &byte_6FD2F8;
    v15 = &byte_6FD2F8;
    v6 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned int,char>();
    v7 = v6;
    if ( a2 < 0 )
    {
      *(_BYTE *)(v6 - 1) = 45;
      v7 = v6 - 1;
      v5 = (char *)v15;
    }
    sub_569E1C(&v15, 0, *((_QWORD *)v5 - 3), v7, &v16[-v7]);
    v8 = (char *)v15;
    v10 = (__int64 *)((char *)v15 - 24);
    v9 = *((_QWORD *)v15 - 3);
    v11 = (_QWORD *)*((_QWORD *)v4 + 32);
    if ( v9 != *(v11 - 3) || memcmp(v15, v11, v9) )
    {
      sub_56A6A8((char *)v4 + 256);
      Caver::GUILabel::UpdateText(v4);
      v8 = (char *)v15;
      v10 = (__int64 *)((char *)v15 - 24);
    }
    if ( v10 != &qword_6FD2E0 )
    {
      v13 = (unsigned int *)(v8 - 8);
      if ( &pthread_create )
      {
        do
          v14 = __ldaxr(v13);
        while ( __stlxr(v14 - 1, v13) );
      }
      else
      {
        v14 = (*v13)--;
      }
      if ( v14 <= 0 )
        operator delete(v10);
    }
    v12 = *((_DWORD *)this + 59);
    *(_BYTE *)(*((_QWORD *)this + 30) + 228LL) = v12 == 0;
    if ( v12 )
      (*(void (__fastcall **)(Caver::BadgeCountView *))(*(_QWORD *)this + 88LL))(this);
  }
}

