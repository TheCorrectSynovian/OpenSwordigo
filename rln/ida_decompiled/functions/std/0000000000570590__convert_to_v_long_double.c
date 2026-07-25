/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000570590
 * Mangled: _ZSt14__convert_to_vIeEvPKcRT_RSt12_Ios_IostateRKPi
 * Demangled: std::__convert_to_v<long double>(char const*,long double &,std::_Ios_Iostate &,int * const&)
 *
 * Callers: 1
 *   0x0000000000201430  std::__convert_to_v<long double>(char const*,long double &,std::_Ios_Iostate &,int * const&)
 *
 * Callees: 8
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FBCA0  .setlocale
 *   0x00000000001FF350  .strtold
 *   0x0000000000201760  .memcpy
 *   0x0000000000203230  .strlen
 *   0x000000000057F9E8  sub_57F9E8
 *   0x000000000057FB24  sub_57FB24
 *
 * Referenced strings: 20
 *   insn=0x00000000005705B8 string=0x00000000001FBCA0 "0'"
 *   insn=0x00000000005705C0 string=0x00000000005705C4 "K"
 *   insn=0x00000000005705D0 string=0x00000000001F8570 "0'"
 *   insn=0x00000000005705DC string=0x00000000005705E0 "`D"
 *   insn=0x00000000005705E0 string=0x00000000005705E4 "a"
 *   insn=0x00000000005705E4 string=0x000000000059D1C8 "C"
 *   insn=0x00000000005705E8 string=0x00000000005705EC "! "
 *   insn=0x00000000005705F8 string=0x00000000005705FC "U;"
 *   insn=0x0000000000570608 string=0x000000000057060C "`"
 *   insn=0x000000000057060C string=0x0000000000570618 "@"
 *   insn=0x0000000000570614 string=0x0000000000570654 "a"
 *   insn=0x0000000000570630 string=0x0000000000570634 "s"
 *   insn=0x0000000000570638 string=0x000000000057063C "I"
 *   insn=0x000000000057063C string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000570658 string=0x000000000057065C "4"
 *   insn=0x000000000057065C string=0x0000000000570660 "5"
 *   insn=0x0000000000570674 string=0x0000000000570678 "@"
 *   insn=0x0000000000570678 string=0x000000000057067C "*="
 *   insn=0x0000000000570680 string=0x0000000000570684 " "
 *   insn=0x0000000000570688 string=0x000000000057068C "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::__convert_to_v<long double>(const char *a1, long double *a2, _DWORD *a3)
{
  char *v6; // x0
  char *v7; // x21
  unsigned __int64 v8; // x23
  void *v9; // x19
  long double v10; // q0
  char *v11; // x0
  int v12; // w0
  long double v13; // q2
  int v14; // w0
  int v15; // w0
  __int128 v16; // q0
  long double v17; // [xsp+40h] [xbp+40h]
  char *v18; // [xsp+58h] [xbp+58h] BYREF

  v6 = setlocale(6, 0);
  v7 = v6;
  if ( v6 )
  {
    v8 = strlen(v6) + 1;
    v9 = (void *)operator new[](v8);
    memcpy(v9, v7, v8);
    setlocale(6, "C");
  }
  else
  {
    v9 = 0;
  }
  v10 = strtold(a1, &v18);
  v11 = v18;
  *a2 = v10;
  if ( v11 == a1 || *v11 )
  {
    *(_OWORD *)a2 = xmmword_570700;
    *a3 = 4;
  }
  else
  {
    v17 = v10;
    v12 = ((__int64 (*)(void))sub_57F9E8)();
    v13 = v17;
    if ( v12 > 0 || (v14 = sub_57FB24(v17, *(long double *)&xmmword_5706F0), v13 = v17, v14 < 0) )
    {
      v15 = sub_57F9E8(v13, *(long double *)&xmmword_570700);
      *(_QWORD *)&v16 = -1;
      *((_QWORD *)&v16 + 1) = 0x7FFEFFFFFFFFFFFFLL;
      if ( v15 <= 0 )
        v16 = xmmword_5706F0;
      *(_OWORD *)a2 = v16;
      *a3 = 4;
    }
  }
  setlocale(6, (const char *)v9);
  if ( v9 )
    operator delete[](v9);
}

