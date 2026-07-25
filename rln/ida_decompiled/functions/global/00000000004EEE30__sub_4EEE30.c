/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EEE30
 * Mangled: sub_4EEE30
 * Demangled: sub_4EEE30
 *
 * Callers: 1
 *   0x00000000004F6B64  sub_4F6B64
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000004EEE38 string=0x00000000004EEE3C "\t"
 *   insn=0x00000000004EEE3C string=0x00000000004EEE40 ""
 *   insn=0x00000000004EEE40 string=0x00000000004EEE44 " !"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EEE30(__int64 result)
{
  if ( (unsigned __int8)result >> 3 )
    return (result & 7 | 8) << (((unsigned __int8)result >> 3) - 1);
  return result;
}

