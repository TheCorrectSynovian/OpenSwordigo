/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000332130
 * Mangled: _ZNK5Caver5Proto21PortalEffectComponent3NewEv
 * Demangled: Caver::Proto::PortalEffectComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x0000000000332138 string=0x000000000033213C ")"
 *   insn=0x000000000033213C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000332140 string=0x0000000000332144 "]B"
 *   insn=0x0000000000332150 string=0x0000000000332154 "A"
 *   insn=0x0000000000332154 string=0x0000000000332158 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PortalEffectComponent::New(Caver::Proto::PortalEffectComponent *this)
{
  __int64 result; // x0

  result = operator new(0x30u);
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_QWORD *)result = off_6C96A8;
  *(_QWORD *)(result + 8) = 0;
  return result;
}

