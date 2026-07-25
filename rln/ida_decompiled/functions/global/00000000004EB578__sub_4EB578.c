/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EB578
 * Mangled: sub_4EB578
 * Demangled: sub_4EB578
 *
 * Callers: 1
 *   0x00000000004F6B64  sub_4F6B64
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004EB12C  sub_4EB12C
 *   0x00000000004EB320  sub_4EB320
 *   0x00000000004F5EF0  sub_4F5EF0
 *
 * Referenced strings: 27
 *   insn=0x00000000004EB588 string=0x00000000004EB58C "V"
 *   insn=0x00000000004EB5A8 string=0x00000000004EB5AC "Q*"
 *   insn=0x00000000004EB5B8 string=0x00000000004EB5BC "a"
 *   insn=0x00000000004EB5BC string=0x00000000004EB5C0 "\t"
 *   insn=0x00000000004EB5C0 string=0x00000000004EB5C4 "l"
 *   insn=0x00000000004EB5C4 string=0x00000000004EB5CC ")"
 *   insn=0x00000000004EB5CC string=0x00000000004EB5D0 "*@"
 *   insn=0x00000000004EB5D4 string=0x00000000004EB5D8 "?"
 *   insn=0x00000000004EB5E0 string=0x00000000004EB640 "a"
 *   insn=0x00000000004EB5E4 string=0x00000000004EB5E8 "?"
 *   insn=0x00000000004EB5F4 string=0x00000000004EB5F8 "i"
 *   insn=0x00000000004EB5F4 string=0x00000000004EB5E4 ")A"
 *   insn=0x00000000004EB600 string=0x00000000004EB604 ""
 *   insn=0x00000000004EB610 string=0x00000000004EB614 "h"
 *   insn=0x00000000004EB618 string=0x00000000004EB61C "a"
 *   insn=0x00000000004EB61C string=0x00000000004EB620 "b"
 *   insn=0x00000000004EB61C string=0x0000000000599944 "attempt to %s %s '%s' (a %s value)"
 *   insn=0x00000000004EB620 string=0x00000000004EB624 "!"
 *   insn=0x00000000004EB620 string=0x000000000059998C "perform arithmetic on"
 *   insn=0x00000000004EB624 string=0x00000000004EB628 "B0&"
 *   insn=0x00000000004EB634 string=0x00000000004EB638 ":"
 *   insn=0x00000000004EB640 string=0x00000000004EB644 "b"
 *   insn=0x00000000004EB640 string=0x0000000000599967 "attempt to %s a %s value"
 *   insn=0x00000000004EB644 string=0x00000000004EB648 "!"
 *   insn=0x00000000004EB648 string=0x00000000004EB64C "B0&"
 *   insn=0x00000000004EB654 string=0x00000000004EB658 "2"
 *   insn=0x00000000004EB680 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __noreturn sub_4EB578(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x0
  __int64 v7; // x8
  unsigned __int64 *v8; // x1
  unsigned __int64 v9; // x9
  unsigned __int64 v10; // x10
  const char *v11; // x20
  const char *v12; // x8
  __int64 v13; // [xsp+0h] [xbp-40h] BYREF
  const char *v14[2]; // [xsp+10h] [xbp-30h] BYREF

  v14[1] = *(const char **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = sub_4F5EF0(a2, &v13);
  v14[0] = 0;
  if ( v6 )
    v7 = a3;
  else
    v7 = a2;
  v8 = *(unsigned __int64 **)(a1 + 40);
  v9 = *v8;
  v10 = v8[2];
  v11 = (const char *)*(&off_6D8858 + *(int *)(v7 + 8));
  if ( *v8 < v10 )
  {
    while ( v7 != v9 )
    {
      v9 += 16LL;
      if ( v9 >= v10 )
        goto LABEL_10;
    }
    v12 = sub_4EB12C(a1, (__int64)v8, (unsigned __int64)(v7 - *(_QWORD *)(a1 + 24)) >> 4, v14);
    if ( v12 )
      sub_4EB320(a1, "attempt to %s %s '%s' (a %s value)", "perform arithmetic on", v12, v14[0], v11);
  }
LABEL_10:
  sub_4EB320(a1, "attempt to %s a %s value", "perform arithmetic on", v11);
}

