/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000530CEC
 * Mangled: sub_530CEC
 * Demangled: sub_530CEC
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x000000000052FF60  sub_52FF60
 *   0x0000000000530504  sub_530504
 *
 * Referenced strings: 1
 *   insn=0x0000000000530CEC string=0x0000000000530CF0 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_530CEC(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        char a4,
        __int64 a5,
        unsigned __int8 a6,
        const char **a7)
{
  if ( a4 )
    return sub_52FF60(a1, a2, a3, a5, a6, a7);
  else
    return sub_530504(a1, a2, a3, a5, a6, a7);
}

