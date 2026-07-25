/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000570348
 * Mangled: _ZSt14__convert_to_vIfEvPKcRT_RSt12_Ios_IostateRKPi
 * Demangled: std::__convert_to_v<float>(char const*,float &,std::_Ios_Iostate &,int * const&)
 *
 * Callers: 1
 *   0x0000000000201460  std::__convert_to_v<float>(char const*,float &,std::_Ios_Iostate &,int * const&)
 *
 * Callees: 6
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FBCA0  .setlocale
 *   0x0000000000200770  .strtof
 *   0x0000000000201760  .memcpy
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 14
 *   insn=0x000000000057036C string=0x0000000000570370 "L."
 *   insn=0x0000000000570370 string=0x00000000001FBCA0 "0'"
 *   insn=0x0000000000570374 string=0x0000000000570378 " "
 *   insn=0x0000000000570384 string=0x0000000000570388 "z "
 *   insn=0x0000000000570388 string=0x00000000001F8570 "0'"
 *   insn=0x0000000000570398 string=0x000000000057039C "a"
 *   insn=0x000000000057039C string=0x000000000059D1C8 "C"
 *   insn=0x00000000005703A0 string=0x00000000005703A4 "! "
 *   insn=0x00000000005703A4 string=0x00000000005703A8 ">."
 *   insn=0x00000000005703C0 string=0x00000000005703C4 "`"
 *   insn=0x00000000005703E4 string=0x00000000005703E8 ".."
 *   insn=0x00000000005703E8 string=0x00000000005703EC "s"
 *   insn=0x00000000005703F4 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000570414 string=0x0000000000570418 "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::__convert_to_v<float>(const char *a1, float *a2, _DWORD *a3)
{
  char *v6; // x0
  char *v7; // x21
  unsigned __int64 v8; // x23
  void *v9; // x19
  float v10; // s0
  char *v11; // x0
  int v12; // s1
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
  v10 = strtof(a1, &v13);
  v11 = v13;
  *a2 = v10;
  if ( v11 == a1 || *v11 )
  {
    *a2 = 0.0;
    *a3 = 4;
  }
  else
  {
    v12 = 2139095039;
    if ( v10 > 3.4028e38 || v10 < -3.4028e38 )
    {
      if ( v10 <= 0.0 )
        v12 = -8388609;
      *(_DWORD *)a2 = v12;
      *a3 = 4;
    }
  }
  setlocale(6, (const char *)v9);
  if ( v9 )
    operator delete[](v9);
}

