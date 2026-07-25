/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7F40
 * Mangled: ._ZN5Caver11ProgramMath11PushVector3EPNS_12ProgramStateERKNS_7Vector3E
 * Demangled: Caver::ProgramMath::PushVector3(Caver::ProgramState *,Caver::Vector3 const&)
 *
 * Callers: 9
 *   0x00000000004C1AB0  Caver::ProgramState::PushVector3(Caver::Vector3 const&)
 *   0x00000000004D4BE0  Caver::ProgramMath::PushVector3(Caver::ProgramState *,Caver::Vector3 const&)
 *   0x00000000004D505C  sub_4D505C
 *   0x00000000004D5184  sub_4D5184
 *   0x00000000004D51F0  sub_4D51F0
 *   0x00000000004D5288  sub_4D5288
 *   0x00000000004D5320  sub_4D5320
 *   0x00000000004D5578  sub_4D5578
 *   0x00000000004D562C  sub_4D562C
 *
 * Callees: 1
 *   0x00000000004D4BE0  Caver::ProgramMath::PushVector3(Caver::ProgramState *,Caver::Vector3 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7F48 string=0x00000000001F7F4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramMath::PushVector3(
        Caver::ProgramMath *this,
        Caver::ProgramState *a2,
        const Caver::Vector3 *a3)
{
  return _ZN5Caver11ProgramMath11PushVector3EPNS_12ProgramStateERKNS_7Vector3E(this, a2, a3);
}

