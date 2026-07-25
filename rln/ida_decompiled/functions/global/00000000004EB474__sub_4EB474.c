/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EB474
 * Mangled: sub_4EB474
 * Demangled: sub_4EB474
 *
 * Callers: 1
 *   0x00000000004F67EC  sub_4F67EC
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004EB12C  sub_4EB12C
 *   0x00000000004EB320  sub_4EB320
 *
 * Referenced strings: 32
 *   insn=0x00000000004EB484 string=0x00000000004EB488 "U"
 *   insn=0x00000000004EB494 string=0x00000000004EB498 "l"
 *   insn=0x00000000004EB49C string=0x00000000004EB4A0 "\t\t@"
 *   insn=0x00000000004EB4A4 string=0x00000000004EB4A8 "a"
 *   insn=0x00000000004EB4AC string=0x00000000004EB4B0 ")"
 *   insn=0x00000000004EB4B0 string=0x00000000004EB4B4 "?\t"
 *   insn=0x00000000004EB4B4 string=0x00000000004EB4B8 "H0"
 *   insn=0x00000000004EB4B8 string=0x00000000004EB4BC "\t"
 *   insn=0x00000000004EB4BC string=0x00000000004EB4C0 ")"
 *   insn=0x00000000004EB4C0 string=0x00000000004EB4C4 "*@"
 *   insn=0x00000000004EB4C8 string=0x00000000004EB4CC "?"
 *   insn=0x00000000004EB4D4 string=0x00000000004EB534 "a"
 *   insn=0x00000000004EB4D8 string=0x00000000004EB4DC "?"
 *   insn=0x00000000004EB4E8 string=0x00000000004EB4EC "i"
 *   insn=0x00000000004EB4E8 string=0x00000000004EB4D8 ")A"
 *   insn=0x00000000004EB4F4 string=0x00000000004EB4F8 ""
 *   insn=0x00000000004EB4FC string=0x00000000004EB500 ""
 *   insn=0x00000000004EB504 string=0x00000000004EB508 "h"
 *   insn=0x00000000004EB50C string=0x00000000004EB510 "a"
 *   insn=0x00000000004EB510 string=0x00000000004EB514 "b"
 *   insn=0x00000000004EB510 string=0x0000000000599944 "attempt to %s %s '%s' (a %s value)"
 *   insn=0x00000000004EB514 string=0x00000000004EB518 "!"
 *   insn=0x00000000004EB514 string=0x0000000000599980 "concatenate"
 *   insn=0x00000000004EB518 string=0x00000000004EB51C "B"
 *   insn=0x00000000004EB528 string=0x00000000004EB52C "}"
 *   insn=0x00000000004EB534 string=0x00000000004EB538 "b"
 *   insn=0x00000000004EB534 string=0x0000000000599967 "attempt to %s a %s value"
 *   insn=0x00000000004EB538 string=0x00000000004EB53C "!"
 *   insn=0x00000000004EB53C string=0x00000000004EB540 "B"
 *   insn=0x00000000004EB548 string=0x00000000004EB54C "u"
 *   insn=0x00000000004EB55C string=0x00000000004EB574 "W+"
 *   insn=0x00000000004EB574 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __noreturn sub_4EB474(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x8
  int v5; // w9
  unsigned __int64 *v6; // x1
  unsigned __int64 v7; // x9
  unsigned __int64 v8; // x10
  const char *v9; // x20
  const char *v10; // x8
  const char *v11[2]; // [xsp+0h] [xbp-30h] BYREF

  v3 = a2;
  v11[1] = *(const char **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *(_DWORD *)(a2 + 8);
  v11[0] = 0;
  v6 = *(unsigned __int64 **)(a1 + 40);
  if ( (unsigned int)(v5 - 3) < 2 )
    v3 = a3;
  v7 = *v6;
  v8 = v6[2];
  v9 = (const char *)*(&off_6D8858 + *(int *)(v3 + 8));
  if ( *v6 < v8 )
  {
    while ( v3 != v7 )
    {
      v7 += 16LL;
      if ( v7 >= v8 )
        goto LABEL_9;
    }
    v10 = sub_4EB12C(a1, (__int64)v6, (unsigned __int64)(v3 - *(_QWORD *)(a1 + 24)) >> 4, v11);
    if ( v10 )
      sub_4EB320(a1, "attempt to %s %s '%s' (a %s value)", "concatenate", v10, v11[0], v9);
  }
LABEL_9:
  sub_4EB320(a1, "attempt to %s a %s value", "concatenate", v9);
}

