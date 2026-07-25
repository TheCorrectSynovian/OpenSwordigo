/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003033F0
 * Mangled: _ZNK5Caver5Proto14ModelComponent3NewEv
 * Demangled: Caver::Proto::ModelComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 9
 *   insn=0x00000000003033F8 string=0x00000000003033FC "y"
 *   insn=0x00000000003033FC string=0x0000000000303400 ""
 *   insn=0x00000000003033FC string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000303400 string=0x0000000000303404 ""
 *   insn=0x0000000000303408 string=0x000000000030340C ")"
 *   insn=0x000000000030340C string=0x0000000000303410 ")"
 *   insn=0x0000000000303410 string=0x0000000000303414 "A"
 *   insn=0x0000000000303428 string=0x000000000030342C "\t"
 *   insn=0x000000000030342C string=0x0000000000303430 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ModelComponent::New(Caver::Proto::ModelComponent *this)
{
  __int64 result; // x0

  result = operator new(0x50u);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_BYTE *)(result + 56) = 0;
  *(_QWORD *)(result + 64) = 0;
  *(_DWORD *)(result + 72) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 16) = &Caver::Proto::ModelComponent::_default_name_;
  *(_QWORD *)result = off_6C75D8;
  *(_DWORD *)(result + 40) = 0;
  return result;
}

