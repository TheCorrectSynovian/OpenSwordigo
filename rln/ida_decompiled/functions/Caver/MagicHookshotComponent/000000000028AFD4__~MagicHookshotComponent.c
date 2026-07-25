/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028AFD4
 * Mangled: _ZN5Caver22MagicHookshotComponentD2Ev
 * Demangled: Caver::MagicHookshotComponent::~MagicHookshotComponent()
 *
 * Callers: 2
 *   0x00000000001FCBC0  Caver::MagicHookshotComponent::~MagicHookshotComponent()
 *   0x000000000028A9FC  Caver::MagicHookshotComponent::HandleMessage(int,void *)
 *
 * Callees: 7
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FCBC0  Caver::MagicHookshotComponent::~MagicHookshotComponent()
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000028B41C  Caver::MagicHookshotComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 161
 *   insn=0x000000000028AFE4 string=0x000000000028AFE8 ""
 *   insn=0x000000000028AFEC string=0x000000000028AFF0 "`"
 *   insn=0x000000000028AFF0 string=0x000000000028AFF4 "\n!"
 *   insn=0x000000000028AFF4 string=0x000000000028AFF8 "\tA"
 *   insn=0x000000000028AFF8 string=0x000000000028AFFC "@"
 *   insn=0x000000000028AFFC string=0x000000000028B000 "!"
 *   insn=0x000000000028B004 string=0x000000000028B008 "i"
 *   insn=0x000000000028B008 string=0x000000000028B00C "`"
 *   insn=0x000000000028B010 string=0x000000000028B014 "@"
 *   insn=0x000000000028B010 string=0x000000000028B030 "`"
 *   insn=0x000000000028B014 string=0x000000000028B018 ""
 *   insn=0x000000000028B018 string=0x000000000028B01C ""
 *   insn=0x000000000028B020 string=0x000000000028B024 ""
 *   insn=0x000000000028B024 string=0x000000000028B028 ""
 *   insn=0x000000000028B034 string=0x000000000028B038 "@"
 *   insn=0x000000000028B034 string=0x000000000028B054 "`"
 *   insn=0x000000000028B038 string=0x000000000028B03C ""
 *   insn=0x000000000028B03C string=0x000000000028B040 ""
 *   insn=0x000000000028B044 string=0x000000000028B048 ""
 *   insn=0x000000000028B048 string=0x000000000028B04C ""
 *   insn=0x000000000028B058 string=0x000000000028B05C "@"
 *   insn=0x000000000028B05C string=0x000000000028B060 ""
 *   insn=0x000000000028B060 string=0x000000000028B064 ""
 *   insn=0x000000000028B068 string=0x000000000028B06C ""
 *   insn=0x000000000028B06C string=0x000000000028B070 ""
 *   insn=0x000000000028B078 string=0x000000000028B07C "`"
 *   insn=0x000000000028B084 string=0x000000000028B088 "u"
 *   insn=0x000000000028B08C string=0x000000000028B090 "@"
 *   insn=0x000000000028B08C string=0x000000000028B0AC "`"
 *   insn=0x000000000028B090 string=0x000000000028B094 ""
 *   insn=0x000000000028B094 string=0x000000000028B098 ""
 *   insn=0x000000000028B09C string=0x000000000028B0A0 ""
 *   insn=0x000000000028B0A0 string=0x000000000028B0A4 ""
 *   insn=0x000000000028B0AC string=0x000000000028B0B0 "uz"
 *   insn=0x000000000028B0B4 string=0x000000000028B0B8 "@"
 *   insn=0x000000000028B0B4 string=0x000000000028B0D4 "`v@"
 *   insn=0x000000000028B0B8 string=0x000000000028B0BC ""
 *   insn=0x000000000028B0BC string=0x000000000028B0C0 ""
 *   insn=0x000000000028B0C4 string=0x000000000028B0C8 ""
 *   insn=0x000000000028B0C8 string=0x000000000028B0CC ""
 *   insn=0x000000000028B0D8 string=0x000000000028B0DC "hn"
 *   insn=0x000000000028B0E0 string=0x000000000028B0E4 "@"
 *   insn=0x000000000028B0E4 string=0x000000000028B0E8 ""
 *   insn=0x000000000028B0E8 string=0x000000000028B0EC ""
 *   insn=0x000000000028B0F0 string=0x000000000028B0F4 ""
 *   insn=0x000000000028B0F4 string=0x000000000028B0F8 ""
 *   insn=0x000000000028B100 string=0x000000000028B104 "`j@"
 *   insn=0x000000000028B104 string=0x000000000028B108 "mB"
 *   insn=0x000000000028B108 string=0x000000000028B10C "A"
 *   insn=0x000000000028B10C string=0x000000000028B110 "hb"
 *   insn=0x000000000028B114 string=0x000000000028B118 "@"
 *   insn=0x000000000028B118 string=0x000000000028B11C ""
 *   insn=0x000000000028B11C string=0x000000000028B120 ""
 *   insn=0x000000000028B124 string=0x000000000028B128 ""
 *   insn=0x000000000028B128 string=0x000000000028B12C ""
 *   insn=0x000000000028B134 string=0x000000000028B138 "5D"
 *   insn=0x000000000028B138 string=0x000000000028B13C "`B"
 *   insn=0x000000000028B13C string=0x000000000028B140 "\n!"
 *   insn=0x000000000028B140 string=0x000000000028B144 "\tA"
 *   insn=0x000000000028B144 string=0x000000000028B148 "!"
 *   insn=0x000000000028B148 string=0x000000000028B14C "@"
 *   insn=0x000000000028B150 string=0x000000000028B154 "i"
 *   insn=0x000000000028B154 string=0x000000000028B158 "`"
 *   insn=0x000000000028B15C string=0x000000000028B160 "`:@"
 *   insn=0x000000000028B164 string=0x000000000028B168 "@"
 *   insn=0x000000000028B168 string=0x000000000028B16C ""
 *   insn=0x000000000028B16C string=0x000000000028B170 ""
 *   insn=0x000000000028B174 string=0x000000000028B178 ""
 *   insn=0x000000000028B178 string=0x000000000028B17C ""
 *   insn=0x000000000028B194 string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000028B1A0 string=0x000000000028B1A4 "U"
 *   insn=0x000000000028B1A8 string=0x000000000028B1AC "F"
 *   insn=0x000000000028B1B0 string=0x000000000028B1B4 "7"
 *   insn=0x000000000028B1B8 string=0x000000000028B1BC "("
 *   insn=0x000000000028B1C8 string=0x000000000028B1CC "`"
 *   insn=0x000000000028B1D0 string=0x000000000028B20C "@"
 *   insn=0x000000000028B1DC string=0x000000000028B1E0 "("
 *   insn=0x000000000028B1E0 string=0x000000000028B1E4 "\t\t@"
 *   insn=0x000000000028B1E0 string=0x000000000028B204 "`"
 *   insn=0x000000000028B1E4 string=0x000000000028B1E8 ")"
 *   insn=0x000000000028B1E8 string=0x000000000028B1EC "\t\t"
 *   insn=0x000000000028B1F0 string=0x000000000028B1F4 "\t"
 *   insn=0x000000000028B1F4 string=0x000000000028B1F8 ")"
 *   insn=0x000000000028B1FC string=0x000000000028B200 " "
 *   insn=0x000000000028B20C string=0x000000000028B210 ""
 *   insn=0x000000000028B210 string=0x000000000028B214 ""
 *   insn=0x000000000028B218 string=0x000000000028B21C ""
 *   insn=0x000000000028B21C string=0x000000000028B220 ""
 *   insn=0x000000000028B228 string=0x000000000028B22C "`"
 *   insn=0x000000000028B22C string=0x000000000028B230 ")E"
 *   insn=0x000000000028B230 string=0x000000000028B234 "A"
 *   insn=0x000000000028B234 string=0x000000000028B238 "h"
 *   insn=0x000000000028B23C string=0x000000000028B240 "@"
 *   insn=0x000000000028B240 string=0x000000000028B244 ""
 *   insn=0x000000000028B244 string=0x000000000028B248 ""
 *   insn=0x000000000028B24C string=0x000000000028B250 ""
 *   insn=0x000000000028B250 string=0x000000000028B254 ""
 *   insn=0x000000000028B25C string=0x000000000028B260 "`"
 *   insn=0x000000000028B260 string=0x000000000028B264 ")E"
 *   insn=0x000000000028B264 string=0x000000000028B268 "A"
 *   insn=0x000000000028B268 string=0x000000000028B26C "hz"
 *   insn=0x000000000028B270 string=0x000000000028B274 "@"
 *   insn=0x000000000028B274 string=0x000000000028B278 ""
 *   insn=0x000000000028B278 string=0x000000000028B27C ""
 *   insn=0x000000000028B280 string=0x000000000028B284 ""
 *   insn=0x000000000028B284 string=0x000000000028B288 ""
 *   insn=0x000000000028B290 string=0x000000000028B294 "`v@"
 *   insn=0x000000000028B294 string=0x000000000028B298 ")E"
 *   insn=0x000000000028B298 string=0x000000000028B29C "A"
 *   insn=0x000000000028B29C string=0x000000000028B2A0 "hn"
 *   insn=0x000000000028B2A4 string=0x000000000028B2A8 "@"
 *   insn=0x000000000028B2A8 string=0x000000000028B2AC ""
 *   insn=0x000000000028B2AC string=0x000000000028B2B0 ""
 *   insn=0x000000000028B2B4 string=0x000000000028B2B8 ""
 *   insn=0x000000000028B2B8 string=0x000000000028B2BC ""
 *   insn=0x000000000028B2C4 string=0x000000000028B2C8 "`j@"
 *   insn=0x000000000028B2C8 string=0x000000000028B2CC "mB"
 *   insn=0x000000000028B2CC string=0x000000000028B2D0 "A"
 *   insn=0x000000000028B2D0 string=0x000000000028B2D4 "hb"
 *   insn=0x000000000028B2D8 string=0x000000000028B2DC "@"
 *   insn=0x000000000028B2DC string=0x000000000028B2E0 ""
 *   insn=0x000000000028B2E0 string=0x000000000028B2E4 ""
 *   insn=0x000000000028B2E8 string=0x000000000028B2EC ""
 *   insn=0x000000000028B2EC string=0x000000000028B2F0 ""
 *   insn=0x000000000028B2F8 string=0x000000000028B2FC "5D"
 *   insn=0x000000000028B2FC string=0x000000000028B300 "`B"
 *   insn=0x000000000028B300 string=0x000000000028B304 "\n!"
 *   insn=0x000000000028B304 string=0x000000000028B308 "\tA"
 *   insn=0x000000000028B308 string=0x000000000028B30C "!"
 *   insn=0x000000000028B30C string=0x000000000028B310 "@"
 *   insn=0x000000000028B314 string=0x000000000028B318 "i"
 *   insn=0x000000000028B318 string=0x000000000028B31C "`"
 *   insn=0x000000000028B320 string=0x000000000028B324 "`:@"
 *   insn=0x000000000028B328 string=0x000000000028B32C "@"
 *   insn=0x000000000028B32C string=0x000000000028B330 ""
 *   insn=0x000000000028B330 string=0x000000000028B334 ""
 *   insn=0x000000000028B338 string=0x000000000028B33C ""
 *   insn=0x000000000028B33C string=0x000000000028B340 ""
 *   insn=0x000000000028B348 string=0x000000000028B34C "a"
 *   insn=0x000000000028B34C string=0x000000000028B350 """
 *   insn=0x000000000028B360 string=0x000000000028B364 "("
 *   insn=0x000000000028B364 string=0x000000000028B368 "\t\t@"
 *   insn=0x000000000028B368 string=0x000000000028B36C ")"
 *   insn=0x000000000028B36C string=0x000000000028B370 "\t\t"
 *   insn=0x000000000028B374 string=0x000000000028B378 "\t"
 *   insn=0x000000000028B378 string=0x000000000028B37C ")"
 *   insn=0x000000000028B380 string=0x000000000028B384 " "
 *   insn=0x000000000028B388 string=0x000000000028B38C "Q"
 *   insn=0x000000000028B3A0 string=0x000000000028B3A4 "h:@"
 *   insn=0x000000000028B3A8 string=0x000000000028B3AC "("
 *   insn=0x000000000028B3AC string=0x000000000028B3B0 "\t\t@"
 *   insn=0x000000000028B3B0 string=0x000000000028B3B4 ")"
 *   insn=0x000000000028B3B4 string=0x000000000028B3B8 "\t\t"
 *   insn=0x000000000028B3BC string=0x000000000028B3C0 "\t"
 *   insn=0x000000000028B3C0 string=0x000000000028B3C4 ")"
 *   insn=0x000000000028B3C8 string=0x000000000028B3CC " "
 *   insn=0x000000000028B3D0 string=0x000000000028B3D4 "?"
 *   insn=0x000000000028B3D8 string=0x000000000028B3DC ":"
 *   insn=0x000000000028B3F4 string=0x00000000001FCBC0 "0'"
 *   insn=0x000000000028B404 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000028B414 string=0x000000000028B418 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MagicHookshotComponent::~MagicHookshotComponent(Caver::MagicHookshotComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8
  _DWORD *v5; // x0
  int v6; // w8
  _DWORD *v7; // x0
  int v8; // w8
  _DWORD *v9; // x0
  int v10; // w8
  _DWORD *v11; // x0
  int v12; // w8
  _DWORD *v13; // x0
  int v14; // w8
  _DWORD *v15; // x0
  int v16; // w8
  __int128 v17; // q0
  _DWORD *v18; // x0
  int v19; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 41);
  *(_QWORD *)&v3 = &off_6C0AC8;
  *((_QWORD *)&v3 + 1) = &off_6C0B08;
  *(_QWORD *)this = off_6C0990;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 39);
  if ( v5 )
  {
    v6 = v5[2] - 1;
    v5[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v7 = (_DWORD *)*((_QWORD *)this + 36);
  if ( v7 )
  {
    v8 = v7[2] - 1;
    v7[2] = v8;
    if ( !v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  v9 = (_DWORD *)*((_QWORD *)this + 35);
  *((_QWORD *)this + 33) = off_6BE248;
  if ( v9 )
  {
    v10 = v9[2] - 1;
    v9[2] = v10;
    if ( !v10 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  v11 = (_DWORD *)*((_QWORD *)this + 32);
  *((_QWORD *)this + 30) = off_6BE248;
  if ( v11 )
  {
    v12 = v11[2] - 1;
    v11[2] = v12;
    if ( !v12 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 8LL))(v11);
  }
  v13 = (_DWORD *)*((_QWORD *)this + 29);
  *((_QWORD *)this + 27) = off_6BE248;
  if ( v13 )
  {
    v14 = v13[2] - 1;
    v13[2] = v14;
    if ( !v14 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 8LL))(v13);
  }
  v15 = (_DWORD *)*((_QWORD *)this + 26);
  *((_QWORD *)this + 24) = off_6C0268;
  if ( v15 )
  {
    v16 = v15[2] - 1;
    v15[2] = v16;
    if ( !v16 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 8LL))(v15);
  }
  *(_QWORD *)&v17 = &off_6C1358;
  *((_QWORD *)&v17 + 1) = &off_6C1398;
  *(_QWORD *)this = off_6C1220;
  *((_OWORD *)this + 1) = v17;
  Caver::Program::~Program((Caver::MagicHookshotComponent *)((char *)this + 144));
  v18 = (_DWORD *)*((_QWORD *)this + 14);
  if ( v18 )
  {
    v19 = v18[2] - 1;
    v18[2] = v19;
    if ( !v19 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v18 + 8LL))(v18);
  }
  Caver::Component::~Component(this);
}

