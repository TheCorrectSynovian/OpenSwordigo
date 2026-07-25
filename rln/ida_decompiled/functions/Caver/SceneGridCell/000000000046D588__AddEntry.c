/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046D588
 * Mangled: _ZN5Caver13SceneGridCell8AddEntryEPNS_14SceneGridEntryE
 * Demangled: Caver::SceneGridCell::AddEntry(Caver::SceneGridEntry *)
 *
 * Callers: 1
 *   0x00000000001F4BE0  Caver::SceneGridCell::AddEntry(Caver::SceneGridEntry *)
 *
 * Callees: 3
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F5E70  .malloc
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 17
 *   insn=0x000000000046D5A0 string=0x000000000046D5A4 "x^A)"
 *   insn=0x000000000046D5B0 string=0x000000000046D60C "h"
 *   insn=0x000000000046D5C4 string=0x000000000046D5C8 "*""
 *   insn=0x000000000046D5C8 string=0x00000000001F5E70 "P'"
 *   insn=0x000000000046D5D0 string=0x000000000046D5D4 "-"
 *   insn=0x000000000046D5D4 string=0x000000000046D5D8 "v"
 *   insn=0x000000000046D5D4 string=0x000000000046D638 "v"
 *   insn=0x000000000046D5D8 string=0x000000000046D5DC ""
 *   insn=0x000000000046D5EC string=0x000000000046D5F0 "\P"
 *   insn=0x000000000046D5F0 string=0x000000000046D5F4 "u"
 *   insn=0x000000000046D5F8 string=0x000000000046D608 "w"
 *   insn=0x000000000046D5FC string=0x000000000046D600 "X"
 *   insn=0x000000000046D600 string=0x000000000046D604 "x\n@"
 *   insn=0x000000000046D600 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000046D60C string=0x000000000046D610 "\t"
 *   insn=0x000000000046D610 string=0x000000000046D614 "i\n"
 *   insn=0x000000000046D638 string=0x000000000046D63C "u"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SceneGridCell::AddEntry(__int64 a1, __int64 a2)
{
  __int64 v3; // x23
  int v4; // w24
  int v6; // w25
  char *v7; // x0
  char *v8; // x21
  _QWORD *v9; // x22
  _QWORD *v10; // x8

  v4 = *(_DWORD *)(a1 + 8);
  LODWORD(v3) = *(_DWORD *)(a1 + 12);
  v6 = v3 - v4;
  if ( (int)v3 <= v4 )
  {
    if ( 2 * (int)v3 <= 20 )
      v3 = 20;
    else
      v3 = (unsigned int)(2 * v3);
    v7 = (char *)malloc(8 * v3);
    v8 = v7;
    if ( v4 <= 0 )
    {
      v9 = *(_QWORD **)a1;
      *(_QWORD *)a1 = v7;
      if ( !v9 )
        goto LABEL_8;
    }
    else
    {
      v9 = *(_QWORD **)a1;
      memcpy(&v7[8 * ((int)v3 - v4)], (const void *)(*(_QWORD *)a1 + 8LL * v6), 8LL * v4);
      *(_QWORD *)a1 = v8;
      if ( !v9 )
      {
LABEL_8:
        *(_DWORD *)(a1 + 12) = v3;
        goto LABEL_9;
      }
    }
    operator delete[](v9);
    v4 = *(_DWORD *)(a1 + 8);
    goto LABEL_8;
  }
LABEL_9:
  v10 = *(_QWORD **)a1;
  *(_DWORD *)(a1 + 8) = v4 + 1;
  v10[(int)v3 - (v4 + 1)] = a2;
}

