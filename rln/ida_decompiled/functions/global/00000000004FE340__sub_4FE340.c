/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FE340
 * Mangled: sub_4FE340
 * Demangled: sub_4FE340
 *
 * Callers: 4
 *   0x00000000004EFACC  sub_4EFACC
 *   0x00000000004F14B4  sub_4F14B4
 *   0x00000000004F244C  sub_4F244C
 *   0x00000000004F2C18  sub_4F2C18
 *
 * Callees: 1
 *   0x0000000000500968  sub_500968
 *
 * Referenced strings: 39
 *   insn=0x00000000004FE348 string=0x00000000004FE34C "("
 *   insn=0x00000000004FE358 string=0x00000000004FE390 "h"
 *   insn=0x00000000004FE360 string=0x00000000004FE364 "h"
 *   insn=0x00000000004FE364 string=0x00000000004FE368 ")"
 *   insn=0x00000000004FE368 string=0x00000000004FE36C "KD"
 *   insn=0x00000000004FE36C string=0x00000000004FE370 "k"
 *   insn=0x00000000004FE370 string=0x00000000004FE374 "@"
 *   insn=0x00000000004FE374 string=0x00000000004FE378 ")"
 *   insn=0x00000000004FE378 string=0x00000000004FE37C "k}"
 *   insn=0x00000000004FE37C string=0x00000000004FE380 "\nii"
 *   insn=0x00000000004FE380 string=0x00000000004FE384 "j!"
 *   insn=0x00000000004FE384 string=0x00000000004FE388 "\ni)"
 *   insn=0x00000000004FE388 string=0x00000000004FE38C "#"
 *   insn=0x00000000004FE390 string=0x00000000004FE394 ")"
 *   insn=0x00000000004FE394 string=0x00000000004FE398 "L \tS"
 *   insn=0x00000000004FE39C string=0x00000000004FE3A0 "\n@"
 *   insn=0x00000000004FE3A0 string=0x00000000004FE3A4 ")"
 *   insn=0x00000000004FE3A4 string=0x00000000004FE3A8 "Kii"
 *   insn=0x00000000004FE3A8 string=0x00000000004FE3AC "lY"
 *   insn=0x00000000004FE3AC string=0x00000000004FE3B0 "Li)"
 *   insn=0x00000000004FE3B0 string=0x00000000004FE3B4 ")"
 *   insn=0x00000000004FE3B4 string=0x00000000004FE3B8 "k>@"
 *   insn=0x00000000004FE3B8 string=0x00000000004FE3BC ")"
 *   insn=0x00000000004FE3BC string=0x00000000004FE3C0 "Lii"
 *   insn=0x00000000004FE3C0 string=0x00000000004FE3C4 "l"
 *   insn=0x00000000004FE3C4 string=0x00000000004FE3C8 "Li)"
 *   insn=0x00000000004FE3C8 string=0x00000000004FE3CC "i>@"
 *   insn=0x00000000004FE3CC string=0x00000000004FE3D0 "\n=G84"
 *   insn=0x00000000004FE3D0 string=0x00000000004FE3D4 "4"
 *   insn=0x00000000004FE3D4 string=0x00000000004FE3D8 "?"
 *   insn=0x00000000004FE3DC string=0x00000000004FE3E0 "?"
 *   insn=0x00000000004FE3DC string=0x00000000004FE414 "t>"
 *   insn=0x00000000004FE3E4 string=0x00000000004FE3E8 "+"
 *   insn=0x00000000004FE3E8 string=0x00000000004FE3EC "`"
 *   insn=0x00000000004FE3F0 string=0x00000000004FE3F8 "\\t"
 *   insn=0x00000000004FE3F0 string=0x000000000059B058 "function or expression too complex"
 *   insn=0x00000000004FE3FC string=0x00000000004FE400 "i>@"
 *   insn=0x00000000004FE400 string=0x00000000004FE404 ""
 *   insn=0x00000000004FE404 string=0x00000000004FE408 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_4FE340(__int64 *result, _DWORD *a2, int a3)
{
  __int64 v3; // x8
  __int64 v4; // x10
  int v5; // w9
  _BYTE *v6; // x8
  int v7; // t1
  int v8; // w20

  if ( *a2 == 14 )
  {
    v3 = *result;
    v4 = *(_QWORD *)(*result + 24);
    *(_DWORD *)(v4 + 4LL * (int)a2[2]) = ((a3 << 23) + 0x800000) & 0xFF800000
                                       | *(_DWORD *)(v4 + 4LL * (int)a2[2]) & 0x7FFFFF;
    *(_DWORD *)(v4 + 4LL * (int)a2[2]) = *(_DWORD *)(v4 + 4LL * (int)a2[2]) & 0xFFFFC03F
                                       | ((unsigned __int8)*((_DWORD *)result + 15) << 6);
    v5 = *((_DWORD *)result + 15);
    v7 = *(unsigned __int8 *)(v3 + 115);
    v6 = (_BYTE *)(v3 + 115);
    v8 = v5 + 1;
    if ( v5 >= v7 )
    {
      if ( v5 >= 249 )
        sub_500968(result[3], "function or expression too complex");
      *v6 = v8;
    }
    *((_DWORD *)result + 15) = v8;
  }
  else if ( *a2 == 13 )
  {
    *(_DWORD *)(*(_QWORD *)(*result + 24) + 4LL * (int)a2[2]) = *(_DWORD *)(*(_QWORD *)(*result + 24) + 4LL * (int)a2[2])
                                                              & 0xFF803FFF
                                                              | ((((unsigned int)((a3 << 14) + 0x4000) >> 14) & 0x1FF) << 14);
  }
  return result;
}

