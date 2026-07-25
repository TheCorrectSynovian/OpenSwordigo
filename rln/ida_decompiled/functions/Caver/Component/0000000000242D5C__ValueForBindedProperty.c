/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000242D5C
 * Mangled: _ZN5Caver9Component22ValueForBindedPropertyEi
 * Demangled: Caver::Component::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Callees: 13
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7F10  boost::detail::shared_count::shared_count<std::string>(std::string *)
 *   0x00000000001FB2C0  Caver::BindingValue::ValueWithInt(int)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF970  Caver::Component::ValueForBindedOutlet(boost::intrusive_ptr<Caver::Component> const&)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 123
 *   insn=0x0000000000242D6C string=0x0000000000242D70 "U"
 *   insn=0x0000000000242D80 string=0x0000000000242D84 "+)@"
 *   insn=0x0000000000242D84 string=0x0000000000242D88 "(!"
 *   insn=0x0000000000242D8C string=0x0000000000242D90 "+"
 *   insn=0x0000000000242D90 string=0x0000000000242D94 "l!@"
 *   insn=0x0000000000242D90 string=0x0000000000242DB4 "_"
 *   insn=0x0000000000242D94 string=0x0000000000242D98 "ma"
 *   insn=0x0000000000242D98 string=0x0000000000242D9C "nA"
 *   insn=0x0000000000242DA4 string=0x0000000000242DA8 "J"
 *   insn=0x0000000000242DAC string=0x0000000000242DB0 "+"
 *   insn=0x0000000000242DB8 string=0x0000000000242DBC "K!@"
 *   insn=0x0000000000242DC0 string=0x0000000000242DC4 "\n"
 *   insn=0x0000000000242DC4 string=0x0000000000242DC8 "_"
 *   insn=0x0000000000242DC8 string=0x0000000000242DCC " "
 *   insn=0x0000000000242DCC string=0x0000000000242DD0 "@"
 *   insn=0x0000000000242DD4 string=0x0000000000242DD8 ""
 *   insn=0x0000000000242DD8 string=0x0000000000242DDC "@"
 *   insn=0x0000000000242DF0 string=0x0000000000242DF4 ""
 *   insn=0x0000000000242E0C string=0x0000000000242E10 ""
 *   insn=0x0000000000242E14 string=0x0000000000242E18 "!"
 *   insn=0x0000000000242E20 string=0x0000000000242E24 ""
 *   insn=0x0000000000242E60 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000242E64 string=0x0000000000242E68 "4"
 *   insn=0x0000000000242E6C string=0x0000000000242E70 ""
 *   insn=0x0000000000242E7C string=0x0000000000242E80 ""
 *   insn=0x0000000000242E90 string=0x0000000000242E94 ".-"
 *   insn=0x0000000000242EA8 string=0x0000000000242EAC "U"
 *   insn=0x0000000000242EC0 string=0x0000000000242EC4 ")"
 *   insn=0x0000000000242EC4 string=0x0000000000242EC8 " !@"
 *   insn=0x0000000000242ED0 string=0x00000000001FB2C0 "0'"
 *   insn=0x0000000000242ED4 string=0x0000000000242ED8 "\t"
 *   insn=0x0000000000242ED8 string=0x0000000000242EDC ")"
 *   insn=0x0000000000242EF0 string=0x0000000000242EF4 " "
 *   insn=0x0000000000242EFC string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000242F00 string=0x0000000000242F04 "%"
 *   insn=0x0000000000242F04 string=0x0000000000242F08 ""
 *   insn=0x0000000000242F0C string=0x0000000000242F10 " !"
 *   insn=0x0000000000242F14 string=0x0000000000242F18 "a"
 *   insn=0x0000000000242F24 string=0x00000000001F7F10 "0'"
 *   insn=0x0000000000242F4C string=0x0000000000242F50 "4"
 *   insn=0x0000000000242F54 string=0x0000000000242F58 ""
 *   insn=0x0000000000242F64 string=0x0000000000242F68 "\t@"
 *   insn=0x0000000000242F74 string=0x0000000000242F78 ""
 *   insn=0x0000000000242F84 string=0x0000000000242F88 "@"
 *   insn=0x0000000000242FA0 string=0x0000000000242FA4 "\t%"
 *   insn=0x0000000000242FA4 string=0x0000000000242FA8 ")"
 *   insn=0x0000000000242FB0 string=0x0000000000242FB4 "!"
 *   insn=0x0000000000242FB4 string=0x0000000000243098 "\t%"
 *   insn=0x0000000000242FBC string=0x0000000000242FC0 "i"
 *   insn=0x0000000000242FC0 string=0x0000000000242FC4 "j"
 *   insn=0x0000000000242FC8 string=0x0000000000242FCC "\t"
 *   insn=0x0000000000242FCC string=0x0000000000242FD0 ")"
 *   insn=0x0000000000242FD0 string=0x0000000000242FD4 "\t"
 *   insn=0x0000000000242FD8 string=0x0000000000242FDC "h"
 *   insn=0x0000000000242FEC string=0x0000000000242FF0 "\t@"
 *   insn=0x0000000000242FFC string=0x0000000000243000 ""
 *   insn=0x000000000024300C string=0x0000000000243010 "@"
 *   insn=0x0000000000243020 string=0x0000000000243024 "h"
 *   insn=0x0000000000243024 string=0x0000000000243028 ""
 *   insn=0x0000000000243028 string=0x000000000024302C "h"
 *   insn=0x000000000024302C string=0x0000000000243030 "!"
 *   insn=0x0000000000243030 string=0x0000000000243034 "h"
 *   insn=0x0000000000243038 string=0x000000000024303C "\t@"
 *   insn=0x0000000000243040 string=0x0000000000243044 "h\n@"
 *   insn=0x0000000000243044 string=0x0000000000243048 ""
 *   insn=0x0000000000243048 string=0x000000000024304C "h\n"
 *   insn=0x000000000024304C string=0x0000000000243050 "!"
 *   insn=0x0000000000243050 string=0x0000000000243054 "h"
 *   insn=0x0000000000243058 string=0x000000000024305C "@"
 *   insn=0x0000000000243080 string=0x00000000002430DC "}"
 *   insn=0x0000000000243098 string=0x000000000024309C ")=G"
 *   insn=0x000000000024309C string=0x00000000002430A0 "!"
 *   insn=0x00000000002430A4 string=0x00000000002430A8 "\t"
 *   insn=0x00000000002430A4 string=0x00000000002430BC "\t"
 *   insn=0x00000000002430A8 string=0x00000000002430AC "*"
 *   insn=0x00000000002430AC string=0x00000000002430B0 "\n"
 *   insn=0x00000000002430B8 string=0x00000000002430C8 "?"
 *   insn=0x00000000002430BC string=0x00000000002430C0 "*"
 *   insn=0x00000000002430C0 string=0x00000000002430C4 "\n"
 *   insn=0x00000000002430C8 string=0x00000000002430CC "l"
 *   insn=0x00000000002430EC string=0x00000000002430F0 ""
 *   insn=0x00000000002430F4 string=0x00000000002430F8 "a\t"
 *   insn=0x00000000002430FC string=0x0000000000243100 "\t@"
 *   insn=0x000000000024310C string=0x0000000000243110 ""
 *   insn=0x0000000000243114 string=0x0000000000243118 "a"
 *   insn=0x000000000024311C string=0x0000000000243120 "@"
 *   insn=0x0000000000243128 string=0x000000000024312C ">"
 *   insn=0x000000000024313C string=0x0000000000243140 "'"
 *   insn=0x0000000000243144 string=0x0000000000243148 "\n%"
 *   insn=0x0000000000243148 string=0x000000000024314C "J"
 *   insn=0x0000000000243150 string=0x0000000000243154 "(a"
 *   insn=0x000000000024315C string=0x0000000000243160 "\n%"
 *   insn=0x0000000000243160 string=0x0000000000243164 "J=G"
 *   insn=0x0000000000243164 string=0x0000000000243168 ")!"
 *   insn=0x0000000000243168 string=0x000000000024316C "\n"
 *   insn=0x000000000024316C string=0x0000000000243170 "*"
 *   insn=0x000000000024316C string=0x000000000024322C "*"
 *   insn=0x0000000000243170 string=0x0000000000243174 "K"
 *   insn=0x0000000000243174 string=0x0000000000243178 "+"
 *   insn=0x000000000024317C string=0x0000000000243180 "_"
 *   insn=0x0000000000243194 string=0x0000000000243198 "4"
 *   insn=0x000000000024319C string=0x00000000002431A0 ""
 *   insn=0x00000000002431AC string=0x00000000002431B0 "\t@"
 *   insn=0x00000000002431BC string=0x00000000002431C0 ""
 *   insn=0x00000000002431CC string=0x00000000002431D0 "@"
 *   insn=0x00000000002431DC string=0x00000000002431E0 "4"
 *   insn=0x00000000002431E4 string=0x00000000002431E8 ""
 *   insn=0x00000000002431F4 string=0x00000000002431F8 "\t@"
 *   insn=0x0000000000243204 string=0x0000000000243208 ""
 *   insn=0x0000000000243214 string=0x0000000000243218 "@"
 *   insn=0x000000000024322C string=0x0000000000243230 "K"
 *   insn=0x0000000000243230 string=0x0000000000243234 "+"
 *   insn=0x0000000000243234 string=0x0000000000243238 "_"
 *   insn=0x0000000000243238 string=0x000000000024323C "m"
 *   insn=0x0000000000243248 string=0x000000000024324C "@,"
 *   insn=0x0000000000243254 string=0x0000000000243258 "4"
 *   insn=0x000000000024325C string=0x0000000000243260 ""
 *   insn=0x000000000024326C string=0x0000000000243270 "\t@"
 *   insn=0x000000000024327C string=0x0000000000243280 ""
 *   insn=0x000000000024328C string=0x0000000000243290 "@"
 *   insn=0x000000000024329C string=0x00000000002432A0 "+,"
 *   insn=0x00000000002432A0 string=0x00000000002432A4 "*,"
 *   insn=0x00000000002432A8 string=0x00000000002432AC "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::Component::ValueForBindedProperty(Caver::Component *this@<X0>, int a2@<W1>, __int64 a3@<X8>)
{
  char *v4; // x11
  char *v5; // x8
  char *v6; // x10
  int v7; // w12
  bool v8; // cc
  char **v9; // x12
  __int64 v10; // x0
  _DWORD *v11; // x20
  int v12; // w8

  _ReadStatusReg(TPIDR_EL0);
  v4 = (char *)*((_QWORD *)this + 10);
  v5 = (char *)this + 72;
  v6 = (char *)this + 72;
  if ( v4 )
  {
    do
    {
      v7 = *((_DWORD *)v4 + 8);
      v8 = v7 < a2;
      if ( v7 >= a2 )
        v9 = (char **)(v4 + 16);
      else
        v9 = (char **)(v4 + 24);
      if ( !v8 )
        v6 = v4;
      v4 = *v9;
    }
    while ( *v9 );
  }
  if ( v6 == v5 )
    goto LABEL_17;
  if ( *((_DWORD *)v6 + 8) > a2 )
    v6 = (char *)this + 72;
  if ( v6 == v5 )
  {
LABEL_17:
    *(_DWORD *)a3 = 0;
    *(_QWORD *)(a3 + 24) = 0;
    *(_QWORD *)(a3 + 32) = 0;
    *(_QWORD *)(a3 + 8) = 0;
    *(_QWORD *)(a3 + 16) = 0;
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, Caver::Component *))(**((_QWORD **)v6 + 7) + 24LL))(
            *((_QWORD *)v6 + 7),
            this);
    v11 = (_DWORD *)v10;
    if ( v10 )
      ++*(_DWORD *)(v10 + 8);
    Caver::Component::ValueForBindedOutlet();
    if ( v11 )
    {
      v12 = v11[2] - 1;
      v11[2] = v12;
      if ( !v12 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
}

