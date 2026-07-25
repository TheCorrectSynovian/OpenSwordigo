/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000477D48
 * Mangled: Java_com_touchfoo_swordigo_Native_setupNativeInterface
 * Demangled: Java_com_touchfoo_swordigo_Native_setupNativeInterface
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x0000000000477D5C string=0x0000000000477D60 "h"
 *   insn=0x0000000000477D64 string=0x0000000000477D6C ""
 *   insn=0x0000000000477D64 string=0x0000000000595FF4 "com/touchfoo/swordigo/Native"
 *   insn=0x0000000000477D70 string=0x0000000000477D74 "h"
 *   insn=0x0000000000477D7C string=0x0000000000477D80 "U@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Java_com_touchfoo_swordigo_Native_setupNativeInterface(__int64 a1)
{
  __int64 v2; // x0
  __int64 result; // x0

  qword_6E9C60 = a1;
  v2 = (*(__int64 (__fastcall **)(__int64, const char *))(*(_QWORD *)a1 + 48LL))(a1, "com/touchfoo/swordigo/Native");
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 168LL))(a1, v2);
  qword_6E9C68 = result;
  return result;
}

