/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053E5B8
 * Mangled: sub_53E5B8
 * Demangled: sub_53E5B8
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000528E58  sub_528E58
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 6
 *   insn=0x000000000053E5D0 string=0x000000000053E5D4 "`"
 *   insn=0x000000000053E5D8 string=0x000000000053E5DC "`"
 *   insn=0x000000000053E5DC string=0x000000000053E608 "0"
 *   insn=0x000000000053E5E0 string=0x000000000053E5E4 "A"
 *   insn=0x000000000053E5E4 string=0x000000000053E5E8 "B(@"
 *   insn=0x000000000053E5E8 string=0x000000000053E5EC "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_53E5B8(_QWORD *a1)
{
  __int64 v1; // x0

  v1 = *(_QWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 240);
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 80LL))(v1, 10);
    JUMPOUT(0x52A554);
  }
  sub_5652C8(0);
}

