/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F86C8
 * Mangled: sub_4F86C8
 * Demangled: sub_4F86C8
 *
 * Callers: 1
 *   0x00000000004ECC2C  sub_4ECC2C
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 10
 *   insn=0x00000000004F86D4 string=0x00000000004F86D8 "T"
 *   insn=0x00000000004F86E4 string=0x00000000004F86E8 "h"
 *   insn=0x00000000004F86E8 string=0x00000000004F86EC "h"
 *   insn=0x00000000004F86EC string=0x00000000004F86F0 "`"
 *   insn=0x00000000004F86EC string=0x00000000004F86F8 "a"
 *   insn=0x00000000004F86F0 string=0x00000000004F86F4 "\t"
 *   insn=0x00000000004F86F8 string=0x00000000004F86FC "h\n@"
 *   insn=0x00000000004F870C string=0x00000000004F8710 "h"
 *   insn=0x00000000004F8710 string=0x00000000004F8714 "h"
 *   insn=0x00000000004F8744 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F86C8(__int64 a1)
{
  unsigned __int8 *v2; // x0
  _QWORD v4[2]; // [xsp+0h] [xbp-20h] BYREF

  v4[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)a1 )
  {
    v2 = *(unsigned __int8 **)(a1 + 8);
  }
  else
  {
    v2 = (unsigned __int8 *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(a1 + 16))(
                              *(_QWORD *)(a1 + 32),
                              *(_QWORD *)(a1 + 24),
                              v4);
    if ( !v2 || !v4[0] )
      return 0xFFFFFFFFLL;
    *(_QWORD *)a1 = v4[0];
    *(_QWORD *)(a1 + 8) = v2;
  }
  return *v2;
}

