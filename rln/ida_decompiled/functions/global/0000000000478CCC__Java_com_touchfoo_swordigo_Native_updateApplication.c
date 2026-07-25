/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000478CCC
 * Mangled: Java_com_touchfoo_swordigo_Native_updateApplication
 * Demangled: Java_com_touchfoo_swordigo_Native_updateApplication
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x0000000000478CD4 string=0x0000000000478CD8 ""
 *   insn=0x0000000000478CDC string=0x0000000000478CE0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 Java_com_touchfoo_swordigo_Native_updateApplication()
{
  __int64 result; // x0

  result = qword_6E9C20;
  if ( qword_6E9C20 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_6E9C20 + 104LL))(qword_6E9C20);
  return result;
}

