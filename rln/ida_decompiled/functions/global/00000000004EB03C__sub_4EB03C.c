/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EB03C
 * Mangled: sub_4EB03C
 * Demangled: sub_4EB03C
 *
 * Callers: 4
 *   0x00000000004EBCF4  sub_4EBCF4
 *   0x00000000004F6020  sub_4F6020
 *   0x00000000004F61E8  sub_4F61E8
 *   0x00000000004F6B64  sub_4F6B64
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004EB12C  sub_4EB12C
 *   0x00000000004EB320  sub_4EB320
 *
 * Referenced strings: 21
 *   insn=0x00000000004EB04C string=0x00000000004EB050 "V"
 *   insn=0x00000000004EB058 string=0x00000000004EB05C "l"
 *   insn=0x00000000004EB068 string=0x00000000004EB06C "h"
 *   insn=0x00000000004EB06C string=0x00000000004EB070 "+"
 *   insn=0x00000000004EB074 string=0x00000000004EB078 "\t"
 *   insn=0x00000000004EB078 string=0x00000000004EB07C "\n\t@"
 *   insn=0x00000000004EB080 string=0x00000000004EB084 "?"
 *   insn=0x00000000004EB084 string=0x00000000004EB088 """
 *   insn=0x00000000004EB088 string=0x00000000004EB08C "?"
 *   insn=0x00000000004EB088 string=0x00000000004EB0EC "a"
 *   insn=0x00000000004EB090 string=0x00000000004EB094 ")A"
 *   insn=0x00000000004EB090 string=0x00000000004EB0A4 "i"
 *   insn=0x00000000004EB094 string=0x00000000004EB098 "?"
 *   insn=0x00000000004EB0AC string=0x00000000004EB0B0 ")"
 *   insn=0x00000000004EB0B0 string=0x00000000004EB0B4 """
 *   insn=0x00000000004EB0C0 string=0x00000000004EB0C4 "H"
 *   insn=0x00000000004EB0C8 string=0x00000000004EB0CC "a"
 *   insn=0x00000000004EB0CC string=0x0000000000599944 "attempt to %s %s '%s' (a %s value)"
 *   insn=0x00000000004EB0EC string=0x0000000000599967 "attempt to %s a %s value"
 *   insn=0x00000000004EB110 string=0x00000000004EB128 "j,"
 *   insn=0x00000000004EB128 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __noreturn sub_4EB03C(__int64 a1, __int64 a2, const char *a3)
{
  unsigned __int64 *v4; // x8
  unsigned __int64 v6; // x9
  unsigned __int64 v7; // x10
  const char *v8; // x20
  const char *v9; // x8
  const char *v10[2]; // [xsp+0h] [xbp-30h] BYREF

  v10[1] = *(const char **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v10[0] = 0;
  v4 = *(unsigned __int64 **)(a1 + 40);
  v6 = *v4;
  v7 = v4[2];
  v8 = (const char *)*(&off_6D8858 + *(int *)(a2 + 8));
  if ( *v4 < v7 )
  {
    while ( a2 != v6 )
    {
      v6 += 16LL;
      if ( v6 >= v7 )
        goto LABEL_7;
    }
    v9 = (const char *)sub_4EB12C(a1, *(_QWORD *)(a1 + 40), (unsigned __int64)(a2 - *(_QWORD *)(a1 + 24)) >> 4, v10);
    if ( v9 )
      sub_4EB320(a1, "attempt to %s %s '%s' (a %s value)", a3, v9, v10[0], v8);
  }
LABEL_7:
  sub_4EB320(a1, "attempt to %s a %s value", a3, v8);
}

