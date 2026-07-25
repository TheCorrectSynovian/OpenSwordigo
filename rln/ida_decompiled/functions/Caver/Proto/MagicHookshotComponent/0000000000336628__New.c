/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000336628
 * Mangled: _ZNK5Caver5Proto22MagicHookshotComponent3NewEv
 * Demangled: Caver::Proto::MagicHookshotComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 4
 *   insn=0x0000000000336634 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000336638 string=0x000000000033663C "yF"
 *   insn=0x0000000000336648 string=0x000000000033664C "A"
 *   insn=0x000000000033664C string=0x0000000000336650 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicHookshotComponent::New(Caver::Proto::MagicHookshotComponent *this)
{
  __int64 result; // x0

  result = operator new(0x30u);
  *(_QWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)result = off_6C9A68;
  *(_DWORD *)(result + 24) = 0;
  return result;
}

