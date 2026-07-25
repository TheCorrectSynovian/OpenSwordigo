/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000327D20
 * Mangled: _ZNK5Caver5Proto34ShootingMonsterControllerComponent3NewEv
 * Demangled: Caver::Proto::ShootingMonsterControllerComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x0000000000327D28 string=0x0000000000327D2C "-6"
 *   insn=0x0000000000327D2C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000327D30 string=0x0000000000327D34 ""
 *   insn=0x0000000000327D38 string=0x0000000000327D3C "A"
 *   insn=0x0000000000327D3C string=0x0000000000327D40 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::Proto::ShootingMonsterControllerComponent::New(
        Caver::Proto::ShootingMonsterControllerComponent *this)
{
  _QWORD *result; // x0

  result = (_QWORD *)operator new(0x18u);
  result[1] = 0;
  result[2] = 0;
  *result = off_6C8EB0;
  return result;
}

