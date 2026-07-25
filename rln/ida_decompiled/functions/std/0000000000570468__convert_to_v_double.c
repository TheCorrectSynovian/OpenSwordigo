/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000570468
 * Mangled: _ZSt14__convert_to_vIdEvPKcRT_RSt12_Ios_IostateRKPi
 * Demangled: std::__convert_to_v<double>(char const*,double &,std::_Ios_Iostate &,int * const&)
 *
 * Callers: 1
 *   0x00000000001FF650  std::__convert_to_v<double>(char const*,double &,std::_Ios_Iostate &,int * const&)
 *
 * Callees: 6
 *   0x00000000001F4A50  .strtod
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FBCA0  .setlocale
 *   0x0000000000201760  .memcpy
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 14
 *   insn=0x0000000000570490 string=0x00000000001FBCA0 "0'"
 *   insn=0x0000000000570494 string=0x0000000000570498 " "
 *   insn=0x0000000000570498 string=0x000000000057049C "eK"
 *   insn=0x00000000005704A4 string=0x00000000005704A8 "2 "
 *   insn=0x00000000005704A8 string=0x00000000001F8570 "0'"
 *   insn=0x00000000005704B8 string=0x00000000005704BC "a"
 *   insn=0x00000000005704BC string=0x000000000059D1C8 "C"
 *   insn=0x00000000005704C0 string=0x00000000005704C4 "! "
 *   insn=0x00000000005704D0 string=0x00000000005704D4 "_"
 *   insn=0x00000000005704D4 string=0x00000000001F4A50 "P'"
 *   insn=0x00000000005704E0 string=0x00000000005704E4 "`"
 *   insn=0x0000000000570508 string=0x000000000057050C "s"
 *   insn=0x0000000000570514 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000570548 string=0x0000000000570564 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::__convert_to_v<double>(const char *a1, double *a2, _DWORD *a3)
{
  char *v6; // x0
  char *v7; // x21
  unsigned __int64 v8; // x23
  void *v9; // x19
  double v10; // d0
  char *v11; // x0
  unsigned __int64 v12; // d1
  char *v13; // [xsp+48h] [xbp+48h] BYREF

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
  v10 = strtod(a1, &v13);
  v11 = v13;
  *a2 = v10;
  if ( v11 == a1 || *v11 )
  {
    *a2 = 0.0;
    *a3 = 4;
  }
  else
  {
    v12 = 0x7FEFFFFFFFFFFFFFLL;
    if ( v10 > 1.79769313e308 || v10 < -1.79769313e308 )
    {
      if ( v10 <= 0.0 )
        v12 = 0xFFEFFFFFFFFFFFFFLL;
      *(_QWORD *)a2 = v12;
      *a3 = 4;
    }
  }
  setlocale(6, (const char *)v9);
  if ( v9 )
    operator delete[](v9);
}

