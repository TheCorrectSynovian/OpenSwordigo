/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200FF0
 * Mangled: ._ZN5Caver24OnlineController_Android27HandleGoogleSignInCompletedEb
 * Demangled: Caver::OnlineController_Android::HandleGoogleSignInCompleted(bool)
 *
 * Callers: 2
 *   0x00000000004789F0  Java_com_touchfoo_swordigo_Native_setApplicationViewSize
 *   0x000000000047A658  Java_com_touchfoo_swordigo_Native_googleSignInCompleted
 *
 * Callees: 1
 *   0x00000000004BAE14  Caver::OnlineController_Android::HandleGoogleSignInCompleted(bool)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200FF8 string=0x0000000000200FFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OnlineController_Android::HandleGoogleSignInCompleted(
        Caver::OnlineController_Android *this,
        bool a2)
{
  return _ZN5Caver24OnlineController_Android27HandleGoogleSignInCompletedEb(this, a2);
}

