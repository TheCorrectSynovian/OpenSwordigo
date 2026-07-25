/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000532808
 * Mangled: sub_532808
 * Demangled: sub_532808
 *
 * Callers: 14
 *   0x0000000000532724  sub_532724
 *   0x0000000000532890  sub_532890
 *   0x0000000000532C04  sub_532C04
 *   0x0000000000533538  sub_533538
 *   0x00000000005347F0  sub_5347F0
 *   0x000000000053557C  sub_53557C
 *   0x0000000000536618  sub_536618
 *   0x000000000053797C  sub_53797C
 *   0x000000000053832C  sub_53832C
 *   0x0000000000538714  sub_538714
 *   0x00000000005390F0  sub_5390F0
 *   0x0000000000539A80  sub_539A80
 *   0x000000000053A47C  sub_53A47C
 *   0x000000000053AE2C  sub_53AE2C
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x0000000000532818 string=0x000000000053281C "b"
 *   insn=0x0000000000532828 string=0x0000000000532838 "@@"
 *   insn=0x000000000053283C string=0x0000000000532840 "C"
 *   insn=0x0000000000532848 string=0x0000000000532860 "C"
 *   insn=0x000000000053284C string=0x0000000000532850 "`\n"
 *   insn=0x0000000000532864 string=0x0000000000532868 "b$@"
 *   insn=0x0000000000532868 string=0x000000000053286C "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_532808(__int64 a1)
{
  _QWORD *v2; // x2
  __int64 result; // x0
  unsigned __int8 *v4; // x0
  __int64 v5; // x19

  v2 = *(_QWORD **)a1;
  if ( !*(_QWORD *)a1 )
    return 0xFFFFFFFFLL;
  result = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)result != -1 )
    return result;
  v4 = (unsigned __int8 *)v2[2];
  v5 = a1;
  if ( (unsigned __int64)v4 < v2[3] )
  {
    result = *v4;
LABEL_5:
    *(_DWORD *)(v5 + 8) = result;
    return result;
  }
  result = (*(__int64 (__fastcall **)(_QWORD *))(*v2 + 72LL))(v2);
  if ( (_DWORD)result != -1 )
    goto LABEL_5;
  *(_QWORD *)v5 = 0;
  return result;
}

