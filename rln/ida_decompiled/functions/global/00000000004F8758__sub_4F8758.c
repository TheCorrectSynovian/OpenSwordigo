/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F8758
 * Mangled: sub_4F8758
 * Demangled: sub_4F8758
 *
 * Callers: 2
 *   0x00000000004F4F30  sub_4F4F30
 *   0x00000000004F5064  sub_4F5064
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 10
 *   insn=0x00000000004F876C string=0x00000000004F8770 "W"
 *   insn=0x00000000004F8784 string=0x00000000004F8788 "s"
 *   insn=0x00000000004F878C string=0x00000000004F8790 "i"
 *   insn=0x00000000004F8794 string=0x00000000004F8798 "\n"
 *   insn=0x00000000004F87AC string=0x00000000004F87B0 "("
 *   insn=0x00000000004F87C0 string=0x00000000004F87C4 "6"
 *   insn=0x00000000004F87D8 string=0x00000000004F87DC "s"
 *   insn=0x00000000004F87E0 string=0x00000000004F87E4 "\t"
 *   insn=0x00000000004F87E4 string=0x00000000004F87E8 "H"
 *   insn=0x00000000004F8820 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

size_t __fastcall sub_4F8758(__int64 a1, char *a2, size_t a3)
{
  size_t v3; // x19
  size_t v6; // x9
  const void *v7; // x8
  __int64 v8; // x0
  size_t v9; // x22
  size_t v10; // x8
  _QWORD v12[2]; // [xsp+0h] [xbp-40h] BYREF

  v3 = a3;
  v12[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a3 )
  {
    v6 = *(_QWORD *)a1;
    do
    {
      if ( v6 )
      {
        v7 = *(const void **)(a1 + 8);
      }
      else
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(a1 + 16))(
               *(_QWORD *)(a1 + 32),
               *(_QWORD *)(a1 + 24),
               v12);
        v7 = (const void *)v8;
        if ( !v8 )
          return v3;
        v6 = v12[0];
        if ( !v12[0] )
          return v3;
        *(_QWORD *)a1 = v12[0];
        *(_QWORD *)(a1 + 8) = v8;
      }
      if ( v3 <= v6 )
        v9 = v3;
      else
        v9 = v6;
      memcpy(a2, v7, v9);
      v3 -= v9;
      a2 += v9;
      v6 = *(_QWORD *)a1 - v9;
      v10 = *(_QWORD *)(a1 + 8) + v9;
      *(_QWORD *)a1 = v6;
      *(_QWORD *)(a1 + 8) = v10;
    }
    while ( v3 );
  }
  return v3;
}

