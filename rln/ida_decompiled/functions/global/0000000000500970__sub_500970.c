/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000500970
 * Mangled: sub_500970
 * Demangled: sub_500970
 *
 * Callers: 3
 *   0x00000000004EF820  sub_4EF820
 *   0x00000000004EFACC  sub_4EFACC
 *   0x00000000004F17E0  sub_4F17E0
 *
 * Callees: 3
 *   0x00000000004EDCB0  sub_4EDCB0
 *   0x00000000004F356C  sub_4F356C
 *   0x00000000004F4ADC  sub_4F4ADC
 *
 * Referenced strings: 8
 *   insn=0x000000000050099C string=0x00000000005009A0 "O"
 *   insn=0x00000000005009A0 string=0x00000000005009A4 "@"
 *   insn=0x00000000005009A4 string=0x00000000005009A8 "H"
 *   insn=0x00000000005009AC string=0x00000000005009B0 ""
 *   insn=0x00000000005009B0 string=0x00000000005009B4 ""
 *   insn=0x00000000005009B4 string=0x00000000005009B8 "h"
 *   insn=0x00000000005009B8 string=0x00000000005009BC "\t!G"
 *   insn=0x00000000005009C0 string=0x00000000005009C4 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_500970(__int64 a1, char *a2, size_t a3)
{
  __int64 v4; // x19
  __int64 v5; // x0
  __int64 v6; // x8
  __int64 v7; // x20
  _DWORD *v8; // x0

  v4 = *(_QWORD *)(a1 + 56);
  v5 = sub_4F356C(v4, a2, a3);
  v6 = *(_QWORD *)(a1 + 48);
  v7 = v5;
  v8 = (_DWORD *)sub_4F4ADC(v4, *(_QWORD *)(v6 + 8), v5);
  if ( !v8[2] )
  {
    *v8 = 1;
    v8[2] = 1;
    if ( *(_QWORD *)(*(_QWORD *)(v4 + 32) + 120LL) >= *(_QWORD *)(*(_QWORD *)(v4 + 32) + 112LL) )
      sub_4EDCB0(v4);
  }
  return v7;
}

