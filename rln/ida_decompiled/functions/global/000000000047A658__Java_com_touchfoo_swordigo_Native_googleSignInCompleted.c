/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047A658
 * Mangled: Java_com_touchfoo_swordigo_Native_googleSignInCompleted
 * Demangled: Java_com_touchfoo_swordigo_Native_googleSignInCompleted
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200FF0  Caver::OnlineController_Android::HandleGoogleSignInCompleted(bool)
 *
 * Referenced strings: 5
 *   insn=0x000000000047A65C string=0x000000000047A660 "_"
 *   insn=0x000000000047A664 string=0x000000000047A668 "i"
 *   insn=0x000000000047A668 string=0x000000000047A66C "("
 *   insn=0x000000000047A670 string=0x000000000047A674 "_"
 *   insn=0x000000000047A678 string=0x000000000047A67C "]"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Java_com_touchfoo_swordigo_Native_googleSignInCompleted(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // x0

  result = qword_6E9C30;
  byte_6E9C7C = a3 != 0;
  if ( qword_6E9C30 )
    return Caver::OnlineController_Android::HandleGoogleSignInCompleted(
             (Caver::OnlineController_Android *)qword_6E9C30,
             a3 != 0);
  return result;
}

