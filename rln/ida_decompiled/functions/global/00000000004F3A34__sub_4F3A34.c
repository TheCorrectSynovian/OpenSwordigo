/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F3A34
 * Mangled: sub_4F3A34
 * Demangled: sub_4F3A34
 *
 * Callers: 1
 *   0x00000000004F6B64  sub_4F6B64
 *
 * Callees: 1
 *   0x00000000004F3A60  sub_4F3A60
 *
 * Referenced strings: 3
 *   insn=0x00000000004F3A34 string=0x00000000004F3A38 ")"
 *   insn=0x00000000004F3A44 string=0x00000000004F3A48 "(,@9"
 *   insn=0x00000000004F3A4C string=0x00000000004F3A50 "#!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F3A34(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x3

  if ( *(_UNKNOWN **)(a2 + 32) == &unk_59A2A0 )
    v3 = 0;
  else
    v3 = (unsigned int)(1 << *(_BYTE *)(a2 + 11));
  return sub_4F3A60(a1, a2, a3, v3);
}

