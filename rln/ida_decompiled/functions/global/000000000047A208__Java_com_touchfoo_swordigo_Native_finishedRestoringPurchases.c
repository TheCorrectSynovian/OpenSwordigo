/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047A208
 * Mangled: Java_com_touchfoo_swordigo_Native_finishedRestoringPurchases
 * Demangled: Java_com_touchfoo_swordigo_Native_finishedRestoringPurchases
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9FA0  Caver::StoreController_Android::FinishedRestoringPurchases(void)
 *
 * Referenced strings: 3
 *   insn=0x000000000047A20C string=0x000000000047A210 "@"
 *   insn=0x000000000047A210 string=0x000000000047A214 "c"
 *   insn=0x000000000047A214 string=0x00000000001F9FA0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 Java_com_touchfoo_swordigo_Native_finishedRestoringPurchases()
{
  __int64 result; // x0

  result = qword_6E9C50;
  if ( qword_6E9C50 )
    return Caver::StoreController_Android::FinishedRestoringPurchases((Caver::StoreController_Android *)qword_6E9C50);
  return result;
}

