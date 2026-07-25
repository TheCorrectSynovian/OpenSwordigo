/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056E434
 * Mangled: sub_56E434
 * Demangled: sub_56E434
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x000000000056E318  sub_56E318
 *
 * Referenced strings: 7
 *   insn=0x000000000056E43C string=0x000000000056E440 """
 *   insn=0x000000000056E440 string=0x000000000056E444 "!"
 *   insn=0x000000000056E444 string=0x000000000056E448 "_"
 *   insn=0x000000000056E448 string=0x000000000056E44C "h"
 *   insn=0x000000000056E468 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000056E46C string=0x000000000056E470 "H<"
 *   insn=0x000000000056E470 string=0x00000000001FD590 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall sub_56E434(const wchar_t **a1)
{
  if ( *((_QWORD *)*a1 - 2) > *((_QWORD *)*a1 - 3) )
    sub_56E318(a1, 0);
}

