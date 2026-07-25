/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EB78C
 * Mangled: sub_4EB78C
 * Demangled: sub_4EB78C
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000004F356C  sub_4F356C
 *
 * Referenced strings: 19
 *   insn=0x00000000004EB794 string=0x00000000004EB798 "("
 *   insn=0x00000000004EB7A4 string=0x00000000004EB7A8 "#"
 *   insn=0x00000000004EB7A8 string=0x00000000004EB7AC "?"
 *   insn=0x00000000004EB7B0 string=0x00000000004EB7B4 "?"
 *   insn=0x00000000004EB7B0 string=0x00000000004EB7E0 "a"
 *   insn=0x00000000004EB7B4 string=0x00000000004EB7B8 "A"
 *   insn=0x00000000004EB7B8 string=0x00000000004EB7BC "a"
 *   insn=0x00000000004EB7B8 string=0x00000000004EB800 "hB"
 *   insn=0x00000000004EB7BC string=0x00000000004EB7C4 """
 *   insn=0x00000000004EB7BC string=0x0000000000599A3C "not enough memory"
 *   insn=0x00000000004EB7C4 string=0x00000000004EB7C8 "\t"
 *   insn=0x00000000004EB7CC string=0x00000000004EB7D0 "\t"
 *   insn=0x00000000004EB7D0 string=0x00000000004EB7D4 "i"
 *   insn=0x00000000004EB7D4 string=0x00000000004EB7D8 ""
 *   insn=0x00000000004EB7D8 string=0x00000000004EB7DC ""
 *   insn=0x00000000004EB7DC string=0x00000000004EB7FC "h\n"
 *   insn=0x00000000004EB7E0 string=0x0000000000599A4E "error in error handling"
 *   insn=0x00000000004EB7EC string=0x00000000004EB7F0 "_"
 *   insn=0x00000000004EB7F0 string=0x00000000004EB7F4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EB78C(__int64 result, int a2, __int64 a3)
{
  __int64 v4; // x20
  char *v5; // x1
  size_t v6; // x2
  __int64 v7; // x8
  int v8; // w8

  v4 = result;
  if ( (unsigned int)(a2 - 2) < 2 )
  {
    v7 = *(_QWORD *)(result + 16);
    *(_QWORD *)a3 = *(_QWORD *)(v7 - 16);
    v8 = *(_DWORD *)(v7 - 8);
LABEL_8:
    *(_DWORD *)(a3 + 8) = v8;
    goto LABEL_9;
  }
  if ( a2 == 5 )
  {
    v5 = "error in error handling";
    v6 = 23;
    goto LABEL_7;
  }
  if ( a2 == 4 )
  {
    v5 = "not enough memory";
    v6 = 17;
LABEL_7:
    result = sub_4F356C(result, v5, v6);
    *(_QWORD *)a3 = result;
    v8 = 4;
    goto LABEL_8;
  }
LABEL_9:
  *(_QWORD *)(v4 + 16) = a3 + 16;
  return result;
}

