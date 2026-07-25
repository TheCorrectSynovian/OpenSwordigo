/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000329B38
 * Mangled: _ZNK5Caver5Proto24SwingableWeaponComponent3NewEv
 * Demangled: Caver::Proto::SwingableWeaponComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 4
 *   insn=0x0000000000329B44 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000329B48 string=0x0000000000329B4C "%E"
 *   insn=0x0000000000329B58 string=0x0000000000329B5C "A"
 *   insn=0x0000000000329B60 string=0x0000000000329B64 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::Proto::SwingableWeaponComponent::New(Caver::Proto::SwingableWeaponComponent *this)
{
  _QWORD *result; // x0

  result = (_QWORD *)operator new(0x48u);
  result[7] = 0;
  result[8] = 0;
  result[5] = 0;
  result[6] = 0;
  result[3] = 0;
  result[4] = 0;
  result[1] = 0;
  result[2] = 0;
  *result = off_6C9108;
  return result;
}

