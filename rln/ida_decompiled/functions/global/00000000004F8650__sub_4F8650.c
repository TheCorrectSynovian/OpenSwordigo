/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F8650
 * Mangled: sub_4F8650
 * Demangled: sub_4F8650
 *
 * Callers: 6
 *   0x00000000005009E0  sub_5009E0
 *   0x0000000000500AC8  sub_500AC8
 *   0x0000000000501C4C  sub_501C4C
 *   0x0000000000501D18  sub_501D18
 *   0x0000000000501F70  sub_501F70
 *   0x0000000000502624  sub_502624
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 7
 *   insn=0x00000000004F865C string=0x00000000004F8660 "T"
 *   insn=0x00000000004F8670 string=0x00000000004F8674 "a"
 *   insn=0x00000000004F8674 string=0x00000000004F8678 "h\n@"
 *   insn=0x00000000004F8690 string=0x00000000004F8694 ")"
 *   insn=0x00000000004F8694 string=0x00000000004F8698 "\n"
 *   insn=0x00000000004F8698 string=0x00000000004F869C "i*"
 *   insn=0x00000000004F86C4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F8650(__int64 a1)
{
  unsigned __int8 *v2; // x8
  __int64 result; // x0
  _QWORD v4[2]; // [xsp+0h] [xbp-20h] BYREF

  v4[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (unsigned __int8 *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(a1 + 16))(
                            *(_QWORD *)(a1 + 32),
                            *(_QWORD *)(a1 + 24),
                            v4);
  result = 0xFFFFFFFFLL;
  if ( v2 )
  {
    if ( v4[0] )
    {
      *(_QWORD *)a1 = v4[0] - 1LL;
      *(_QWORD *)(a1 + 8) = v2 + 1;
      return *v2;
    }
  }
  return result;
}

