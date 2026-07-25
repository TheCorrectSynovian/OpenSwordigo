/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052FE5C
 * Mangled: sub_52FE5C
 * Demangled: sub_52FE5C
 *
 * Callers: 2
 *   0x0000000000530F68  sub_530F68
 *   0x0000000000531318  sub_531318
 *
 * Callees: 2
 *   0x0000000000201760  .memcpy
 *   0x000000000052F63C  sub_52F63C
 *
 * Referenced strings: 5
 *   insn=0x000000000052FE74 string=0x000000000052FE78 "a"
 *   insn=0x000000000052FEA0 string=0x000000000052F63C "H"
 *   insn=0x000000000052FEAC string=0x000000000052FEB0 "B"
 *   insn=0x000000000052FEB0 string=0x000000000052FEB4 "B|@"
 *   insn=0x000000000052FEB4 string=0x000000000052FEB8 "*F"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52FE5C(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        char a4,
        const void *a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        int *a8)
{
  int v9; // w19
  int v11; // w22
  void *v12; // x0
  int v13; // w19
  __int64 result; // x0

  v9 = a6;
  if ( a5 )
  {
    v11 = (_DWORD)a5 - a7;
    v12 = (void *)sub_52F63C(a6, a4, a2, a3, a7, (_OWORD *)(a7 + (int)a5 - (int)a7));
    v13 = (_DWORD)v12 - v9;
    memcpy(v12, a5, *a8 - v11);
    result = (unsigned int)(*a8 - v11 + v13);
  }
  else
  {
    result = (unsigned int)sub_52F63C(a6, a4, a2, a3, a7, (_OWORD *)(a7 + *a8)) - (unsigned int)a6;
  }
  *a8 = result;
  return result;
}

