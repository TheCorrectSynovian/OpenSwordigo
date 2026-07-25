/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000305524
 * Mangled: _ZNK5Caver5Proto33ModelTransformControllerComponent3NewEv
 * Demangled: Caver::Proto::ModelTransformControllerComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 6
 *   insn=0x000000000030552C string=0x0000000000305530 ","
 *   insn=0x0000000000305530 string=0x0000000000305534 ""
 *   insn=0x0000000000305530 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000305534 string=0x0000000000305538 "\tF"
 *   insn=0x0000000000305544 string=0x0000000000305548 "A"
 *   insn=0x0000000000305548 string=0x000000000030554C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ModelTransformControllerComponent::New(
        Caver::Proto::ModelTransformControllerComponent *this)
{
  __int64 result; // x0

  result = operator new(0x30u);
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_QWORD *)result = off_6C7740;
  return result;
}

