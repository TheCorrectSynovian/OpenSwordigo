/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052B4A0
 * Mangled: sub_52B4A0
 * Demangled: sub_52B4A0
 *
 * Callers: 12
 *   0x0000000000532890  sub_532890
 *   0x0000000000532C04  sub_532C04
 *   0x0000000000533538  sub_533538
 *   0x00000000005347F0  sub_5347F0
 *   0x000000000053557C  sub_53557C
 *   0x0000000000536618  sub_536618
 *   0x000000000053797C  sub_53797C
 *   0x0000000000538714  sub_538714
 *   0x00000000005390F0  sub_5390F0
 *   0x0000000000539A80  sub_539A80
 *   0x000000000053A47C  sub_53A47C
 *   0x000000000053AE2C  sub_53AE2C
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x000000000052B4A8 string=0x000000000052B4AC "!(@"
 *   insn=0x000000000052B4AC string=0x000000000052B4B0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52B4A0(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
}

