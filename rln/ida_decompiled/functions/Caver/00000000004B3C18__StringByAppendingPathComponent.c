/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B3C18
 * Mangled: _ZN5Caver30StringByAppendingPathComponentERKSsS1_
 * Demangled: Caver::StringByAppendingPathComponent(std::string const&,std::string const&)
 *
 * Callers: 1
 *   0x00000000001FBDF0  Caver::StringByAppendingPathComponent(std::string const&,std::string const&)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000567614  sub_567614
 *   0x00000000005677D4  sub_5677D4
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 80
 *   insn=0x00000000004B3C28 string=0x00000000004B3C2C "U"
 *   insn=0x00000000004B3C40 string=0x00000000004B3C44 "*"
 *   insn=0x00000000004B3C44 string=0x00000000004B3C48 "K"
 *   insn=0x00000000004B3C50 string=0x00000000004B3C54 ""
 *   insn=0x00000000004B3C58 string=0x00000000004B3C5C "H"
 *   insn=0x00000000004B3C5C string=0x00000000004B3C60 ""
 *   insn=0x00000000004B3C70 string=0x00000000004B3C74 "-"
 *   insn=0x00000000004B3C7C string=0x00000000004B3C80 "e"
 *   insn=0x00000000004B3C90 string=0x00000000004B3C9C "#"
 *   insn=0x00000000004B3CB0 string=0x0000000000593EEE "/"
 *   insn=0x00000000004B3CD4 string=0x00000000004B3CD8 "O"
 *   insn=0x00000000004B3CE0 string=0x00000000004B3CE4 ")"
 *   insn=0x00000000004B3CEC string=0x00000000004B3CF0 "A"
 *   insn=0x00000000004B3D00 string=0x00000000004B3D5C "]\t"
 *   insn=0x00000000004B3D18 string=0x00000000004B3D1C ")=G"
 *   insn=0x00000000004B3D1C string=0x00000000004B3D20 "!"
 *   insn=0x00000000004B3D24 string=0x00000000004B3D28 "\t"
 *   insn=0x00000000004B3D24 string=0x00000000004B3D3C "\t"
 *   insn=0x00000000004B3D28 string=0x00000000004B3D2C "*"
 *   insn=0x00000000004B3D2C string=0x00000000004B3D30 "\n"
 *   insn=0x00000000004B3D38 string=0x00000000004B3D48 "?"
 *   insn=0x00000000004B3D3C string=0x00000000004B3D40 "*"
 *   insn=0x00000000004B3D40 string=0x00000000004B3D44 "\n"
 *   insn=0x00000000004B3D48 string=0x00000000004B3D4C "L"
 *   insn=0x00000000004B3D5C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004B3D64 string=0x00000000004B3D68 "J"
 *   insn=0x00000000004B3D6C string=0x00000000004B3D70 "(a"
 *   insn=0x00000000004B3D7C string=0x00000000004B3D80 "J=G"
 *   insn=0x00000000004B3D80 string=0x00000000004B3D84 ")!"
 *   insn=0x00000000004B3D88 string=0x00000000004B3D8C "*"
 *   insn=0x00000000004B3D88 string=0x00000000004B3DA0 "*"
 *   insn=0x00000000004B3D8C string=0x00000000004B3D90 "K"
 *   insn=0x00000000004B3D90 string=0x00000000004B3D94 "+"
 *   insn=0x00000000004B3D9C string=0x00000000004B3DAC "_"
 *   insn=0x00000000004B3DA0 string=0x00000000004B3DA4 "K"
 *   insn=0x00000000004B3DA4 string=0x00000000004B3DA8 "+"
 *   insn=0x00000000004B3DB8 string=0x00000000004B3DBC "z"
 *   insn=0x00000000004B3DCC string=0x00000000004B3DD0 ")"
 *   insn=0x00000000004B3DE0 string=0x00000000004B3DE4 ")=G"
 *   insn=0x00000000004B3DE4 string=0x00000000004B3DE8 "!"
 *   insn=0x00000000004B3DE8 string=0x00000000004B3DEC ")"
 *   insn=0x00000000004B3DEC string=0x00000000004B3DF0 "\t"
 *   insn=0x00000000004B3DEC string=0x00000000004B3E10 "\t"
 *   insn=0x00000000004B3DF0 string=0x00000000004B3DF4 "*"
 *   insn=0x00000000004B3DF4 string=0x00000000004B3DF8 "\n"
 *   insn=0x00000000004B3DFC string=0x00000000004B3E00 "?"
 *   insn=0x00000000004B3E08 string=0x00000000004B3E0C "3"
 *   insn=0x00000000004B3E0C string=0x00000000004B3ED8 "3"
 *   insn=0x00000000004B3E10 string=0x00000000004B3E14 "*"
 *   insn=0x00000000004B3E14 string=0x00000000004B3E18 "\n"
 *   insn=0x00000000004B3E18 string=0x00000000004B3E1C "?"
 *   insn=0x00000000004B3E1C string=0x00000000004B3E20 "M"
 *   insn=0x00000000004B3E20 string=0x00000000004B3E24 "."
 *   insn=0x00000000004B3E2C string=0x00000000004B3E30 "J"
 *   insn=0x00000000004B3E34 string=0x00000000004B3E38 "(a"
 *   insn=0x00000000004B3E44 string=0x00000000004B3E48 "J=G"
 *   insn=0x00000000004B3E48 string=0x00000000004B3E4C ")!"
 *   insn=0x00000000004B3E4C string=0x00000000004B3E50 "*"
 *   insn=0x00000000004B3E50 string=0x00000000004B3E54 "*"
 *   insn=0x00000000004B3E50 string=0x00000000004B3E74 "*"
 *   insn=0x00000000004B3E54 string=0x00000000004B3E58 "K"
 *   insn=0x00000000004B3E58 string=0x00000000004B3E5C "+"
 *   insn=0x00000000004B3E60 string=0x00000000004B3E64 "_"
 *   insn=0x00000000004B3E74 string=0x00000000004B3E78 "K"
 *   insn=0x00000000004B3E78 string=0x00000000004B3E7C "+"
 *   insn=0x00000000004B3E7C string=0x00000000004B3E80 "_"
 *   insn=0x00000000004B3E80 string=0x00000000004B3E84 "M"
 *   insn=0x00000000004B3E90 string=0x00000000004B3E94 "J"
 *   insn=0x00000000004B3E98 string=0x00000000004B3E9C "(a"
 *   insn=0x00000000004B3EA8 string=0x00000000004B3EAC "J=G"
 *   insn=0x00000000004B3EAC string=0x00000000004B3EB0 ")!"
 *   insn=0x00000000004B3EB4 string=0x00000000004B3EB8 "*"
 *   insn=0x00000000004B3EB4 string=0x00000000004B3EE4 "*"
 *   insn=0x00000000004B3EB8 string=0x00000000004B3EBC "K"
 *   insn=0x00000000004B3EBC string=0x00000000004B3EC0 "+"
 *   insn=0x00000000004B3EC4 string=0x00000000004B3EC8 "_"
 *   insn=0x00000000004B3EDC string=0x00000000004B3EE0 "y6"
 *   insn=0x00000000004B3EE4 string=0x00000000004B3EE8 "K"
 *   insn=0x00000000004B3EE8 string=0x00000000004B3EEC "+"
 *   insn=0x00000000004B3EEC string=0x00000000004B3EF0 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::StringByAppendingPathComponent(_QWORD *a1@<X0>, _QWORD *a2@<X1>, __int64 a3@<X8>)
{
  _QWORD *v4; // x20
  __int64 v6; // x11
  __int64 v7; // x0
  void *v8; // x0
  unsigned int *v9; // x8
  int v10; // w9
  _QWORD v11[3]; // [xsp+8h] [xbp-38h] BYREF

  v4 = a2;
  v11[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *(_QWORD *)(*a1 - 24LL);
  if ( !v6 )
  {
    v7 = a3;
LABEL_7:
    sub_56A528(v7, a2);
    return;
  }
  if ( !*(_QWORD *)(*a2 - 24LL) )
  {
    v7 = a3;
    a2 = a1;
    goto LABEL_7;
  }
  if ( *(_BYTE *)(*a1 + v6 - 1) == 47 )
  {
    sub_56A528(a3, a1);
    sub_567614(a3, v4);
  }
  else
  {
    sub_56A528(v11, a1);
    sub_5677D4(v11, "/", 1);
    sub_56A528(a3, v11);
    sub_567614(a3, v4);
    v8 = (void *)(v11[0] - 24LL);
    if ( (__int64 *)(v11[0] - 24LL) != &qword_6FD2E0 )
    {
      v9 = (unsigned int *)(v11[0] - 8LL);
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
        operator delete(v8);
    }
  }
}

