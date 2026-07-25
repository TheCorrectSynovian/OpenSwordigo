/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A6D18
 * Mangled: _ZN5Caver9GUIEffect14CreateVerticesEv
 * Demangled: Caver::GUIEffect::CreateVertices(void)
 *
 * Callers: 1
 *   0x00000000001FE7F0  Caver::GUIEffect::CreateVertices(void)
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *
 * Referenced strings: 170
 *   insn=0x00000000004A6D24 string=0x00000000004A6D28 "h>@"
 *   insn=0x00000000004A6D2C string=0x00000000004A6D30 " \t"
 *   insn=0x00000000004A6D30 string=0x00000000004A6E54 "hb@"
 *   insn=0x00000000004A6D34 string=0x00000000004A6D38 "hb@"
 *   insn=0x00000000004A6D3C string=0x00000000004A6D40 "@"
 *   insn=0x00000000004A6D40 string=0x00000000004A6D68 "h6@"
 *   insn=0x00000000004A6D48 string=0x00000000004A6D4C "hb"
 *   insn=0x00000000004A6D4C string=0x00000000004A6D50 "F"
 *   insn=0x00000000004A6D50 string=0x00000000004A6D54 "h6@"
 *   insn=0x00000000004A6D50 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004A6D54 string=0x00000000004A6D58 "`6"
 *   insn=0x00000000004A6D58 string=0x00000000004A6D5C "h"
 *   insn=0x00000000004A6D64 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004A6D68 string=0x00000000004A6D6C "j&J)"
 *   insn=0x00000000004A6D70 string=0x00000000004A6D74 "\n%"
 *   insn=0x00000000004A6D74 string=0x00000000004A6D78 "`Z@"
 *   insn=0x00000000004A6D78 string=0x00000000004A6D7C "A"
 *   insn=0x00000000004A6D7C string=0x00000000004A6D80 "\t"
 *   insn=0x00000000004A6D80 string=0x00000000004A6D84 """
 *   insn=0x00000000004A6D8C string=0x00000000004A6D90 "a^@"
 *   insn=0x00000000004A6D90 string=0x00000000004A6D94 "\t"
 *   insn=0x00000000004A6D98 string=0x00000000004A6D9C "\n!"
 *   insn=0x00000000004A6D9C string=0x00000000004A6DA0 "\n1"
 *   insn=0x00000000004A6DA0 string=0x00000000004A6DA4 "!(""
 *   insn=0x00000000004A6DC8 string=0x00000000004A6DD4 "a"A=`N@"
 *   insn=0x00000000004A6DCC string=0x00000000004A6DD0 ")A"
 *   insn=0x00000000004A6DD4 string=0x00000000004A6DD8 "`N@"
 *   insn=0x00000000004A6DD8 string=0x00000000004A6DDC "b&A=c*A=d.A=!"
 *   insn=0x00000000004A6DDC string=0x00000000004A6DE0 "c*A=d.A=!"
 *   insn=0x00000000004A6DE0 string=0x00000000004A6DE4 "d.A=!"
 *   insn=0x00000000004A6DE4 string=0x00000000004A6DE8 "!"
 *   insn=0x00000000004A6DE8 string=0x00000000004A6DEC "B"
 *   insn=0x00000000004A6DF0 string=0x00000000004A6DF4 "c"
 *   insn=0x00000000004A6DF8 string=0x00000000004A6DFC "+"
 *   insn=0x00000000004A6E04 string=0x00000000004A6E08 "L"
 *   insn=0x00000000004A6E10 string=0x00000000004A6E14 "m"
 *   insn=0x00000000004A6E14 string=0x00000000004A6E18 "k"
 *   insn=0x00000000004A6E40 string=0x00000000004A6E44 "?q"
 *   insn=0x00000000004A6E44 string=0x00000000004A6E48 "i)"
 *   insn=0x00000000004A6E4C string=0x00000000004A6DCC "h6@"
 *   insn=0x00000000004A6E58 string=0x00000000004A6E5C "@"
 *   insn=0x00000000004A6E5C string=0x00000000004A6E84 "j.J)i6@"
 *   insn=0x00000000004A6E64 string=0x00000000004A6E68 "hb"
 *   insn=0x00000000004A6E6C string=0x00000000004A6E70 "h6@"
 *   insn=0x00000000004A6E70 string=0x00000000004A6E74 "`6"
 *   insn=0x00000000004A6E74 string=0x00000000004A6E78 "h"
 *   insn=0x00000000004A6E7C string=0x00000000004A6E80 "88"
 *   insn=0x00000000004A6E84 string=0x00000000004A6E88 "i6@"
 *   insn=0x00000000004A6E94 string=0x00000000004A6E98 "*-"
 *   insn=0x00000000004A6E98 string=0x00000000004A6E9C "?\t"
 *   insn=0x00000000004A6E9C string=0x00000000004A6EA0 "gZ@"
 *   insn=0x00000000004A6EA0 string=0x00000000004A6EA4 "C"
 *   insn=0x00000000004A6EA4 string=0x00000000004A6EA8 "e"
 *   insn=0x00000000004A6EA8 string=0x00000000004A6EAC "d(!"
 *   insn=0x00000000004A6EB0 string=0x00000000004A6EB4 "b(""
 *   insn=0x00000000004A6EB8 string=0x00000000004A6EBC "g(!"
 *   insn=0x00000000004A6EBC string=0x00000000004A6EC0 "+"
 *   insn=0x00000000004A6EC0 string=0x00000000004A6EC4 "?)"
 *   insn=0x00000000004A6EC4 string=0x00000000004A6EC8 "?9"
 *   insn=0x00000000004A6EC8 string=0x00000000004A6ECC "+"
 *   insn=0x00000000004A6ECC string=0x00000000004A6ED0 "?Y"
 *   insn=0x00000000004A6ED0 string=0x00000000004A6ED4 "+"
 *   insn=0x00000000004A6ED4 string=0x00000000004A6ED8 "$A"
 *   insn=0x00000000004A6ED8 string=0x00000000004A6EDC "$A"
 *   insn=0x00000000004A6EDC string=0x00000000004A6EE0 "#"
 *   insn=0x00000000004A6EE0 string=0x00000000004A6EE4 "#A"
 *   insn=0x00000000004A6EE4 string=0x00000000004A6EE8 "#a"
 *   insn=0x00000000004A6EE8 string=0x00000000004A6EEC "'A\n-"
 *   insn=0x00000000004A6EF0 string=0x00000000004A6EF4 "p^@"
 *   insn=0x00000000004A6EF8 string=0x00000000004A6EFC ""A"
 *   insn=0x00000000004A6EFC string=0x00000000004A6F00 ""Q"
 *   insn=0x00000000004A6F00 string=0x00000000004A6F04 ""q"
 *   insn=0x00000000004A6F0C string=0x00000000004A6F10 "q( "
 *   insn=0x00000000004A6F10 string=0x00000000004A6F14 "A(!"
 *   insn=0x00000000004A6F14 string=0x00000000004A6F18 "@( "
 *   insn=0x00000000004A6F1C string=0x00000000004A6F20 "?y"
 *   insn=0x00000000004A6F20 string=0x00000000004A6F24 "1"
 *   insn=0x00000000004A6F24 string=0x00000000004A6F28 "?"
 *   insn=0x00000000004A6F28 string=0x00000000004A6F2C "1"
 *   insn=0x00000000004A6F2C string=0x00000000004A6F30 "?"
 *   insn=0x00000000004A6F30 string=0x00000000004A6F34 "?"
 *   insn=0x00000000004A6F34 string=0x00000000004A6F38 "?"
 *   insn=0x00000000004A6F38 string=0x00000000004A6F3C "?"
 *   insn=0x00000000004A6F3C string=0x00000000004A6F40 "*"
 *   insn=0x00000000004A6F40 string=0x00000000004A6F44 "?"
 *   insn=0x00000000004A6F44 string=0x00000000004A6F48 "?"
 *   insn=0x00000000004A6F48 string=0x00000000004A6F4C "?"
 *   insn=0x00000000004A6F4C string=0x00000000004A6F50 "*"
 *   insn=0x00000000004A6F50 string=0x00000000004A6F54 "?\t"
 *   insn=0x00000000004A6F54 string=0x00000000004A6F58 "$"
 *   insn=0x00000000004A6F58 string=0x00000000004A6F5C "?"
 *   insn=0x00000000004A6F5C string=0x00000000004A6F60 "*!"
 *   insn=0x00000000004A6F60 string=0x00000000004A6F64 "?)"
 *   insn=0x00000000004A6F64 string=0x00000000004A6F68 "*1"
 *   insn=0x00000000004A6F68 string=0x00000000004A6F6C "+5"
 *   insn=0x00000000004A6F6C string=0x00000000004A6F70 "?9"
 *   insn=0x00000000004A6F70 string=0x00000000004A6F74 "?I"
 *   insn=0x00000000004A6F74 string=0x00000000004A6F78 "?Y"
 *   insn=0x00000000004A6F78 string=0x00000000004A6F7C "*a"
 *   insn=0x00000000004A6F7C string=0x00000000004A6F80 "+e"
 *   insn=0x00000000004A6F80 string=0x00000000004A6F84 "?i"
 *   insn=0x00000000004A6F84 string=0x00000000004A6F88 "&u"
 *   insn=0x00000000004A6F88 string=0x00000000004A6F8C "?y"
 *   insn=0x00000000004A6F8C string=0x00000000004A6F90 "#\t"
 *   insn=0x00000000004A6F90 string=0x00000000004A6F94 "#\t"
 *   insn=0x00000000004A6F94 string=0x00000000004A6F98 "#\t"
 *   insn=0x00000000004A6F98 string=0x00000000004A6F9C """
 *   insn=0x00000000004A6F9C string=0x00000000004A6FA0 """
 *   insn=0x00000000004A6FA0 string=0x00000000004A6FA4 ""%"
 *   insn=0x00000000004A6FA4 string=0x00000000004A6FA8 "1"
 *   insn=0x00000000004A6FA8 string=0x00000000004A6FAC "'"
 *   insn=0x00000000004A6FAC string=0x00000000004A6FB0 "'"
 *   insn=0x00000000004A6FB0 string=0x00000000004A6FB4 " "
 *   insn=0x00000000004A6FB4 string=0x00000000004A6FB8 "!E"
 *   insn=0x00000000004A6FB8 string=0x00000000004A6FBC "!U"
 *   insn=0x00000000004A6FC0 string=0x00000000004A6FC4 "a"A=`N@"
 *   insn=0x00000000004A6FC4 string=0x00000000004A6FC8 "`N@"
 *   insn=0x00000000004A6FC8 string=0x00000000004A6FCC "b&A=c*A=d.A=!"
 *   insn=0x00000000004A6FCC string=0x00000000004A6FD0 "c*A=d.A=!"
 *   insn=0x00000000004A6FD0 string=0x00000000004A6FD4 "d.A=!"
 *   insn=0x00000000004A6FD4 string=0x00000000004A6FD8 "!"
 *   insn=0x00000000004A6FD8 string=0x00000000004A6FDC "B"
 *   insn=0x00000000004A6FE0 string=0x00000000004A6FE4 "c"
 *   insn=0x00000000004A6FE8 string=0x00000000004A6FEC "+"
 *   insn=0x00000000004A6FF4 string=0x00000000004A6FF8 "L"
 *   insn=0x00000000004A6FFC string=0x00000000004A7000 "j6@"
 *   insn=0x00000000004A7004 string=0x00000000004A7008 "m"
 *   insn=0x00000000004A7008 string=0x00000000004A700C "k"
 *   insn=0x00000000004A7030 string=0x00000000004A7034 "J"
 *   insn=0x00000000004A7038 string=0x00000000004A703C "K"
 *   insn=0x00000000004A703C string=0x00000000004A7040 "a"A=`N@"
 *   insn=0x00000000004A7040 string=0x00000000004A7044 "`N@"
 *   insn=0x00000000004A7044 string=0x00000000004A7048 "b&A=c*A=d.A=!"
 *   insn=0x00000000004A7048 string=0x00000000004A704C "c*A=d.A=!"
 *   insn=0x00000000004A704C string=0x00000000004A7050 "d.A=!"
 *   insn=0x00000000004A7050 string=0x00000000004A7054 "!"
 *   insn=0x00000000004A7054 string=0x00000000004A7058 "B"
 *   insn=0x00000000004A705C string=0x00000000004A7060 "c"
 *   insn=0x00000000004A7064 string=0x00000000004A7068 "+"
 *   insn=0x00000000004A7070 string=0x00000000004A7074 "L"
 *   insn=0x00000000004A7078 string=0x00000000004A707C "j6@"
 *   insn=0x00000000004A7080 string=0x00000000004A7084 "m"
 *   insn=0x00000000004A7084 string=0x00000000004A7088 "k"
 *   insn=0x00000000004A70AC string=0x00000000004A70B0 "J"
 *   insn=0x00000000004A70B4 string=0x00000000004A70B8 "K"
 *   insn=0x00000000004A70B8 string=0x00000000004A70BC "j6@"
 *   insn=0x00000000004A70BC string=0x00000000004A70C0 "J"
 *   insn=0x00000000004A70C0 string=0x00000000004A70C4 "_-"
 *   insn=0x00000000004A70C4 string=0x00000000004A70C8 "j6@"
 *   insn=0x00000000004A70C8 string=0x00000000004A70CC "J"
 *   insn=0x00000000004A70CC string=0x00000000004A70D0 "_="
 *   insn=0x00000000004A70D0 string=0x00000000004A70D4 "a"A=`N@"
 *   insn=0x00000000004A70D4 string=0x00000000004A70D8 "`N@"
 *   insn=0x00000000004A70D8 string=0x00000000004A70DC "b&A=c*A=d.A=!"
 *   insn=0x00000000004A70DC string=0x00000000004A70E0 "c*A=d.A=!"
 *   insn=0x00000000004A70E0 string=0x00000000004A70E4 "d.A=!"
 *   insn=0x00000000004A70E4 string=0x00000000004A70E8 "!"
 *   insn=0x00000000004A70E8 string=0x00000000004A70EC "B"
 *   insn=0x00000000004A70F0 string=0x00000000004A70F4 "c"
 *   insn=0x00000000004A70F8 string=0x00000000004A70FC "+"
 *   insn=0x00000000004A7104 string=0x00000000004A7108 "L"
 *   insn=0x00000000004A710C string=0x00000000004A7110 "j6@"
 *   insn=0x00000000004A7114 string=0x00000000004A7118 "m"
 *   insn=0x00000000004A7118 string=0x00000000004A711C "k"
 *   insn=0x00000000004A7140 string=0x00000000004A7144 "J"
 *   insn=0x00000000004A7148 string=0x00000000004A714C "KM"
 *   insn=0x00000000004A714C string=0x00000000004A7150 "j6@"
 *   insn=0x00000000004A7150 string=0x00000000004A7154 "J"
 *   insn=0x00000000004A7154 string=0x00000000004A7158 ""
 *   insn=0x00000000004A715C string=0x00000000004A7160 "_]"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIEffect::CreateVertices(
        Caver::GUIEffect *this,
        double a2,
        double a3,
        double a4,
        float a5,
        float a6)
{
  int v7; // w8
  __int64 v8; // x0
  void *v9; // x8
  __int64 v10; // x8
  float v11; // w9
  float v12; // w10
  float v13; // s0
  float v14; // s2
  float v15; // s0
  float v16; // s1
  __int64 v17; // x9
  float v18; // s1
  float v19; // s0
  int v20; // w11
  int v21; // w12
  float v22; // s0
  int v23; // w13
  unsigned __int16 v24; // w11
  unsigned __int8 v25; // w12
  __int64 v26; // x0
  void *v27; // x8
  float v28; // w10
  float v29; // w11
  __int64 v30; // x9
  float v31; // s4
  float v32; // s3
  float v33; // s16
  float v34; // s2
  float v35; // s1
  float v36; // s0
  __int64 v37; // x8
  float v38; // s0
  float v39; // s1
  float v40; // s2
  int v41; // w11
  float v42; // s4
  float v43; // s3
  int v44; // w12
  float v45; // s0
  int v46; // w13
  unsigned __int16 v47; // w11
  unsigned __int8 v48; // w12
  float v49; // s0
  float v50; // s1
  float v51; // s2
  int v52; // w11
  float v53; // s4
  float v54; // s3
  int v55; // w12
  float v56; // s0
  int v57; // w13
  unsigned __int16 v58; // w11
  unsigned __int8 v59; // w12
  float v60; // s0
  int v61; // w11
  int v62; // w12
  float v63; // s0
  int v64; // w13
  unsigned __int16 v65; // w11
  unsigned __int8 v66; // w12
  __int64 v67; // x10

  v7 = *((_DWORD *)this + 15);
  if ( v7 == 1 )
  {
    if ( *((_DWORD *)this + 24) != 24 )
    {
      *((_DWORD *)this + 24) = 24;
      v26 = operator new[](0x180u);
      v27 = (void *)*((_QWORD *)this + 13);
      *((_QWORD *)this + 13) = v26;
      if ( v27 )
        operator delete[](v27);
    }
    v28 = *((float *)this + 20);
    v29 = *((float *)this + 21);
    v30 = *((_QWORD *)this + 13);
    *(float *)v30 = v28;
    *(_QWORD *)(v30 + 4) = LODWORD(v29);
    v31 = v28 + 0.0;
    v32 = *((float *)this + 22) + v28;
    *(_QWORD *)(v30 + 20) = LODWORD(v29);
    *(_DWORD *)(v30 + 40) = 0;
    *(_DWORD *)(v30 + 56) = 0;
    *(_QWORD *)(v30 + 68) = LODWORD(v29);
    *(_DWORD *)(v30 + 88) = 0;
    *(_QWORD *)(v30 + 100) = LODWORD(v29);
    *(float *)(v30 + 32) = v28 + 0.0;
    *(float *)(v30 + 36) = v29 + 40.0;
    *(float *)(v30 + 48) = v28 + 0.0;
    *(float *)(v30 + 52) = v29 + 40.0;
    *(float *)(v30 + 16) = v32;
    *(float *)(v30 + 64) = v32;
    *(float *)(v30 + 96) = v32;
    *(float *)(v30 + 80) = v32 + 0.0;
    *(float *)(v30 + 84) = v29 + 40.0;
    v33 = *((float *)this + 23);
    *(float *)(v30 + 320) = v28 + 40.0;
    *(float *)(v30 + 336) = v28 + 40.0;
    *(float *)(v30 + 368) = v28 + 40.0;
    v34 = v33 + v29;
    v35 = (float)(v33 + v29) + 0.0;
    v36 = (float)(v33 + v29) + -40.0;
    v37 = 0;
    *(_DWORD *)(v30 + 120) = 0;
    *(float *)(v30 + 128) = v32 + -40.0;
    *(float *)(v30 + 132) = v29 + 0.0;
    *(_DWORD *)(v30 + 136) = 0;
    *(float *)(v30 + 144) = v32 + -40.0;
    *(float *)(v30 + 148) = v29 + 0.0;
    *(_DWORD *)(v30 + 152) = 0;
    *(_DWORD *)(v30 + 168) = 0;
    *(_DWORD *)(v30 + 184) = 0;
    *(_DWORD *)(v30 + 200) = 0;
    *(float *)(v30 + 208) = v28;
    *(_DWORD *)(v30 + 216) = 0;
    *(_DWORD *)(v30 + 232) = 0;
    *(_DWORD *)(v30 + 248) = 0;
    *(float *)(v30 + 256) = v28;
    *(_DWORD *)(v30 + 264) = 0;
    *(float *)(v30 + 272) = v28 + 0.0;
    *(_DWORD *)(v30 + 280) = 0;
    *(float *)(v30 + 288) = v28;
    *(_DWORD *)(v30 + 296) = 0;
    *(float *)(v30 + 304) = v28;
    *(_QWORD *)(v30 + 308) = LODWORD(v29);
    *(_DWORD *)(v30 + 328) = 0;
    *(_DWORD *)(v30 + 344) = 0;
    *(float *)(v30 + 352) = v28;
    *(_QWORD *)(v30 + 356) = LODWORD(v29);
    *(float *)(v30 + 372) = v29 + 0.0;
    *(_DWORD *)(v30 + 376) = 0;
    *(float *)(v30 + 112) = v32;
    *(float *)(v30 + 116) = v33 + v29;
    *(float *)(v30 + 160) = v32;
    *(float *)(v30 + 164) = v33 + v29;
    *(float *)(v30 + 192) = v32;
    *(float *)(v30 + 196) = v33 + v29;
    *(float *)(v30 + 212) = v33 + v29;
    *(float *)(v30 + 260) = v33 + v29;
    *(float *)(v30 + 292) = v33 + v29;
    *(float *)(v30 + 176) = v32 + -40.0;
    *(float *)(v30 + 180) = v35;
    *(float *)(v30 + 224) = v32 + 0.0;
    *(float *)(v30 + 228) = v36;
    *(float *)(v30 + 240) = v32 + 0.0;
    *(float *)(v30 + 244) = v36;
    *(float *)(v30 + 276) = v36;
    *(float *)(v30 + 324) = v35;
    *(float *)(v30 + 340) = v35;
    do
    {
      LOBYTE(v35) = *((_BYTE *)this + 72);
      v38 = *((float *)this + 19);
      LOBYTE(v34) = *((_BYTE *)this + 73);
      LOBYTE(v32) = *((_BYTE *)this + 74);
      LOBYTE(v31) = *((_BYTE *)this + 75);
      v39 = v38 * (float)LODWORD(v35);
      v40 = v38 * (float)LODWORD(v34);
      v41 = (int)v39;
      v42 = (float)LODWORD(v31);
      v43 = v38 * (float)LODWORD(v32);
      v44 = (int)v40;
      v45 = v38 * v42;
      v46 = (int)v43;
      if ( (int)v39 >= 255 )
        LOBYTE(v41) = -1;
      if ( v44 >= 255 )
        LOBYTE(v44) = -1;
      if ( v46 >= 255 )
        LOBYTE(v46) = -1;
      v47 = (unsigned __int8)v41 | ((unsigned __int8)v44 << 8);
      if ( (int)v45 >= 255 )
        v48 = -1;
      else
        v48 = (int)v45;
      *(_DWORD *)(*((_QWORD *)this + 13) + v37 + 12) = v47 | ((unsigned __int8)v46 << 16) & 0xFFFFFF | (v48 << 24);
      LOBYTE(v39) = *((_BYTE *)this + 72);
      v49 = *((float *)this + 19);
      LOBYTE(v40) = *((_BYTE *)this + 73);
      LOBYTE(v43) = *((_BYTE *)this + 74);
      LOBYTE(v42) = *((_BYTE *)this + 75);
      v50 = v49 * (float)LODWORD(v39);
      v51 = v49 * (float)LODWORD(v40);
      v52 = (int)v50;
      v53 = (float)LODWORD(v42);
      v54 = v49 * (float)LODWORD(v43);
      v55 = (int)v51;
      v56 = v49 * v53;
      v57 = (int)v54;
      if ( (int)v50 >= 255 )
        LOBYTE(v52) = -1;
      if ( v55 >= 255 )
        LOBYTE(v55) = -1;
      if ( v57 >= 255 )
        LOBYTE(v57) = -1;
      v58 = (unsigned __int8)v52 | ((unsigned __int8)v55 << 8);
      if ( (int)v56 >= 255 )
        v59 = -1;
      else
        v59 = (int)v56;
      *(_DWORD *)(*((_QWORD *)this + 13) + v37 + 28) = v58 | ((unsigned __int8)v57 << 16) & 0xFFFFFF | (v59 << 24);
      *(_DWORD *)(*((_QWORD *)this + 13) + v37 + 44) = 0;
      *(_DWORD *)(*((_QWORD *)this + 13) + v37 + 60) = 0;
      LOBYTE(v50) = *((_BYTE *)this + 72);
      v60 = *((float *)this + 19);
      LOBYTE(v51) = *((_BYTE *)this + 73);
      LOBYTE(v54) = *((_BYTE *)this + 74);
      LOBYTE(v53) = *((_BYTE *)this + 75);
      v35 = v60 * (float)LODWORD(v50);
      v34 = v60 * (float)LODWORD(v51);
      v61 = (int)v35;
      v31 = (float)LODWORD(v53);
      v32 = v60 * (float)LODWORD(v54);
      v62 = (int)v34;
      v63 = v60 * v31;
      v64 = (int)v32;
      if ( (int)v35 >= 255 )
        LOBYTE(v61) = -1;
      if ( v62 >= 255 )
        LOBYTE(v62) = -1;
      if ( v64 >= 255 )
        LOBYTE(v64) = -1;
      v65 = (unsigned __int8)v61 | ((unsigned __int8)v62 << 8);
      if ( (int)v63 >= 255 )
        v66 = -1;
      else
        v66 = (int)v63;
      *(_DWORD *)(*((_QWORD *)this + 13) + v37 + 76) = v65 | ((unsigned __int8)v64 << 16) & 0xFFFFFF | (v66 << 24);
      v67 = *((_QWORD *)this + 13) + v37;
      v37 += 96;
      *(_DWORD *)(v67 + 92) = 0;
    }
    while ( v37 != 384 );
  }
  else if ( !v7 )
  {
    if ( *((_DWORD *)this + 24) != 6 )
    {
      *((_DWORD *)this + 24) = 6;
      v8 = operator new[](0x60u);
      v9 = (void *)*((_QWORD *)this + 13);
      *((_QWORD *)this + 13) = v8;
      if ( v9 )
        operator delete[](v9);
    }
    v10 = *((_QWORD *)this + 13);
    v12 = *((float *)this + 20);
    v11 = *((float *)this + 21);
    *(_DWORD *)(v10 + 8) = 0;
    *(float *)v10 = v12;
    *(float *)(v10 + 4) = v11;
    v13 = *((float *)this + 22);
    *(float *)(v10 + 20) = v11;
    *(_DWORD *)(v10 + 24) = 0;
    v14 = v11;
    v15 = v13 + v12;
    *(float *)(v10 + 16) = v15;
    v16 = *((float *)this + 23);
    *(float *)(v10 + 68) = v11;
    *(_DWORD *)(v10 + 72) = 0;
    v17 = 12;
    *(float *)(v10 + 32) = v12;
    *(float *)(v10 + 48) = v12;
    v18 = v16 + v14;
    *(_DWORD *)(v10 + 40) = 0;
    *(_DWORD *)(v10 + 56) = 0;
    *(float *)(v10 + 64) = v15;
    *(_DWORD *)(v10 + 88) = 0;
    *(float *)(v10 + 36) = v18;
    *(float *)(v10 + 52) = v18;
    *(float *)(v10 + 80) = v15;
    *(float *)(v10 + 84) = v18;
    while ( 1 )
    {
      LOBYTE(v18) = *((_BYTE *)this + 72);
      v19 = *((float *)this + 19);
      LOBYTE(v14) = *((_BYTE *)this + 73);
      LOBYTE(a5) = *((_BYTE *)this + 74);
      LOBYTE(a6) = *((_BYTE *)this + 75);
      v18 = v19 * (float)LODWORD(v18);
      v14 = v19 * (float)LODWORD(v14);
      v20 = (int)v18;
      a6 = (float)LODWORD(a6);
      a5 = v19 * (float)LODWORD(a5);
      v21 = (int)v14;
      v22 = v19 * a6;
      v23 = (int)a5;
      if ( (int)v18 >= 255 )
        LOBYTE(v20) = -1;
      if ( v21 >= 255 )
        LOBYTE(v21) = -1;
      if ( v23 >= 255 )
        LOBYTE(v23) = -1;
      v24 = (unsigned __int8)v20 | ((unsigned __int8)v21 << 8);
      v25 = (int)v22 >= 255 ? -1 : (int)v22;
      *(_DWORD *)(v10 + v17) = v24 | ((unsigned __int8)v23 << 16) & 0xFFFFFF | (v25 << 24);
      if ( v17 == 92 )
        break;
      v10 = *((_QWORD *)this + 13);
      v17 += 16;
    }
  }
}

