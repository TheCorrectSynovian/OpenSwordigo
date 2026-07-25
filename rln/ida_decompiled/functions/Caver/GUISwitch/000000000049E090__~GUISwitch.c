/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049E090
 * Mangled: _ZN5Caver9GUISwitchD2Ev
 * Demangled: Caver::GUISwitch::~GUISwitch()
 *
 * Callers: 1
 *   0x00000000001F9800  Caver::GUISwitch::~GUISwitch()
 *
 * Callees: 9
 *   0x00000000001F4DB0  Caver::GUIControl::~GUIControl()
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9800  Caver::GUISwitch::~GUISwitch()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000049E29C  Caver::GUITextField::New(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 63
 *   insn=0x000000000049E0A0 string=0x000000000049E0A4 "U"
 *   insn=0x000000000049E0AC string=0x000000000049E0B0 "I"
 *   insn=0x000000000049E0B0 string=0x000000000049E0B4 "*"
 *   insn=0x000000000049E0B8 string=0x000000000049E0BC "h"
 *   insn=0x000000000049E0BC string=0x000000000049E0C0 ")"
 *   insn=0x000000000049E0C0 string=0x000000000049E0C4 "J"
 *   insn=0x000000000049E0C8 string=0x000000000049E0CC ")A"
 *   insn=0x000000000049E0D0 string=0x000000000049E0D4 "i"
 *   insn=0x000000000049E0D8 string=0x000000000049E0DC "t"
 *   insn=0x000000000049E0D8 string=0x000000000049E198 ")"
 *   insn=0x000000000049E0DC string=0x000000000049E0E0 "4"
 *   insn=0x000000000049E0E0 string=0x000000000049E124 "`"
 *   insn=0x000000000049E0E4 string=0x000000000049E0E8 ""
 *   insn=0x000000000049E0F4 string=0x000000000049E0F8 "\t@"
 *   insn=0x000000000049E104 string=0x000000000049E108 ""
 *   insn=0x000000000049E114 string=0x000000000049E118 "@"
 *   insn=0x000000000049E128 string=0x000000000049E12C "@"
 *   insn=0x000000000049E128 string=0x000000000049E148 "`"
 *   insn=0x000000000049E12C string=0x000000000049E130 ""
 *   insn=0x000000000049E130 string=0x000000000049E134 ""
 *   insn=0x000000000049E138 string=0x000000000049E13C ""
 *   insn=0x000000000049E13C string=0x000000000049E140 ""
 *   insn=0x000000000049E14C string=0x000000000049E150 "@"
 *   insn=0x000000000049E150 string=0x000000000049E154 ""
 *   insn=0x000000000049E154 string=0x000000000049E158 ""
 *   insn=0x000000000049E15C string=0x000000000049E160 ""
 *   insn=0x000000000049E160 string=0x000000000049E164 ""
 *   insn=0x000000000049E170 string=0x00000000001F4DB0 "P'"
 *   insn=0x000000000049E17C string=0x000000000049E180 "!"
 *   insn=0x000000000049E180 string=0x000000000049E1E4 ";`"
 *   insn=0x000000000049E198 string=0x000000000049E19C ")=G"
 *   insn=0x000000000049E19C string=0x000000000049E1A0 "!"
 *   insn=0x000000000049E1A4 string=0x000000000049E1A8 "\t"
 *   insn=0x000000000049E1A4 string=0x000000000049E1BC "\t"
 *   insn=0x000000000049E1A8 string=0x000000000049E1AC "*"
 *   insn=0x000000000049E1AC string=0x000000000049E1B0 "\n"
 *   insn=0x000000000049E1B8 string=0x000000000049E1C8 "?"
 *   insn=0x000000000049E1BC string=0x000000000049E1C0 "*"
 *   insn=0x000000000049E1C0 string=0x000000000049E1C4 "\n"
 *   insn=0x000000000049E1D0 string=0x000000000049E1D4 "t0"
 *   insn=0x000000000049E1D4 string=0x000000000049E1D8 "t"
 *   insn=0x000000000049E1D8 string=0x000000000049E1DC "T"
 *   insn=0x000000000049E1E4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000049E1F0 string=0x000000000049E1F4 "`"
 *   insn=0x000000000049E1F8 string=0x000000000049E234 "@"
 *   insn=0x000000000049E204 string=0x000000000049E208 "("
 *   insn=0x000000000049E208 string=0x000000000049E20C "\t\t@"
 *   insn=0x000000000049E208 string=0x000000000049E22C "`"
 *   insn=0x000000000049E20C string=0x000000000049E210 ")"
 *   insn=0x000000000049E210 string=0x000000000049E214 "\t\t"
 *   insn=0x000000000049E218 string=0x000000000049E21C "\t"
 *   insn=0x000000000049E21C string=0x000000000049E220 ")"
 *   insn=0x000000000049E224 string=0x000000000049E228 " "
 *   insn=0x000000000049E234 string=0x000000000049E238 ""
 *   insn=0x000000000049E238 string=0x000000000049E23C ""
 *   insn=0x000000000049E240 string=0x000000000049E244 ""
 *   insn=0x000000000049E244 string=0x000000000049E248 ""
 *   insn=0x000000000049E25C string=0x000000000049E260 ";"
 *   insn=0x000000000049E270 string=0x000000000049E274 "cm"
 *   insn=0x000000000049E274 string=0x00000000001F9800 "0'"
 *   insn=0x000000000049E280 string=0x000000000049E284 "d"
 *   insn=0x000000000049E284 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000049E28C string=0x000000000049E290 "d"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUISwitch::~GUISwitch(Caver::GUISwitch *this)
{
  __int64 v2; // x8
  void *v3; // x0
  _QWORD *v4; // x20
  __int64 v5; // x8
  __int64 v6; // x8
  _DWORD *v7; // x0
  int v8; // w8
  _DWORD *v9; // x0
  int v10; // w8
  unsigned int *v11; // x8
  int v12; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = *((_QWORD *)this + 42);
  v3 = (void *)(v2 - 24);
  *(_QWORD *)this = off_6D6660;
  if ( (__int64 *)(v2 - 24) == &qword_6FD2E0 )
    goto LABEL_2;
  v11 = (unsigned int *)(v2 - 8);
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
  if ( v12 > 0 )
  {
LABEL_2:
    v4 = (_QWORD *)*((_QWORD *)this + 40);
    if ( !v4 )
      goto LABEL_6;
  }
  else
  {
    operator delete(v3);
    v4 = (_QWORD *)*((_QWORD *)this + 40);
    if ( !v4 )
      goto LABEL_6;
  }
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
LABEL_6:
  v7 = (_DWORD *)*((_QWORD *)this + 38);
  if ( v7 )
  {
    v8 = v7[2] - 1;
    v7[2] = v8;
    if ( !v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  v9 = (_DWORD *)*((_QWORD *)this + 37);
  if ( v9 )
  {
    v10 = v9[2] - 1;
    v9[2] = v10;
    if ( !v10 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  Caver::GUIControl::~GUIControl(this);
}

